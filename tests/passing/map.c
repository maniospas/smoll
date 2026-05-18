#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1790v="manio";
const char* const __temp1787v="hello world!";
const char* const __temp1792v="it's a me, manio.";
const char* const __temp1785v="hello";
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1763v(char** __temp1810v, uint64_t* __temp1811v, uint16_t* __temp1812v, uint16_t* __temp1813v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1810v=unsafe_ptr;
  *__temp1811v=unsafe_size;
  *__temp1812v=unsafe_offset;
  *__temp1813v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1814v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1814v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1815v) {
  char* allocated=*__temp1815v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1815v=allocated;
}

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

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1819v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1819v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1820v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1820v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1821v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1821v=value;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1822v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1822v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1823v) {
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
  *__temp1823v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1824v, uint64_t* __temp1825v, uint16_t* __temp1826v, uint16_t* __temp1827v, uint64_t size, char** __temp1828v, uint64_t* __temp1829v, uint16_t* __temp1830v, uint16_t* __temp1831v) {
  char* buffer__unsafe_ptr=*__temp1824v;
  uint64_t buffer__unsafe_size=*__temp1825v;
  uint16_t buffer__unsafe_offset=*__temp1826v;
  uint16_t buffer__unsafe_align=*__temp1827v;
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
  *__temp1824v=buffer__unsafe_ptr;
  *__temp1825v=buffer__unsafe_size;
  *__temp1826v=buffer__unsafe_offset;
  *__temp1827v=buffer__unsafe_align;
  *__temp1828v=buffer__unsafe_ptr;
  *__temp1829v=buffer__unsafe_size;
  *__temp1830v=buffer__unsafe_offset;
  *__temp1831v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1679v(char** __temp1832v, uint64_t* __temp1833v, uint16_t* __temp1834v, uint16_t* __temp1835v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__temp1832v=unsafe_ptr;
  *__temp1833v=unsafe_size;
  *__temp1834v=unsafe_offset;
  *__temp1835v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp555v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1836v) {
  goto __temp_return;
  __temp_return:
  *__temp1836v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1678v(char** __temp1837v, uint64_t* __temp1838v, uint16_t* __temp1839v, uint16_t* __temp1840v, char** __temp1841v, uint64_t* __temp1842v, uint16_t* __temp1843v, uint16_t* __temp1844v, char** __temp1845v, uint64_t* __temp1846v, uint16_t* __temp1847v, uint16_t* __temp1848v) {
  char* values__unsafe_ptr=*__temp1837v;
  uint64_t values__unsafe_size=*__temp1838v;
  uint16_t values__unsafe_offset=*__temp1839v;
  uint16_t values__unsafe_align=*__temp1840v;
  char* __temp1681v__unsafe_ptr=0;
  uint64_t __temp1681v__unsafe_size=0;
  uint16_t __temp1681v__unsafe_offset=0;
  uint16_t __temp1681v__unsafe_align=0;
  char* __temp1682v__unsafe_ptr=0;
  uint64_t __temp1682v__unsafe_size=0;
  uint16_t __temp1682v__unsafe_offset=0;
  uint16_t __temp1682v__unsafe_align=0;
  uint64_t __temp1683v__=0;
  char* __temp1684v__unsafe_ptr=0;
  uint64_t __temp1684v__unsafe_size=0;
  uint16_t __temp1684v__unsafe_offset=0;
  uint16_t __temp1684v__unsafe_align=0;
  char __temp1685v____temp470v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry____temp_buffer____buffer__temp1679v(&__temp1681v__unsafe_ptr,&__temp1681v__unsafe_size,&__temp1681v__unsafe_offset,&__temp1681v__unsafe_align);
  __temp1682v__unsafe_ptr=__temp1681v__unsafe_ptr;
  __temp1682v__unsafe_size=__temp1681v__unsafe_size;
  __temp1682v__unsafe_offset=__temp1681v__unsafe_offset;
  __temp1682v__unsafe_align=__temp1681v__unsafe_align;
  len__temp555v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1683v__);
  __temp_errcode=alloc__temp468v(&__temp1682v__unsafe_ptr,&__temp1682v__unsafe_size,&__temp1682v__unsafe_offset,&__temp1682v__unsafe_align,__temp1683v__,&__temp1684v__unsafe_ptr,&__temp1684v__unsafe_size,&__temp1684v__unsafe_offset,&__temp1684v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1684v__unsafe_ptr;
  keys__unsafe_size=__temp1684v__unsafe_size;
  keys__unsafe_offset=__temp1684v__unsafe_offset;
  keys__unsafe_align=__temp1684v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1685v____temp470v__);
  if(__temp1685v____temp470v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  free__temp461v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1837v=values__unsafe_ptr;
  *__temp1838v=values__unsafe_size;
  *__temp1839v=values__unsafe_offset;
  *__temp1840v=values__unsafe_align;
  *__temp1841v=keys__unsafe_ptr;
  *__temp1842v=keys__unsafe_size;
  *__temp1843v=keys__unsafe_offset;
  *__temp1844v=keys__unsafe_align;
  *__temp1845v=values__unsafe_ptr;
  *__temp1846v=values__unsafe_size;
  *__temp1847v=values__unsafe_offset;
  *__temp1848v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1849v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1849v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp557v(char** __temp1850v, uint64_t* __temp1851v, uint16_t* __temp1852v, uint16_t* __temp1853v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1850v=unsafe_ptr;
  *__temp1851v=unsafe_size;
  *__temp1852v=unsafe_offset;
  *__temp1853v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp556v(uint64_t size, char** __temp1854v, uint64_t* __temp1855v, uint16_t* __temp1856v, uint16_t* __temp1857v) {
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
  *__temp1854v=__temp561v__unsafe_ptr;
  *__temp1855v=__temp561v__unsafe_size;
  *__temp1856v=__temp561v__unsafe_offset;
  *__temp1857v=__temp561v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1858v, uint64_t* __temp1859v, uint16_t* __temp1860v, uint16_t* __temp1861v, char** __temp1862v, uint64_t* __temp1863v, uint16_t* __temp1864v, uint16_t* __temp1865v, uint64_t* __temp1866v) {
  char* buf__unsafe_ptr=*__temp1858v;
  uint64_t buf__unsafe_size=*__temp1859v;
  uint16_t buf__unsafe_offset=*__temp1860v;
  uint16_t buf__unsafe_align=*__temp1861v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1858v=buf__unsafe_ptr;
  *__temp1859v=buf__unsafe_size;
  *__temp1860v=buf__unsafe_offset;
  *__temp1861v=buf__unsafe_align;
  *__temp1862v=buf__unsafe_ptr;
  *__temp1863v=buf__unsafe_size;
  *__temp1864v=buf__unsafe_offset;
  *__temp1865v=buf__unsafe_align;
  *__temp1866v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1867v) {
  *__temp1867v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1868v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1868v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1869v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1869v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1870v) {
  *__temp1870v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1871v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1871v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp548v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1872v) {
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
  *__temp1872v=__temp554v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp593v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1873v, uint64_t* __temp1874v, uint64_t* __temp1875v, char* __temp1876v) {
  goto __temp_return;
  __temp_return:
  *__temp1873v=unsafe_ptr;
  *__temp1874v=dat__pos;
  *__temp1875v=dat__length;
  *__temp1876v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp597v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1877v, uint64_t* __temp1878v, uint64_t* __temp1879v, char* __temp1880v) {
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
  *__temp1877v=__temp604v__unsafe_ptr;
  *__temp1878v=__temp604v__dat__pos;
  *__temp1879v=__temp604v__dat__length;
  *__temp1880v=__temp604v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp629v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1881v, uint64_t* __temp1882v, uint64_t* __temp1883v, char* __temp1884v) {
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
  *__temp1881v=__temp634v__unsafe_ptr;
  *__temp1882v=__temp634v__dat__pos;
  *__temp1883v=__temp634v__dat__length;
  *__temp1884v=__temp634v__dat__first;
  
  return __temp_errcode;
}

int str__temp635v(const char* c, char** __temp1885v, uint64_t* __temp1886v, uint64_t* __temp1887v, char* __temp1888v) {
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
  *__temp1885v=__temp642v__unsafe_ptr;
  *__temp1886v=__temp642v__dat__pos;
  *__temp1887v=__temp642v__dat__length;
  *__temp1888v=__temp642v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1297v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1889v, uint64_t* __temp1890v, uint64_t* __temp1891v, char* __temp1892v) {
  goto __temp_return;
  __temp_return:
  *__temp1889v=r__unsafe_ptr;
  *__temp1890v=r__dat__pos;
  *__temp1891v=r__dat__length;
  *__temp1892v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp643v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1893v) {
  goto __temp_return;
  __temp_return:
  *__temp1893v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1301v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1894v) {
  uint64_t __temp1302v=0;
  uint64_t __temp1303v__=0;
  char __temp1304v__=0;
  __temp1302v=0;
  len__temp643v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1303v__);
  eq__temp118v(__temp1302v,__temp1303v__,&__temp1304v__);
  goto __temp_return;
  __temp_return:
  *__temp1894v=__temp1304v__;
}

static inline __attribute__((always_inline)) void raw__temp1295v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1895v, uint64_t* __temp1896v, uint64_t* __temp1897v, char* __temp1898v) {
  goto __temp_return;
  __temp_return:
  *__temp1895v=r__s__unsafe_ptr;
  *__temp1896v=r__s__dat__pos;
  *__temp1897v=r__s__dat__length;
  *__temp1898v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1899v, uint64_t* __temp1900v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1899v=from;
  *__temp1900v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1901v, uint64_t r__to, uint64_t* __temp1902v) {
  uint64_t r__from=*__temp1901v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1901v=r__from;
  *__temp1902v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1903v) {
  goto __temp_return;
  __temp_return:
  *__temp1903v=value;
}

static inline __attribute__((always_inline)) void lshift__temp422v(uint64_t x__value, uint64_t y, uint64_t* __temp1904v) {
  uint64_t z=0;
  uint64_t __temp423v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp423v__value);
  goto __temp_return;
  __temp_return:
  *__temp1904v=__temp423v__value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1905v) {
  goto __temp_return;
  __temp_return:
  *__temp1905v=x__value;
}

static inline __attribute__((always_inline)) void get__temp779v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1906v) {
  uint64_t __temp780v__=0;
  char* __temp781v__=0;
  add__temp170v(s__dat__pos,i,&__temp780v__);
  add__temp463v(s__unsafe_ptr,__temp780v__,&__temp781v__);
  goto __temp_return;
  __temp_return:
  *__temp1906v=__temp781v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1907v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1907v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1908v) {
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
  *__temp1908v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1246v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1909v) {
  uint64_t __temp1247v=0;
  uint64_t __temp1248v=0;
  uint64_t h=0;
  uint64_t __temp1249v__=0;
  uint64_t __temp1250v__from=0;
  uint64_t __temp1250v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1251v=0;
  uint64_t __temp1252v__=0;
  uint64_t i=0;
  uint64_t __temp1253v__value=0;
  uint64_t __temp1254v=0;
  uint64_t __temp1255v__value=0;
  uint64_t __temp1256v__=0;
  uint64_t __temp1257v__=0;
  char* __temp1258v__=0;
  char __temp1259v__value=0;
  uint64_t __temp1260v__=0;
  uint64_t __temp1261v__=0;
  uint64_t __temp1262v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1247v=5381;
  __temp1248v=__temp1247v;
  h=__temp1248v;
  len__temp643v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1249v__);
  range__temp435v(__temp1249v__,&__temp1250v__from,&__temp1250v__to);
  iter__from=__temp1250v__from;
  iter__to=__temp1250v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1252v__);
  __temp1251v=__temp_complain;
  i=__temp1252v__;
  __temp1251v=__temp1251v==0;
  if(!__temp1251v){
  break;
  }
  bits__temp413v(h,&__temp1253v__value);
  __temp1254v=5;
  lshift__temp422v(__temp1253v__value,__temp1254v,&__temp1255v__value);
  nat__temp419v(__temp1255v__value,&__temp1256v__);
  add__temp170v(__temp1256v__,h,&__temp1257v__);
  get__temp779v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1258v__);
  if(!__temp1258v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1259v__value,__temp1258v__,1);
  nat__temp411v(__temp1259v__value,&__temp1260v__);
  add__temp170v(__temp1257v__,__temp1260v__,&__temp1261v__);
  h=__temp1261v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1262v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1909v=__temp1262v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1910v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1910v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1911v) {
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
  *__temp1911v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp541v(char** __temp1912v, uint64_t* __temp1913v, uint16_t* __temp1914v, uint16_t* __temp1915v, uint64_t i, char** __temp1916v) {
  char* buffer__unsafe_ptr=*__temp1912v;
  uint64_t buffer__unsafe_size=*__temp1913v;
  uint16_t buffer__unsafe_offset=*__temp1914v;
  uint16_t buffer__unsafe_align=*__temp1915v;
  char __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  uint64_t __temp545v__=0;
  uint64_t __temp546v__=0;
  char* __temp547v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp542v__);
  if(__temp542v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp543v__);
  mul__temp194v(i,__temp543v__,&__temp544v__);
  nat__temp465v(buffer__unsafe_offset,&__temp545v__);
  add__temp170v(__temp544v__,__temp545v__,&__temp546v__);
  add__temp463v(buffer__unsafe_ptr,__temp546v__,&__temp547v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1912v=buffer__unsafe_ptr;
  *__temp1913v=buffer__unsafe_size;
  *__temp1914v=buffer__unsafe_offset;
  *__temp1915v=buffer__unsafe_align;
  *__temp1916v=__temp547v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp647v(char x, char y, char* __temp1917v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1917v=z;
}

static inline __attribute__((always_inline)) void eq__temp783v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1918v) {
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
  *__temp1918v=__temp787v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1919v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1919v=z;
}

int at__temp1577v(char** __temp1920v, uint64_t* __temp1921v, uint16_t* __temp1922v, uint16_t* __temp1923v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1924v) {
  char* data__unsafe_ptr=*__temp1920v;
  uint64_t data__unsafe_size=*__temp1921v;
  uint16_t data__unsafe_offset=*__temp1922v;
  uint16_t data__unsafe_align=*__temp1923v;
  char* __temp1578v__unsafe_ptr=0;
  uint64_t __temp1578v__dat__pos=0;
  uint64_t __temp1578v__dat__length=0;
  char __temp1578v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1579v__=0;
  uint64_t __temp1580v=0;
  uint64_t __temp1581v=0;
  char* __temp1582v__=0;
  char* __temp1583v__s__unsafe_ptr=0;
  uint64_t __temp1583v__s__dat__pos=0;
  uint64_t __temp1583v__s__dat__length=0;
  char __temp1583v__s__dat__first=0;
  uint64_t __temp1583v__cost=0;
  char* __temp1584v__unsafe_ptr=0;
  uint64_t __temp1584v__dat__pos=0;
  uint64_t __temp1584v__dat__length=0;
  char __temp1584v__dat__first=0;
  int __temp1585v=0;
  int __temp1586v__=0;
  uint64_t __temp1587v__=0;
  uint64_t n=0;
  uint64_t __temp1588v__=0;
  uint64_t pos=0;
  uint64_t __temp1589v__from=0;
  uint64_t __temp1589v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1590v=0;
  uint64_t __temp1591v__=0;
  uint64_t i=0;
  uint64_t __temp1592v__=0;
  uint64_t __temp1593v=0;
  uint64_t idx=0;
  char __temp1594v__=0;
  uint64_t __temp1595v__=0;
  uint64_t __temp1596v=0;
  char __temp1597v__=0;
  char* __temp1598v__=0;
  char* __temp1599v__s__unsafe_ptr=0;
  uint64_t __temp1599v__s__dat__pos=0;
  uint64_t __temp1599v__s__dat__length=0;
  char __temp1599v__s__dat__first=0;
  uint64_t __temp1599v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1600v__unsafe_ptr=0;
  uint64_t __temp1600v__dat__pos=0;
  uint64_t __temp1600v__dat__length=0;
  char __temp1600v__dat__first=0;
  char __temp1601v__=0;
  char* __temp1602v__=0;
  char* __temp1603v__unsafe_ptr=0;
  uint64_t __temp1603v__dat__pos=0;
  uint64_t __temp1603v__dat__length=0;
  char __temp1603v__dat__first=0;
  char __temp1604v__=0;
  char __temp1605v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1606v__=0;
  char* __temp1607v__s__unsafe_ptr=0;
  uint64_t __temp1607v__s__dat__pos=0;
  uint64_t __temp1607v__s__dat__length=0;
  char __temp1607v__s__dat__first=0;
  uint64_t __temp1607v__cost=0;
  char* __temp1608v__unsafe_ptr=0;
  uint64_t __temp1608v__dat__pos=0;
  uint64_t __temp1608v__dat__length=0;
  char __temp1608v__dat__first=0;
  char* __temp1609v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1297v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1578v__unsafe_ptr,&__temp1578v__dat__pos,&__temp1578v__dat__length,&__temp1578v__dat__first);
  k__unsafe_ptr=__temp1578v__unsafe_ptr;
  k__dat__pos=__temp1578v__dat__pos;
  k__dat__length=__temp1578v__dat__length;
  k__dat__first=__temp1578v__dat__first;
  is_zero__temp1301v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1579v__);
  if(__temp1579v__){
  __temp1580v=0;
  goto __temp_return;
  }
  __temp1581v=0;
  __temp_errcode=get__temp548v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1581v,&__temp1582v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1582v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1583v__s__unsafe_ptr,__temp1582v__,8);
  memcpy(&__temp1583v__s__dat__pos,__temp1582v__+8,8);
  memcpy(&__temp1583v__s__dat__length,__temp1582v__+16,8);
  memcpy(&__temp1583v__s__dat__first,__temp1582v__+24,1);
  memcpy(&__temp1583v__cost,__temp1582v__+25,8);
  raw__temp1295v(__temp1583v__s__unsafe_ptr,__temp1583v__s__dat__pos,__temp1583v__s__dat__length,__temp1583v__s__dat__first,__temp1583v__cost,&__temp1584v__unsafe_ptr,&__temp1584v__dat__pos,&__temp1584v__dat__length,&__temp1584v__dat__first);
  not__temp35v(__temp1585v,&__temp1586v__);
  len__temp555v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1587v__);
  n=__temp1587v__;
  __temp_errcode=hash__temp1246v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1588v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1588v__;
  range__temp435v(n,&__temp1589v__from,&__temp1589v__to);
  iter__from=__temp1589v__from;
  iter__to=__temp1589v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1591v__);
  __temp1590v=__temp_complain;
  i=__temp1591v__;
  __temp1590v=__temp1590v==0;
  if(!__temp1590v){
  break;
  }
  add__temp170v(pos,i,&__temp1592v__);
  __temp1593v=__temp1592v__;
  idx=__temp1593v;
  ge__temp319v(idx,n,&__temp1594v__);
  if(__temp1594v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1595v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1595v__;
  }
  __temp1596v=0;
  eq__temp118v(idx,__temp1596v,&__temp1597v__);
  if(__temp1597v__){
  continue;
  }
  __temp_errcode=get__temp548v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1598v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1598v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1599v__s__unsafe_ptr,__temp1598v__,8);
  memcpy(&__temp1599v__s__dat__pos,__temp1598v__+8,8);
  memcpy(&__temp1599v__s__dat__length,__temp1598v__+16,8);
  memcpy(&__temp1599v__s__dat__first,__temp1598v__+24,1);
  memcpy(&__temp1599v__cost,__temp1598v__+25,8);
  entry__s__unsafe_ptr=__temp1599v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1599v__s__dat__pos;
  entry__s__dat__length=__temp1599v__s__dat__length;
  entry__s__dat__first=__temp1599v__s__dat__first;
  entry__cost=__temp1599v__cost;
  raw__temp1295v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1600v__unsafe_ptr,&__temp1600v__dat__pos,&__temp1600v__dat__length,&__temp1600v__dat__first);
  is_zero__temp1301v(__temp1600v__unsafe_ptr,__temp1600v__dat__pos,__temp1600v__dat__length,__temp1600v__dat__first,&__temp1601v__);
  if(__temp1601v__){
  __temp_errcode=mutget__temp541v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1602v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1602v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1602v__,&k__unsafe_ptr,8);
  memcpy(__temp1602v__+8,&k__dat__pos,8);
  memcpy(__temp1602v__+16,&k__dat__length,8);
  memcpy(__temp1602v__+24,&k__dat__first,1);
  memcpy(__temp1602v__+25,&i,8);
  __temp1580v=idx;
  goto __temp_return;
  }
  raw__temp1295v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1603v__unsafe_ptr,&__temp1603v__dat__pos,&__temp1603v__dat__length,&__temp1603v__dat__first);
  eq__temp783v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1603v__unsafe_ptr,__temp1603v__dat__pos,__temp1603v__dat__length,__temp1603v__dat__first,&__temp1604v__);
  if(__temp1604v__){
  __temp1580v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1605v__);
  if(__temp1605v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp548v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1606v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1606v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1607v__s__unsafe_ptr,__temp1606v__,8);
  memcpy(&__temp1607v__s__dat__pos,__temp1606v__+8,8);
  memcpy(&__temp1607v__s__dat__length,__temp1606v__+16,8);
  memcpy(&__temp1607v__s__dat__first,__temp1606v__+24,1);
  memcpy(&__temp1607v__cost,__temp1606v__+25,8);
  raw__temp1295v(__temp1607v__s__unsafe_ptr,__temp1607v__s__dat__pos,__temp1607v__s__dat__length,__temp1607v__s__dat__first,__temp1607v__cost,&__temp1608v__unsafe_ptr,&__temp1608v__dat__pos,&__temp1608v__dat__length,&__temp1608v__dat__first);
  k__unsafe_ptr=__temp1608v__unsafe_ptr;
  k__dat__pos=__temp1608v__dat__pos;
  k__dat__length=__temp1608v__dat__length;
  k__dat__first=__temp1608v__dat__first;
  __temp_errcode=mutget__temp541v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1609v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1609v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1609v__,&tmp__unsafe_ptr,8);
  memcpy(__temp1609v__+8,&tmp__dat__pos,8);
  memcpy(__temp1609v__+16,&tmp__dat__length,8);
  memcpy(__temp1609v__+24,&tmp__dat__first,1);
  memcpy(__temp1609v__+25,&i,8);
  }
  }
  __temp_errcode=33;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1920v=data__unsafe_ptr;
  *__temp1921v=data__unsafe_size;
  *__temp1922v=data__unsafe_offset;
  *__temp1923v=data__unsafe_align;
  *__temp1924v=__temp1580v;
  
  return __temp_errcode;
}

