#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1791v="manio";
const char* const __temp1793v="it's a me, manio.";
const char* const __temp1786v="hello";
const char* const __temp1788v="hello world!";
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[36] = {"noerr",
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
"index not found",
"string buffer is full"
};

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1764v(char** __temp1811v, uint64_t* __temp1812v, uint16_t* __temp1813v, uint16_t* __temp1814v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1811v=unsafe_ptr;
  *__temp1812v=unsafe_size;
  *__temp1813v=unsafe_offset;
  *__temp1814v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1815v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1815v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1816v) {
  char* allocated=*__temp1816v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1816v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1817v) {
  int value=0;
  *__temp1817v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1818v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1818v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1819v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1819v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1820v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1820v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1821v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1821v=z;
}

static inline __attribute__((always_inline)) void nat__temp465v(uint16_t x, uint64_t* __temp1822v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1822v=value;
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

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1824v) {
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
  *__temp1824v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp468v(char** __temp1825v, uint64_t* __temp1826v, uint16_t* __temp1827v, uint16_t* __temp1828v, uint64_t size, char** __temp1829v, uint64_t* __temp1830v, uint16_t* __temp1831v, uint16_t* __temp1832v) {
  char* buffer__unsafe_ptr=*__temp1825v;
  uint64_t buffer__unsafe_size=*__temp1826v;
  uint16_t buffer__unsafe_offset=*__temp1827v;
  uint16_t buffer__unsafe_align=*__temp1828v;
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
  *__temp1825v=buffer__unsafe_ptr;
  *__temp1826v=buffer__unsafe_size;
  *__temp1827v=buffer__unsafe_offset;
  *__temp1828v=buffer__unsafe_align;
  *__temp1829v=buffer__unsafe_ptr;
  *__temp1830v=buffer__unsafe_size;
  *__temp1831v=buffer__unsafe_offset;
  *__temp1832v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1680v(char** __temp1833v, uint64_t* __temp1834v, uint16_t* __temp1835v, uint16_t* __temp1836v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__temp1833v=unsafe_ptr;
  *__temp1834v=unsafe_size;
  *__temp1835v=unsafe_offset;
  *__temp1836v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp558v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1837v) {
  goto __temp_return;
  __temp_return:
  *__temp1837v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1679v(char** __temp1838v, uint64_t* __temp1839v, uint16_t* __temp1840v, uint16_t* __temp1841v, char** __temp1842v, uint64_t* __temp1843v, uint16_t* __temp1844v, uint16_t* __temp1845v, char** __temp1846v, uint64_t* __temp1847v, uint16_t* __temp1848v, uint16_t* __temp1849v) {
  char* values__unsafe_ptr=*__temp1838v;
  uint64_t values__unsafe_size=*__temp1839v;
  uint16_t values__unsafe_offset=*__temp1840v;
  uint16_t values__unsafe_align=*__temp1841v;
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
  char __temp1686v____temp470v__=0;
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
  len__temp558v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1684v__);
  __temp_errcode=alloc__temp468v(&__temp1683v__unsafe_ptr,&__temp1683v__unsafe_size,&__temp1683v__unsafe_offset,&__temp1683v__unsafe_align,__temp1684v__,&__temp1685v__unsafe_ptr,&__temp1685v__unsafe_size,&__temp1685v__unsafe_offset,&__temp1685v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1685v__unsafe_ptr;
  keys__unsafe_size=__temp1685v__unsafe_size;
  keys__unsafe_offset=__temp1685v__unsafe_offset;
  keys__unsafe_align=__temp1685v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1686v____temp470v__);
  if(__temp1686v____temp470v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  free__temp461v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1838v=values__unsafe_ptr;
  *__temp1839v=values__unsafe_size;
  *__temp1840v=values__unsafe_offset;
  *__temp1841v=values__unsafe_align;
  *__temp1842v=keys__unsafe_ptr;
  *__temp1843v=keys__unsafe_size;
  *__temp1844v=keys__unsafe_offset;
  *__temp1845v=keys__unsafe_align;
  *__temp1846v=values__unsafe_ptr;
  *__temp1847v=values__unsafe_size;
  *__temp1848v=values__unsafe_offset;
  *__temp1849v=values__unsafe_align;
  
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp560v(char** __temp1851v, uint64_t* __temp1852v, uint16_t* __temp1853v, uint16_t* __temp1854v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1851v=unsafe_ptr;
  *__temp1852v=unsafe_size;
  *__temp1853v=unsafe_offset;
  *__temp1854v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp559v(uint64_t size, char** __temp1855v, uint64_t* __temp1856v, uint16_t* __temp1857v, uint16_t* __temp1858v) {
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
  *__temp1855v=__temp564v__unsafe_ptr;
  *__temp1856v=__temp564v__unsafe_size;
  *__temp1857v=__temp564v__unsafe_offset;
  *__temp1858v=__temp564v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp679v(char** __temp1859v, uint64_t* __temp1860v, uint16_t* __temp1861v, uint16_t* __temp1862v, char** __temp1863v, uint64_t* __temp1864v, uint16_t* __temp1865v, uint16_t* __temp1866v, uint64_t* __temp1867v) {
  char* buf__unsafe_ptr=*__temp1859v;
  uint64_t buf__unsafe_size=*__temp1860v;
  uint16_t buf__unsafe_offset=*__temp1861v;
  uint16_t buf__unsafe_align=*__temp1862v;
  uint64_t __temp680v=0;
  uint64_t __temp681v=0;
  uint64_t pos=0;
  __temp680v=0;
  __temp681v=__temp680v;
  pos=__temp681v;
  goto __temp_return;
  __temp_return:
  *__temp1859v=buf__unsafe_ptr;
  *__temp1860v=buf__unsafe_size;
  *__temp1861v=buf__unsafe_offset;
  *__temp1862v=buf__unsafe_align;
  *__temp1863v=buf__unsafe_ptr;
  *__temp1864v=buf__unsafe_size;
  *__temp1865v=buf__unsafe_offset;
  *__temp1866v=buf__unsafe_align;
  *__temp1867v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1868v) {
  *__temp1868v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1869v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1869v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1870v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1870v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1871v) {
  *__temp1871v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1872v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1872v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp551v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1873v) {
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
  *__temp1873v=__temp557v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp596v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1874v, uint64_t* __temp1875v, uint64_t* __temp1876v, char* __temp1877v) {
  goto __temp_return;
  __temp_return:
  *__temp1874v=unsafe_ptr;
  *__temp1875v=dat__pos;
  *__temp1876v=dat__length;
  *__temp1877v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp600v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1878v, uint64_t* __temp1879v, uint64_t* __temp1880v, char* __temp1881v) {
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
  *__temp1878v=__temp607v__unsafe_ptr;
  *__temp1879v=__temp607v__dat__pos;
  *__temp1880v=__temp607v__dat__length;
  *__temp1881v=__temp607v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp632v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1882v, uint64_t* __temp1883v, uint64_t* __temp1884v, char* __temp1885v) {
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
  *__temp1882v=__temp637v__unsafe_ptr;
  *__temp1883v=__temp637v__dat__pos;
  *__temp1884v=__temp637v__dat__length;
  *__temp1885v=__temp637v__dat__first;
  
  return __temp_errcode;
}

int str__temp638v(const char* c, char** __temp1886v, uint64_t* __temp1887v, uint64_t* __temp1888v, char* __temp1889v) {
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
  *__temp1886v=__temp645v__unsafe_ptr;
  *__temp1887v=__temp645v__dat__pos;
  *__temp1888v=__temp645v__dat__length;
  *__temp1889v=__temp645v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1298v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1890v, uint64_t* __temp1891v, uint64_t* __temp1892v, char* __temp1893v) {
  goto __temp_return;
  __temp_return:
  *__temp1890v=r__unsafe_ptr;
  *__temp1891v=r__dat__pos;
  *__temp1892v=r__dat__length;
  *__temp1893v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp646v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1894v) {
  goto __temp_return;
  __temp_return:
  *__temp1894v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1302v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1895v) {
  uint64_t __temp1303v=0;
  uint64_t __temp1304v__=0;
  char __temp1305v__=0;
  __temp1303v=0;
  len__temp646v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1304v__);
  eq__temp118v(__temp1303v,__temp1304v__,&__temp1305v__);
  goto __temp_return;
  __temp_return:
  *__temp1895v=__temp1305v__;
}

static inline __attribute__((always_inline)) void raw__temp1296v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1896v, uint64_t* __temp1897v, uint64_t* __temp1898v, char* __temp1899v) {
  goto __temp_return;
  __temp_return:
  *__temp1896v=r__s__unsafe_ptr;
  *__temp1897v=r__s__dat__pos;
  *__temp1898v=r__s__dat__length;
  *__temp1899v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1900v, uint64_t* __temp1901v) {
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
  *__temp1900v=from;
  *__temp1901v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1902v, uint64_t r__to, uint64_t* __temp1903v) {
  uint64_t r__from=*__temp1902v;
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
  *__temp1902v=r__from;
  *__temp1903v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1904v) {
  goto __temp_return;
  __temp_return:
  *__temp1904v=value;
}

static inline __attribute__((always_inline)) void lshift__temp422v(uint64_t x__value, uint64_t y, uint64_t* __temp1905v) {
  uint64_t z=0;
  uint64_t __temp423v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp423v__value);
  goto __temp_return;
  __temp_return:
  *__temp1905v=__temp423v__value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1906v) {
  goto __temp_return;
  __temp_return:
  *__temp1906v=x__value;
}

static inline __attribute__((always_inline)) void get__temp780v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1907v) {
  uint64_t __temp781v__=0;
  char* __temp782v__=0;
  add__temp170v(s__dat__pos,i,&__temp781v__);
  add__temp463v(s__unsafe_ptr,__temp781v__,&__temp782v__);
  goto __temp_return;
  __temp_return:
  *__temp1907v=__temp782v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1908v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1908v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1909v) {
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
  *__temp1909v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1247v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1910v) {
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
  len__temp646v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1250v__);
  range__temp435v(__temp1250v__,&__temp1251v__from,&__temp1251v__to);
  iter__from=__temp1251v__from;
  iter__to=__temp1251v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1253v__);
  __temp1252v=__temp_complain;
  i=__temp1253v__;
  __temp1252v=__temp1252v==0;
  if(!__temp1252v){
  break;
  }
  bits__temp413v(h,&__temp1254v__value);
  __temp1255v=5;
  lshift__temp422v(__temp1254v__value,__temp1255v,&__temp1256v__value);
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
  *__temp1910v=__temp1263v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1911v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1911v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1912v) {
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
  *__temp1912v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp544v(char** __temp1913v, uint64_t* __temp1914v, uint16_t* __temp1915v, uint16_t* __temp1916v, uint64_t i, char** __temp1917v) {
  char* buffer__unsafe_ptr=*__temp1913v;
  uint64_t buffer__unsafe_size=*__temp1914v;
  uint16_t buffer__unsafe_offset=*__temp1915v;
  uint16_t buffer__unsafe_align=*__temp1916v;
  char __temp545v__=0;
  uint64_t __temp546v__=0;
  uint64_t __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  char* __temp550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp545v__);
  if(__temp545v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  nat__temp465v(buffer__unsafe_align,&__temp546v__);
  mul__temp194v(i,__temp546v__,&__temp547v__);
  nat__temp465v(buffer__unsafe_offset,&__temp548v__);
  add__temp170v(__temp547v__,__temp548v__,&__temp549v__);
  add__temp463v(buffer__unsafe_ptr,__temp549v__,&__temp550v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1913v=buffer__unsafe_ptr;
  *__temp1914v=buffer__unsafe_size;
  *__temp1915v=buffer__unsafe_offset;
  *__temp1916v=buffer__unsafe_align;
  *__temp1917v=__temp550v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp650v(char x, char y, char* __temp1918v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1918v=z;
}

static inline __attribute__((always_inline)) void eq__temp784v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1919v) {
  uint64_t __temp785v__=0;
  uint64_t n=0;
  uint64_t __temp786v__=0;
  char __temp787v__=0;
  char __temp788v=0;
  char __temp789v__=0;
  char __temp790v=0;
  char z=0;
  len__temp646v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp785v__);
  n=__temp785v__;
  len__temp646v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp786v__);
  neq__temp142v(n,__temp786v__,&__temp787v__);
  if(__temp787v__){
  __temp788v=0;
  goto __temp_return;
  }
  neq__temp650v(x__dat__first,y__dat__first,&__temp789v__);
  if(__temp789v__){
  __temp790v=0;
  __temp788v=__temp790v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp788v=z;
  goto __temp_return;
  __temp_return:
  *__temp1919v=__temp788v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1920v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1920v=z;
}

int at__temp1578v(char** __temp1921v, uint64_t* __temp1922v, uint16_t* __temp1923v, uint16_t* __temp1924v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1925v) {
  char* data__unsafe_ptr=*__temp1921v;
  uint64_t data__unsafe_size=*__temp1922v;
  uint16_t data__unsafe_offset=*__temp1923v;
  uint16_t data__unsafe_align=*__temp1924v;
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
  __temp_errcode=get__temp551v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1582v,&__temp1583v__);
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
  len__temp558v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1588v__);
  n=__temp1588v__;
  __temp_errcode=hash__temp1247v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1589v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1589v__;
  range__temp435v(n,&__temp1590v__from,&__temp1590v__to);
  iter__from=__temp1590v__from;
  iter__to=__temp1590v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1592v__);
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
  __temp_errcode=get__temp551v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1599v__);
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
  __temp_errcode=mutget__temp544v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1603v__);
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
  __temp_errcode=get__temp551v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1607v__);
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
  __temp_errcode=mutget__temp544v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1610v__);
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
  __temp_errcode=34;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1921v=data__unsafe_ptr;
  *__temp1922v=data__unsafe_size;
  *__temp1923v=data__unsafe_offset;
  *__temp1924v=data__unsafe_align;
  *__temp1925v=__temp1581v;
  
  return __temp_errcode;
}

