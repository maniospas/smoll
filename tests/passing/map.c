#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1780v="hello";
const char* const __temp1782v="hello world!";
const char* const __temp365v="\n";
const char* const __temp1787v="it's a me, manio.";
const char* const __temp1785v="manio";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1795v(char** __temp1816v, uint64_t* __temp1817v, uint16_t* __temp1818v, uint16_t* __temp1819v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1816v=unsafe_ptr;
  *__temp1817v=unsafe_size;
  *__temp1818v=unsafe_offset;
  *__temp1819v=unsafe_align;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1820v) {
  int value=0;
  *__temp1820v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1821v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1821v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1822v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1822v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1823v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1823v=z;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1824v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1824v=__temp446v__;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1825v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
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

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1828v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1828v=value;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1829v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1829v=z;
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
  *__temp1832v=buffer__unsafe_ptr;
  *__temp1833v=buffer__unsafe_size;
  *__temp1834v=buffer__unsafe_offset;
  *__temp1835v=buffer__unsafe_align;
  *__temp1836v=__temp486v__unsafe_ptr;
  *__temp1837v=__temp486v__unsafe_size;
  *__temp1838v=__temp486v__unsafe_offset;
  *__temp1839v=__temp486v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp675v(char** __temp1840v, uint64_t* __temp1841v, uint16_t* __temp1842v, uint16_t* __temp1843v, char** __temp1844v, uint64_t* __temp1845v, uint16_t* __temp1846v, uint16_t* __temp1847v, uint64_t* __temp1848v) {
  char* buf__unsafe_ptr=*__temp1840v;
  uint64_t buf__unsafe_size=*__temp1841v;
  uint16_t buf__unsafe_offset=*__temp1842v;
  uint16_t buf__unsafe_align=*__temp1843v;
  uint64_t __temp676v=0;
  uint64_t __temp677v=0;
  uint64_t pos=0;
  __temp676v=0;
  __temp677v=__temp676v;
  pos=__temp677v;
  goto __temp_return;
  __temp_return:
  *__temp1840v=buf__unsafe_ptr;
  *__temp1841v=buf__unsafe_size;
  *__temp1842v=buf__unsafe_offset;
  *__temp1843v=buf__unsafe_align;
  *__temp1844v=buf__unsafe_ptr;
  *__temp1845v=buf__unsafe_size;
  *__temp1846v=buf__unsafe_offset;
  *__temp1847v=buf__unsafe_align;
  *__temp1848v=pos;
}

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1764v(char** __temp1849v, uint64_t* __temp1850v, uint16_t* __temp1851v, uint16_t* __temp1852v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1849v=unsafe_ptr;
  *__temp1850v=unsafe_size;
  *__temp1851v=unsafe_offset;
  *__temp1852v=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1680v(char** __temp1853v, uint64_t* __temp1854v, uint16_t* __temp1855v, uint16_t* __temp1856v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__temp1853v=unsafe_ptr;
  *__temp1854v=unsafe_size;
  *__temp1855v=unsafe_offset;
  *__temp1856v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp559v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1857v) {
  goto __temp_return;
  __temp_return:
  *__temp1857v=buffer__unsafe_size;
}

int strmap__temp1679v(char** __temp1858v, uint64_t* __temp1859v, uint16_t* __temp1860v, uint16_t* __temp1861v, char** __temp1862v, uint64_t* __temp1863v, uint16_t* __temp1864v, uint16_t* __temp1865v, char** __temp1866v, uint64_t* __temp1867v, uint16_t* __temp1868v, uint16_t* __temp1869v) {
  char* values__unsafe_ptr=*__temp1858v;
  uint64_t values__unsafe_size=*__temp1859v;
  uint16_t values__unsafe_offset=*__temp1860v;
  uint16_t values__unsafe_align=*__temp1861v;
  char* __temp1682v__unsafe_ptr=0;
  uint64_t __temp1682v__unsafe_size=0;
  uint16_t __temp1682v__unsafe_offset=0;
  uint16_t __temp1682v__unsafe_align=0;
  char* __temp1683v__unsafe_ptr=0;
  uint64_t __temp1683v__unsafe_size=0;
  uint16_t __temp1683v__unsafe_offset=0;
  uint16_t __temp1683v__unsafe_align=0;
  uint64_t __temp1684v__=0;
  char* __temp1685v__unsafe_ptr=0;
  uint64_t __temp1685v__unsafe_size=0;
  uint16_t __temp1685v__unsafe_offset=0;
  uint16_t __temp1685v__unsafe_align=0;
  uint64_t __temp1686v____temp475v=0;
  char __temp1686v____temp476v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry____temp_buffer____buffer__temp1680v(&__temp1682v__unsafe_ptr,&__temp1682v__unsafe_size,&__temp1682v__unsafe_offset,&__temp1682v__unsafe_align);
  __temp1683v__unsafe_ptr=__temp1682v__unsafe_ptr;
  __temp1683v__unsafe_size=__temp1682v__unsafe_size;
  __temp1683v__unsafe_offset=__temp1682v__unsafe_offset;
  __temp1683v__unsafe_align=__temp1682v__unsafe_align;
  len__temp559v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1684v__);
  __temp_errcode=alloc__temp473v(&__temp1683v__unsafe_ptr,&__temp1683v__unsafe_size,&__temp1683v__unsafe_offset,&__temp1683v__unsafe_align,__temp1684v__,&__temp1685v__unsafe_ptr,&__temp1685v__unsafe_size,&__temp1685v__unsafe_offset,&__temp1685v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1685v__unsafe_ptr;
  keys__unsafe_size=__temp1685v__unsafe_size;
  keys__unsafe_offset=__temp1685v__unsafe_offset;
  keys__unsafe_align=__temp1685v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp1686v____temp475v=0;
  neq__temp142v(values__unsafe_size,__temp1686v____temp475v,&__temp1686v____temp476v__);
  if(__temp1686v____temp476v__){
  values__unsafe_size=0;
  values__unsafe_size=values__unsafe_size;
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__temp466v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1858v=values__unsafe_ptr;
  *__temp1859v=values__unsafe_size;
  *__temp1860v=values__unsafe_offset;
  *__temp1861v=values__unsafe_align;
  *__temp1862v=keys__unsafe_ptr;
  *__temp1863v=keys__unsafe_size;
  *__temp1864v=keys__unsafe_offset;
  *__temp1865v=keys__unsafe_align;
  *__temp1866v=values__unsafe_ptr;
  *__temp1867v=values__unsafe_size;
  *__temp1868v=values__unsafe_offset;
  *__temp1869v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp591v(char** __temp1870v, uint64_t* __temp1871v, uint16_t* __temp1872v, uint16_t* __temp1873v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1870v=unsafe_ptr;
  *__temp1871v=unsafe_size;
  *__temp1872v=unsafe_offset;
  *__temp1873v=unsafe_align;
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

static inline __attribute__((always_inline)) int get__temp552v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1879v) {
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
  *__temp1879v=__temp558v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp587v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1880v, uint64_t* __temp1881v, uint64_t* __temp1882v, char* __temp1883v) {
  goto __temp_return;
  __temp_return:
  *__temp1880v=unsafe_ptr;
  *__temp1881v=dat__pos;
  *__temp1882v=dat__length;
  *__temp1883v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp593v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1884v, uint64_t* __temp1885v, uint64_t* __temp1886v, char* __temp1887v) {
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
  *__temp1884v=__temp600v__unsafe_ptr;
  *__temp1885v=__temp600v__dat__pos;
  *__temp1886v=__temp600v__dat__length;
  *__temp1887v=__temp600v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp625v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1888v, uint64_t* __temp1889v, uint64_t* __temp1890v, char* __temp1891v) {
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
  *__temp1888v=__temp630v__unsafe_ptr;
  *__temp1889v=__temp630v__dat__pos;
  *__temp1890v=__temp630v__dat__length;
  *__temp1891v=__temp630v__dat__first;
  
  return __temp_errcode;
}

int str__temp631v(const char* c, char** __temp1892v, uint64_t* __temp1893v, uint64_t* __temp1894v, char* __temp1895v) {
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
  *__temp1892v=__temp638v__unsafe_ptr;
  *__temp1893v=__temp638v__dat__pos;
  *__temp1894v=__temp638v__dat__length;
  *__temp1895v=__temp638v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1298v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1896v, uint64_t* __temp1897v, uint64_t* __temp1898v, char* __temp1899v) {
  goto __temp_return;
  __temp_return:
  *__temp1896v=r__unsafe_ptr;
  *__temp1897v=r__dat__pos;
  *__temp1898v=r__dat__length;
  *__temp1899v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp639v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1900v) {
  goto __temp_return;
  __temp_return:
  *__temp1900v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1302v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1901v) {
  uint64_t __temp1303v=0;
  uint64_t __temp1304v__=0;
  char __temp1305v__=0;
  __temp1303v=0;
  len__temp639v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1304v__);
  eq__temp118v(__temp1303v,__temp1304v__,&__temp1305v__);
  goto __temp_return;
  __temp_return:
  *__temp1901v=__temp1305v__;
}

static inline __attribute__((always_inline)) void raw__temp1296v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1902v, uint64_t* __temp1903v, uint64_t* __temp1904v, char* __temp1905v) {
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

static inline __attribute__((always_inline)) void get__temp780v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1914v) {
  uint64_t __temp781v__=0;
  char* __temp782v__=0;
  add__temp170v(s__dat__pos,i,&__temp781v__);
  add__temp468v(s__unsafe_ptr,__temp781v__,&__temp782v__);
  goto __temp_return;
  __temp_return:
  *__temp1914v=__temp782v__;
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

static inline __attribute__((always_inline)) int hash__temp1247v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1917v) {
  uint64_t __temp1248v=0;
  uint64_t __temp1249v=0;
  uint64_t h=0;
  uint64_t __temp1250v__=0;
  uint64_t __temp1251v__from=0;
  uint64_t __temp1251v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1252v=0;
  uint64_t __temp1253v__=0;
  uint64_t i=0;
  uint64_t __temp1254v__value=0;
  uint64_t __temp1255v=0;
  uint64_t __temp1256v__value=0;
  uint64_t __temp1257v__=0;
  uint64_t __temp1258v__=0;
  char* __temp1259v__=0;
  char __temp1260v__value=0;
  uint64_t __temp1261v__=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1263v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1248v=5381;
  __temp1249v=__temp1248v;
  h=__temp1249v;
  len__temp639v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1250v__);
  range__temp436v(__temp1250v__,&__temp1251v__from,&__temp1251v__to);
  iter__from=__temp1251v__from;
  iter__to=__temp1251v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1253v__);
  __temp1252v=__temp_complain;
  i=__temp1253v__;
  __temp1252v=__temp1252v==0;
  if(!__temp1252v){
  break;
  }
  bits__temp413v(h,&__temp1254v__value);
  __temp1255v=5;
  lshift__temp423v(__temp1254v__value,__temp1255v,&__temp1256v__value);
  nat__temp419v(__temp1256v__value,&__temp1257v__);
  add__temp170v(__temp1257v__,h,&__temp1258v__);
  get__temp780v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1259v__);
  if(!__temp1259v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1260v__value,__temp1259v__,1);
  nat__temp411v(__temp1260v__value,&__temp1261v__);
  add__temp170v(__temp1258v__,__temp1261v__,&__temp1262v__);
  h=__temp1262v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1263v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1917v=__temp1263v__;
  
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