int mutget__temp1702v(char** __temp1925v, uint64_t* __temp1926v, uint16_t* __temp1927v, uint16_t* __temp1928v, char** __temp1929v, uint64_t* __temp1930v, uint16_t* __temp1931v, uint16_t* __temp1932v, const char* key, char** __temp1933v) {
  char* keys__unsafe_ptr=*__temp1925v;
  uint64_t keys__unsafe_size=*__temp1926v;
  uint16_t keys__unsafe_offset=*__temp1927v;
  uint16_t keys__unsafe_align=*__temp1928v;
  char* values__unsafe_ptr=*__temp1929v;
  uint64_t values__unsafe_size=*__temp1930v;
  uint16_t values__unsafe_offset=*__temp1931v;
  uint16_t values__unsafe_align=*__temp1932v;
  char* __temp1703v__unsafe_ptr=0;
  uint64_t __temp1703v__dat__pos=0;
  uint64_t __temp1703v__dat__length=0;
  char __temp1703v__dat__first=0;
  uint64_t __temp1704v__=0;
  char* __temp1705v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp635v(key,&__temp1703v__unsafe_ptr,&__temp1703v__dat__pos,&__temp1703v__dat__length,&__temp1703v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1577v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1703v__unsafe_ptr,__temp1703v__dat__pos,__temp1703v__dat__length,__temp1703v__dat__first,&__temp1704v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp541v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1704v__,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1925v=keys__unsafe_ptr;
  *__temp1926v=keys__unsafe_size;
  *__temp1927v=keys__unsafe_offset;
  *__temp1928v=keys__unsafe_align;
  *__temp1929v=values__unsafe_ptr;
  *__temp1930v=values__unsafe_size;
  *__temp1931v=values__unsafe_offset;
  *__temp1932v=values__unsafe_align;
  *__temp1933v=__temp1705v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp628v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1934v, uint64_t* __temp1935v, uint64_t* __temp1936v, char* __temp1937v) {
  goto __temp_return;
  __temp_return:
  *__temp1934v=other__unsafe_ptr;
  *__temp1935v=other__dat__pos;
  *__temp1936v=other__dat__length;
  *__temp1937v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1938v, uint64_t* __temp1939v, uint16_t* __temp1940v, uint16_t* __temp1941v, uint64_t* __temp1942v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1943v, uint64_t* __temp1944v, uint64_t* __temp1945v, char* __temp1946v) {
  char* buf__unsafe_ptr=*__temp1938v;
  uint64_t buf__unsafe_size=*__temp1939v;
  uint16_t buf__unsafe_offset=*__temp1940v;
  uint16_t buf__unsafe_align=*__temp1941v;
  uint64_t pos=*__temp1942v;
  char* __temp701v__unsafe_ptr=0;
  uint64_t __temp701v__dat__pos=0;
  uint64_t __temp701v__dat__length=0;
  char __temp701v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp702v__=0;
  uint64_t __temp703v__=0;
  uint64_t next_pos=0;
  uint64_t __temp704v__=0;
  char __temp705v__=0;
  uint64_t __temp706v=0;
  uint64_t __temp707v__=0;
  uint64_t prev_pos=0;
  char* __temp708v__unsafe_ptr=0;
  uint64_t __temp708v__dat__pos=0;
  uint64_t __temp708v__dat__length=0;
  char __temp708v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp628v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp643v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp555v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=18;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp597v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1938v=buf__unsafe_ptr;
  *__temp1939v=buf__unsafe_size;
  *__temp1940v=buf__unsafe_offset;
  *__temp1941v=buf__unsafe_align;
  *__temp1942v=pos;
  *__temp1943v=__temp708v__unsafe_ptr;
  *__temp1944v=__temp708v__dat__pos;
  *__temp1945v=__temp708v__dat__length;
  *__temp1946v=__temp708v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1720v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1947v, char** __temp1948v, uint64_t* __temp1949v, uint64_t* __temp1950v, char* __temp1951v) {
  uint64_t pos=*__temp1947v;
  uint64_t __temp1721v=0;
  char __temp1722v__=0;
  uint64_t __temp1723v=0;
  uint64_t __temp1724v__=0;
  uint64_t __temp1725v=0;
  char* __temp1726v__=0;
  char* __temp1727v__s__unsafe_ptr=0;
  uint64_t __temp1727v__s__dat__pos=0;
  uint64_t __temp1727v__s__dat__length=0;
  char __temp1727v__s__dat__first=0;
  uint64_t __temp1727v__cost=0;
  char* __temp1728v__unsafe_ptr=0;
  uint64_t __temp1728v__dat__pos=0;
  uint64_t __temp1728v__dat__length=0;
  char __temp1728v__dat__first=0;
  char* __temp1729v__=0;
  char* __temp1730v__s__unsafe_ptr=0;
  uint64_t __temp1730v__s__dat__pos=0;
  uint64_t __temp1730v__s__dat__length=0;
  char __temp1730v__s__dat__first=0;
  uint64_t __temp1730v__cost=0;
  char* __temp1731v__unsafe_ptr=0;
  uint64_t __temp1731v__dat__pos=0;
  uint64_t __temp1731v__dat__length=0;
  char __temp1731v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1732v=0;
  uint64_t __temp1733v__=0;
  char* __temp1734v__unsafe_ptr=0;
  uint64_t __temp1734v__dat__pos=0;
  uint64_t __temp1734v__dat__length=0;
  char __temp1734v__dat__first=0;
  char __temp1735v__=0;
  char* __temp1736v__=0;
  char* __temp1737v__s__unsafe_ptr=0;
  uint64_t __temp1737v__s__dat__pos=0;
  uint64_t __temp1737v__s__dat__length=0;
  char __temp1737v__s__dat__first=0;
  uint64_t __temp1737v__cost=0;
  char* __temp1738v__unsafe_ptr=0;
  uint64_t __temp1738v__dat__pos=0;
  uint64_t __temp1738v__dat__length=0;
  char __temp1738v__dat__first=0;
  uint64_t __temp1739v=0;
  uint64_t __temp1740v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1721v=0;
  eq__temp118v(pos,__temp1721v,&__temp1722v__);
  if(__temp1722v__){
  __temp1723v=1;
  add__temp170v(pos,__temp1723v,&__temp1724v__);
  pos=__temp1724v__;
  __temp1725v=0;
  __temp_errcode=get__temp548v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1725v,&__temp1726v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1726v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1727v__s__unsafe_ptr,__temp1726v__,8);
  memcpy(&__temp1727v__s__dat__pos,__temp1726v__+8,8);
  memcpy(&__temp1727v__s__dat__length,__temp1726v__+16,8);
  memcpy(&__temp1727v__s__dat__first,__temp1726v__+24,1);
  memcpy(&__temp1727v__cost,__temp1726v__+25,8);
  raw__temp1295v(__temp1727v__s__unsafe_ptr,__temp1727v__s__dat__pos,__temp1727v__s__dat__length,__temp1727v__s__dat__first,__temp1727v__cost,&__temp1728v__unsafe_ptr,&__temp1728v__dat__pos,&__temp1728v__dat__length,&__temp1728v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp548v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1729v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1729v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1730v__s__unsafe_ptr,__temp1729v__,8);
  memcpy(&__temp1730v__s__dat__pos,__temp1729v__+8,8);
  memcpy(&__temp1730v__s__dat__length,__temp1729v__+16,8);
  memcpy(&__temp1730v__s__dat__first,__temp1729v__+24,1);
  memcpy(&__temp1730v__cost,__temp1729v__+25,8);
  raw__temp1295v(__temp1730v__s__unsafe_ptr,__temp1730v__s__dat__pos,__temp1730v__s__dat__length,__temp1730v__s__dat__first,__temp1730v__cost,&__temp1731v__unsafe_ptr,&__temp1731v__dat__pos,&__temp1731v__dat__length,&__temp1731v__dat__first);
  ret__unsafe_ptr=__temp1731v__unsafe_ptr;
  ret__dat__pos=__temp1731v__dat__pos;
  ret__dat__length=__temp1731v__dat__length;
  ret__dat__first=__temp1731v__dat__first;
  __temp1732v=1;
  add__temp170v(pos,__temp1732v,&__temp1733v__);
  pos=__temp1733v__;
  while(1){
  raw__temp1297v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1734v__unsafe_ptr,&__temp1734v__dat__pos,&__temp1734v__dat__length,&__temp1734v__dat__first);
  is_zero__temp1301v(__temp1734v__unsafe_ptr,__temp1734v__dat__pos,__temp1734v__dat__length,__temp1734v__dat__first,&__temp1735v__);
  if(!__temp1735v__){
  break;
  }
  __temp_errcode=get__temp548v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1736v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1736v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1737v__s__unsafe_ptr,__temp1736v__,8);
  memcpy(&__temp1737v__s__dat__pos,__temp1736v__+8,8);
  memcpy(&__temp1737v__s__dat__length,__temp1736v__+16,8);
  memcpy(&__temp1737v__s__dat__first,__temp1736v__+24,1);
  memcpy(&__temp1737v__cost,__temp1736v__+25,8);
  raw__temp1295v(__temp1737v__s__unsafe_ptr,__temp1737v__s__dat__pos,__temp1737v__s__dat__length,__temp1737v__s__dat__first,__temp1737v__cost,&__temp1738v__unsafe_ptr,&__temp1738v__dat__pos,&__temp1738v__dat__length,&__temp1738v__dat__first);
  ret__unsafe_ptr=__temp1738v__unsafe_ptr;
  ret__dat__pos=__temp1738v__dat__pos;
  ret__dat__length=__temp1738v__dat__length;
  ret__dat__first=__temp1738v__dat__first;
  __temp1739v=1;
  add__temp170v(pos,__temp1739v,&__temp1740v__);
  pos=__temp1740v__;
  }
  __temp1728v__unsafe_ptr=ret__unsafe_ptr;
  __temp1728v__dat__pos=ret__dat__pos;
  __temp1728v__dat__length=ret__dat__length;
  __temp1728v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1947v=pos;
  *__temp1948v=__temp1728v__unsafe_ptr;
  *__temp1949v=__temp1728v__dat__pos;
  *__temp1950v=__temp1728v__dat__length;
  *__temp1951v=__temp1728v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1771v(char** __temp1952v, uint64_t* __temp1953v, uint16_t* __temp1954v, uint16_t* __temp1955v, char** __temp1956v, uint64_t* __temp1957v, uint16_t* __temp1958v, uint16_t* __temp1959v, char** __temp1960v, uint64_t* __temp1961v, uint16_t* __temp1962v, uint16_t* __temp1963v, uint64_t* __temp1964v) {
  char* __temp1772v__unsafe_ptr=0;
  uint64_t __temp1772v__unsafe_size=0;
  uint16_t __temp1772v__unsafe_offset=0;
  uint16_t __temp1772v__unsafe_align=0;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__unsafe_size=0;
  uint16_t __temp1773v__unsafe_offset=0;
  uint16_t __temp1773v__unsafe_align=0;
  uint64_t __temp1774v=0;
  char* __temp1775v__unsafe_ptr=0;
  uint64_t __temp1775v__unsafe_size=0;
  uint16_t __temp1775v__unsafe_offset=0;
  uint16_t __temp1775v__unsafe_align=0;
  char __temp1776v____temp470v__=0;
  char* __temp1777v__keys__unsafe_ptr=0;
  uint64_t __temp1777v__keys__unsafe_size=0;
  uint16_t __temp1777v__keys__unsafe_offset=0;
  uint16_t __temp1777v__keys__unsafe_align=0;
  char* __temp1777v__values__unsafe_ptr=0;
  uint64_t __temp1777v__values__unsafe_size=0;
  uint16_t __temp1777v__values__unsafe_offset=0;
  uint16_t __temp1777v__values__unsafe_align=0;
  char __temp1778v____temp1685v____temp470v__=0;
  char* __temp1779v__keys__unsafe_ptr=0;
  uint64_t __temp1779v__keys__unsafe_size=0;
  uint16_t __temp1779v__keys__unsafe_offset=0;
  uint16_t __temp1779v__keys__unsafe_align=0;
  char* __temp1779v__values__unsafe_ptr=0;
  uint64_t __temp1779v__values__unsafe_size=0;
  uint16_t __temp1779v__values__unsafe_offset=0;
  uint16_t __temp1779v__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  uint64_t __temp1780v=0;
  uint64_t __temp1781v__=0;
  char* __temp1782v__unsafe_ptr=0;
  uint64_t __temp1782v__unsafe_size=0;
  uint16_t __temp1782v__unsafe_offset=0;
  uint16_t __temp1782v__unsafe_align=0;
  char __temp1783v____temp562v____temp470v__=0;
  char* __temp1784v__buf__unsafe_ptr=0;
  uint64_t __temp1784v__buf__unsafe_size=0;
  uint16_t __temp1784v__buf__unsafe_offset=0;
  uint16_t __temp1784v__buf__unsafe_align=0;
  uint64_t __temp1784v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1786v__=0;
  char* __temp1788v__unsafe_ptr=0;
  uint64_t __temp1788v__dat__pos=0;
  uint64_t __temp1788v__dat__length=0;
  char __temp1788v__dat__first=0;
  char* __temp1789v__unsafe_ptr=0;
  uint64_t __temp1789v__dat__pos=0;
  uint64_t __temp1789v__dat__length=0;
  char __temp1789v__dat__first=0;
  char* __temp1791v__=0;
  char* __temp1793v__unsafe_ptr=0;
  uint64_t __temp1793v__dat__pos=0;
  uint64_t __temp1793v__dat__length=0;
  char __temp1793v__dat__first=0;
  char* __temp1794v__unsafe_ptr=0;
  uint64_t __temp1794v__dat__pos=0;
  uint64_t __temp1794v__dat__length=0;
  char __temp1794v__dat__first=0;
  char* __temp1795v__buf__unsafe_ptr=0;
  uint64_t __temp1795v__buf__unsafe_size=0;
  uint16_t __temp1795v__buf__unsafe_offset=0;
  uint16_t __temp1795v__buf__unsafe_align=0;
  uint64_t __temp1795v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1796v=0;
  char* __temp1797v__unsafe_ptr=0;
  uint64_t __temp1797v__dat__pos=0;
  uint64_t __temp1797v__dat__length=0;
  char __temp1797v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1763v(&__temp1772v__unsafe_ptr,&__temp1772v__unsafe_size,&__temp1772v__unsafe_offset,&__temp1772v__unsafe_align);
  __temp1773v__unsafe_ptr=__temp1772v__unsafe_ptr;
  __temp1773v__unsafe_size=__temp1772v__unsafe_size;
  __temp1773v__unsafe_offset=__temp1772v__unsafe_offset;
  __temp1773v__unsafe_align=__temp1772v__unsafe_align;
  __temp1774v=128;
  __temp_errcode=alloc__temp468v(&__temp1773v__unsafe_ptr,&__temp1773v__unsafe_size,&__temp1773v__unsafe_offset,&__temp1773v__unsafe_align,__temp1774v,&__temp1775v__unsafe_ptr,&__temp1775v__unsafe_size,&__temp1775v__unsafe_offset,&__temp1775v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1678v(&__temp1775v__unsafe_ptr,&__temp1775v__unsafe_size,&__temp1775v__unsafe_offset,&__temp1775v__unsafe_align,&__temp1777v__keys__unsafe_ptr,&__temp1777v__keys__unsafe_size,&__temp1777v__keys__unsafe_offset,&__temp1777v__keys__unsafe_align,&__temp1777v__values__unsafe_ptr,&__temp1777v__values__unsafe_size,&__temp1777v__values__unsafe_offset,&__temp1777v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1779v__keys__unsafe_ptr=__temp1777v__keys__unsafe_ptr;
  __temp1779v__keys__unsafe_size=__temp1777v__keys__unsafe_size;
  __temp1779v__keys__unsafe_offset=__temp1777v__keys__unsafe_offset;
  __temp1779v__keys__unsafe_align=__temp1777v__keys__unsafe_align;
  __temp1779v__values__unsafe_ptr=__temp1777v__values__unsafe_ptr;
  __temp1779v__values__unsafe_size=__temp1777v__values__unsafe_size;
  __temp1779v__values__unsafe_offset=__temp1777v__values__unsafe_offset;
  __temp1779v__values__unsafe_align=__temp1777v__values__unsafe_align;
  map__keys__unsafe_ptr=__temp1779v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1779v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1779v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1779v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1779v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1779v__values__unsafe_size;
  map__values__unsafe_offset=__temp1779v__values__unsafe_offset;
  map__values__unsafe_align=__temp1779v__values__unsafe_align;
  __temp1780v=4;
  KB__temp443v(__temp1780v,&__temp1781v__);
  __temp_errcode=alloc__temp556v(__temp1781v__,&__temp1782v__unsafe_ptr,&__temp1782v__unsafe_size,&__temp1782v__unsafe_offset,&__temp1782v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1782v__unsafe_ptr,&__temp1782v__unsafe_size,&__temp1782v__unsafe_offset,&__temp1782v__unsafe_align,&__temp1784v__buf__unsafe_ptr,&__temp1784v__buf__unsafe_size,&__temp1784v__buf__unsafe_offset,&__temp1784v__buf__unsafe_align,&__temp1784v__pos);
  buf__buf__unsafe_ptr=__temp1784v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1784v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1784v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1784v__buf__unsafe_align;
  buf__pos=__temp1784v__pos;
  __temp_errcode=mutget__temp1702v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__temp1785v,&__temp1786v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp635v(__temp1787v,&__temp1788v__unsafe_ptr,&__temp1788v__dat__pos,&__temp1788v__dat__length,&__temp1788v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp700v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1788v__unsafe_ptr,__temp1788v__dat__pos,__temp1788v__dat__length,__temp1788v__dat__first,&__temp1789v__unsafe_ptr,&__temp1789v__dat__pos,&__temp1789v__dat__length,&__temp1789v__dat__first);
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
  __temp_errcode=mutget__temp1702v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__temp1790v,&__temp1791v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp635v(__temp1792v,&__temp1793v__unsafe_ptr,&__temp1793v__dat__pos,&__temp1793v__dat__length,&__temp1793v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp700v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1793v__unsafe_ptr,__temp1793v__dat__pos,__temp1793v__dat__length,__temp1793v__dat__first,&__temp1794v__unsafe_ptr,&__temp1794v__dat__pos,&__temp1794v__dat__length,&__temp1794v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1791v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1791v__,&__temp1794v__unsafe_ptr,8);
  memcpy(__temp1791v__+8,&__temp1794v__dat__pos,8);
  memcpy(__temp1791v__+16,&__temp1794v__dat__length,8);
  memcpy(__temp1791v__+24,&__temp1794v__dat__first,1);
  bufpos__temp676v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&__temp1795v__buf__unsafe_ptr,&__temp1795v__buf__unsafe_size,&__temp1795v__buf__unsafe_offset,&__temp1795v__buf__unsafe_align,&__temp1795v__pos);
  it__buf__unsafe_ptr=__temp1795v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1795v__buf__unsafe_size;
  it__buf__unsafe_offset=__temp1795v__buf__unsafe_offset;
  it__buf__unsafe_align=__temp1795v__buf__unsafe_align;
  it__pos=__temp1795v__pos;
  while(1){
  __temp_complain=next__temp1720v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_offset,it__buf__unsafe_align,&it__pos,&__temp1797v__unsafe_ptr,&__temp1797v__dat__pos,&__temp1797v__dat__length,&__temp1797v__dat__first);
  __temp1796v=__temp_complain;
  key__unsafe_ptr=__temp1797v__unsafe_ptr;
  key__dat__pos=__temp1797v__dat__pos;
  key__dat__length=__temp1797v__dat__length;
  key__dat__first=__temp1797v__dat__first;
  __temp1796v=__temp1796v==0;
  if(!__temp1796v){
  break;
  }
  print__temp742v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1783v____temp562v____temp470v__);
  if(__temp1783v____temp562v____temp470v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(map__keys__unsafe_ptr,&__temp1778v____temp1685v____temp470v__);
  if(__temp1778v____temp1685v____temp470v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  free__temp461v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1776v____temp470v__);
  if(__temp1776v____temp470v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  free__temp461v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1952v=map__keys__unsafe_ptr;
  *__temp1953v=map__keys__unsafe_size;
  *__temp1954v=map__keys__unsafe_offset;
  *__temp1955v=map__keys__unsafe_align;
  *__temp1956v=map__values__unsafe_ptr;
  *__temp1957v=map__values__unsafe_size;
  *__temp1958v=map__values__unsafe_offset;
  *__temp1959v=map__values__unsafe_align;
  *__temp1960v=buf__buf__unsafe_ptr;
  *__temp1961v=buf__buf__unsafe_size;
  *__temp1962v=buf__buf__unsafe_offset;
  *__temp1963v=buf__buf__unsafe_align;
  *__temp1964v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1299v(const char* r, char** __temp1965v, uint64_t* __temp1966v, uint64_t* __temp1967v, char* __temp1968v) {
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__dat__pos=0;
  uint64_t __temp1300v__dat__length=0;
  char __temp1300v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp635v(r,&__temp1300v__unsafe_ptr,&__temp1300v__dat__pos,&__temp1300v__dat__length,&__temp1300v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1965v=__temp1300v__unsafe_ptr;
  *__temp1966v=__temp1300v__dat__pos;
  *__temp1967v=__temp1300v__dat__length;
  *__temp1968v=__temp1300v__dat__first;
  
  return __temp_errcode;
}

int find__temp1343v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1969v) {
  char* __temp1344v__unsafe_ptr=0;
  uint64_t __temp1344v__dat__pos=0;
  uint64_t __temp1344v__dat__length=0;
  char __temp1344v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1345v__=0;
  uint64_t __temp1346v=0;
  uint64_t __temp1347v=0;
  char* __temp1348v__=0;
  char* __temp1349v__s__unsafe_ptr=0;
  uint64_t __temp1349v__s__dat__pos=0;
  uint64_t __temp1349v__s__dat__length=0;
  char __temp1349v__s__dat__first=0;
  uint64_t __temp1349v__cost=0;
  char* __temp1350v__unsafe_ptr=0;
  uint64_t __temp1350v__dat__pos=0;
  uint64_t __temp1350v__dat__length=0;
  char __temp1350v__dat__first=0;
  int __temp1351v=0;
  int __temp1352v__=0;
  uint64_t __temp1353v__=0;
  uint64_t n=0;
  uint64_t __temp1354v__=0;
  uint64_t pos=0;
  uint64_t __temp1355v__from=0;
  uint64_t __temp1355v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1356v=0;
  uint64_t __temp1357v__=0;
  uint64_t i=0;
  uint64_t __temp1358v__=0;
  uint64_t __temp1359v=0;
  uint64_t idx=0;
  char __temp1360v__=0;
  uint64_t __temp1361v__=0;
  uint64_t __temp1362v=0;
  char __temp1363v__=0;
  char* __temp1364v__=0;
  char* __temp1365v__s__unsafe_ptr=0;
  uint64_t __temp1365v__s__dat__pos=0;
  uint64_t __temp1365v__s__dat__length=0;
  char __temp1365v__s__dat__first=0;
  uint64_t __temp1365v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1366v__unsafe_ptr=0;
  uint64_t __temp1366v__dat__pos=0;
  uint64_t __temp1366v__dat__length=0;
  char __temp1366v__dat__first=0;
  char __temp1367v__=0;
  char* __temp1368v__unsafe_ptr=0;
  uint64_t __temp1368v__dat__pos=0;
  uint64_t __temp1368v__dat__length=0;
  char __temp1368v__dat__first=0;
  char __temp1369v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1297v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1344v__unsafe_ptr,&__temp1344v__dat__pos,&__temp1344v__dat__length,&__temp1344v__dat__first);
  k__unsafe_ptr=__temp1344v__unsafe_ptr;
  k__dat__pos=__temp1344v__dat__pos;
  k__dat__length=__temp1344v__dat__length;
  k__dat__first=__temp1344v__dat__first;
  is_zero__temp1301v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1345v__);
  if(__temp1345v__){
  __temp1346v=0;
  goto __temp_return;
  }
  __temp1347v=0;
  __temp_errcode=get__temp548v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1347v,&__temp1348v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1348v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1349v__s__unsafe_ptr,__temp1348v__,8);
  memcpy(&__temp1349v__s__dat__pos,__temp1348v__+8,8);
  memcpy(&__temp1349v__s__dat__length,__temp1348v__+16,8);
  memcpy(&__temp1349v__s__dat__first,__temp1348v__+24,1);
  memcpy(&__temp1349v__cost,__temp1348v__+25,8);
  raw__temp1295v(__temp1349v__s__unsafe_ptr,__temp1349v__s__dat__pos,__temp1349v__s__dat__length,__temp1349v__s__dat__first,__temp1349v__cost,&__temp1350v__unsafe_ptr,&__temp1350v__dat__pos,&__temp1350v__dat__length,&__temp1350v__dat__first);
  not__temp35v(__temp1351v,&__temp1352v__);
  len__temp555v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1353v__);
  n=__temp1353v__;
  __temp_errcode=hash__temp1246v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1354v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1354v__;
  range__temp435v(n,&__temp1355v__from,&__temp1355v__to);
  iter__from=__temp1355v__from;
  iter__to=__temp1355v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1357v__);
  __temp1356v=__temp_complain;
  i=__temp1357v__;
  __temp1356v=__temp1356v==0;
  if(!__temp1356v){
  break;
  }
  add__temp170v(pos,i,&__temp1358v__);
  __temp1359v=__temp1358v__;
  idx=__temp1359v;
  ge__temp319v(idx,n,&__temp1360v__);
  if(__temp1360v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1361v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1361v__;
  }
  __temp1362v=0;
  eq__temp118v(idx,__temp1362v,&__temp1363v__);
  if(__temp1363v__){
  continue;
  }
  __temp_errcode=get__temp548v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1364v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1364v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1365v__s__unsafe_ptr,__temp1364v__,8);
  memcpy(&__temp1365v__s__dat__pos,__temp1364v__+8,8);
  memcpy(&__temp1365v__s__dat__length,__temp1364v__+16,8);
  memcpy(&__temp1365v__s__dat__first,__temp1364v__+24,1);
  memcpy(&__temp1365v__cost,__temp1364v__+25,8);
  entry__s__unsafe_ptr=__temp1365v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1365v__s__dat__pos;
  entry__s__dat__length=__temp1365v__s__dat__length;
  entry__s__dat__first=__temp1365v__s__dat__first;
  entry__cost=__temp1365v__cost;
  raw__temp1295v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1366v__unsafe_ptr,&__temp1366v__dat__pos,&__temp1366v__dat__length,&__temp1366v__dat__first);
  is_zero__temp1301v(__temp1366v__unsafe_ptr,__temp1366v__dat__pos,__temp1366v__dat__length,__temp1366v__dat__first,&__temp1367v__);
  if(__temp1367v__){
  continue;
  }
  raw__temp1295v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1368v__unsafe_ptr,&__temp1368v__dat__pos,&__temp1368v__dat__length,&__temp1368v__dat__first);
  eq__temp783v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1368v__unsafe_ptr,__temp1368v__dat__pos,__temp1368v__dat__length,__temp1368v__dat__first,&__temp1369v__);
  if(__temp1369v__){
  __temp1346v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=32;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1969v=__temp1346v;
  
  return __temp_errcode;
}