int mutget__temp1703v(char** __temp1926v, uint64_t* __temp1927v, uint16_t* __temp1928v, uint16_t* __temp1929v, char** __temp1930v, uint64_t* __temp1931v, uint16_t* __temp1932v, uint16_t* __temp1933v, const char* key, char** __temp1934v) {
  char* keys__unsafe_ptr=*__temp1926v;
  uint64_t keys__unsafe_size=*__temp1927v;
  uint16_t keys__unsafe_offset=*__temp1928v;
  uint16_t keys__unsafe_align=*__temp1929v;
  char* values__unsafe_ptr=*__temp1930v;
  uint64_t values__unsafe_size=*__temp1931v;
  uint16_t values__unsafe_offset=*__temp1932v;
  uint16_t values__unsafe_align=*__temp1933v;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__dat__pos=0;
  uint64_t __temp1704v__dat__length=0;
  char __temp1704v__dat__first=0;
  uint64_t __temp1705v__=0;
  char* __temp1706v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(key,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1578v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1704v__unsafe_ptr,__temp1704v__dat__pos,__temp1704v__dat__length,__temp1704v__dat__first,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp544v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1705v__,&__temp1706v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1926v=keys__unsafe_ptr;
  *__temp1927v=keys__unsafe_size;
  *__temp1928v=keys__unsafe_offset;
  *__temp1929v=keys__unsafe_align;
  *__temp1930v=values__unsafe_ptr;
  *__temp1931v=values__unsafe_size;
  *__temp1932v=values__unsafe_offset;
  *__temp1933v=values__unsafe_align;
  *__temp1934v=__temp1706v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp631v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1935v, uint64_t* __temp1936v, uint64_t* __temp1937v, char* __temp1938v) {
  goto __temp_return;
  __temp_return:
  *__temp1935v=other__unsafe_ptr;
  *__temp1936v=other__dat__pos;
  *__temp1937v=other__dat__length;
  *__temp1938v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp701v(char** __temp1939v, uint64_t* __temp1940v, uint16_t* __temp1941v, uint16_t* __temp1942v, uint64_t* __temp1943v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1944v, uint64_t* __temp1945v, uint64_t* __temp1946v, char* __temp1947v) {
  char* buf__unsafe_ptr=*__temp1939v;
  uint64_t buf__unsafe_size=*__temp1940v;
  uint16_t buf__unsafe_offset=*__temp1941v;
  uint16_t buf__unsafe_align=*__temp1942v;
  uint64_t pos=*__temp1943v;
  char* __temp702v__unsafe_ptr=0;
  uint64_t __temp702v__dat__pos=0;
  uint64_t __temp702v__dat__length=0;
  char __temp702v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp703v__=0;
  uint64_t __temp704v__=0;
  uint64_t next_pos=0;
  uint64_t __temp705v__=0;
  char __temp706v__=0;
  uint64_t __temp707v=0;
  uint64_t __temp708v__=0;
  uint64_t prev_pos=0;
  char* __temp709v__unsafe_ptr=0;
  uint64_t __temp709v__dat__pos=0;
  uint64_t __temp709v__dat__length=0;
  char __temp709v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp631v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp702v__unsafe_ptr,&__temp702v__dat__pos,&__temp702v__dat__length,&__temp702v__dat__first);
  other__unsafe_ptr=__temp702v__unsafe_ptr;
  other__dat__pos=__temp702v__dat__pos;
  other__dat__length=__temp702v__dat__length;
  other__dat__first=__temp702v__dat__first;
  len__temp646v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp703v__);
  add__temp170v(pos,__temp703v__,&__temp704v__);
  next_pos=__temp704v__;
  len__temp558v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp705v__);
  gt__temp271v(next_pos,__temp705v__,&__temp706v__);
  if(__temp706v__){
  __temp_errcode=19;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp707v=0;
  add__temp170v(pos,__temp707v,&__temp708v__);
  prev_pos=__temp708v__;
  pos=next_pos;
  __temp_errcode=str__temp600v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp709v__unsafe_ptr,&__temp709v__dat__pos,&__temp709v__dat__length,&__temp709v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1939v=buf__unsafe_ptr;
  *__temp1940v=buf__unsafe_size;
  *__temp1941v=buf__unsafe_offset;
  *__temp1942v=buf__unsafe_align;
  *__temp1943v=pos;
  *__temp1944v=__temp709v__unsafe_ptr;
  *__temp1945v=__temp709v__dat__pos;
  *__temp1946v=__temp709v__dat__length;
  *__temp1947v=__temp709v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1721v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1948v, char** __temp1949v, uint64_t* __temp1950v, uint64_t* __temp1951v, char* __temp1952v) {
  uint64_t pos=*__temp1948v;
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
  __temp_errcode=get__temp551v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1726v,&__temp1727v__);
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
  __temp_errcode=get__temp551v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1730v__);
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
  __temp_errcode=get__temp551v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1737v__);
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
  *__temp1948v=pos;
  *__temp1949v=__temp1729v__unsafe_ptr;
  *__temp1950v=__temp1729v__dat__pos;
  *__temp1951v=__temp1729v__dat__length;
  *__temp1952v=__temp1729v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp743v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp744v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1772v(char** __temp1953v, uint64_t* __temp1954v, uint16_t* __temp1955v, uint16_t* __temp1956v, char** __temp1957v, uint64_t* __temp1958v, uint16_t* __temp1959v, uint16_t* __temp1960v, char** __temp1961v, uint64_t* __temp1962v, uint16_t* __temp1963v, uint16_t* __temp1964v, uint64_t* __temp1965v) {
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
  char __temp1777v____temp470v__=0;
  char* __temp1778v__keys__unsafe_ptr=0;
  uint64_t __temp1778v__keys__unsafe_size=0;
  uint16_t __temp1778v__keys__unsafe_offset=0;
  uint16_t __temp1778v__keys__unsafe_align=0;
  char* __temp1778v__values__unsafe_ptr=0;
  uint64_t __temp1778v__values__unsafe_size=0;
  uint16_t __temp1778v__values__unsafe_offset=0;
  uint16_t __temp1778v__values__unsafe_align=0;
  char __temp1779v____temp1686v____temp470v__=0;
  char* __temp1780v__keys__unsafe_ptr=0;
  uint64_t __temp1780v__keys__unsafe_size=0;
  uint16_t __temp1780v__keys__unsafe_offset=0;
  uint16_t __temp1780v__keys__unsafe_align=0;
  char* __temp1780v__values__unsafe_ptr=0;
  uint64_t __temp1780v__values__unsafe_size=0;
  uint16_t __temp1780v__values__unsafe_offset=0;
  uint16_t __temp1780v__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  uint64_t __temp1781v=0;
  uint64_t __temp1782v__=0;
  char* __temp1783v__unsafe_ptr=0;
  uint64_t __temp1783v__unsafe_size=0;
  uint16_t __temp1783v__unsafe_offset=0;
  uint16_t __temp1783v__unsafe_align=0;
  char __temp1784v____temp565v____temp470v__=0;
  char* __temp1785v__buf__unsafe_ptr=0;
  uint64_t __temp1785v__buf__unsafe_size=0;
  uint16_t __temp1785v__buf__unsafe_offset=0;
  uint16_t __temp1785v__buf__unsafe_align=0;
  uint64_t __temp1785v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1787v__=0;
  char* __temp1789v__unsafe_ptr=0;
  uint64_t __temp1789v__dat__pos=0;
  uint64_t __temp1789v__dat__length=0;
  char __temp1789v__dat__first=0;
  char* __temp1790v__unsafe_ptr=0;
  uint64_t __temp1790v__dat__pos=0;
  uint64_t __temp1790v__dat__length=0;
  char __temp1790v__dat__first=0;
  char* __temp1792v__=0;
  char* __temp1794v__unsafe_ptr=0;
  uint64_t __temp1794v__dat__pos=0;
  uint64_t __temp1794v__dat__length=0;
  char __temp1794v__dat__first=0;
  char* __temp1795v__unsafe_ptr=0;
  uint64_t __temp1795v__dat__pos=0;
  uint64_t __temp1795v__dat__length=0;
  char __temp1795v__dat__first=0;
  char* __temp1796v__buf__unsafe_ptr=0;
  uint64_t __temp1796v__buf__unsafe_size=0;
  uint16_t __temp1796v__buf__unsafe_offset=0;
  uint16_t __temp1796v__buf__unsafe_align=0;
  uint64_t __temp1796v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1797v=0;
  char* __temp1798v__unsafe_ptr=0;
  uint64_t __temp1798v__dat__pos=0;
  uint64_t __temp1798v__dat__length=0;
  char __temp1798v__dat__first=0;
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
  __temp_errcode=alloc__temp468v(&__temp1774v__unsafe_ptr,&__temp1774v__unsafe_size,&__temp1774v__unsafe_offset,&__temp1774v__unsafe_align,__temp1775v,&__temp1776v__unsafe_ptr,&__temp1776v__unsafe_size,&__temp1776v__unsafe_offset,&__temp1776v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1679v(&__temp1776v__unsafe_ptr,&__temp1776v__unsafe_size,&__temp1776v__unsafe_offset,&__temp1776v__unsafe_align,&__temp1778v__keys__unsafe_ptr,&__temp1778v__keys__unsafe_size,&__temp1778v__keys__unsafe_offset,&__temp1778v__keys__unsafe_align,&__temp1778v__values__unsafe_ptr,&__temp1778v__values__unsafe_size,&__temp1778v__values__unsafe_offset,&__temp1778v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1780v__keys__unsafe_ptr=__temp1778v__keys__unsafe_ptr;
  __temp1780v__keys__unsafe_size=__temp1778v__keys__unsafe_size;
  __temp1780v__keys__unsafe_offset=__temp1778v__keys__unsafe_offset;
  __temp1780v__keys__unsafe_align=__temp1778v__keys__unsafe_align;
  __temp1780v__values__unsafe_ptr=__temp1778v__values__unsafe_ptr;
  __temp1780v__values__unsafe_size=__temp1778v__values__unsafe_size;
  __temp1780v__values__unsafe_offset=__temp1778v__values__unsafe_offset;
  __temp1780v__values__unsafe_align=__temp1778v__values__unsafe_align;
  map__keys__unsafe_ptr=__temp1780v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1780v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1780v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1780v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1780v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1780v__values__unsafe_size;
  map__values__unsafe_offset=__temp1780v__values__unsafe_offset;
  map__values__unsafe_align=__temp1780v__values__unsafe_align;
  __temp1781v=4;
  KB__temp443v(__temp1781v,&__temp1782v__);
  __temp_errcode=alloc__temp559v(__temp1782v__,&__temp1783v__unsafe_ptr,&__temp1783v__unsafe_size,&__temp1783v__unsafe_offset,&__temp1783v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp679v(&__temp1783v__unsafe_ptr,&__temp1783v__unsafe_size,&__temp1783v__unsafe_offset,&__temp1783v__unsafe_align,&__temp1785v__buf__unsafe_ptr,&__temp1785v__buf__unsafe_size,&__temp1785v__buf__unsafe_offset,&__temp1785v__buf__unsafe_align,&__temp1785v__pos);
  buf__buf__unsafe_ptr=__temp1785v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1785v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1785v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1785v__buf__unsafe_align;
  buf__pos=__temp1785v__pos;
  __temp_errcode=mutget__temp1703v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__temp1786v,&__temp1787v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp638v(__temp1788v,&__temp1789v__unsafe_ptr,&__temp1789v__dat__pos,&__temp1789v__dat__length,&__temp1789v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp701v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1789v__unsafe_ptr,__temp1789v__dat__pos,__temp1789v__dat__length,__temp1789v__dat__first,&__temp1790v__unsafe_ptr,&__temp1790v__dat__pos,&__temp1790v__dat__length,&__temp1790v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1787v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1787v__,&__temp1790v__unsafe_ptr,8);
  memcpy(__temp1787v__+8,&__temp1790v__dat__pos,8);
  memcpy(__temp1787v__+16,&__temp1790v__dat__length,8);
  memcpy(__temp1787v__+24,&__temp1790v__dat__first,1);
  __temp_errcode=mutget__temp1703v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_offset,&map__values__unsafe_align,__temp1791v,&__temp1792v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp638v(__temp1793v,&__temp1794v__unsafe_ptr,&__temp1794v__dat__pos,&__temp1794v__dat__length,&__temp1794v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp701v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1794v__unsafe_ptr,__temp1794v__dat__pos,__temp1794v__dat__length,__temp1794v__dat__first,&__temp1795v__unsafe_ptr,&__temp1795v__dat__pos,&__temp1795v__dat__length,&__temp1795v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1792v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1792v__,&__temp1795v__unsafe_ptr,8);
  memcpy(__temp1792v__+8,&__temp1795v__dat__pos,8);
  memcpy(__temp1792v__+16,&__temp1795v__dat__length,8);
  memcpy(__temp1792v__+24,&__temp1795v__dat__first,1);
  bufpos__temp679v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_offset,&map__keys__unsafe_align,&__temp1796v__buf__unsafe_ptr,&__temp1796v__buf__unsafe_size,&__temp1796v__buf__unsafe_offset,&__temp1796v__buf__unsafe_align,&__temp1796v__pos);
  it__buf__unsafe_ptr=__temp1796v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1796v__buf__unsafe_size;
  it__buf__unsafe_offset=__temp1796v__buf__unsafe_offset;
  it__buf__unsafe_align=__temp1796v__buf__unsafe_align;
  it__pos=__temp1796v__pos;
  while(1){
  __temp_complain=next__temp1721v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_offset,it__buf__unsafe_align,&it__pos,&__temp1798v__unsafe_ptr,&__temp1798v__dat__pos,&__temp1798v__dat__length,&__temp1798v__dat__first);
  __temp1797v=__temp_complain;
  key__unsafe_ptr=__temp1798v__unsafe_ptr;
  key__dat__pos=__temp1798v__dat__pos;
  key__dat__length=__temp1798v__dat__length;
  key__dat__first=__temp1798v__dat__first;
  __temp1797v=__temp1797v==0;
  if(!__temp1797v){
  break;
  }
  print__temp743v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1784v____temp565v____temp470v__);
  if(__temp1784v____temp565v____temp470v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(map__keys__unsafe_ptr,&__temp1779v____temp1686v____temp470v__);
  if(__temp1779v____temp1686v____temp470v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  free__temp461v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1777v____temp470v__);
  if(__temp1777v____temp470v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  free__temp461v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1953v=map__keys__unsafe_ptr;
  *__temp1954v=map__keys__unsafe_size;
  *__temp1955v=map__keys__unsafe_offset;
  *__temp1956v=map__keys__unsafe_align;
  *__temp1957v=map__values__unsafe_ptr;
  *__temp1958v=map__values__unsafe_size;
  *__temp1959v=map__values__unsafe_offset;
  *__temp1960v=map__values__unsafe_align;
  *__temp1961v=buf__buf__unsafe_ptr;
  *__temp1962v=buf__buf__unsafe_size;
  *__temp1963v=buf__buf__unsafe_offset;
  *__temp1964v=buf__buf__unsafe_align;
  *__temp1965v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1300v(const char* r, char** __temp1966v, uint64_t* __temp1967v, uint64_t* __temp1968v, char* __temp1969v) {
  char* __temp1301v__unsafe_ptr=0;
  uint64_t __temp1301v__dat__pos=0;
  uint64_t __temp1301v__dat__length=0;
  char __temp1301v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp638v(r,&__temp1301v__unsafe_ptr,&__temp1301v__dat__pos,&__temp1301v__dat__length,&__temp1301v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1966v=__temp1301v__unsafe_ptr;
  *__temp1967v=__temp1301v__dat__pos;
  *__temp1968v=__temp1301v__dat__length;
  *__temp1969v=__temp1301v__dat__first;
  
  return __temp_errcode;
}

int find__temp1344v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1970v) {
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
  __temp_errcode=get__temp551v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1348v,&__temp1349v__);
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
  len__temp558v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1354v__);
  n=__temp1354v__;
  __temp_errcode=hash__temp1247v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1355v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1355v__;
  range__temp435v(n,&__temp1356v__from,&__temp1356v__to);
  iter__from=__temp1356v__from;
  iter__to=__temp1356v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1358v__);
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
  __temp_errcode=get__temp551v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1365v__);
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
  __temp_errcode=33;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1970v=__temp1347v;
  
  return __temp_errcode;
}

