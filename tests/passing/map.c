#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1784v="manio";
const char* const __temp1779v="hello";
const char* const __temp1781v="hello world!";
const char* const __temp1786v="it's a me, manio.";
const char* const __temp365v="\n";
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1812v) {
  int value=0;
  *__temp1812v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1813v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1813v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1814v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1814v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1815v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1815v=z;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1816v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1816v=__temp446v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp555v(char** __temp1817v, uint64_t* __temp1818v, uint16_t* __temp1819v, uint16_t* __temp1820v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1817v=unsafe_ptr;
  *__temp1818v=unsafe_size;
  *__temp1819v=unsafe_offset;
  *__temp1820v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1821v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1821v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1822v) {
  char* allocated=*__temp1822v;
  if(allocated){
  free(allocated);
  }
  *__temp1822v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1823v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1823v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1824v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1824v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1825v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1825v=value;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1826v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1826v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1827v) {
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
  *__temp1827v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1828v, uint64_t* __temp1829v, uint16_t* __temp1830v, uint16_t* __temp1831v, uint64_t size, char** __temp1832v, uint64_t* __temp1833v, uint16_t* __temp1834v, uint16_t* __temp1835v) {
  char* buffer__unsafe_ptr=*__temp1828v;
  uint64_t buffer__unsafe_size=*__temp1829v;
  uint16_t buffer__unsafe_offset=*__temp1830v;
  uint16_t buffer__unsafe_align=*__temp1831v;
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
  uint64_t __temp485v=0;
  char __temp486v__=0;
  uint64_t __temp487v__=0;
  uint64_t __temp488v__=0;
  uint64_t bytes=0;
  char* __temp489v__=0;
  uint64_t __temp490v=0;
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
  goto __temp_return;
  }
  __temp485v=0;
  neq__temp142v(buffer__unsafe_size,__temp485v,&__temp486v__);
  if(__temp486v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp487v__);
  mul__temp194v(__temp487v__,size,&__temp488v__);
  bytes=__temp488v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp459v(bytes,&__temp489v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp489v__;
  __temp490v=0;
  zero__temp467v(buffer__unsafe_ptr,__temp490v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp475v__);
  if(__temp475v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  free__temp466v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1828v=buffer__unsafe_ptr;
  *__temp1829v=buffer__unsafe_size;
  *__temp1830v=buffer__unsafe_offset;
  *__temp1831v=buffer__unsafe_align;
  *__temp1832v=buffer__unsafe_ptr;
  *__temp1833v=buffer__unsafe_size;
  *__temp1834v=buffer__unsafe_offset;
  *__temp1835v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp554v(uint64_t size, char** __temp1836v, uint64_t* __temp1837v, uint16_t* __temp1838v, uint16_t* __temp1839v) {
  char* __temp557v__unsafe_ptr=0;
  uint64_t __temp557v__unsafe_size=0;
  uint16_t __temp557v__unsafe_offset=0;
  uint16_t __temp557v__unsafe_align=0;
  char* __temp558v__unsafe_ptr=0;
  uint64_t __temp558v__unsafe_size=0;
  uint16_t __temp558v__unsafe_offset=0;
  uint16_t __temp558v__unsafe_align=0;
  char* __temp559v__unsafe_ptr=0;
  uint64_t __temp559v__unsafe_size=0;
  uint16_t __temp559v__unsafe_offset=0;
  uint16_t __temp559v__unsafe_align=0;
  char __temp560v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp557v__unsafe_ptr,&__temp557v__unsafe_size,&__temp557v__unsafe_offset,&__temp557v__unsafe_align);
  __temp558v__unsafe_ptr=__temp557v__unsafe_ptr;
  __temp558v__unsafe_size=__temp557v__unsafe_size;
  __temp558v__unsafe_offset=__temp557v__unsafe_offset;
  __temp558v__unsafe_align=__temp557v__unsafe_align;
  __temp_errcode=alloc__temp473v(&__temp558v__unsafe_ptr,&__temp558v__unsafe_size,&__temp558v__unsafe_offset,&__temp558v__unsafe_align,size,&__temp559v__unsafe_ptr,&__temp559v__unsafe_size,&__temp559v__unsafe_offset,&__temp559v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp559v__unsafe_ptr,&__temp560v____temp475v__);
  if(__temp560v____temp475v__){
  __temp559v__unsafe_size=0;
  __temp559v__unsafe_size=__temp559v__unsafe_size;
  __temp559v__unsafe_ptr=__temp559v__unsafe_ptr;
  free__temp466v(&__temp559v__unsafe_ptr);
  }
  __temp_return:
  *__temp1836v=__temp559v__unsafe_ptr;
  *__temp1837v=__temp559v__unsafe_size;
  *__temp1838v=__temp559v__unsafe_offset;
  *__temp1839v=__temp559v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp674v(char** __temp1840v, uint64_t* __temp1841v, uint16_t* __temp1842v, uint16_t* __temp1843v, char** __temp1844v, uint64_t* __temp1845v, uint16_t* __temp1846v, uint16_t* __temp1847v, uint64_t* __temp1848v) {
  char* buf__unsafe_ptr=*__temp1840v;
  uint64_t buf__unsafe_size=*__temp1841v;
  uint16_t buf__unsafe_offset=*__temp1842v;
  uint16_t buf__unsafe_align=*__temp1843v;
  uint64_t __temp675v=0;
  uint64_t __temp676v=0;
  uint64_t pos=0;
  __temp675v=0;
  __temp676v=__temp675v;
  pos=__temp676v;
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1763v(char** __temp1849v, uint64_t* __temp1850v, uint16_t* __temp1851v, uint16_t* __temp1852v) {
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

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1679v(char** __temp1853v, uint64_t* __temp1854v, uint16_t* __temp1855v, uint16_t* __temp1856v) {
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

static inline __attribute__((always_inline)) void len__temp553v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1857v) {
  goto __temp_return;
  __temp_return:
  *__temp1857v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1678v(char** __temp1858v, uint64_t* __temp1859v, uint16_t* __temp1860v, uint16_t* __temp1861v, char** __temp1862v, uint64_t* __temp1863v, uint16_t* __temp1864v, uint16_t* __temp1865v, char** __temp1866v, uint64_t* __temp1867v, uint16_t* __temp1868v, uint16_t* __temp1869v) {
  char* values__unsafe_ptr=*__temp1858v;
  uint64_t values__unsafe_size=*__temp1859v;
  uint16_t values__unsafe_offset=*__temp1860v;
  uint16_t values__unsafe_align=*__temp1861v;
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
  char __temp1685v____temp475v__=0;
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
  len__temp553v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1683v__);
  __temp_errcode=alloc__temp473v(&__temp1682v__unsafe_ptr,&__temp1682v__unsafe_size,&__temp1682v__unsafe_offset,&__temp1682v__unsafe_align,__temp1683v__,&__temp1684v__unsafe_ptr,&__temp1684v__unsafe_size,&__temp1684v__unsafe_offset,&__temp1684v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1684v__unsafe_ptr;
  keys__unsafe_size=__temp1684v__unsafe_size;
  keys__unsafe_offset=__temp1684v__unsafe_offset;
  keys__unsafe_align=__temp1684v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1685v____temp475v__);
  if(__temp1685v____temp475v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
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

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1870v) {
  *__temp1870v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1871v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1871v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1872v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1872v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1873v) {
  *__temp1873v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1874v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1874v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp546v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1875v) {
  char __temp547v__=0;
  uint64_t __temp548v__=0;
  uint64_t __temp549v__=0;
  uint64_t __temp550v__=0;
  uint64_t __temp551v__=0;
  char* __temp552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp547v__);
  if(__temp547v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp548v__);
  mul__temp194v(i,__temp548v__,&__temp549v__);
  nat__temp470v(buffer__unsafe_offset,&__temp550v__);
  add__temp170v(__temp549v__,__temp550v__,&__temp551v__);
  add__temp468v(buffer__unsafe_ptr,__temp551v__,&__temp552v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1875v=__temp552v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp591v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1876v, uint64_t* __temp1877v, uint64_t* __temp1878v, char* __temp1879v) {
  goto __temp_return;
  __temp_return:
  *__temp1876v=unsafe_ptr;
  *__temp1877v=dat__pos;
  *__temp1878v=dat__length;
  *__temp1879v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp595v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1880v, uint64_t* __temp1881v, uint64_t* __temp1882v, char* __temp1883v) {
  char* unsafe_ptr=0;
  uint64_t __temp596v__=0;
  uint64_t __temp597v=0;
  char __temp598v__=0;
  uint64_t __temp599v__=0;
  uint64_t __temp600v=0;
  char __temp601v__=0;
  char* __temp602v__unsafe_ptr=0;
  uint64_t __temp602v__dat__pos=0;
  uint64_t __temp602v__dat__length=0;
  char __temp602v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  nat__temp470v(buf__unsafe_align,&__temp596v__);
  __temp597v=1;
  neq__temp142v(__temp596v__,__temp597v,&__temp598v__);
  if(__temp598v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  nat__temp470v(buf__unsafe_offset,&__temp599v__);
  __temp600v=0;
  neq__temp142v(__temp599v__,__temp600v,&__temp601v__);
  if(__temp601v__){
  __temp_errcode=14;
  goto __temp_failure;
  }
  str__temp591v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp602v__unsafe_ptr,&__temp602v__dat__pos,&__temp602v__dat__length,&__temp602v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1880v=__temp602v__unsafe_ptr;
  *__temp1881v=__temp602v__dat__pos;
  *__temp1882v=__temp602v__dat__length;
  *__temp1883v=__temp602v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp627v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1884v, uint64_t* __temp1885v, uint64_t* __temp1886v, char* __temp1887v) {
  uint64_t __temp628v=0;
  char __temp629v__=0;
  char* __temp630v__=0;
  char __temp631v__value=0;
  char first=0;
  char* __temp632v__unsafe_ptr=0;
  uint64_t __temp632v__dat__pos=0;
  uint64_t __temp632v__dat__length=0;
  char __temp632v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp628v=0;
  neq__temp142v(length,__temp628v,&__temp629v__);
  if(__temp629v__){
  __temp_errcode=get__temp546v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,&__temp630v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp630v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp631v__value,__temp630v__,1);
  first=__temp631v__value;
  }
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,pos,length,first,&__temp632v__unsafe_ptr,&__temp632v__dat__pos,&__temp632v__dat__length,&__temp632v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1884v=__temp632v__unsafe_ptr;
  *__temp1885v=__temp632v__dat__pos;
  *__temp1886v=__temp632v__dat__length;
  *__temp1887v=__temp632v__dat__first;
  
  return __temp_errcode;
}

int str__temp633v(const char* c, char** __temp1888v, uint64_t* __temp1889v, uint64_t* __temp1890v, char* __temp1891v) {
  char* __temp634v__unsafe_ptr=0;
  uint64_t __temp634v__unsafe_size=0;
  uint16_t __temp634v__unsafe_offset=0;
  uint16_t __temp634v__unsafe_align=0;
  char* __temp635v__unsafe_ptr=0;
  uint64_t __temp635v__unsafe_size=0;
  uint16_t __temp635v__unsafe_offset=0;
  uint16_t __temp635v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __temp636v__=0;
  uint64_t length=0;
  uint64_t __temp637v=0;
  uint64_t __temp638v__=0;
  uint64_t __temp639v=0;
  char* __temp640v__unsafe_ptr=0;
  uint64_t __temp640v__dat__pos=0;
  uint64_t __temp640v__dat__length=0;
  char __temp640v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp555v(&__temp634v__unsafe_ptr,&__temp634v__unsafe_size,&__temp634v__unsafe_offset,&__temp634v__unsafe_align);
  __temp635v__unsafe_ptr=__temp634v__unsafe_ptr;
  __temp635v__unsafe_size=__temp634v__unsafe_size;
  __temp635v__unsafe_offset=__temp634v__unsafe_offset;
  __temp635v__unsafe_align=__temp634v__unsafe_align;
  buf__unsafe_ptr=__temp635v__unsafe_ptr;
  buf__unsafe_size=__temp635v__unsafe_size;
  buf__unsafe_offset=__temp635v__unsafe_offset;
  buf__unsafe_align=__temp635v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp636v__);
  buf__unsafe_ptr=__temp636v__;
  if(c){
  length=strlen(c);
  }
  __temp637v=1;
  add__temp170v(length,__temp637v,&__temp638v__);
  buf__unsafe_size=__temp638v__;
  __temp639v=0;
  __temp_errcode=str__temp627v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,__temp639v,length,&__temp640v__unsafe_ptr,&__temp640v__dat__pos,&__temp640v__dat__length,&__temp640v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1888v=__temp640v__unsafe_ptr;
  *__temp1889v=__temp640v__dat__pos;
  *__temp1890v=__temp640v__dat__length;
  *__temp1891v=__temp640v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1297v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1892v, uint64_t* __temp1893v, uint64_t* __temp1894v, char* __temp1895v) {
  goto __temp_return;
  __temp_return:
  *__temp1892v=r__unsafe_ptr;
  *__temp1893v=r__dat__pos;
  *__temp1894v=r__dat__length;
  *__temp1895v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp641v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1896v) {
  goto __temp_return;
  __temp_return:
  *__temp1896v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1301v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1897v) {
  uint64_t __temp1302v=0;
  uint64_t __temp1303v__=0;
  char __temp1304v__=0;
  __temp1302v=0;
  len__temp641v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1303v__);
  eq__temp118v(__temp1302v,__temp1303v__,&__temp1304v__);
  goto __temp_return;
  __temp_return:
  *__temp1897v=__temp1304v__;
}

static inline __attribute__((always_inline)) void raw__temp1295v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1898v, uint64_t* __temp1899v, uint64_t* __temp1900v, char* __temp1901v) {
  goto __temp_return;
  __temp_return:
  *__temp1898v=r__s__unsafe_ptr;
  *__temp1899v=r__s__dat__pos;
  *__temp1900v=r__s__dat__length;
  *__temp1901v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1902v, uint64_t* __temp1903v) {
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
  *__temp1902v=from;
  *__temp1903v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1904v, uint64_t r__to, uint64_t* __temp1905v) {
  uint64_t r__from=*__temp1904v;
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
  *__temp1904v=r__from;
  *__temp1905v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1906v) {
  goto __temp_return;
  __temp_return:
  *__temp1906v=value;
}

static inline __attribute__((always_inline)) void lshift__temp423v(uint64_t x__value, uint64_t y, uint64_t* __temp1907v) {
  uint64_t z=0;
  uint64_t __temp424v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp424v__value);
  goto __temp_return;
  __temp_return:
  *__temp1907v=__temp424v__value;
}

static inline __attribute__((always_inline)) void nat__temp408v(uint64_t x, uint64_t* __temp1908v) {
  int __temp409v=0;
  int __temp410v=0;
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1908v=value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1909v) {
  uint64_t __temp420v__=0;
  nat__temp408v(x__value,&__temp420v__);
  goto __temp_return;
  __temp_return:
  *__temp1909v=__temp420v__;
}

static inline __attribute__((always_inline)) void get__temp779v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1910v) {
  uint64_t __temp780v__=0;
  char* __temp781v__=0;
  add__temp170v(s__dat__pos,i,&__temp780v__);
  add__temp468v(s__unsafe_ptr,__temp780v__,&__temp781v__);
  goto __temp_return;
  __temp_return:
  *__temp1910v=__temp781v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1911v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1911v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1912v) {
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
  *__temp1912v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1246v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1913v) {
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
  len__temp641v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1249v__);
  range__temp436v(__temp1249v__,&__temp1250v__from,&__temp1250v__to);
  iter__from=__temp1250v__from;
  iter__to=__temp1250v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1252v__);
  __temp1251v=__temp_complain;
  i=__temp1252v__;
  __temp1251v=__temp1251v==0;
  if(!__temp1251v){
  break;
  }
  bits__temp413v(h,&__temp1253v__value);
  __temp1254v=5;
  lshift__temp423v(__temp1253v__value,__temp1254v,&__temp1255v__value);
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
  *__temp1913v=__temp1262v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1914v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1914v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1915v) {
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
  *__temp1915v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp539v(char** __temp1916v, uint64_t* __temp1917v, uint16_t* __temp1918v, uint16_t* __temp1919v, uint64_t i, char** __temp1920v) {
  char* buffer__unsafe_ptr=*__temp1916v;
  uint64_t buffer__unsafe_size=*__temp1917v;
  uint16_t buffer__unsafe_offset=*__temp1918v;
  uint16_t buffer__unsafe_align=*__temp1919v;
  char __temp540v__=0;
  uint64_t __temp541v__=0;
  uint64_t __temp542v__=0;
  uint64_t __temp543v__=0;
  uint64_t __temp544v__=0;
  char* __temp545v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp540v__);
  if(__temp540v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  nat__temp470v(buffer__unsafe_align,&__temp541v__);
  mul__temp194v(i,__temp541v__,&__temp542v__);
  nat__temp470v(buffer__unsafe_offset,&__temp543v__);
  add__temp170v(__temp542v__,__temp543v__,&__temp544v__);
  add__temp468v(buffer__unsafe_ptr,__temp544v__,&__temp545v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1916v=buffer__unsafe_ptr;
  *__temp1917v=buffer__unsafe_size;
  *__temp1918v=buffer__unsafe_offset;
  *__temp1919v=buffer__unsafe_align;
  *__temp1920v=__temp545v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp645v(char x, char y, char* __temp1921v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1921v=z;
}

static inline __attribute__((always_inline)) void eq__temp783v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1922v) {
  uint64_t __temp784v__=0;
  uint64_t n=0;
  uint64_t __temp785v__=0;
  char __temp786v__=0;
  char __temp787v=0;
  char __temp788v__=0;
  char __temp789v=0;
  char z=0;
  len__temp641v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp784v__);
  n=__temp784v__;
  len__temp641v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp785v__);
  neq__temp142v(n,__temp785v__,&__temp786v__);
  if(__temp786v__){
  __temp787v=0;
  goto __temp_return;
  }
  neq__temp645v(x__dat__first,y__dat__first,&__temp788v__);
  if(__temp788v__){
  __temp789v=0;
  __temp787v=__temp789v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp787v=z;
  goto __temp_return;
  __temp_return:
  *__temp1922v=__temp787v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1923v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1923v=z;
}

int at__temp1577v(char** __temp1924v, uint64_t* __temp1925v, uint16_t* __temp1926v, uint16_t* __temp1927v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1928v) {
  char* data__unsafe_ptr=*__temp1924v;
  uint64_t data__unsafe_size=*__temp1925v;
  uint16_t data__unsafe_offset=*__temp1926v;
  uint16_t data__unsafe_align=*__temp1927v;
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
  __temp_errcode=get__temp546v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1581v,&__temp1582v__);
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
  len__temp553v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1587v__);
  n=__temp1587v__;
  __temp_errcode=hash__temp1246v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1588v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1588v__;
  range__temp436v(n,&__temp1589v__from,&__temp1589v__to);
  iter__from=__temp1589v__from;
  iter__to=__temp1589v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1591v__);
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
  __temp_errcode=get__temp546v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1598v__);
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
  __temp_errcode=mutget__temp539v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1602v__);
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
  __temp_errcode=get__temp546v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1606v__);
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
  __temp_errcode=mutget__temp539v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1609v__);
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
  *__temp1924v=data__unsafe_ptr;
  *__temp1925v=data__unsafe_size;
  *__temp1926v=data__unsafe_offset;
  *__temp1927v=data__unsafe_align;
  *__temp1928v=__temp1580v;
  
  return __temp_errcode;
}