int get__temp1694v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1970v) {
  char* __temp1695v__unsafe_ptr=0;
  uint64_t __temp1695v__dat__pos=0;
  uint64_t __temp1695v__dat__length=0;
  char __temp1695v__dat__first=0;
  uint64_t __temp1696v__=0;
  char* __temp1697v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1299v(key,&__temp1695v__unsafe_ptr,&__temp1695v__dat__pos,&__temp1695v__dat__length,&__temp1695v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1343v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1695v__unsafe_ptr,__temp1695v__dat__pos,__temp1695v__dat__length,__temp1695v__dat__first,&__temp1696v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp548v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1696v__,&__temp1697v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1970v=__temp1697v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1799v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __temp1800v__=0;
  char* __temp1801v__unsafe_ptr=0;
  uint64_t __temp1801v__dat__pos=0;
  uint64_t __temp1801v__dat__length=0;
  char __temp1801v__dat__first=0;
  char* __temp1803v__=0;
  char* __temp1804v__unsafe_ptr=0;
  uint64_t __temp1804v__dat__pos=0;
  uint64_t __temp1804v__dat__length=0;
  char __temp1804v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1694v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1785v,&__temp1800v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1800v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1801v__unsafe_ptr,__temp1800v__,8);
  memcpy(&__temp1801v__dat__pos,__temp1800v__+8,8);
  memcpy(&__temp1801v__dat__length,__temp1800v__+16,8);
  memcpy(&__temp1801v__dat__first,__temp1800v__+24,1);
  print__temp742v(__temp1801v__unsafe_ptr,__temp1801v__dat__pos,__temp1801v__dat__length,__temp1801v__dat__first);
  __temp_errcode=get__temp1694v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1790v,&__temp1803v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1803v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1804v__unsafe_ptr,__temp1803v__,8);
  memcpy(&__temp1804v__dat__pos,__temp1803v__+8,8);
  memcpy(&__temp1804v__dat__length,__temp1803v__+16,8);
  memcpy(&__temp1804v__dat__first,__temp1803v__+24,1);
  print__temp742v(__temp1804v__unsafe_ptr,__temp1804v__dat__pos,__temp1804v__dat__length,__temp1804v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1806v() {
  char* __temp1807v__map__keys__unsafe_ptr=0;
  uint64_t __temp1807v__map__keys__unsafe_size=0;
  uint16_t __temp1807v__map__keys__unsafe_offset=0;
  uint16_t __temp1807v__map__keys__unsafe_align=0;
  char* __temp1807v__map__values__unsafe_ptr=0;
  uint64_t __temp1807v__map__values__unsafe_size=0;
  uint16_t __temp1807v__map__values__unsafe_offset=0;
  uint16_t __temp1807v__map__values__unsafe_align=0;
  char* __temp1807v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1807v__buf__buf__unsafe_size=0;
  uint16_t __temp1807v__buf__buf__unsafe_offset=0;
  uint16_t __temp1807v__buf__buf__unsafe_align=0;
  uint64_t __temp1807v__buf__pos=0;
  char __temp1808v____temp1776v____temp470v__=0;
  char __temp1808v____temp1778v____temp1685v____temp470v__=0;
  char __temp1808v____temp1783v____temp562v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1771v(&__temp1807v__map__keys__unsafe_ptr,&__temp1807v__map__keys__unsafe_size,&__temp1807v__map__keys__unsafe_offset,&__temp1807v__map__keys__unsafe_align,&__temp1807v__map__values__unsafe_ptr,&__temp1807v__map__values__unsafe_size,&__temp1807v__map__values__unsafe_offset,&__temp1807v__map__values__unsafe_align,&__temp1807v__buf__buf__unsafe_ptr,&__temp1807v__buf__buf__unsafe_size,&__temp1807v__buf__buf__unsafe_offset,&__temp1807v__buf__buf__unsafe_align,&__temp1807v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1799v(__temp1807v__map__keys__unsafe_ptr,__temp1807v__map__keys__unsafe_size,__temp1807v__map__keys__unsafe_offset,__temp1807v__map__keys__unsafe_align,__temp1807v__map__values__unsafe_ptr,__temp1807v__map__values__unsafe_size,__temp1807v__map__values__unsafe_offset,__temp1807v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1807v__buf__buf__unsafe_ptr,&__temp1808v____temp1783v____temp562v____temp470v__);
  if(__temp1808v____temp1783v____temp562v____temp470v__){
  __temp1807v__buf__buf__unsafe_size=0;
  __temp1807v__buf__buf__unsafe_size=__temp1807v__buf__buf__unsafe_size;
  free__temp461v(&__temp1807v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1807v__map__keys__unsafe_ptr,&__temp1808v____temp1778v____temp1685v____temp470v__);
  if(__temp1808v____temp1778v____temp1685v____temp470v__){
  __temp1807v__map__keys__unsafe_size=0;
  __temp1807v__map__keys__unsafe_size=__temp1807v__map__keys__unsafe_size;
  free__temp461v(&__temp1807v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1807v__map__values__unsafe_ptr,&__temp1808v____temp1776v____temp470v__);
  if(__temp1808v____temp1776v____temp470v__){
  __temp1807v__map__values__unsafe_size=0;
  __temp1807v__map__values__unsafe_size=__temp1807v__map__values__unsafe_size;
  free__temp461v(&__temp1807v__map__values__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1806v();return 0;}