static inline __attribute__((always_inline)) int mutget__temp545v(char** __temp1920v, uint64_t* __temp1921v, uint16_t* __temp1922v, uint16_t* __temp1923v, uint64_t i, char** __temp1924v) {
  char* buffer__unsafe_ptr=*__temp1920v;
  uint64_t buffer__unsafe_size=*__temp1921v;
  uint16_t buffer__unsafe_offset=*__temp1922v;
  uint16_t buffer__unsafe_align=*__temp1923v;
  char __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  char* __temp551v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp546v__);
  if(__temp546v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp547v__);
  mul__temp194v(i,__temp547v__,&__temp548v__);
  nat__temp470v(buffer__unsafe_offset,&__temp549v__);
  add__temp170v(__temp548v__,__temp549v__,&__temp550v__);
  add__temp468v(buffer__unsafe_ptr,__temp550v__,&__temp551v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1920v=buffer__unsafe_ptr;
  *__temp1921v=buffer__unsafe_size;
  *__temp1922v=buffer__unsafe_offset;
  *__temp1923v=buffer__unsafe_align;
  *__temp1924v=__temp551v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp643v(char x, char y, char* __temp1925v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1925v=z;
}

static inline __attribute__((always_inline)) void eq__temp784v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1926v) {
  uint64_t __temp785v__=0;
  uint64_t n=0;
  uint64_t __temp786v__=0;
  char __temp787v__=0;
  char __temp788v=0;
  char __temp789v__=0;
  char __temp790v=0;
  char z=0;
  len__temp639v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp785v__);
  n=__temp785v__;
  len__temp639v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp786v__);
  neq__temp142v(n,__temp786v__,&__temp787v__);
  if(__temp787v__){
  __temp788v=0;
  goto __temp_return;
  }
  neq__temp643v(x__dat__first,y__dat__first,&__temp789v__);
  if(__temp789v__){
  __temp790v=0;
  __temp788v=__temp790v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp788v=z;
  goto __temp_return;
  __temp_return:
  *__temp1926v=__temp788v;
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

int at__temp1578v(char** __temp1928v, uint64_t* __temp1929v, uint16_t* __temp1930v, uint16_t* __temp1931v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1932v) {
  char* data__unsafe_ptr=*__temp1928v;
  uint64_t data__unsafe_size=*__temp1929v;
  uint16_t data__unsafe_offset=*__temp1930v;
  uint16_t data__unsafe_align=*__temp1931v;
  char* __temp1579v__unsafe_ptr=0;
  uint64_t __temp1579v__dat__pos=0;
  uint64_t __temp1579v__dat__length=0;
  char __temp1579v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1580v__=0;
  uint64_t __temp1581v=0;
  uint64_t __temp1582v=0;
  char* __temp1583v__=0;
  char* __temp1584v__s__unsafe_ptr=0;
  uint64_t __temp1584v__s__dat__pos=0;
  uint64_t __temp1584v__s__dat__length=0;
  char __temp1584v__s__dat__first=0;
  uint64_t __temp1584v__cost=0;
  char* __temp1585v__unsafe_ptr=0;
  uint64_t __temp1585v__dat__pos=0;
  uint64_t __temp1585v__dat__length=0;
  char __temp1585v__dat__first=0;
  int __temp1586v=0;
  int __temp1587v__=0;
  uint64_t __temp1588v__=0;
  uint64_t n=0;
  uint64_t __temp1589v__=0;
  uint64_t pos=0;
  uint64_t __temp1590v__from=0;
  uint64_t __temp1590v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1591v=0;
  uint64_t __temp1592v__=0;
  uint64_t i=0;
  uint64_t __temp1593v__=0;
  uint64_t __temp1594v=0;
  uint64_t idx=0;
  char __temp1595v__=0;
  uint64_t __temp1596v__=0;
  uint64_t __temp1597v=0;
  char __temp1598v__=0;
  char* __temp1599v__=0;
  char* __temp1600v__s__unsafe_ptr=0;
  uint64_t __temp1600v__s__dat__pos=0;
  uint64_t __temp1600v__s__dat__length=0;
  char __temp1600v__s__dat__first=0;
  uint64_t __temp1600v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1601v__unsafe_ptr=0;
  uint64_t __temp1601v__dat__pos=0;
  uint64_t __temp1601v__dat__length=0;
  char __temp1601v__dat__first=0;
  char __temp1602v__=0;
  char* __temp1603v__=0;
  char* __temp1604v__unsafe_ptr=0;
  uint64_t __temp1604v__dat__pos=0;
  uint64_t __temp1604v__dat__length=0;
  char __temp1604v__dat__first=0;
  char __temp1605v__=0;
  char __temp1606v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1607v__=0;
  char* __temp1608v__s__unsafe_ptr=0;
  uint64_t __temp1608v__s__dat__pos=0;
  uint64_t __temp1608v__s__dat__length=0;
  char __temp1608v__s__dat__first=0;
  uint64_t __temp1608v__cost=0;
  char* __temp1609v__unsafe_ptr=0;
  uint64_t __temp1609v__dat__pos=0;
  uint64_t __temp1609v__dat__length=0;
  char __temp1609v__dat__first=0;
  char* __temp1610v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1298v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1579v__unsafe_ptr,&__temp1579v__dat__pos,&__temp1579v__dat__length,&__temp1579v__dat__first);
  k__unsafe_ptr=__temp1579v__unsafe_ptr;
  k__dat__pos=__temp1579v__dat__pos;
  k__dat__length=__temp1579v__dat__length;
  k__dat__first=__temp1579v__dat__first;
  is_zero__temp1302v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1580v__);
  if(__temp1580v__){
  __temp1581v=0;
  goto __temp_return;
  }
  __temp1582v=0;
  __temp_errcode=get__temp552v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1582v,&__temp1583v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1583v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1584v__s__unsafe_ptr,__temp1583v__,8);
  memcpy(&__temp1584v__s__dat__pos,__temp1583v__+8,8);
  memcpy(&__temp1584v__s__dat__length,__temp1583v__+16,8);
  memcpy(&__temp1584v__s__dat__first,__temp1583v__+24,1);
  memcpy(&__temp1584v__cost,__temp1583v__+25,8);
  raw__temp1296v(__temp1584v__s__unsafe_ptr,__temp1584v__s__dat__pos,__temp1584v__s__dat__length,__temp1584v__s__dat__first,__temp1584v__cost,&__temp1585v__unsafe_ptr,&__temp1585v__dat__pos,&__temp1585v__dat__length,&__temp1585v__dat__first);
  not__temp35v(__temp1586v,&__temp1587v__);
  len__temp559v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1588v__);
  n=__temp1588v__;
  __temp_errcode=hash__temp1247v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1589v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1589v__;
  range__temp436v(n,&__temp1590v__from,&__temp1590v__to);
  iter__from=__temp1590v__from;
  iter__to=__temp1590v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1592v__);
  __temp1591v=__temp_complain;
  i=__temp1592v__;
  __temp1591v=__temp1591v==0;
  if(!__temp1591v){
  break;
  }
  add__temp170v(pos,i,&__temp1593v__);
  __temp1594v=__temp1593v__;
  idx=__temp1594v;
  ge__temp319v(idx,n,&__temp1595v__);
  if(__temp1595v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1596v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1596v__;
  }
  __temp1597v=0;
  eq__temp118v(idx,__temp1597v,&__temp1598v__);
  if(__temp1598v__){
  continue;
  }
  __temp_errcode=get__temp552v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1599v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1599v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1600v__s__unsafe_ptr,__temp1599v__,8);
  memcpy(&__temp1600v__s__dat__pos,__temp1599v__+8,8);
  memcpy(&__temp1600v__s__dat__length,__temp1599v__+16,8);
  memcpy(&__temp1600v__s__dat__first,__temp1599v__+24,1);
  memcpy(&__temp1600v__cost,__temp1599v__+25,8);
  entry__s__unsafe_ptr=__temp1600v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1600v__s__dat__pos;
  entry__s__dat__length=__temp1600v__s__dat__length;
  entry__s__dat__first=__temp1600v__s__dat__first;
  entry__cost=__temp1600v__cost;
  raw__temp1296v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1601v__unsafe_ptr,&__temp1601v__dat__pos,&__temp1601v__dat__length,&__temp1601v__dat__first);
  is_zero__temp1302v(__temp1601v__unsafe_ptr,__temp1601v__dat__pos,__temp1601v__dat__length,__temp1601v__dat__first,&__temp1602v__);
  if(__temp1602v__){
  __temp_errcode=mutget__temp545v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1603v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1603v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1603v__,&k__unsafe_ptr,8);
  memcpy(__temp1603v__+8,&k__dat__pos,8);
  memcpy(__temp1603v__+16,&k__dat__length,8);
  memcpy(__temp1603v__+24,&k__dat__first,1);
  memcpy(__temp1603v__+25,&i,8);
  __temp1581v=idx;
  goto __temp_return;
  }
  raw__temp1296v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1604v__unsafe_ptr,&__temp1604v__dat__pos,&__temp1604v__dat__length,&__temp1604v__dat__first);
  eq__temp784v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1604v__unsafe_ptr,__temp1604v__dat__pos,__temp1604v__dat__length,__temp1604v__dat__first,&__temp1605v__);
  if(__temp1605v__){
  __temp1581v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1606v__);
  if(__temp1606v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp552v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1607v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1608v__s__unsafe_ptr,__temp1607v__,8);
  memcpy(&__temp1608v__s__dat__pos,__temp1607v__+8,8);
  memcpy(&__temp1608v__s__dat__length,__temp1607v__+16,8);
  memcpy(&__temp1608v__s__dat__first,__temp1607v__+24,1);
  memcpy(&__temp1608v__cost,__temp1607v__+25,8);
  raw__temp1296v(__temp1608v__s__unsafe_ptr,__temp1608v__s__dat__pos,__temp1608v__s__dat__length,__temp1608v__s__dat__first,__temp1608v__cost,&__temp1609v__unsafe_ptr,&__temp1609v__dat__pos,&__temp1609v__dat__length,&__temp1609v__dat__first);
  k__unsafe_ptr=__temp1609v__unsafe_ptr;
  k__dat__pos=__temp1609v__dat__pos;
  k__dat__length=__temp1609v__dat__length;
  k__dat__first=__temp1609v__dat__first;
  __temp_errcode=mutget__temp545v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1610v__,&tmp__unsafe_ptr,8);
  memcpy(__temp1610v__+8,&tmp__dat__pos,8);
  memcpy(__temp1610v__+16,&tmp__dat__length,8);
  memcpy(__temp1610v__+24,&tmp__dat__first,1);
  memcpy(__temp1610v__+25,&i,8);
  }
  }
  __temp_errcode=33;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1928v=data__unsafe_ptr;
  *__temp1929v=data__unsafe_size;
  *__temp1930v=data__unsafe_offset;
  *__temp1931v=data__unsafe_align;
  *__temp1932v=__temp1581v;
  
  return __temp_errcode;
}