int mutget__temp1702v(char** __temp1929v, uint64_t* __temp1930v, uint16_t* __temp1931v, uint16_t* __temp1932v, char** __temp1933v, uint64_t* __temp1934v, uint16_t* __temp1935v, uint16_t* __temp1936v, const char* key, char** __temp1937v) {
  char* keys__unsafe_ptr=*__temp1929v;
  uint64_t keys__unsafe_size=*__temp1930v;
  uint16_t keys__unsafe_offset=*__temp1931v;
  uint16_t keys__unsafe_align=*__temp1932v;
  char* values__unsafe_ptr=*__temp1933v;
  uint64_t values__unsafe_size=*__temp1934v;
  uint16_t values__unsafe_offset=*__temp1935v;
  uint16_t values__unsafe_align=*__temp1936v;
  char* __temp1703v__unsafe_ptr=0;
  uint64_t __temp1703v__dat__pos=0;
  uint64_t __temp1703v__dat__length=0;
  char __temp1703v__dat__first=0;
  uint64_t __temp1704v__=0;
  char* __temp1705v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(key,&__temp1703v__unsafe_ptr,&__temp1703v__dat__pos,&__temp1703v__dat__length,&__temp1703v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1577v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1703v__unsafe_ptr,__temp1703v__dat__pos,__temp1703v__dat__length,__temp1703v__dat__first,&__temp1704v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp539v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1704v__,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1929v=keys__unsafe_ptr;
  *__temp1930v=keys__unsafe_size;
  *__temp1931v=keys__unsafe_offset;
  *__temp1932v=keys__unsafe_align;
  *__temp1933v=values__unsafe_ptr;
  *__temp1934v=values__unsafe_size;
  *__temp1935v=values__unsafe_offset;
  *__temp1936v=values__unsafe_align;
  *__temp1937v=__temp1705v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp626v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1938v, uint64_t* __temp1939v, uint64_t* __temp1940v, char* __temp1941v) {
  goto __temp_return;
  __temp_return:
  *__temp1938v=other__unsafe_ptr;
  *__temp1939v=other__dat__pos;
  *__temp1940v=other__dat__length;
  *__temp1941v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp698v(char** __temp1942v, uint64_t* __temp1943v, uint16_t* __temp1944v, uint16_t* __temp1945v, uint64_t* __temp1946v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1947v, uint64_t* __temp1948v, uint64_t* __temp1949v, char* __temp1950v) {
  char* buf__unsafe_ptr=*__temp1942v;
  uint64_t buf__unsafe_size=*__temp1943v;
  uint16_t buf__unsafe_offset=*__temp1944v;
  uint16_t buf__unsafe_align=*__temp1945v;
  uint64_t pos=*__temp1946v;
  char* __temp699v__unsafe_ptr=0;
  uint64_t __temp699v__dat__pos=0;
  uint64_t __temp699v__dat__length=0;
  char __temp699v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp700v__=0;
  uint64_t __temp701v__=0;
  uint64_t next_pos=0;
  uint64_t __temp702v__=0;
  char __temp703v__=0;
  uint64_t __temp704v=0;
  uint64_t __temp705v__=0;
  uint64_t prev_pos=0;
  char* __temp706v__unsafe_ptr=0;
  uint64_t __temp706v__dat__pos=0;
  uint64_t __temp706v__dat__length=0;
  char __temp706v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp626v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp699v__unsafe_ptr,&__temp699v__dat__pos,&__temp699v__dat__length,&__temp699v__dat__first);
  other__unsafe_ptr=__temp699v__unsafe_ptr;
  other__dat__pos=__temp699v__dat__pos;
  other__dat__length=__temp699v__dat__length;
  other__dat__first=__temp699v__dat__first;
  len__temp641v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp700v__);
  add__temp170v(pos,__temp700v__,&__temp701v__);
  next_pos=__temp701v__;
  len__temp553v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp702v__);
  gt__temp271v(next_pos,__temp702v__,&__temp703v__);
  if(__temp703v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp704v=0;
  add__temp170v(pos,__temp704v,&__temp705v__);
  prev_pos=__temp705v__;
  pos=next_pos;
  __temp_errcode=str__temp595v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp706v__unsafe_ptr,&__temp706v__dat__pos,&__temp706v__dat__length,&__temp706v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1942v=buf__unsafe_ptr;
  *__temp1943v=buf__unsafe_size;
  *__temp1944v=buf__unsafe_offset;
  *__temp1945v=buf__unsafe_align;
  *__temp1946v=pos;
  *__temp1947v=__temp706v__unsafe_ptr;
  *__temp1948v=__temp706v__dat__pos;
  *__temp1949v=__temp706v__dat__length;
  *__temp1950v=__temp706v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1720v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1951v, char** __temp1952v, uint64_t* __temp1953v, uint64_t* __temp1954v, char* __temp1955v) {
  uint64_t pos=*__temp1951v;
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
  __temp_errcode=get__temp546v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1725v,&__temp1726v__);
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
  __temp_errcode=get__temp546v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1729v__);
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
  __temp_errcode=get__temp546v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1736v__);
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
  *__temp1951v=pos;
  *__temp1952v=__temp1728v__unsafe_ptr;
  *__temp1953v=__temp1728v__dat__pos;
  *__temp1954v=__temp1728v__dat__length;
  *__temp1955v=__temp1728v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp740v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp741v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1771v(char** __temp1956v, uint64_t* __temp1957v, uint16_t* __temp1958v, uint16_t* __temp1959v, uint64_t* __temp1960v, char** __temp1961v, uint64_t* __temp1962v, uint16_t* __temp1963v, uint16_t* __temp1964v, char** __temp1965v, uint64_t* __temp1966v, uint16_t* __temp1967v, uint16_t* __temp1968v) {
  char* buf__buf__unsafe_ptr=*__temp1956v;
  uint64_t buf__buf__unsafe_size=*__temp1957v;
  uint16_t buf__buf__unsafe_offset=*__temp1958v;
  uint16_t buf__buf__unsafe_align=*__temp1959v;
  uint64_t buf__pos=*__temp1960v;
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
  char __temp1776v____temp475v__=0;
  char* __temp1777v__keys__unsafe_ptr=0;
  uint64_t __temp1777v__keys__unsafe_size=0;
  uint16_t __temp1777v__keys__unsafe_offset=0;
  uint16_t __temp1777v__keys__unsafe_align=0;
  char* __temp1777v__values__unsafe_ptr=0;
  uint64_t __temp1777v__values__unsafe_size=0;
  uint16_t __temp1777v__values__unsafe_offset=0;
  uint16_t __temp1777v__values__unsafe_align=0;
  char __temp1778v____temp1685v____temp475v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __temp1780v__=0;
  char* __temp1782v__unsafe_ptr=0;
  uint64_t __temp1782v__dat__pos=0;
  uint64_t __temp1782v__dat__length=0;
  char __temp1782v__dat__first=0;
  char* __temp1783v__unsafe_ptr=0;
  uint64_t __temp1783v__dat__pos=0;
  uint64_t __temp1783v__dat__length=0;
  char __temp1783v__dat__first=0;
  char* __temp1785v__=0;
  char* __temp1787v__unsafe_ptr=0;
  uint64_t __temp1787v__dat__pos=0;
  uint64_t __temp1787v__dat__length=0;
  char __temp1787v__dat__first=0;
  char* __temp1788v__unsafe_ptr=0;
  uint64_t __temp1788v__dat__pos=0;
  uint64_t __temp1788v__dat__length=0;
  char __temp1788v__dat__first=0;
  char* __temp1789v__buf__unsafe_ptr=0;
  uint64_t __temp1789v__buf__unsafe_size=0;
  uint16_t __temp1789v__buf__unsafe_offset=0;
  uint16_t __temp1789v__buf__unsafe_align=0;
  uint64_t __temp1789v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1790v=0;
  char* __temp1791v__unsafe_ptr=0;
  uint64_t __temp1791v__dat__pos=0;
  uint64_t __temp1791v__dat__length=0;
  char __temp1791v__dat__first=0;
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
  __temp_errcode=alloc__temp473v(&__temp1773v__unsafe_ptr,&__temp1773v__unsafe_size,&__temp1773v__unsafe_offset,&__temp1773v__unsafe_align,__temp1774v,&__temp1775v__unsafe_ptr,&__temp1775v__unsafe_size,&__temp1775v__unsafe_offset,&__temp1775v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1678v(&__temp1775v__unsafe_ptr,&__temp1775v__unsafe_size,&__temp1775v__unsafe_offset,&__temp1775v__unsafe_align,&__temp1777v__keys__unsafe_ptr,&__temp1777v__keys__unsafe_size,&__temp1777v__keys__unsafe_offset,&__temp1777v__keys__unsafe_align,&__temp1777v__values__unsafe_ptr,&__temp1777v__values__unsafe_size,&__temp1777v__values__unsafe_offset,&__temp1777v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp1702v(&__temp1777v__keys__unsafe_ptr,&__temp1777v__keys__unsafe_size,&__temp1777v__keys__unsafe_offset,&__temp1777v__keys__unsafe_align,&__temp1777v__values__unsafe_ptr,&__temp1777v__values__unsafe_size,&__temp1777v__values__unsafe_offset,&__temp1777v__values__unsafe_align,__temp1779v,&__temp1780v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp633v(__temp1781v,&__temp1782v__unsafe_ptr,&__temp1782v__dat__pos,&__temp1782v__dat__length,&__temp1782v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp698v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1782v__unsafe_ptr,__temp1782v__dat__pos,__temp1782v__dat__length,__temp1782v__dat__first,&__temp1783v__unsafe_ptr,&__temp1783v__dat__pos,&__temp1783v__dat__length,&__temp1783v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1780v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1780v__,&__temp1783v__unsafe_ptr,8);
  memcpy(__temp1780v__+8,&__temp1783v__dat__pos,8);
  memcpy(__temp1780v__+16,&__temp1783v__dat__length,8);
  memcpy(__temp1780v__+24,&__temp1783v__dat__first,1);
  __temp_errcode=mutget__temp1702v(&__temp1777v__keys__unsafe_ptr,&__temp1777v__keys__unsafe_size,&__temp1777v__keys__unsafe_offset,&__temp1777v__keys__unsafe_align,&__temp1777v__values__unsafe_ptr,&__temp1777v__values__unsafe_size,&__temp1777v__values__unsafe_offset,&__temp1777v__values__unsafe_align,__temp1784v,&__temp1785v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp633v(__temp1786v,&__temp1787v__unsafe_ptr,&__temp1787v__dat__pos,&__temp1787v__dat__length,&__temp1787v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp698v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1787v__unsafe_ptr,__temp1787v__dat__pos,__temp1787v__dat__length,__temp1787v__dat__first,&__temp1788v__unsafe_ptr,&__temp1788v__dat__pos,&__temp1788v__dat__length,&__temp1788v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1785v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1785v__,&__temp1788v__unsafe_ptr,8);
  memcpy(__temp1785v__+8,&__temp1788v__dat__pos,8);
  memcpy(__temp1785v__+16,&__temp1788v__dat__length,8);
  memcpy(__temp1785v__+24,&__temp1788v__dat__first,1);
  bufpos__temp674v(&__temp1777v__keys__unsafe_ptr,&__temp1777v__keys__unsafe_size,&__temp1777v__keys__unsafe_offset,&__temp1777v__keys__unsafe_align,&__temp1789v__buf__unsafe_ptr,&__temp1789v__buf__unsafe_size,&__temp1789v__buf__unsafe_offset,&__temp1789v__buf__unsafe_align,&__temp1789v__pos);
  it__pos=__temp1789v__pos;
  while(1){
  __temp_complain=next__temp1720v(__temp1777v__keys__unsafe_ptr,__temp1777v__keys__unsafe_size,__temp1777v__keys__unsafe_offset,__temp1777v__keys__unsafe_align,&it__pos,&__temp1791v__unsafe_ptr,&__temp1791v__dat__pos,&__temp1791v__dat__length,&__temp1791v__dat__first);
  __temp1790v=__temp_complain;
  key__unsafe_ptr=__temp1791v__unsafe_ptr;
  key__dat__pos=__temp1791v__dat__pos;
  key__dat__length=__temp1791v__dat__length;
  key__dat__first=__temp1791v__dat__first;
  __temp1790v=__temp1790v==0;
  if(!__temp1790v){
  break;
  }
  print__temp740v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__temp1777v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1777v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1777v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1777v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1777v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1777v__values__unsafe_size;
  map__values__unsafe_offset=__temp1777v__values__unsafe_offset;
  map__values__unsafe_align=__temp1777v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1778v____temp1685v____temp475v__);
  if(__temp1778v____temp1685v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1776v____temp475v__);
  if(__temp1776v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1956v=buf__buf__unsafe_ptr;
  *__temp1957v=buf__buf__unsafe_size;
  *__temp1958v=buf__buf__unsafe_offset;
  *__temp1959v=buf__buf__unsafe_align;
  *__temp1960v=buf__pos;
  *__temp1961v=map__keys__unsafe_ptr;
  *__temp1962v=map__keys__unsafe_size;
  *__temp1963v=map__keys__unsafe_offset;
  *__temp1964v=map__keys__unsafe_align;
  *__temp1965v=map__values__unsafe_ptr;
  *__temp1966v=map__values__unsafe_size;
  *__temp1967v=map__values__unsafe_offset;
  *__temp1968v=map__values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1793v(char** __temp1969v, uint64_t* __temp1970v, uint16_t* __temp1971v, uint16_t* __temp1972v, char** __temp1973v, uint64_t* __temp1974v, uint16_t* __temp1975v, uint16_t* __temp1976v, char** __temp1977v, uint64_t* __temp1978v, uint16_t* __temp1979v, uint16_t* __temp1980v, uint64_t* __temp1981v) {
  uint64_t __temp1794v=0;
  uint64_t __temp1795v__=0;
  char* __temp1796v__unsafe_ptr=0;
  uint64_t __temp1796v__unsafe_size=0;
  uint16_t __temp1796v__unsafe_offset=0;
  uint16_t __temp1796v__unsafe_align=0;
  char __temp1797v____temp560v____temp475v__=0;
  char* __temp1798v__buf__unsafe_ptr=0;
  uint64_t __temp1798v__buf__unsafe_size=0;
  uint16_t __temp1798v__buf__unsafe_offset=0;
  uint16_t __temp1798v__buf__unsafe_align=0;
  uint64_t __temp1798v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1799v__keys__unsafe_ptr=0;
  uint64_t __temp1799v__keys__unsafe_size=0;
  uint16_t __temp1799v__keys__unsafe_offset=0;
  uint16_t __temp1799v__keys__unsafe_align=0;
  char* __temp1799v__values__unsafe_ptr=0;
  uint64_t __temp1799v__values__unsafe_size=0;
  uint16_t __temp1799v__values__unsafe_offset=0;
  uint16_t __temp1799v__values__unsafe_align=0;
  char __temp1800v____temp1776v____temp475v__=0;
  char __temp1800v____temp1778v____temp1685v____temp475v__=0;
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
  __temp1794v=4;
  KB__temp444v(__temp1794v,&__temp1795v__);
  __temp_errcode=alloc__temp554v(__temp1795v__,&__temp1796v__unsafe_ptr,&__temp1796v__unsafe_size,&__temp1796v__unsafe_offset,&__temp1796v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp674v(&__temp1796v__unsafe_ptr,&__temp1796v__unsafe_size,&__temp1796v__unsafe_offset,&__temp1796v__unsafe_align,&__temp1798v__buf__unsafe_ptr,&__temp1798v__buf__unsafe_size,&__temp1798v__buf__unsafe_offset,&__temp1798v__buf__unsafe_align,&__temp1798v__pos);
  buf__buf__unsafe_ptr=__temp1798v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1798v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1798v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1798v__buf__unsafe_align;
  buf__pos=__temp1798v__pos;
  __temp_errcode=test__temp1771v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__temp1799v__keys__unsafe_ptr,&__temp1799v__keys__unsafe_size,&__temp1799v__keys__unsafe_offset,&__temp1799v__keys__unsafe_align,&__temp1799v__values__unsafe_ptr,&__temp1799v__values__unsafe_size,&__temp1799v__values__unsafe_offset,&__temp1799v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1799v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1799v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1799v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1799v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1799v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1799v__values__unsafe_size;
  map__values__unsafe_offset=__temp1799v__values__unsafe_offset;
  map__values__unsafe_align=__temp1799v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1800v____temp1778v____temp1685v____temp475v__);
  if(__temp1800v____temp1778v____temp1685v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1800v____temp1776v____temp475v__);
  if(__temp1800v____temp1776v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  exists__temp412v(buf__buf__unsafe_ptr,&__temp1797v____temp560v____temp475v__);
  if(__temp1797v____temp560v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  __temp_return:
  *__temp1969v=map__keys__unsafe_ptr;
  *__temp1970v=map__keys__unsafe_size;
  *__temp1971v=map__keys__unsafe_offset;
  *__temp1972v=map__keys__unsafe_align;
  *__temp1973v=map__values__unsafe_ptr;
  *__temp1974v=map__values__unsafe_size;
  *__temp1975v=map__values__unsafe_offset;
  *__temp1976v=map__values__unsafe_align;
  *__temp1977v=buf__buf__unsafe_ptr;
  *__temp1978v=buf__buf__unsafe_size;
  *__temp1979v=buf__buf__unsafe_offset;
  *__temp1980v=buf__buf__unsafe_align;
  *__temp1981v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1299v(const char* r, char** __temp1982v, uint64_t* __temp1983v, uint64_t* __temp1984v, char* __temp1985v) {
  char* __temp1300v__unsafe_ptr=0;
  uint64_t __temp1300v__dat__pos=0;
  uint64_t __temp1300v__dat__length=0;
  char __temp1300v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp633v(r,&__temp1300v__unsafe_ptr,&__temp1300v__dat__pos,&__temp1300v__dat__length,&__temp1300v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1982v=__temp1300v__unsafe_ptr;
  *__temp1983v=__temp1300v__dat__pos;
  *__temp1984v=__temp1300v__dat__length;
  *__temp1985v=__temp1300v__dat__first;
  
  return __temp_errcode;
}

int find__temp1343v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1986v) {
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
  __temp_errcode=get__temp546v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1347v,&__temp1348v__);
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
  len__temp553v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1353v__);
  n=__temp1353v__;
  __temp_errcode=hash__temp1246v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1354v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1354v__;
  range__temp436v(n,&__temp1355v__from,&__temp1355v__to);
  iter__from=__temp1355v__from;
  iter__to=__temp1355v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1357v__);
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
  __temp_errcode=get__temp546v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1364v__);
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
  *__temp1986v=__temp1346v;
  
  return __temp_errcode;
}

int get__temp1694v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1987v) {
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
  __temp_errcode=get__temp546v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1696v__,&__temp1697v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1987v=__temp1697v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1801v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __temp1802v__=0;
  char* __temp1803v__unsafe_ptr=0;
  uint64_t __temp1803v__dat__pos=0;
  uint64_t __temp1803v__dat__length=0;
  char __temp1803v__dat__first=0;
  char* __temp1805v__=0;
  char* __temp1806v__unsafe_ptr=0;
  uint64_t __temp1806v__dat__pos=0;
  uint64_t __temp1806v__dat__length=0;
  char __temp1806v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1694v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1779v,&__temp1802v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1802v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1803v__unsafe_ptr,__temp1802v__,8);
  memcpy(&__temp1803v__dat__pos,__temp1802v__+8,8);
  memcpy(&__temp1803v__dat__length,__temp1802v__+16,8);
  memcpy(&__temp1803v__dat__first,__temp1802v__+24,1);
  print__temp740v(__temp1803v__unsafe_ptr,__temp1803v__dat__pos,__temp1803v__dat__length,__temp1803v__dat__first);
  __temp_errcode=get__temp1694v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1784v,&__temp1805v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1805v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1806v__unsafe_ptr,__temp1805v__,8);
  memcpy(&__temp1806v__dat__pos,__temp1805v__+8,8);
  memcpy(&__temp1806v__dat__length,__temp1805v__+16,8);
  memcpy(&__temp1806v__dat__first,__temp1805v__+24,1);
  print__temp740v(__temp1806v__unsafe_ptr,__temp1806v__dat__pos,__temp1806v__dat__length,__temp1806v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1808v() {
  char* __temp1809v__map__keys__unsafe_ptr=0;
  uint64_t __temp1809v__map__keys__unsafe_size=0;
  uint16_t __temp1809v__map__keys__unsafe_offset=0;
  uint16_t __temp1809v__map__keys__unsafe_align=0;
  char* __temp1809v__map__values__unsafe_ptr=0;
  uint64_t __temp1809v__map__values__unsafe_size=0;
  uint16_t __temp1809v__map__values__unsafe_offset=0;
  uint16_t __temp1809v__map__values__unsafe_align=0;
  char* __temp1809v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1809v__buf__buf__unsafe_size=0;
  uint16_t __temp1809v__buf__buf__unsafe_offset=0;
  uint16_t __temp1809v__buf__buf__unsafe_align=0;
  uint64_t __temp1809v__buf__pos=0;
  char __temp1810v____temp1797v____temp560v____temp475v__=0;
  char __temp1810v____temp1800v____temp1776v____temp475v__=0;
  char __temp1810v____temp1800v____temp1778v____temp1685v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1793v(&__temp1809v__map__keys__unsafe_ptr,&__temp1809v__map__keys__unsafe_size,&__temp1809v__map__keys__unsafe_offset,&__temp1809v__map__keys__unsafe_align,&__temp1809v__map__values__unsafe_ptr,&__temp1809v__map__values__unsafe_size,&__temp1809v__map__values__unsafe_offset,&__temp1809v__map__values__unsafe_align,&__temp1809v__buf__buf__unsafe_ptr,&__temp1809v__buf__buf__unsafe_size,&__temp1809v__buf__buf__unsafe_offset,&__temp1809v__buf__buf__unsafe_align,&__temp1809v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1801v(__temp1809v__map__keys__unsafe_ptr,__temp1809v__map__keys__unsafe_size,__temp1809v__map__keys__unsafe_offset,__temp1809v__map__keys__unsafe_align,__temp1809v__map__values__unsafe_ptr,__temp1809v__map__values__unsafe_size,__temp1809v__map__values__unsafe_offset,__temp1809v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1809v__map__keys__unsafe_ptr,&__temp1810v____temp1800v____temp1778v____temp1685v____temp475v__);
  if(__temp1810v____temp1800v____temp1778v____temp1685v____temp475v__){
  __temp1809v__map__keys__unsafe_size=0;
  __temp1809v__map__keys__unsafe_size=__temp1809v__map__keys__unsafe_size;
  __temp1809v__map__keys__unsafe_ptr=__temp1809v__map__keys__unsafe_ptr;
  free__temp466v(&__temp1809v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1809v__map__values__unsafe_ptr,&__temp1810v____temp1800v____temp1776v____temp475v__);
  if(__temp1810v____temp1800v____temp1776v____temp475v__){
  __temp1809v__map__values__unsafe_size=0;
  __temp1809v__map__values__unsafe_size=__temp1809v__map__values__unsafe_size;
  __temp1809v__map__values__unsafe_ptr=__temp1809v__map__values__unsafe_ptr;
  free__temp466v(&__temp1809v__map__values__unsafe_ptr);
  }
  exists__temp412v(__temp1809v__buf__buf__unsafe_ptr,&__temp1810v____temp1797v____temp560v____temp475v__);
  if(__temp1810v____temp1797v____temp560v____temp475v__){
  __temp1809v__buf__buf__unsafe_size=0;
  __temp1809v__buf__buf__unsafe_size=__temp1809v__buf__buf__unsafe_size;
  __temp1809v__buf__buf__unsafe_ptr=__temp1809v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1809v__buf__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1808v();return 0;}