int get__temp1695v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1971v) {
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
  __temp_errcode=get__temp551v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1697v__,&__temp1698v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1971v=__temp1698v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1800v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __temp1801v__=0;
  char* __temp1802v__unsafe_ptr=0;
  uint64_t __temp1802v__dat__pos=0;
  uint64_t __temp1802v__dat__length=0;
  char __temp1802v__dat__first=0;
  char* __temp1804v__=0;
  char* __temp1805v__unsafe_ptr=0;
  uint64_t __temp1805v__dat__pos=0;
  uint64_t __temp1805v__dat__length=0;
  char __temp1805v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1695v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1786v,&__temp1801v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1801v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1802v__unsafe_ptr,__temp1801v__,8);
  memcpy(&__temp1802v__dat__pos,__temp1801v__+8,8);
  memcpy(&__temp1802v__dat__length,__temp1801v__+16,8);
  memcpy(&__temp1802v__dat__first,__temp1801v__+24,1);
  print__temp743v(__temp1802v__unsafe_ptr,__temp1802v__dat__pos,__temp1802v__dat__length,__temp1802v__dat__first);
  __temp_errcode=get__temp1695v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1791v,&__temp1804v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1804v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1805v__unsafe_ptr,__temp1804v__,8);
  memcpy(&__temp1805v__dat__pos,__temp1804v__+8,8);
  memcpy(&__temp1805v__dat__length,__temp1804v__+16,8);
  memcpy(&__temp1805v__dat__first,__temp1804v__+24,1);
  print__temp743v(__temp1805v__unsafe_ptr,__temp1805v__dat__pos,__temp1805v__dat__length,__temp1805v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1807v() {
  char* __temp1808v__map__keys__unsafe_ptr=0;
  uint64_t __temp1808v__map__keys__unsafe_size=0;
  uint16_t __temp1808v__map__keys__unsafe_offset=0;
  uint16_t __temp1808v__map__keys__unsafe_align=0;
  char* __temp1808v__map__values__unsafe_ptr=0;
  uint64_t __temp1808v__map__values__unsafe_size=0;
  uint16_t __temp1808v__map__values__unsafe_offset=0;
  uint16_t __temp1808v__map__values__unsafe_align=0;
  char* __temp1808v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1808v__buf__buf__unsafe_size=0;
  uint16_t __temp1808v__buf__buf__unsafe_offset=0;
  uint16_t __temp1808v__buf__buf__unsafe_align=0;
  uint64_t __temp1808v__buf__pos=0;
  char __temp1809v____temp1777v____temp470v__=0;
  char __temp1809v____temp1779v____temp1686v____temp470v__=0;
  char __temp1809v____temp1784v____temp565v____temp470v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1772v(&__temp1808v__map__keys__unsafe_ptr,&__temp1808v__map__keys__unsafe_size,&__temp1808v__map__keys__unsafe_offset,&__temp1808v__map__keys__unsafe_align,&__temp1808v__map__values__unsafe_ptr,&__temp1808v__map__values__unsafe_size,&__temp1808v__map__values__unsafe_offset,&__temp1808v__map__values__unsafe_align,&__temp1808v__buf__buf__unsafe_ptr,&__temp1808v__buf__buf__unsafe_size,&__temp1808v__buf__buf__unsafe_offset,&__temp1808v__buf__buf__unsafe_align,&__temp1808v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1800v(__temp1808v__map__keys__unsafe_ptr,__temp1808v__map__keys__unsafe_size,__temp1808v__map__keys__unsafe_offset,__temp1808v__map__keys__unsafe_align,__temp1808v__map__values__unsafe_ptr,__temp1808v__map__values__unsafe_size,__temp1808v__map__values__unsafe_offset,__temp1808v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1808v__buf__buf__unsafe_ptr,&__temp1809v____temp1784v____temp565v____temp470v__);
  if(__temp1809v____temp1784v____temp565v____temp470v__){
  __temp1808v__buf__buf__unsafe_size=0;
  __temp1808v__buf__buf__unsafe_size=__temp1808v__buf__buf__unsafe_size;
  free__temp461v(&__temp1808v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1808v__map__keys__unsafe_ptr,&__temp1809v____temp1779v____temp1686v____temp470v__);
  if(__temp1809v____temp1779v____temp1686v____temp470v__){
  __temp1808v__map__keys__unsafe_size=0;
  __temp1808v__map__keys__unsafe_size=__temp1808v__map__keys__unsafe_size;
  free__temp461v(&__temp1808v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1808v__map__values__unsafe_ptr,&__temp1809v____temp1777v____temp470v__);
  if(__temp1809v____temp1777v____temp470v__){
  __temp1808v__map__values__unsafe_size=0;
  __temp1808v__map__values__unsafe_size=__temp1808v__map__values__unsafe_size;
  free__temp461v(&__temp1808v__map__values__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1807v();return 0;}