int mutget__temp1703v(char** __temp1933v, uint64_t* __temp1934v, uint16_t* __temp1935v, uint16_t* __temp1936v, char** __temp1937v, uint64_t* __temp1938v, uint16_t* __temp1939v, uint16_t* __temp1940v, const char* key, char** __temp1941v) {
  char* keys__unsafe_ptr=*__temp1933v;
  uint64_t keys__unsafe_size=*__temp1934v;
  uint16_t keys__unsafe_offset=*__temp1935v;
  uint16_t keys__unsafe_align=*__temp1936v;
  char* values__unsafe_ptr=*__temp1937v;
  uint64_t values__unsafe_size=*__temp1938v;
  uint16_t values__unsafe_offset=*__temp1939v;
  uint16_t values__unsafe_align=*__temp1940v;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__dat__pos=0;
  uint64_t __temp1704v__dat__length=0;
  char __temp1704v__dat__first=0;
  uint64_t __temp1705v__=0;
  char* __temp1706v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(key,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1578v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1704v__unsafe_ptr,__temp1704v__dat__pos,__temp1704v__dat__length,__temp1704v__dat__first,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp545v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1705v__,&__temp1706v__);
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
  *__temp1941v=__temp1706v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp624v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1942v, uint64_t* __temp1943v, uint64_t* __temp1944v, char* __temp1945v) {
  goto __temp_return;
  __temp_return:
  *__temp1942v=other__unsafe_ptr;
  *__temp1943v=other__dat__pos;
  *__temp1944v=other__dat__length;
  *__temp1945v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp699v(char** __temp1946v, uint64_t* __temp1947v, uint16_t* __temp1948v, uint16_t* __temp1949v, uint64_t* __temp1950v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1951v, uint64_t* __temp1952v, uint64_t* __temp1953v, char* __temp1954v) {
  char* buf__unsafe_ptr=*__temp1946v;
  uint64_t buf__unsafe_size=*__temp1947v;
  uint16_t buf__unsafe_offset=*__temp1948v;
  uint16_t buf__unsafe_align=*__temp1949v;
  uint64_t pos=*__temp1950v;
  char* __temp700v__unsafe_ptr=0;
  uint64_t __temp700v__dat__pos=0;
  uint64_t __temp700v__dat__length=0;
  char __temp700v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp701v__=0;
  uint64_t __temp702v__=0;
  uint64_t next_pos=0;
  uint64_t __temp703v__=0;
  char __temp704v__=0;
  uint64_t __temp705v=0;
  uint64_t __temp706v__=0;
  uint64_t prev_pos=0;
  char* __temp707v__unsafe_ptr=0;
  uint64_t __temp707v__dat__pos=0;
  uint64_t __temp707v__dat__length=0;
  char __temp707v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp624v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp700v__unsafe_ptr,&__temp700v__dat__pos,&__temp700v__dat__length,&__temp700v__dat__first);
  other__unsafe_ptr=__temp700v__unsafe_ptr;
  other__dat__pos=__temp700v__dat__pos;
  other__dat__length=__temp700v__dat__length;
  other__dat__first=__temp700v__dat__first;
  len__temp639v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp701v__);
  add__temp170v(pos,__temp701v__,&__temp702v__);
  next_pos=__temp702v__;
  len__temp559v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp703v__);
  gt__temp271v(next_pos,__temp703v__,&__temp704v__);
  if(__temp704v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp705v=0;
  add__temp170v(pos,__temp705v,&__temp706v__);
  prev_pos=__temp706v__;
  pos=next_pos;
  __temp_errcode=str__temp593v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp707v__unsafe_ptr,&__temp707v__dat__pos,&__temp707v__dat__length,&__temp707v__dat__first);
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
  *__temp1951v=__temp707v__unsafe_ptr;
  *__temp1952v=__temp707v__dat__pos;
  *__temp1953v=__temp707v__dat__length;
  *__temp1954v=__temp707v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1721v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1955v, char** __temp1956v, uint64_t* __temp1957v, uint64_t* __temp1958v, char* __temp1959v) {
  uint64_t pos=*__temp1955v;
  uint64_t __temp1722v=0;
  char __temp1723v__=0;
  uint64_t __temp1724v=0;
  uint64_t __temp1725v__=0;
  uint64_t __temp1726v=0;
  char* __temp1727v__=0;
  char* __temp1728v__s__unsafe_ptr=0;
  uint64_t __temp1728v__s__dat__pos=0;
  uint64_t __temp1728v__s__dat__length=0;
  char __temp1728v__s__dat__first=0;
  uint64_t __temp1728v__cost=0;
  char* __temp1729v__unsafe_ptr=0;
  uint64_t __temp1729v__dat__pos=0;
  uint64_t __temp1729v__dat__length=0;
  char __temp1729v__dat__first=0;
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
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1733v=0;
  uint64_t __temp1734v__=0;
  char* __temp1735v__unsafe_ptr=0;
  uint64_t __temp1735v__dat__pos=0;
  uint64_t __temp1735v__dat__length=0;
  char __temp1735v__dat__first=0;
  char __temp1736v__=0;
  char* __temp1737v__=0;
  char* __temp1738v__s__unsafe_ptr=0;
  uint64_t __temp1738v__s__dat__pos=0;
  uint64_t __temp1738v__s__dat__length=0;
  char __temp1738v__s__dat__first=0;
  uint64_t __temp1738v__cost=0;
  char* __temp1739v__unsafe_ptr=0;
  uint64_t __temp1739v__dat__pos=0;
  uint64_t __temp1739v__dat__length=0;
  char __temp1739v__dat__first=0;
  uint64_t __temp1740v=0;
  uint64_t __temp1741v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1722v=0;
  eq__temp118v(pos,__temp1722v,&__temp1723v__);
  if(__temp1723v__){
  __temp1724v=1;
  add__temp170v(pos,__temp1724v,&__temp1725v__);
  pos=__temp1725v__;
  __temp1726v=0;
  __temp_errcode=get__temp552v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1726v,&__temp1727v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1727v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1728v__s__unsafe_ptr,__temp1727v__,8);
  memcpy(&__temp1728v__s__dat__pos,__temp1727v__+8,8);
  memcpy(&__temp1728v__s__dat__length,__temp1727v__+16,8);
  memcpy(&__temp1728v__s__dat__first,__temp1727v__+24,1);
  memcpy(&__temp1728v__cost,__temp1727v__+25,8);
  raw__temp1296v(__temp1728v__s__unsafe_ptr,__temp1728v__s__dat__pos,__temp1728v__s__dat__length,__temp1728v__s__dat__first,__temp1728v__cost,&__temp1729v__unsafe_ptr,&__temp1729v__dat__pos,&__temp1729v__dat__length,&__temp1729v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp552v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1730v__);
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
  raw__temp1296v(__temp1731v__s__unsafe_ptr,__temp1731v__s__dat__pos,__temp1731v__s__dat__length,__temp1731v__s__dat__first,__temp1731v__cost,&__temp1732v__unsafe_ptr,&__temp1732v__dat__pos,&__temp1732v__dat__length,&__temp1732v__dat__first);
  ret__unsafe_ptr=__temp1732v__unsafe_ptr;
  ret__dat__pos=__temp1732v__dat__pos;
  ret__dat__length=__temp1732v__dat__length;
  ret__dat__first=__temp1732v__dat__first;
  __temp1733v=1;
  add__temp170v(pos,__temp1733v,&__temp1734v__);
  pos=__temp1734v__;
  while(1){
  raw__temp1298v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1735v__unsafe_ptr,&__temp1735v__dat__pos,&__temp1735v__dat__length,&__temp1735v__dat__first);
  is_zero__temp1302v(__temp1735v__unsafe_ptr,__temp1735v__dat__pos,__temp1735v__dat__length,__temp1735v__dat__first,&__temp1736v__);
  if(!__temp1736v__){
  break;
  }
  __temp_errcode=get__temp552v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1737v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1737v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1738v__s__unsafe_ptr,__temp1737v__,8);
  memcpy(&__temp1738v__s__dat__pos,__temp1737v__+8,8);
  memcpy(&__temp1738v__s__dat__length,__temp1737v__+16,8);
  memcpy(&__temp1738v__s__dat__first,__temp1737v__+24,1);
  memcpy(&__temp1738v__cost,__temp1737v__+25,8);
  raw__temp1296v(__temp1738v__s__unsafe_ptr,__temp1738v__s__dat__pos,__temp1738v__s__dat__length,__temp1738v__s__dat__first,__temp1738v__cost,&__temp1739v__unsafe_ptr,&__temp1739v__dat__pos,&__temp1739v__dat__length,&__temp1739v__dat__first);
  ret__unsafe_ptr=__temp1739v__unsafe_ptr;
  ret__dat__pos=__temp1739v__dat__pos;
  ret__dat__length=__temp1739v__dat__length;
  ret__dat__first=__temp1739v__dat__first;
  __temp1740v=1;
  add__temp170v(pos,__temp1740v,&__temp1741v__);
  pos=__temp1741v__;
  }
  __temp1729v__unsafe_ptr=ret__unsafe_ptr;
  __temp1729v__dat__pos=ret__dat__pos;
  __temp1729v__dat__length=ret__dat__length;
  __temp1729v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1955v=pos;
  *__temp1956v=__temp1729v__unsafe_ptr;
  *__temp1957v=__temp1729v__dat__pos;
  *__temp1958v=__temp1729v__dat__length;
  *__temp1959v=__temp1729v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp741v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp742v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1772v(char** __temp1960v, uint64_t* __temp1961v, uint16_t* __temp1962v, uint16_t* __temp1963v, uint64_t* __temp1964v, char** __temp1965v, uint64_t* __temp1966v, uint16_t* __temp1967v, uint16_t* __temp1968v, char** __temp1969v, uint64_t* __temp1970v, uint16_t* __temp1971v, uint16_t* __temp1972v) {
  char* buf__buf__unsafe_ptr=*__temp1960v;
  uint64_t buf__buf__unsafe_size=*__temp1961v;
  uint16_t buf__buf__unsafe_offset=*__temp1962v;
  uint16_t buf__buf__unsafe_align=*__temp1963v;
  uint64_t buf__pos=*__temp1964v;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__unsafe_size=0;
  uint16_t __temp1773v__unsafe_offset=0;
  uint16_t __temp1773v__unsafe_align=0;
  char* __temp1774v__unsafe_ptr=0;
  uint64_t __temp1774v__unsafe_size=0;
  uint16_t __temp1774v__unsafe_offset=0;
  uint16_t __temp1774v__unsafe_align=0;
  uint64_t __temp1775v=0;
  char* __temp1776v__unsafe_ptr=0;
  uint64_t __temp1776v__unsafe_size=0;
  uint16_t __temp1776v__unsafe_offset=0;
  uint16_t __temp1776v__unsafe_align=0;
  uint64_t __temp1777v____temp475v=0;
  char __temp1777v____temp476v__=0;
  char* __temp1778v__keys__unsafe_ptr=0;
  uint64_t __temp1778v__keys__unsafe_size=0;
  uint16_t __temp1778v__keys__unsafe_offset=0;
  uint16_t __temp1778v__keys__unsafe_align=0;
  char* __temp1778v__values__unsafe_ptr=0;
  uint64_t __temp1778v__values__unsafe_size=0;
  uint16_t __temp1778v__values__unsafe_offset=0;
  uint16_t __temp1778v__values__unsafe_align=0;
  uint64_t __temp1779v____temp1686v____temp475v=0;
  char __temp1779v____temp1686v____temp476v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __temp1781v__=0;
  char* __temp1783v__unsafe_ptr=0;
  uint64_t __temp1783v__dat__pos=0;
  uint64_t __temp1783v__dat__length=0;
  char __temp1783v__dat__first=0;
  char* __temp1784v__unsafe_ptr=0;
  uint64_t __temp1784v__dat__pos=0;
  uint64_t __temp1784v__dat__length=0;
  char __temp1784v__dat__first=0;
  char* __temp1786v__=0;
  char* __temp1788v__unsafe_ptr=0;
  uint64_t __temp1788v__dat__pos=0;
  uint64_t __temp1788v__dat__length=0;
  char __temp1788v__dat__first=0;
  char* __temp1789v__unsafe_ptr=0;
  uint64_t __temp1789v__dat__pos=0;
  uint64_t __temp1789v__dat__length=0;
  char __temp1789v__dat__first=0;
  char* __temp1790v__buf__unsafe_ptr=0;
  uint64_t __temp1790v__buf__unsafe_size=0;
  uint16_t __temp1790v__buf__unsafe_offset=0;
  uint16_t __temp1790v__buf__unsafe_align=0;
  uint64_t __temp1790v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1791v=0;
  char* __temp1792v__unsafe_ptr=0;
  uint64_t __temp1792v__dat__pos=0;
  uint64_t __temp1792v__dat__length=0;
  char __temp1792v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1764v(&__temp1773v__unsafe_ptr,&__temp1773v__unsafe_size,&__temp1773v__unsafe_offset,&__temp1773v__unsafe_align);
  __temp1774v__unsafe_ptr=__temp1773v__unsafe_ptr;
  __temp1774v__unsafe_size=__temp1773v__unsafe_size;
  __temp1774v__unsafe_offset=__temp1773v__unsafe_offset;
  __temp1774v__unsafe_align=__temp1773v__unsafe_align;
  __temp1775v=128;
  __temp_errcode=alloc__temp473v(&__temp1774v__unsafe_ptr,&__temp1774v__unsafe_size,&__temp1774v__unsafe_offset,&__temp1774v__unsafe_align,__temp1775v,&__temp1776v__unsafe_ptr,&__temp1776v__unsafe_size,&__temp1776v__unsafe_offset,&__temp1776v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1679v(&__temp1776v__unsafe_ptr,&__temp1776v__unsafe_size,&__temp1776v__unsafe_offset,&__temp1776v__unsafe_align,&__temp1778v__keys__unsafe_ptr,&__temp1778v__keys__unsafe_size,&__temp1778v__keys__unsafe_offset,&__temp1778v__keys__unsafe_align,&__temp1778v__values__unsafe_ptr,&__temp1778v__values__unsafe_size,&__temp1778v__values__unsafe_offset,&__temp1778v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp1703v(&__temp1778v__keys__unsafe_ptr,&__temp1778v__keys__unsafe_size,&__temp1778v__keys__unsafe_offset,&__temp1778v__keys__unsafe_align,&__temp1778v__values__unsafe_ptr,&__temp1778v__values__unsafe_size,&__temp1778v__values__unsafe_offset,&__temp1778v__values__unsafe_align,__temp1780v,&__temp1781v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp631v(__temp1782v,&__temp1783v__unsafe_ptr,&__temp1783v__dat__pos,&__temp1783v__dat__length,&__temp1783v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp699v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1783v__unsafe_ptr,__temp1783v__dat__pos,__temp1783v__dat__length,__temp1783v__dat__first,&__temp1784v__unsafe_ptr,&__temp1784v__dat__pos,&__temp1784v__dat__length,&__temp1784v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1781v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1781v__,&__temp1784v__unsafe_ptr,8);
  memcpy(__temp1781v__+8,&__temp1784v__dat__pos,8);
  memcpy(__temp1781v__+16,&__temp1784v__dat__length,8);
  memcpy(__temp1781v__+24,&__temp1784v__dat__first,1);
  __temp_errcode=mutget__temp1703v(&__temp1778v__keys__unsafe_ptr,&__temp1778v__keys__unsafe_size,&__temp1778v__keys__unsafe_offset,&__temp1778v__keys__unsafe_align,&__temp1778v__values__unsafe_ptr,&__temp1778v__values__unsafe_size,&__temp1778v__values__unsafe_offset,&__temp1778v__values__unsafe_align,__temp1785v,&__temp1786v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp631v(__temp1787v,&__temp1788v__unsafe_ptr,&__temp1788v__dat__pos,&__temp1788v__dat__length,&__temp1788v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp699v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1788v__unsafe_ptr,__temp1788v__dat__pos,__temp1788v__dat__length,__temp1788v__dat__first,&__temp1789v__unsafe_ptr,&__temp1789v__dat__pos,&__temp1789v__dat__length,&__temp1789v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1786v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1786v__,&__temp1789v__unsafe_ptr,8);
  memcpy(__temp1786v__+8,&__temp1789v__dat__pos,8);
  memcpy(__temp1786v__+16,&__temp1789v__dat__length,8);
  memcpy(__temp1786v__+24,&__temp1789v__dat__first,1);
  bufpos__temp675v(&__temp1778v__keys__unsafe_ptr,&__temp1778v__keys__unsafe_size,&__temp1778v__keys__unsafe_offset,&__temp1778v__keys__unsafe_align,&__temp1790v__buf__unsafe_ptr,&__temp1790v__buf__unsafe_size,&__temp1790v__buf__unsafe_offset,&__temp1790v__buf__unsafe_align,&__temp1790v__pos);
  it__pos=__temp1790v__pos;
  while(1){
  __temp_complain=next__temp1721v(__temp1778v__keys__unsafe_ptr,__temp1778v__keys__unsafe_size,__temp1778v__keys__unsafe_offset,__temp1778v__keys__unsafe_align,&it__pos,&__temp1792v__unsafe_ptr,&__temp1792v__dat__pos,&__temp1792v__dat__length,&__temp1792v__dat__first);
  __temp1791v=__temp_complain;
  key__unsafe_ptr=__temp1792v__unsafe_ptr;
  key__dat__pos=__temp1792v__dat__pos;
  key__dat__length=__temp1792v__dat__length;
  key__dat__first=__temp1792v__dat__first;
  __temp1791v=__temp1791v==0;
  if(!__temp1791v){
  break;
  }
  print__temp741v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__temp1778v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1778v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1778v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1778v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1778v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1778v__values__unsafe_size;
  map__values__unsafe_offset=__temp1778v__values__unsafe_offset;
  map__values__unsafe_align=__temp1778v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:__temp1779v____temp1686v____temp475v=0;
  neq__temp142v(map__values__unsafe_size,__temp1779v____temp1686v____temp475v,&__temp1779v____temp1686v____temp476v__);
  if(__temp1779v____temp1686v____temp476v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  __temp1777v____temp475v=0;
  neq__temp142v(map__values__unsafe_size,__temp1777v____temp475v,&__temp1777v____temp476v__);
  if(__temp1777v____temp476v__){
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

static inline __attribute__((always_inline)) int test2__temp1794v(char** __temp1973v, uint64_t* __temp1974v, uint16_t* __temp1975v, uint16_t* __temp1976v, char** __temp1977v, uint64_t* __temp1978v, uint16_t* __temp1979v, uint16_t* __temp1980v, char** __temp1981v, uint64_t* __temp1982v, uint16_t* __temp1983v, uint16_t* __temp1984v, uint64_t* __temp1985v) {
  char* __temp1797v__unsafe_ptr=0;
  uint64_t __temp1797v__unsafe_size=0;
  uint16_t __temp1797v__unsafe_offset=0;
  uint16_t __temp1797v__unsafe_align=0;
  uint64_t __temp1798v=0;
  uint64_t __temp1799v__=0;
  char* __temp1800v__unsafe_ptr=0;
  uint64_t __temp1800v__unsafe_size=0;
  uint16_t __temp1800v__unsafe_offset=0;
  uint16_t __temp1800v__unsafe_align=0;
  uint64_t __temp1801v____temp475v=0;
  char __temp1801v____temp476v__=0;
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
  uint64_t __temp1804v____temp1777v____temp475v=0;
  char __temp1804v____temp1777v____temp476v__=0;
  uint64_t __temp1804v____temp1779v____temp1686v____temp475v=0;
  char __temp1804v____temp1779v____temp1686v____temp476v__=0;
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
  char____temp_buffer____buffer__temp1795v(&__temp1797v__unsafe_ptr,&__temp1797v__unsafe_size,&__temp1797v__unsafe_offset,&__temp1797v__unsafe_align);
  __temp1798v=4;
  KB__temp444v(__temp1798v,&__temp1799v__);
  __temp_errcode=alloc__temp473v(&__temp1797v__unsafe_ptr,&__temp1797v__unsafe_size,&__temp1797v__unsafe_offset,&__temp1797v__unsafe_align,__temp1799v__,&__temp1800v__unsafe_ptr,&__temp1800v__unsafe_size,&__temp1800v__unsafe_offset,&__temp1800v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp675v(&__temp1800v__unsafe_ptr,&__temp1800v__unsafe_size,&__temp1800v__unsafe_offset,&__temp1800v__unsafe_align,&__temp1802v__buf__unsafe_ptr,&__temp1802v__buf__unsafe_size,&__temp1802v__buf__unsafe_offset,&__temp1802v__buf__unsafe_align,&__temp1802v__pos);
  buf__buf__unsafe_ptr=__temp1802v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1802v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1802v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1802v__buf__unsafe_align;
  buf__pos=__temp1802v__pos;
  __temp_errcode=test__temp1772v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__temp1803v__keys__unsafe_ptr,&__temp1803v__keys__unsafe_size,&__temp1803v__keys__unsafe_offset,&__temp1803v__keys__unsafe_align,&__temp1803v__values__unsafe_ptr,&__temp1803v__values__unsafe_size,&__temp1803v__values__unsafe_offset,&__temp1803v__values__unsafe_align);
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
  
  __temp_failure:__temp1804v____temp1779v____temp1686v____temp475v=0;
  neq__temp142v(map__values__unsafe_size,__temp1804v____temp1779v____temp1686v____temp475v,&__temp1804v____temp1779v____temp1686v____temp476v__);
  if(__temp1804v____temp1779v____temp1686v____temp476v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  __temp1804v____temp1777v____temp475v=0;
  neq__temp142v(map__values__unsafe_size,__temp1804v____temp1777v____temp475v,&__temp1804v____temp1777v____temp476v__);
  if(__temp1804v____temp1777v____temp476v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  __temp1801v____temp475v=0;
  neq__temp142v(buf__buf__unsafe_size,__temp1801v____temp475v,&__temp1801v____temp476v__);
  if(__temp1801v____temp476v__){
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

int raw__temp1300v(const char* r, char** __temp1986v, uint64_t* __temp1987v, uint64_t* __temp1988v, char* __temp1989v) {
  char* __temp1301v__unsafe_ptr=0;
  uint64_t __temp1301v__dat__pos=0;
  uint64_t __temp1301v__dat__length=0;
  char __temp1301v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp631v(r,&__temp1301v__unsafe_ptr,&__temp1301v__dat__pos,&__temp1301v__dat__length,&__temp1301v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1986v=__temp1301v__unsafe_ptr;
  *__temp1987v=__temp1301v__dat__pos;
  *__temp1988v=__temp1301v__dat__length;
  *__temp1989v=__temp1301v__dat__first;
  
  return __temp_errcode;
}

int find__temp1344v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1990v) {
  char* __temp1345v__unsafe_ptr=0;
  uint64_t __temp1345v__dat__pos=0;
  uint64_t __temp1345v__dat__length=0;
  char __temp1345v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1346v__=0;
  uint64_t __temp1347v=0;
  uint64_t __temp1348v=0;
  char* __temp1349v__=0;
  char* __temp1350v__s__unsafe_ptr=0;
  uint64_t __temp1350v__s__dat__pos=0;
  uint64_t __temp1350v__s__dat__length=0;
  char __temp1350v__s__dat__first=0;
  uint64_t __temp1350v__cost=0;
  char* __temp1351v__unsafe_ptr=0;
  uint64_t __temp1351v__dat__pos=0;
  uint64_t __temp1351v__dat__length=0;
  char __temp1351v__dat__first=0;
  int __temp1352v=0;
  int __temp1353v__=0;
  uint64_t __temp1354v__=0;
  uint64_t n=0;
  uint64_t __temp1355v__=0;
  uint64_t pos=0;
  uint64_t __temp1356v__from=0;
  uint64_t __temp1356v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1357v=0;
  uint64_t __temp1358v__=0;
  uint64_t i=0;
  uint64_t __temp1359v__=0;
  uint64_t __temp1360v=0;
  uint64_t idx=0;
  char __temp1361v__=0;
  uint64_t __temp1362v__=0;
  uint64_t __temp1363v=0;
  char __temp1364v__=0;
  char* __temp1365v__=0;
  char* __temp1366v__s__unsafe_ptr=0;
  uint64_t __temp1366v__s__dat__pos=0;
  uint64_t __temp1366v__s__dat__length=0;
  char __temp1366v__s__dat__first=0;
  uint64_t __temp1366v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1367v__unsafe_ptr=0;
  uint64_t __temp1367v__dat__pos=0;
  uint64_t __temp1367v__dat__length=0;
  char __temp1367v__dat__first=0;
  char __temp1368v__=0;
  char* __temp1369v__unsafe_ptr=0;
  uint64_t __temp1369v__dat__pos=0;
  uint64_t __temp1369v__dat__length=0;
  char __temp1369v__dat__first=0;
  char __temp1370v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1298v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1345v__unsafe_ptr,&__temp1345v__dat__pos,&__temp1345v__dat__length,&__temp1345v__dat__first);
  k__unsafe_ptr=__temp1345v__unsafe_ptr;
  k__dat__pos=__temp1345v__dat__pos;
  k__dat__length=__temp1345v__dat__length;
  k__dat__first=__temp1345v__dat__first;
  is_zero__temp1302v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1346v__);
  if(__temp1346v__){
  __temp1347v=0;
  goto __temp_return;
  }
  __temp1348v=0;
  __temp_errcode=get__temp552v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1348v,&__temp1349v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1349v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1350v__s__unsafe_ptr,__temp1349v__,8);
  memcpy(&__temp1350v__s__dat__pos,__temp1349v__+8,8);
  memcpy(&__temp1350v__s__dat__length,__temp1349v__+16,8);
  memcpy(&__temp1350v__s__dat__first,__temp1349v__+24,1);
  memcpy(&__temp1350v__cost,__temp1349v__+25,8);
  raw__temp1296v(__temp1350v__s__unsafe_ptr,__temp1350v__s__dat__pos,__temp1350v__s__dat__length,__temp1350v__s__dat__first,__temp1350v__cost,&__temp1351v__unsafe_ptr,&__temp1351v__dat__pos,&__temp1351v__dat__length,&__temp1351v__dat__first);
  not__temp35v(__temp1352v,&__temp1353v__);
  len__temp559v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1354v__);
  n=__temp1354v__;
  __temp_errcode=hash__temp1247v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1355v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1355v__;
  range__temp436v(n,&__temp1356v__from,&__temp1356v__to);
  iter__from=__temp1356v__from;
  iter__to=__temp1356v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1358v__);
  __temp1357v=__temp_complain;
  i=__temp1358v__;
  __temp1357v=__temp1357v==0;
  if(!__temp1357v){
  break;
  }
  add__temp170v(pos,i,&__temp1359v__);
  __temp1360v=__temp1359v__;
  idx=__temp1360v;
  ge__temp319v(idx,n,&__temp1361v__);
  if(__temp1361v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1362v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1362v__;
  }
  __temp1363v=0;
  eq__temp118v(idx,__temp1363v,&__temp1364v__);
  if(__temp1364v__){
  continue;
  }
  __temp_errcode=get__temp552v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1365v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1365v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1366v__s__unsafe_ptr,__temp1365v__,8);
  memcpy(&__temp1366v__s__dat__pos,__temp1365v__+8,8);
  memcpy(&__temp1366v__s__dat__length,__temp1365v__+16,8);
  memcpy(&__temp1366v__s__dat__first,__temp1365v__+24,1);
  memcpy(&__temp1366v__cost,__temp1365v__+25,8);
  entry__s__unsafe_ptr=__temp1366v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1366v__s__dat__pos;
  entry__s__dat__length=__temp1366v__s__dat__length;
  entry__s__dat__first=__temp1366v__s__dat__first;
  entry__cost=__temp1366v__cost;
  raw__temp1296v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1367v__unsafe_ptr,&__temp1367v__dat__pos,&__temp1367v__dat__length,&__temp1367v__dat__first);
  is_zero__temp1302v(__temp1367v__unsafe_ptr,__temp1367v__dat__pos,__temp1367v__dat__length,__temp1367v__dat__first,&__temp1368v__);
  if(__temp1368v__){
  continue;
  }
  raw__temp1296v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1369v__unsafe_ptr,&__temp1369v__dat__pos,&__temp1369v__dat__length,&__temp1369v__dat__first);
  eq__temp784v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1369v__unsafe_ptr,__temp1369v__dat__pos,__temp1369v__dat__length,__temp1369v__dat__first,&__temp1370v__);
  if(__temp1370v__){
  __temp1347v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=32;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1990v=__temp1347v;
  
  return __temp_errcode;
}

int get__temp1695v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1991v) {
  char* __temp1696v__unsafe_ptr=0;
  uint64_t __temp1696v__dat__pos=0;
  uint64_t __temp1696v__dat__length=0;
  char __temp1696v__dat__first=0;
  uint64_t __temp1697v__=0;
  char* __temp1698v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1300v(key,&__temp1696v__unsafe_ptr,&__temp1696v__dat__pos,&__temp1696v__dat__length,&__temp1696v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1344v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1696v__unsafe_ptr,__temp1696v__dat__pos,__temp1696v__dat__length,__temp1696v__dat__first,&__temp1697v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp552v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1697v__,&__temp1698v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1991v=__temp1698v__;
  
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
  __temp_errcode=get__temp1695v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1780v,&__temp1806v__);
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
  print__temp741v(__temp1807v__unsafe_ptr,__temp1807v__dat__pos,__temp1807v__dat__length,__temp1807v__dat__first);
  __temp_errcode=get__temp1695v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1785v,&__temp1809v__);
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
  print__temp741v(__temp1810v__unsafe_ptr,__temp1810v__dat__pos,__temp1810v__dat__length,__temp1810v__dat__first);
  
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
  uint64_t __temp1814v____temp1801v____temp475v=0;
  char __temp1814v____temp1801v____temp476v__=0;
  uint64_t __temp1814v____temp1804v____temp1777v____temp475v=0;
  char __temp1814v____temp1804v____temp1777v____temp476v__=0;
  uint64_t __temp1814v____temp1804v____temp1779v____temp1686v____temp475v=0;
  char __temp1814v____temp1804v____temp1779v____temp1686v____temp476v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1794v(&__temp1813v__map__keys__unsafe_ptr,&__temp1813v__map__keys__unsafe_size,&__temp1813v__map__keys__unsafe_offset,&__temp1813v__map__keys__unsafe_align,&__temp1813v__map__values__unsafe_ptr,&__temp1813v__map__values__unsafe_size,&__temp1813v__map__values__unsafe_offset,&__temp1813v__map__values__unsafe_align,&__temp1813v__buf__buf__unsafe_ptr,&__temp1813v__buf__buf__unsafe_size,&__temp1813v__buf__buf__unsafe_offset,&__temp1813v__buf__buf__unsafe_align,&__temp1813v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1805v(__temp1813v__map__keys__unsafe_ptr,__temp1813v__map__keys__unsafe_size,__temp1813v__map__keys__unsafe_offset,__temp1813v__map__keys__unsafe_align,__temp1813v__map__values__unsafe_ptr,__temp1813v__map__values__unsafe_size,__temp1813v__map__values__unsafe_offset,__temp1813v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:__temp1814v____temp1804v____temp1779v____temp1686v____temp475v=0;
  neq__temp142v(__temp1813v__map__values__unsafe_size,__temp1814v____temp1804v____temp1779v____temp1686v____temp475v,&__temp1814v____temp1804v____temp1779v____temp1686v____temp476v__);
  if(__temp1814v____temp1804v____temp1779v____temp1686v____temp476v__){
  __temp1813v__map__values__unsafe_size=0;
  __temp1813v__map__values__unsafe_size=__temp1813v__map__values__unsafe_size;
  __temp1813v__map__keys__unsafe_ptr=__temp1813v__map__keys__unsafe_ptr;
  free__temp466v(&__temp1813v__map__keys__unsafe_ptr);
  }
  __temp1814v____temp1804v____temp1777v____temp475v=0;
  neq__temp142v(__temp1813v__map__values__unsafe_size,__temp1814v____temp1804v____temp1777v____temp475v,&__temp1814v____temp1804v____temp1777v____temp476v__);
  if(__temp1814v____temp1804v____temp1777v____temp476v__){
  __temp1813v__map__values__unsafe_size=0;
  __temp1813v__map__values__unsafe_size=__temp1813v__map__values__unsafe_size;
  __temp1813v__map__values__unsafe_ptr=__temp1813v__map__values__unsafe_ptr;
  free__temp466v(&__temp1813v__map__values__unsafe_ptr);
  }
  __temp1814v____temp1801v____temp475v=0;
  neq__temp142v(__temp1813v__buf__buf__unsafe_size,__temp1814v____temp1801v____temp475v,&__temp1814v____temp1801v____temp476v__);
  if(__temp1814v____temp1801v____temp476v__){
  __temp1813v__buf__buf__unsafe_size=0;
  __temp1813v__buf__buf__unsafe_size=__temp1813v__buf__buf__unsafe_size;
  __temp1813v__buf__buf__unsafe_ptr=__temp1813v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1813v__buf__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1812v();return 0;}