#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1781v="hello";
const char* const __temp1786v="manio";
const char* const __temp1783v="hello world!";
const char* const __temp1788v="it's a me, manio.";
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

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp1796v(char** __temp1817v, uint64_t* __temp1818v, uint16_t* __temp1819v, uint16_t* __temp1820v) {
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1821v) {
  int value=0;
  *__temp1821v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1822v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1822v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1823v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1823v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1824v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1824v=z;
}

static inline __attribute__((always_inline)) void KB__temp444v(uint64_t x, uint64_t* __temp1825v) {
  uint64_t __temp445v=0;
  uint64_t __temp446v__=0;
  __temp445v=1024;
  mul__temp194v(x,__temp445v,&__temp446v__);
  goto __temp_return;
  __temp_return:
  *__temp1825v=__temp446v__;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1826v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1826v=z;
}

static inline __attribute__((always_inline)) void free__temp466v(char** __temp1827v) {
  char* allocated=*__temp1827v;
  if(allocated){
  free(allocated);
  }
  *__temp1827v=allocated;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1828v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1828v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1829v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1829v=z;
}

static inline __attribute__((always_inline)) void nat__temp470v(uint16_t x, uint64_t* __temp1830v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1830v=value;
}

static inline __attribute__((always_inline)) void zero__temp467v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__temp26v(char value, char* __temp1831v) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __temp_return;
  __temp_return:
  *__temp1831v=z;
}

static inline __attribute__((always_inline)) int alloc__temp459v(uint64_t bytes, char** __temp1832v) {
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
  *__temp1832v=allocated;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp473v(char** __temp1833v, uint64_t* __temp1834v, uint16_t* __temp1835v, uint16_t* __temp1836v, uint64_t size, char** __temp1837v, uint64_t* __temp1838v, uint16_t* __temp1839v, uint16_t* __temp1840v) {
  char* buffer__unsafe_ptr=*__temp1833v;
  uint64_t buffer__unsafe_size=*__temp1834v;
  uint16_t buffer__unsafe_offset=*__temp1835v;
  uint16_t buffer__unsafe_align=*__temp1836v;
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
  *__temp1833v=buffer__unsafe_ptr;
  *__temp1834v=buffer__unsafe_size;
  *__temp1835v=buffer__unsafe_offset;
  *__temp1836v=buffer__unsafe_align;
  *__temp1837v=__temp485v__unsafe_ptr;
  *__temp1838v=__temp485v__unsafe_size;
  *__temp1839v=__temp485v__unsafe_offset;
  *__temp1840v=__temp485v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp676v(char** __temp1841v, uint64_t* __temp1842v, uint16_t* __temp1843v, uint16_t* __temp1844v, char** __temp1845v, uint64_t* __temp1846v, uint16_t* __temp1847v, uint16_t* __temp1848v, uint64_t* __temp1849v) {
  char* buf__unsafe_ptr=*__temp1841v;
  uint64_t buf__unsafe_size=*__temp1842v;
  uint16_t buf__unsafe_offset=*__temp1843v;
  uint16_t buf__unsafe_align=*__temp1844v;
  uint64_t __temp677v=0;
  uint64_t __temp678v=0;
  uint64_t pos=0;
  __temp677v=0;
  __temp678v=__temp677v;
  pos=__temp678v;
  goto __temp_return;
  __temp_return:
  *__temp1841v=buf__unsafe_ptr;
  *__temp1842v=buf__unsafe_size;
  *__temp1843v=buf__unsafe_offset;
  *__temp1844v=buf__unsafe_align;
  *__temp1845v=buf__unsafe_ptr;
  *__temp1846v=buf__unsafe_size;
  *__temp1847v=buf__unsafe_offset;
  *__temp1848v=buf__unsafe_align;
  *__temp1849v=pos;
}

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1765v(char** __temp1850v, uint64_t* __temp1851v, uint16_t* __temp1852v, uint16_t* __temp1853v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=25;
  *__temp1850v=unsafe_ptr;
  *__temp1851v=unsafe_size;
  *__temp1852v=unsafe_offset;
  *__temp1853v=unsafe_align;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1681v(char** __temp1854v, uint64_t* __temp1855v, uint16_t* __temp1856v, uint16_t* __temp1857v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=33;
  *__temp1854v=unsafe_ptr;
  *__temp1855v=unsafe_size;
  *__temp1856v=unsafe_offset;
  *__temp1857v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp557v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __temp1858v) {
  goto __temp_return;
  __temp_return:
  *__temp1858v=buffer__unsafe_size;
}

int strmap__temp1680v(char** __temp1859v, uint64_t* __temp1860v, uint16_t* __temp1861v, uint16_t* __temp1862v, char** __temp1863v, uint64_t* __temp1864v, uint16_t* __temp1865v, uint16_t* __temp1866v, char** __temp1867v, uint64_t* __temp1868v, uint16_t* __temp1869v, uint16_t* __temp1870v) {
  char* values__unsafe_ptr=*__temp1859v;
  uint64_t values__unsafe_size=*__temp1860v;
  uint16_t values__unsafe_offset=*__temp1861v;
  uint16_t values__unsafe_align=*__temp1862v;
  char* __temp1683v__unsafe_ptr=0;
  uint64_t __temp1683v__unsafe_size=0;
  uint16_t __temp1683v__unsafe_offset=0;
  uint16_t __temp1683v__unsafe_align=0;
  char* __temp1684v__unsafe_ptr=0;
  uint64_t __temp1684v__unsafe_size=0;
  uint16_t __temp1684v__unsafe_offset=0;
  uint16_t __temp1684v__unsafe_align=0;
  uint64_t __temp1685v__=0;
  char* __temp1686v__unsafe_ptr=0;
  uint64_t __temp1686v__unsafe_size=0;
  uint16_t __temp1686v__unsafe_offset=0;
  uint16_t __temp1686v__unsafe_align=0;
  char __temp1687v____temp475v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint16_t keys__unsafe_offset=0;
  uint16_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry____temp_buffer____buffer__temp1681v(&__temp1683v__unsafe_ptr,&__temp1683v__unsafe_size,&__temp1683v__unsafe_offset,&__temp1683v__unsafe_align);
  __temp1684v__unsafe_ptr=__temp1683v__unsafe_ptr;
  __temp1684v__unsafe_size=__temp1683v__unsafe_size;
  __temp1684v__unsafe_offset=__temp1683v__unsafe_offset;
  __temp1684v__unsafe_align=__temp1683v__unsafe_align;
  len__temp557v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,&__temp1685v__);
  __temp_errcode=alloc__temp473v(&__temp1684v__unsafe_ptr,&__temp1684v__unsafe_size,&__temp1684v__unsafe_offset,&__temp1684v__unsafe_align,__temp1685v__,&__temp1686v__unsafe_ptr,&__temp1686v__unsafe_size,&__temp1686v__unsafe_offset,&__temp1686v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1686v__unsafe_ptr;
  keys__unsafe_size=__temp1686v__unsafe_size;
  keys__unsafe_offset=__temp1686v__unsafe_offset;
  keys__unsafe_align=__temp1686v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1687v____temp475v__);
  if(__temp1687v____temp475v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  keys__unsafe_ptr=keys__unsafe_ptr;
  free__temp466v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1859v=values__unsafe_ptr;
  *__temp1860v=values__unsafe_size;
  *__temp1861v=values__unsafe_offset;
  *__temp1862v=values__unsafe_align;
  *__temp1863v=keys__unsafe_ptr;
  *__temp1864v=keys__unsafe_size;
  *__temp1865v=keys__unsafe_offset;
  *__temp1866v=keys__unsafe_align;
  *__temp1867v=values__unsafe_ptr;
  *__temp1868v=values__unsafe_size;
  *__temp1869v=values__unsafe_offset;
  *__temp1870v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp592v(char** __temp1871v, uint64_t* __temp1872v, uint16_t* __temp1873v, uint16_t* __temp1874v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=1;
  *__temp1871v=unsafe_ptr;
  *__temp1872v=unsafe_size;
  *__temp1873v=unsafe_offset;
  *__temp1874v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1875v) {
  *__temp1875v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1876v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1876v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1877v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1877v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1878v) {
  *__temp1878v=to;
}

static inline __attribute__((always_inline)) void add__temp468v(char* allocated, uint64_t offset, char** __temp1879v) {
  char* element=0;
  char* __temp469v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp469v__);
  goto __temp_return;
  __temp_return:
  *__temp1879v=__temp469v__;
}

static inline __attribute__((always_inline)) int get__temp550v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __temp1880v) {
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
  *__temp1880v=__temp556v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp588v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1881v, uint64_t* __temp1882v, uint64_t* __temp1883v, char* __temp1884v) {
  goto __temp_return;
  __temp_return:
  *__temp1881v=unsafe_ptr;
  *__temp1882v=dat__pos;
  *__temp1883v=dat__length;
  *__temp1884v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp594v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1885v, uint64_t* __temp1886v, uint64_t* __temp1887v, char* __temp1888v) {
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
  *__temp1885v=__temp601v__unsafe_ptr;
  *__temp1886v=__temp601v__dat__pos;
  *__temp1887v=__temp601v__dat__length;
  *__temp1888v=__temp601v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp626v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1889v, uint64_t* __temp1890v, uint64_t* __temp1891v, char* __temp1892v) {
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
  *__temp1889v=__temp631v__unsafe_ptr;
  *__temp1890v=__temp631v__dat__pos;
  *__temp1891v=__temp631v__dat__length;
  *__temp1892v=__temp631v__dat__first;
  
  return __temp_errcode;
}

int str__temp632v(const char* c, char** __temp1893v, uint64_t* __temp1894v, uint64_t* __temp1895v, char* __temp1896v) {
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
  *__temp1893v=__temp639v__unsafe_ptr;
  *__temp1894v=__temp639v__dat__pos;
  *__temp1895v=__temp639v__dat__length;
  *__temp1896v=__temp639v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1299v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1897v, uint64_t* __temp1898v, uint64_t* __temp1899v, char* __temp1900v) {
  goto __temp_return;
  __temp_return:
  *__temp1897v=r__unsafe_ptr;
  *__temp1898v=r__dat__pos;
  *__temp1899v=r__dat__length;
  *__temp1900v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp640v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1901v) {
  goto __temp_return;
  __temp_return:
  *__temp1901v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1303v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1902v) {
  uint64_t __temp1304v=0;
  uint64_t __temp1305v__=0;
  char __temp1306v__=0;
  __temp1304v=0;
  len__temp640v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1305v__);
  eq__temp118v(__temp1304v,__temp1305v__,&__temp1306v__);
  goto __temp_return;
  __temp_return:
  *__temp1902v=__temp1306v__;
}

static inline __attribute__((always_inline)) void raw__temp1297v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1903v, uint64_t* __temp1904v, uint64_t* __temp1905v, char* __temp1906v) {
  goto __temp_return;
  __temp_return:
  *__temp1903v=r__s__unsafe_ptr;
  *__temp1904v=r__s__dat__pos;
  *__temp1905v=r__s__dat__length;
  *__temp1906v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp436v(uint64_t to, uint64_t* __temp1907v, uint64_t* __temp1908v) {
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
  *__temp1907v=from;
  *__temp1908v=to;
}

static inline __attribute__((always_inline)) int next__temp440v(uint64_t* __temp1909v, uint64_t r__to, uint64_t* __temp1910v) {
  uint64_t r__from=*__temp1909v;
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
  *__temp1909v=r__from;
  *__temp1910v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1911v) {
  goto __temp_return;
  __temp_return:
  *__temp1911v=value;
}

static inline __attribute__((always_inline)) void lshift__temp423v(uint64_t x__value, uint64_t y, uint64_t* __temp1912v) {
  uint64_t z=0;
  uint64_t __temp424v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp424v__value);
  goto __temp_return;
  __temp_return:
  *__temp1912v=__temp424v__value;
}

static inline __attribute__((always_inline)) void nat__temp408v(uint64_t x, uint64_t* __temp1913v) {
  int __temp409v=0;
  int __temp410v=0;
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1913v=value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1914v) {
  uint64_t __temp420v__=0;
  nat__temp408v(x__value,&__temp420v__);
  goto __temp_return;
  __temp_return:
  *__temp1914v=__temp420v__;
}

static inline __attribute__((always_inline)) void get__temp781v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1915v) {
  uint64_t __temp782v__=0;
  char* __temp783v__=0;
  add__temp170v(s__dat__pos,i,&__temp782v__);
  add__temp468v(s__unsafe_ptr,__temp782v__,&__temp783v__);
  goto __temp_return;
  __temp_return:
  *__temp1915v=__temp783v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1916v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1916v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1917v) {
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
  *__temp1917v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1248v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1918v) {
  uint64_t __temp1249v=0;
  uint64_t __temp1250v=0;
  uint64_t h=0;
  uint64_t __temp1251v__=0;
  uint64_t __temp1252v__from=0;
  uint64_t __temp1252v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1253v=0;
  uint64_t __temp1254v__=0;
  uint64_t i=0;
  uint64_t __temp1255v__value=0;
  uint64_t __temp1256v=0;
  uint64_t __temp1257v__value=0;
  uint64_t __temp1258v__=0;
  uint64_t __temp1259v__=0;
  char* __temp1260v__=0;
  char __temp1261v__value=0;
  uint64_t __temp1262v__=0;
  uint64_t __temp1263v__=0;
  uint64_t __temp1264v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1249v=5381;
  __temp1250v=__temp1249v;
  h=__temp1250v;
  len__temp640v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1251v__);
  range__temp436v(__temp1251v__,&__temp1252v__from,&__temp1252v__to);
  iter__from=__temp1252v__from;
  iter__to=__temp1252v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1254v__);
  __temp1253v=__temp_complain;
  i=__temp1254v__;
  __temp1253v=__temp1253v==0;
  if(!__temp1253v){
  break;
  }
  bits__temp413v(h,&__temp1255v__value);
  __temp1256v=5;
  lshift__temp423v(__temp1255v__value,__temp1256v,&__temp1257v__value);
  nat__temp419v(__temp1257v__value,&__temp1258v__);
  add__temp170v(__temp1258v__,h,&__temp1259v__);
  get__temp781v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1260v__);
  if(!__temp1260v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1261v__value,__temp1260v__,1);
  nat__temp411v(__temp1261v__value,&__temp1262v__);
  add__temp170v(__temp1259v__,__temp1262v__,&__temp1263v__);
  h=__temp1263v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1264v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1918v=__temp1264v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1919v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1919v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1920v) {
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
  *__temp1920v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp543v(char** __temp1921v, uint64_t* __temp1922v, uint16_t* __temp1923v, uint16_t* __temp1924v, uint64_t i, char** __temp1925v) {
  char* buffer__unsafe_ptr=*__temp1921v;
  uint64_t buffer__unsafe_size=*__temp1922v;
  uint16_t buffer__unsafe_offset=*__temp1923v;
  uint16_t buffer__unsafe_align=*__temp1924v;
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
  *__temp1921v=buffer__unsafe_ptr;
  *__temp1922v=buffer__unsafe_size;
  *__temp1923v=buffer__unsafe_offset;
  *__temp1924v=buffer__unsafe_align;
  *__temp1925v=__temp549v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp644v(char x, char y, char* __temp1926v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1926v=z;
}

static inline __attribute__((always_inline)) void eq__temp785v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1927v) {
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
  *__temp1927v=__temp789v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1928v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1928v=z;
}

int at__temp1579v(char** __temp1929v, uint64_t* __temp1930v, uint16_t* __temp1931v, uint16_t* __temp1932v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1933v) {
  char* data__unsafe_ptr=*__temp1929v;
  uint64_t data__unsafe_size=*__temp1930v;
  uint16_t data__unsafe_offset=*__temp1931v;
  uint16_t data__unsafe_align=*__temp1932v;
  char* __temp1580v__unsafe_ptr=0;
  uint64_t __temp1580v__dat__pos=0;
  uint64_t __temp1580v__dat__length=0;
  char __temp1580v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1581v__=0;
  uint64_t __temp1582v=0;
  uint64_t __temp1583v=0;
  char* __temp1584v__=0;
  char* __temp1585v__s__unsafe_ptr=0;
  uint64_t __temp1585v__s__dat__pos=0;
  uint64_t __temp1585v__s__dat__length=0;
  char __temp1585v__s__dat__first=0;
  uint64_t __temp1585v__cost=0;
  char* __temp1586v__unsafe_ptr=0;
  uint64_t __temp1586v__dat__pos=0;
  uint64_t __temp1586v__dat__length=0;
  char __temp1586v__dat__first=0;
  int __temp1587v=0;
  int __temp1588v__=0;
  uint64_t __temp1589v__=0;
  uint64_t n=0;
  uint64_t __temp1590v__=0;
  uint64_t pos=0;
  uint64_t __temp1591v__from=0;
  uint64_t __temp1591v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1592v=0;
  uint64_t __temp1593v__=0;
  uint64_t i=0;
  uint64_t __temp1594v__=0;
  uint64_t __temp1595v=0;
  uint64_t idx=0;
  char __temp1596v__=0;
  uint64_t __temp1597v__=0;
  uint64_t __temp1598v=0;
  char __temp1599v__=0;
  char* __temp1600v__=0;
  char* __temp1601v__s__unsafe_ptr=0;
  uint64_t __temp1601v__s__dat__pos=0;
  uint64_t __temp1601v__s__dat__length=0;
  char __temp1601v__s__dat__first=0;
  uint64_t __temp1601v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1602v__unsafe_ptr=0;
  uint64_t __temp1602v__dat__pos=0;
  uint64_t __temp1602v__dat__length=0;
  char __temp1602v__dat__first=0;
  char __temp1603v__=0;
  char* __temp1604v__=0;
  char* __temp1605v__unsafe_ptr=0;
  uint64_t __temp1605v__dat__pos=0;
  uint64_t __temp1605v__dat__length=0;
  char __temp1605v__dat__first=0;
  char __temp1606v__=0;
  char __temp1607v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1608v__=0;
  char* __temp1609v__s__unsafe_ptr=0;
  uint64_t __temp1609v__s__dat__pos=0;
  uint64_t __temp1609v__s__dat__length=0;
  char __temp1609v__s__dat__first=0;
  uint64_t __temp1609v__cost=0;
  char* __temp1610v__unsafe_ptr=0;
  uint64_t __temp1610v__dat__pos=0;
  uint64_t __temp1610v__dat__length=0;
  char __temp1610v__dat__first=0;
  char* __temp1611v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1299v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1580v__unsafe_ptr,&__temp1580v__dat__pos,&__temp1580v__dat__length,&__temp1580v__dat__first);
  k__unsafe_ptr=__temp1580v__unsafe_ptr;
  k__dat__pos=__temp1580v__dat__pos;
  k__dat__length=__temp1580v__dat__length;
  k__dat__first=__temp1580v__dat__first;
  is_zero__temp1303v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1581v__);
  if(__temp1581v__){
  __temp1582v=0;
  goto __temp_return;
  }
  __temp1583v=0;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1583v,&__temp1584v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1584v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1585v__s__unsafe_ptr,__temp1584v__,8);
  memcpy(&__temp1585v__s__dat__pos,__temp1584v__+8,8);
  memcpy(&__temp1585v__s__dat__length,__temp1584v__+16,8);
  memcpy(&__temp1585v__s__dat__first,__temp1584v__+24,1);
  memcpy(&__temp1585v__cost,__temp1584v__+25,8);
  raw__temp1297v(__temp1585v__s__unsafe_ptr,__temp1585v__s__dat__pos,__temp1585v__s__dat__length,__temp1585v__s__dat__first,__temp1585v__cost,&__temp1586v__unsafe_ptr,&__temp1586v__dat__pos,&__temp1586v__dat__length,&__temp1586v__dat__first);
  not__temp35v(__temp1587v,&__temp1588v__);
  len__temp557v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1589v__);
  n=__temp1589v__;
  __temp_errcode=hash__temp1248v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1590v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1590v__;
  range__temp436v(n,&__temp1591v__from,&__temp1591v__to);
  iter__from=__temp1591v__from;
  iter__to=__temp1591v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1593v__);
  __temp1592v=__temp_complain;
  i=__temp1593v__;
  __temp1592v=__temp1592v==0;
  if(!__temp1592v){
  break;
  }
  add__temp170v(pos,i,&__temp1594v__);
  __temp1595v=__temp1594v__;
  idx=__temp1595v;
  ge__temp319v(idx,n,&__temp1596v__);
  if(__temp1596v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1597v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1597v__;
  }
  __temp1598v=0;
  eq__temp118v(idx,__temp1598v,&__temp1599v__);
  if(__temp1599v__){
  continue;
  }
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1600v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1600v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1601v__s__unsafe_ptr,__temp1600v__,8);
  memcpy(&__temp1601v__s__dat__pos,__temp1600v__+8,8);
  memcpy(&__temp1601v__s__dat__length,__temp1600v__+16,8);
  memcpy(&__temp1601v__s__dat__first,__temp1600v__+24,1);
  memcpy(&__temp1601v__cost,__temp1600v__+25,8);
  entry__s__unsafe_ptr=__temp1601v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1601v__s__dat__pos;
  entry__s__dat__length=__temp1601v__s__dat__length;
  entry__s__dat__first=__temp1601v__s__dat__first;
  entry__cost=__temp1601v__cost;
  raw__temp1297v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1602v__unsafe_ptr,&__temp1602v__dat__pos,&__temp1602v__dat__length,&__temp1602v__dat__first);
  is_zero__temp1303v(__temp1602v__unsafe_ptr,__temp1602v__dat__pos,__temp1602v__dat__length,__temp1602v__dat__first,&__temp1603v__);
  if(__temp1603v__){
  __temp_errcode=mutget__temp543v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1604v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1604v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1604v__,&k__unsafe_ptr,8);
  memcpy(__temp1604v__+8,&k__dat__pos,8);
  memcpy(__temp1604v__+16,&k__dat__length,8);
  memcpy(__temp1604v__+24,&k__dat__first,1);
  memcpy(__temp1604v__+25,&i,8);
  __temp1582v=idx;
  goto __temp_return;
  }
  raw__temp1297v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1605v__unsafe_ptr,&__temp1605v__dat__pos,&__temp1605v__dat__length,&__temp1605v__dat__first);
  eq__temp785v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1605v__unsafe_ptr,__temp1605v__dat__pos,__temp1605v__dat__length,__temp1605v__dat__first,&__temp1606v__);
  if(__temp1606v__){
  __temp1582v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1607v__);
  if(__temp1607v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1608v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1609v__s__unsafe_ptr,__temp1608v__,8);
  memcpy(&__temp1609v__s__dat__pos,__temp1608v__+8,8);
  memcpy(&__temp1609v__s__dat__length,__temp1608v__+16,8);
  memcpy(&__temp1609v__s__dat__first,__temp1608v__+24,1);
  memcpy(&__temp1609v__cost,__temp1608v__+25,8);
  raw__temp1297v(__temp1609v__s__unsafe_ptr,__temp1609v__s__dat__pos,__temp1609v__s__dat__length,__temp1609v__s__dat__first,__temp1609v__cost,&__temp1610v__unsafe_ptr,&__temp1610v__dat__pos,&__temp1610v__dat__length,&__temp1610v__dat__first);
  k__unsafe_ptr=__temp1610v__unsafe_ptr;
  k__dat__pos=__temp1610v__dat__pos;
  k__dat__length=__temp1610v__dat__length;
  k__dat__first=__temp1610v__dat__first;
  __temp_errcode=mutget__temp543v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_offset,&data__unsafe_align,idx,&__temp1611v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1611v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1611v__,&tmp__unsafe_ptr,8);
  memcpy(__temp1611v__+8,&tmp__dat__pos,8);
  memcpy(__temp1611v__+16,&tmp__dat__length,8);
  memcpy(__temp1611v__+24,&tmp__dat__first,1);
  memcpy(__temp1611v__+25,&i,8);
  }
  }
  __temp_errcode=33;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1929v=data__unsafe_ptr;
  *__temp1930v=data__unsafe_size;
  *__temp1931v=data__unsafe_offset;
  *__temp1932v=data__unsafe_align;
  *__temp1933v=__temp1582v;
  
  return __temp_errcode;
}

int mutget__temp1704v(char** __temp1934v, uint64_t* __temp1935v, uint16_t* __temp1936v, uint16_t* __temp1937v, char** __temp1938v, uint64_t* __temp1939v, uint16_t* __temp1940v, uint16_t* __temp1941v, const char* key, char** __temp1942v) {
  char* keys__unsafe_ptr=*__temp1934v;
  uint64_t keys__unsafe_size=*__temp1935v;
  uint16_t keys__unsafe_offset=*__temp1936v;
  uint16_t keys__unsafe_align=*__temp1937v;
  char* values__unsafe_ptr=*__temp1938v;
  uint64_t values__unsafe_size=*__temp1939v;
  uint16_t values__unsafe_offset=*__temp1940v;
  uint16_t values__unsafe_align=*__temp1941v;
  char* __temp1705v__unsafe_ptr=0;
  uint64_t __temp1705v__dat__pos=0;
  uint64_t __temp1705v__dat__length=0;
  char __temp1705v__dat__first=0;
  uint64_t __temp1706v__=0;
  char* __temp1707v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(key,&__temp1705v__unsafe_ptr,&__temp1705v__dat__pos,&__temp1705v__dat__length,&__temp1705v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1579v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_offset,&keys__unsafe_align,__temp1705v__unsafe_ptr,__temp1705v__dat__pos,__temp1705v__dat__length,__temp1705v__dat__first,&__temp1706v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp543v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_offset,&values__unsafe_align,__temp1706v__,&__temp1707v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1934v=keys__unsafe_ptr;
  *__temp1935v=keys__unsafe_size;
  *__temp1936v=keys__unsafe_offset;
  *__temp1937v=keys__unsafe_align;
  *__temp1938v=values__unsafe_ptr;
  *__temp1939v=values__unsafe_size;
  *__temp1940v=values__unsafe_offset;
  *__temp1941v=values__unsafe_align;
  *__temp1942v=__temp1707v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp625v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1943v, uint64_t* __temp1944v, uint64_t* __temp1945v, char* __temp1946v) {
  goto __temp_return;
  __temp_return:
  *__temp1943v=other__unsafe_ptr;
  *__temp1944v=other__dat__pos;
  *__temp1945v=other__dat__length;
  *__temp1946v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp700v(char** __temp1947v, uint64_t* __temp1948v, uint16_t* __temp1949v, uint16_t* __temp1950v, uint64_t* __temp1951v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1952v, uint64_t* __temp1953v, uint64_t* __temp1954v, char* __temp1955v) {
  char* buf__unsafe_ptr=*__temp1947v;
  uint64_t buf__unsafe_size=*__temp1948v;
  uint16_t buf__unsafe_offset=*__temp1949v;
  uint16_t buf__unsafe_align=*__temp1950v;
  uint64_t pos=*__temp1951v;
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
  str__temp625v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp701v__unsafe_ptr,&__temp701v__dat__pos,&__temp701v__dat__length,&__temp701v__dat__first);
  other__unsafe_ptr=__temp701v__unsafe_ptr;
  other__dat__pos=__temp701v__dat__pos;
  other__dat__length=__temp701v__dat__length;
  other__dat__first=__temp701v__dat__first;
  len__temp640v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp702v__);
  add__temp170v(pos,__temp702v__,&__temp703v__);
  next_pos=__temp703v__;
  len__temp557v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__temp704v__);
  gt__temp271v(next_pos,__temp704v__,&__temp705v__);
  if(__temp705v__){
  __temp_errcode=17;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp706v=0;
  add__temp170v(pos,__temp706v,&__temp707v__);
  prev_pos=__temp707v__;
  pos=next_pos;
  __temp_errcode=str__temp594v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp708v__unsafe_ptr,&__temp708v__dat__pos,&__temp708v__dat__length,&__temp708v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1947v=buf__unsafe_ptr;
  *__temp1948v=buf__unsafe_size;
  *__temp1949v=buf__unsafe_offset;
  *__temp1950v=buf__unsafe_align;
  *__temp1951v=pos;
  *__temp1952v=__temp708v__unsafe_ptr;
  *__temp1953v=__temp708v__dat__pos;
  *__temp1954v=__temp708v__dat__length;
  *__temp1955v=__temp708v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1722v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, uint64_t* __temp1956v, char** __temp1957v, uint64_t* __temp1958v, uint64_t* __temp1959v, char* __temp1960v) {
  uint64_t pos=*__temp1956v;
  uint64_t __temp1723v=0;
  char __temp1724v__=0;
  uint64_t __temp1725v=0;
  uint64_t __temp1726v__=0;
  uint64_t __temp1727v=0;
  char* __temp1728v__=0;
  char* __temp1729v__s__unsafe_ptr=0;
  uint64_t __temp1729v__s__dat__pos=0;
  uint64_t __temp1729v__s__dat__length=0;
  char __temp1729v__s__dat__first=0;
  uint64_t __temp1729v__cost=0;
  char* __temp1730v__unsafe_ptr=0;
  uint64_t __temp1730v__dat__pos=0;
  uint64_t __temp1730v__dat__length=0;
  char __temp1730v__dat__first=0;
  char* __temp1731v__=0;
  char* __temp1732v__s__unsafe_ptr=0;
  uint64_t __temp1732v__s__dat__pos=0;
  uint64_t __temp1732v__s__dat__length=0;
  char __temp1732v__s__dat__first=0;
  uint64_t __temp1732v__cost=0;
  char* __temp1733v__unsafe_ptr=0;
  uint64_t __temp1733v__dat__pos=0;
  uint64_t __temp1733v__dat__length=0;
  char __temp1733v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1734v=0;
  uint64_t __temp1735v__=0;
  char* __temp1736v__unsafe_ptr=0;
  uint64_t __temp1736v__dat__pos=0;
  uint64_t __temp1736v__dat__length=0;
  char __temp1736v__dat__first=0;
  char __temp1737v__=0;
  char* __temp1738v__=0;
  char* __temp1739v__s__unsafe_ptr=0;
  uint64_t __temp1739v__s__dat__pos=0;
  uint64_t __temp1739v__s__dat__length=0;
  char __temp1739v__s__dat__first=0;
  uint64_t __temp1739v__cost=0;
  char* __temp1740v__unsafe_ptr=0;
  uint64_t __temp1740v__dat__pos=0;
  uint64_t __temp1740v__dat__length=0;
  char __temp1740v__dat__first=0;
  uint64_t __temp1741v=0;
  uint64_t __temp1742v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1723v=0;
  eq__temp118v(pos,__temp1723v,&__temp1724v__);
  if(__temp1724v__){
  __temp1725v=1;
  add__temp170v(pos,__temp1725v,&__temp1726v__);
  pos=__temp1726v__;
  __temp1727v=0;
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1727v,&__temp1728v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1728v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1729v__s__unsafe_ptr,__temp1728v__,8);
  memcpy(&__temp1729v__s__dat__pos,__temp1728v__+8,8);
  memcpy(&__temp1729v__s__dat__length,__temp1728v__+16,8);
  memcpy(&__temp1729v__s__dat__first,__temp1728v__+24,1);
  memcpy(&__temp1729v__cost,__temp1728v__+25,8);
  raw__temp1297v(__temp1729v__s__unsafe_ptr,__temp1729v__s__dat__pos,__temp1729v__s__dat__length,__temp1729v__s__dat__first,__temp1729v__cost,&__temp1730v__unsafe_ptr,&__temp1730v__dat__pos,&__temp1730v__dat__length,&__temp1730v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1731v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1731v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1732v__s__unsafe_ptr,__temp1731v__,8);
  memcpy(&__temp1732v__s__dat__pos,__temp1731v__+8,8);
  memcpy(&__temp1732v__s__dat__length,__temp1731v__+16,8);
  memcpy(&__temp1732v__s__dat__first,__temp1731v__+24,1);
  memcpy(&__temp1732v__cost,__temp1731v__+25,8);
  raw__temp1297v(__temp1732v__s__unsafe_ptr,__temp1732v__s__dat__pos,__temp1732v__s__dat__length,__temp1732v__s__dat__first,__temp1732v__cost,&__temp1733v__unsafe_ptr,&__temp1733v__dat__pos,&__temp1733v__dat__length,&__temp1733v__dat__first);
  ret__unsafe_ptr=__temp1733v__unsafe_ptr;
  ret__dat__pos=__temp1733v__dat__pos;
  ret__dat__length=__temp1733v__dat__length;
  ret__dat__first=__temp1733v__dat__first;
  __temp1734v=1;
  add__temp170v(pos,__temp1734v,&__temp1735v__);
  pos=__temp1735v__;
  while(1){
  raw__temp1299v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1736v__unsafe_ptr,&__temp1736v__dat__pos,&__temp1736v__dat__length,&__temp1736v__dat__first);
  is_zero__temp1303v(__temp1736v__unsafe_ptr,__temp1736v__dat__pos,__temp1736v__dat__length,__temp1736v__dat__first,&__temp1737v__);
  if(!__temp1737v__){
  break;
  }
  __temp_errcode=get__temp550v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,pos,&__temp1738v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1738v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1739v__s__unsafe_ptr,__temp1738v__,8);
  memcpy(&__temp1739v__s__dat__pos,__temp1738v__+8,8);
  memcpy(&__temp1739v__s__dat__length,__temp1738v__+16,8);
  memcpy(&__temp1739v__s__dat__first,__temp1738v__+24,1);
  memcpy(&__temp1739v__cost,__temp1738v__+25,8);
  raw__temp1297v(__temp1739v__s__unsafe_ptr,__temp1739v__s__dat__pos,__temp1739v__s__dat__length,__temp1739v__s__dat__first,__temp1739v__cost,&__temp1740v__unsafe_ptr,&__temp1740v__dat__pos,&__temp1740v__dat__length,&__temp1740v__dat__first);
  ret__unsafe_ptr=__temp1740v__unsafe_ptr;
  ret__dat__pos=__temp1740v__dat__pos;
  ret__dat__length=__temp1740v__dat__length;
  ret__dat__first=__temp1740v__dat__first;
  __temp1741v=1;
  add__temp170v(pos,__temp1741v,&__temp1742v__);
  pos=__temp1742v__;
  }
  __temp1730v__unsafe_ptr=ret__unsafe_ptr;
  __temp1730v__dat__pos=ret__dat__pos;
  __temp1730v__dat__length=ret__dat__length;
  __temp1730v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1956v=pos;
  *__temp1957v=__temp1730v__unsafe_ptr;
  *__temp1958v=__temp1730v__dat__pos;
  *__temp1959v=__temp1730v__dat__length;
  *__temp1960v=__temp1730v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp742v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp743v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1773v(char** __temp1961v, uint64_t* __temp1962v, uint16_t* __temp1963v, uint16_t* __temp1964v, uint64_t* __temp1965v, char** __temp1966v, uint64_t* __temp1967v, uint16_t* __temp1968v, uint16_t* __temp1969v, char** __temp1970v, uint64_t* __temp1971v, uint16_t* __temp1972v, uint16_t* __temp1973v) {
  char* buf__buf__unsafe_ptr=*__temp1961v;
  uint64_t buf__buf__unsafe_size=*__temp1962v;
  uint16_t buf__buf__unsafe_offset=*__temp1963v;
  uint16_t buf__buf__unsafe_align=*__temp1964v;
  uint64_t buf__pos=*__temp1965v;
  char* __temp1774v__unsafe_ptr=0;
  uint64_t __temp1774v__unsafe_size=0;
  uint16_t __temp1774v__unsafe_offset=0;
  uint16_t __temp1774v__unsafe_align=0;
  char* __temp1775v__unsafe_ptr=0;
  uint64_t __temp1775v__unsafe_size=0;
  uint16_t __temp1775v__unsafe_offset=0;
  uint16_t __temp1775v__unsafe_align=0;
  uint64_t __temp1776v=0;
  char* __temp1777v__unsafe_ptr=0;
  uint64_t __temp1777v__unsafe_size=0;
  uint16_t __temp1777v__unsafe_offset=0;
  uint16_t __temp1777v__unsafe_align=0;
  char __temp1778v____temp475v__=0;
  char* __temp1779v__keys__unsafe_ptr=0;
  uint64_t __temp1779v__keys__unsafe_size=0;
  uint16_t __temp1779v__keys__unsafe_offset=0;
  uint16_t __temp1779v__keys__unsafe_align=0;
  char* __temp1779v__values__unsafe_ptr=0;
  uint64_t __temp1779v__values__unsafe_size=0;
  uint16_t __temp1779v__values__unsafe_offset=0;
  uint16_t __temp1779v__values__unsafe_align=0;
  char __temp1780v____temp1687v____temp475v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint16_t map__keys__unsafe_offset=0;
  uint16_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint16_t map__values__unsafe_offset=0;
  uint16_t map__values__unsafe_align=0;
  char* __temp1782v__=0;
  char* __temp1784v__unsafe_ptr=0;
  uint64_t __temp1784v__dat__pos=0;
  uint64_t __temp1784v__dat__length=0;
  char __temp1784v__dat__first=0;
  char* __temp1785v__unsafe_ptr=0;
  uint64_t __temp1785v__dat__pos=0;
  uint64_t __temp1785v__dat__length=0;
  char __temp1785v__dat__first=0;
  char* __temp1787v__=0;
  char* __temp1789v__unsafe_ptr=0;
  uint64_t __temp1789v__dat__pos=0;
  uint64_t __temp1789v__dat__length=0;
  char __temp1789v__dat__first=0;
  char* __temp1790v__unsafe_ptr=0;
  uint64_t __temp1790v__dat__pos=0;
  uint64_t __temp1790v__dat__length=0;
  char __temp1790v__dat__first=0;
  char* __temp1791v__buf__unsafe_ptr=0;
  uint64_t __temp1791v__buf__unsafe_size=0;
  uint16_t __temp1791v__buf__unsafe_offset=0;
  uint16_t __temp1791v__buf__unsafe_align=0;
  uint64_t __temp1791v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint16_t it__buf__unsafe_offset=0;
  uint16_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1792v=0;
  char* __temp1793v__unsafe_ptr=0;
  uint64_t __temp1793v__dat__pos=0;
  uint64_t __temp1793v__dat__length=0;
  char __temp1793v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1765v(&__temp1774v__unsafe_ptr,&__temp1774v__unsafe_size,&__temp1774v__unsafe_offset,&__temp1774v__unsafe_align);
  __temp1775v__unsafe_ptr=__temp1774v__unsafe_ptr;
  __temp1775v__unsafe_size=__temp1774v__unsafe_size;
  __temp1775v__unsafe_offset=__temp1774v__unsafe_offset;
  __temp1775v__unsafe_align=__temp1774v__unsafe_align;
  __temp1776v=128;
  __temp_errcode=alloc__temp473v(&__temp1775v__unsafe_ptr,&__temp1775v__unsafe_size,&__temp1775v__unsafe_offset,&__temp1775v__unsafe_align,__temp1776v,&__temp1777v__unsafe_ptr,&__temp1777v__unsafe_size,&__temp1777v__unsafe_offset,&__temp1777v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1680v(&__temp1777v__unsafe_ptr,&__temp1777v__unsafe_size,&__temp1777v__unsafe_offset,&__temp1777v__unsafe_align,&__temp1779v__keys__unsafe_ptr,&__temp1779v__keys__unsafe_size,&__temp1779v__keys__unsafe_offset,&__temp1779v__keys__unsafe_align,&__temp1779v__values__unsafe_ptr,&__temp1779v__values__unsafe_size,&__temp1779v__values__unsafe_offset,&__temp1779v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp1704v(&__temp1779v__keys__unsafe_ptr,&__temp1779v__keys__unsafe_size,&__temp1779v__keys__unsafe_offset,&__temp1779v__keys__unsafe_align,&__temp1779v__values__unsafe_ptr,&__temp1779v__values__unsafe_size,&__temp1779v__values__unsafe_offset,&__temp1779v__values__unsafe_align,__temp1781v,&__temp1782v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp632v(__temp1783v,&__temp1784v__unsafe_ptr,&__temp1784v__dat__pos,&__temp1784v__dat__length,&__temp1784v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp700v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1784v__unsafe_ptr,__temp1784v__dat__pos,__temp1784v__dat__length,__temp1784v__dat__first,&__temp1785v__unsafe_ptr,&__temp1785v__dat__pos,&__temp1785v__dat__length,&__temp1785v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1782v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1782v__,&__temp1785v__unsafe_ptr,8);
  memcpy(__temp1782v__+8,&__temp1785v__dat__pos,8);
  memcpy(__temp1782v__+16,&__temp1785v__dat__length,8);
  memcpy(__temp1782v__+24,&__temp1785v__dat__first,1);
  __temp_errcode=mutget__temp1704v(&__temp1779v__keys__unsafe_ptr,&__temp1779v__keys__unsafe_size,&__temp1779v__keys__unsafe_offset,&__temp1779v__keys__unsafe_align,&__temp1779v__values__unsafe_ptr,&__temp1779v__values__unsafe_size,&__temp1779v__values__unsafe_offset,&__temp1779v__values__unsafe_align,__temp1786v,&__temp1787v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp632v(__temp1788v,&__temp1789v__unsafe_ptr,&__temp1789v__dat__pos,&__temp1789v__dat__length,&__temp1789v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp700v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,__temp1789v__unsafe_ptr,__temp1789v__dat__pos,__temp1789v__dat__length,__temp1789v__dat__first,&__temp1790v__unsafe_ptr,&__temp1790v__dat__pos,&__temp1790v__dat__length,&__temp1790v__dat__first);
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
  bufpos__temp676v(&__temp1779v__keys__unsafe_ptr,&__temp1779v__keys__unsafe_size,&__temp1779v__keys__unsafe_offset,&__temp1779v__keys__unsafe_align,&__temp1791v__buf__unsafe_ptr,&__temp1791v__buf__unsafe_size,&__temp1791v__buf__unsafe_offset,&__temp1791v__buf__unsafe_align,&__temp1791v__pos);
  it__pos=__temp1791v__pos;
  while(1){
  __temp_complain=next__temp1722v(__temp1779v__keys__unsafe_ptr,__temp1779v__keys__unsafe_size,__temp1779v__keys__unsafe_offset,__temp1779v__keys__unsafe_align,&it__pos,&__temp1793v__unsafe_ptr,&__temp1793v__dat__pos,&__temp1793v__dat__length,&__temp1793v__dat__first);
  __temp1792v=__temp_complain;
  key__unsafe_ptr=__temp1793v__unsafe_ptr;
  key__dat__pos=__temp1793v__dat__pos;
  key__dat__length=__temp1793v__dat__length;
  key__dat__first=__temp1793v__dat__first;
  __temp1792v=__temp1792v==0;
  if(!__temp1792v){
  break;
  }
  print__temp742v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  map__keys__unsafe_ptr=__temp1779v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1779v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1779v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1779v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1779v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1779v__values__unsafe_size;
  map__values__unsafe_offset=__temp1779v__values__unsafe_offset;
  map__values__unsafe_align=__temp1779v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1780v____temp1687v____temp475v__);
  if(__temp1780v____temp1687v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1778v____temp475v__);
  if(__temp1778v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1961v=buf__buf__unsafe_ptr;
  *__temp1962v=buf__buf__unsafe_size;
  *__temp1963v=buf__buf__unsafe_offset;
  *__temp1964v=buf__buf__unsafe_align;
  *__temp1965v=buf__pos;
  *__temp1966v=map__keys__unsafe_ptr;
  *__temp1967v=map__keys__unsafe_size;
  *__temp1968v=map__keys__unsafe_offset;
  *__temp1969v=map__keys__unsafe_align;
  *__temp1970v=map__values__unsafe_ptr;
  *__temp1971v=map__values__unsafe_size;
  *__temp1972v=map__values__unsafe_offset;
  *__temp1973v=map__values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int test2__temp1795v(char** __temp1974v, uint64_t* __temp1975v, uint16_t* __temp1976v, uint16_t* __temp1977v, char** __temp1978v, uint64_t* __temp1979v, uint16_t* __temp1980v, uint16_t* __temp1981v, char** __temp1982v, uint64_t* __temp1983v, uint16_t* __temp1984v, uint16_t* __temp1985v, uint64_t* __temp1986v) {
  char* __temp1798v__unsafe_ptr=0;
  uint64_t __temp1798v__unsafe_size=0;
  uint16_t __temp1798v__unsafe_offset=0;
  uint16_t __temp1798v__unsafe_align=0;
  uint64_t __temp1799v=0;
  uint64_t __temp1800v__=0;
  char* __temp1801v__unsafe_ptr=0;
  uint64_t __temp1801v__unsafe_size=0;
  uint16_t __temp1801v__unsafe_offset=0;
  uint16_t __temp1801v__unsafe_align=0;
  char __temp1802v____temp475v__=0;
  char* __temp1803v__buf__unsafe_ptr=0;
  uint64_t __temp1803v__buf__unsafe_size=0;
  uint16_t __temp1803v__buf__unsafe_offset=0;
  uint16_t __temp1803v__buf__unsafe_align=0;
  uint64_t __temp1803v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint16_t buf__buf__unsafe_offset=0;
  uint16_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1804v__keys__unsafe_ptr=0;
  uint64_t __temp1804v__keys__unsafe_size=0;
  uint16_t __temp1804v__keys__unsafe_offset=0;
  uint16_t __temp1804v__keys__unsafe_align=0;
  char* __temp1804v__values__unsafe_ptr=0;
  uint64_t __temp1804v__values__unsafe_size=0;
  uint16_t __temp1804v__values__unsafe_offset=0;
  uint16_t __temp1804v__values__unsafe_align=0;
  char __temp1805v____temp1778v____temp475v__=0;
  char __temp1805v____temp1780v____temp1687v____temp475v__=0;
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
  char____temp_buffer____buffer__temp1796v(&__temp1798v__unsafe_ptr,&__temp1798v__unsafe_size,&__temp1798v__unsafe_offset,&__temp1798v__unsafe_align);
  __temp1799v=4;
  KB__temp444v(__temp1799v,&__temp1800v__);
  __temp_errcode=alloc__temp473v(&__temp1798v__unsafe_ptr,&__temp1798v__unsafe_size,&__temp1798v__unsafe_offset,&__temp1798v__unsafe_align,__temp1800v__,&__temp1801v__unsafe_ptr,&__temp1801v__unsafe_size,&__temp1801v__unsafe_offset,&__temp1801v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp676v(&__temp1801v__unsafe_ptr,&__temp1801v__unsafe_size,&__temp1801v__unsafe_offset,&__temp1801v__unsafe_align,&__temp1803v__buf__unsafe_ptr,&__temp1803v__buf__unsafe_size,&__temp1803v__buf__unsafe_offset,&__temp1803v__buf__unsafe_align,&__temp1803v__pos);
  buf__buf__unsafe_ptr=__temp1803v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1803v__buf__unsafe_size;
  buf__buf__unsafe_offset=__temp1803v__buf__unsafe_offset;
  buf__buf__unsafe_align=__temp1803v__buf__unsafe_align;
  buf__pos=__temp1803v__pos;
  __temp_errcode=test__temp1773v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_offset,&buf__buf__unsafe_align,&buf__pos,&__temp1804v__keys__unsafe_ptr,&__temp1804v__keys__unsafe_size,&__temp1804v__keys__unsafe_offset,&__temp1804v__keys__unsafe_align,&__temp1804v__values__unsafe_ptr,&__temp1804v__values__unsafe_size,&__temp1804v__values__unsafe_offset,&__temp1804v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1804v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1804v__keys__unsafe_size;
  map__keys__unsafe_offset=__temp1804v__keys__unsafe_offset;
  map__keys__unsafe_align=__temp1804v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1804v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1804v__values__unsafe_size;
  map__values__unsafe_offset=__temp1804v__values__unsafe_offset;
  map__values__unsafe_align=__temp1804v__values__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(map__keys__unsafe_ptr,&__temp1805v____temp1780v____temp1687v____temp475v__);
  if(__temp1805v____temp1780v____temp1687v____temp475v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  map__keys__unsafe_ptr=map__keys__unsafe_ptr;
  free__temp466v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1805v____temp1778v____temp475v__);
  if(__temp1805v____temp1778v____temp475v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  map__values__unsafe_ptr=map__values__unsafe_ptr;
  free__temp466v(&map__values__unsafe_ptr);
  }
  exists__temp412v(buf__buf__unsafe_ptr,&__temp1802v____temp475v__);
  if(__temp1802v____temp475v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  buf__buf__unsafe_ptr=buf__buf__unsafe_ptr;
  free__temp466v(&buf__buf__unsafe_ptr);
  }
  __temp_return:
  *__temp1974v=map__keys__unsafe_ptr;
  *__temp1975v=map__keys__unsafe_size;
  *__temp1976v=map__keys__unsafe_offset;
  *__temp1977v=map__keys__unsafe_align;
  *__temp1978v=map__values__unsafe_ptr;
  *__temp1979v=map__values__unsafe_size;
  *__temp1980v=map__values__unsafe_offset;
  *__temp1981v=map__values__unsafe_align;
  *__temp1982v=buf__buf__unsafe_ptr;
  *__temp1983v=buf__buf__unsafe_size;
  *__temp1984v=buf__buf__unsafe_offset;
  *__temp1985v=buf__buf__unsafe_align;
  *__temp1986v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1301v(const char* r, char** __temp1987v, uint64_t* __temp1988v, uint64_t* __temp1989v, char* __temp1990v) {
  char* __temp1302v__unsafe_ptr=0;
  uint64_t __temp1302v__dat__pos=0;
  uint64_t __temp1302v__dat__length=0;
  char __temp1302v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp632v(r,&__temp1302v__unsafe_ptr,&__temp1302v__dat__pos,&__temp1302v__dat__length,&__temp1302v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1987v=__temp1302v__unsafe_ptr;
  *__temp1988v=__temp1302v__dat__pos;
  *__temp1989v=__temp1302v__dat__length;
  *__temp1990v=__temp1302v__dat__first;
  
  return __temp_errcode;
}

int find__temp1345v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint16_t data__unsafe_offset, uint16_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1991v) {
  char* __temp1346v__unsafe_ptr=0;
  uint64_t __temp1346v__dat__pos=0;
  uint64_t __temp1346v__dat__length=0;
  char __temp1346v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1347v__=0;
  uint64_t __temp1348v=0;
  uint64_t __temp1349v=0;
  char* __temp1350v__=0;
  char* __temp1351v__s__unsafe_ptr=0;
  uint64_t __temp1351v__s__dat__pos=0;
  uint64_t __temp1351v__s__dat__length=0;
  char __temp1351v__s__dat__first=0;
  uint64_t __temp1351v__cost=0;
  char* __temp1352v__unsafe_ptr=0;
  uint64_t __temp1352v__dat__pos=0;
  uint64_t __temp1352v__dat__length=0;
  char __temp1352v__dat__first=0;
  int __temp1353v=0;
  int __temp1354v__=0;
  uint64_t __temp1355v__=0;
  uint64_t n=0;
  uint64_t __temp1356v__=0;
  uint64_t pos=0;
  uint64_t __temp1357v__from=0;
  uint64_t __temp1357v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1358v=0;
  uint64_t __temp1359v__=0;
  uint64_t i=0;
  uint64_t __temp1360v__=0;
  uint64_t __temp1361v=0;
  uint64_t idx=0;
  char __temp1362v__=0;
  uint64_t __temp1363v__=0;
  uint64_t __temp1364v=0;
  char __temp1365v__=0;
  char* __temp1366v__=0;
  char* __temp1367v__s__unsafe_ptr=0;
  uint64_t __temp1367v__s__dat__pos=0;
  uint64_t __temp1367v__s__dat__length=0;
  char __temp1367v__s__dat__first=0;
  uint64_t __temp1367v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1368v__unsafe_ptr=0;
  uint64_t __temp1368v__dat__pos=0;
  uint64_t __temp1368v__dat__length=0;
  char __temp1368v__dat__first=0;
  char __temp1369v__=0;
  char* __temp1370v__unsafe_ptr=0;
  uint64_t __temp1370v__dat__pos=0;
  uint64_t __temp1370v__dat__length=0;
  char __temp1370v__dat__first=0;
  char __temp1371v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1299v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1346v__unsafe_ptr,&__temp1346v__dat__pos,&__temp1346v__dat__length,&__temp1346v__dat__first);
  k__unsafe_ptr=__temp1346v__unsafe_ptr;
  k__dat__pos=__temp1346v__dat__pos;
  k__dat__length=__temp1346v__dat__length;
  k__dat__first=__temp1346v__dat__first;
  is_zero__temp1303v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1347v__);
  if(__temp1347v__){
  __temp1348v=0;
  goto __temp_return;
  }
  __temp1349v=0;
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,__temp1349v,&__temp1350v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1350v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1351v__s__unsafe_ptr,__temp1350v__,8);
  memcpy(&__temp1351v__s__dat__pos,__temp1350v__+8,8);
  memcpy(&__temp1351v__s__dat__length,__temp1350v__+16,8);
  memcpy(&__temp1351v__s__dat__first,__temp1350v__+24,1);
  memcpy(&__temp1351v__cost,__temp1350v__+25,8);
  raw__temp1297v(__temp1351v__s__unsafe_ptr,__temp1351v__s__dat__pos,__temp1351v__s__dat__length,__temp1351v__s__dat__first,__temp1351v__cost,&__temp1352v__unsafe_ptr,&__temp1352v__dat__pos,&__temp1352v__dat__length,&__temp1352v__dat__first);
  not__temp35v(__temp1353v,&__temp1354v__);
  len__temp557v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,&__temp1355v__);
  n=__temp1355v__;
  __temp_errcode=hash__temp1248v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1356v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1356v__;
  range__temp436v(n,&__temp1357v__from,&__temp1357v__to);
  iter__from=__temp1357v__from;
  iter__to=__temp1357v__to;
  while(1){
  __temp_complain=next__temp440v(&iter__from,iter__to,&__temp1359v__);
  __temp1358v=__temp_complain;
  i=__temp1359v__;
  __temp1358v=__temp1358v==0;
  if(!__temp1358v){
  break;
  }
  add__temp170v(pos,i,&__temp1360v__);
  __temp1361v=__temp1360v__;
  idx=__temp1361v;
  ge__temp319v(idx,n,&__temp1362v__);
  if(__temp1362v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1363v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1363v__;
  }
  __temp1364v=0;
  eq__temp118v(idx,__temp1364v,&__temp1365v__);
  if(__temp1365v__){
  continue;
  }
  __temp_errcode=get__temp550v(data__unsafe_ptr,data__unsafe_size,data__unsafe_offset,data__unsafe_align,idx,&__temp1366v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1366v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1367v__s__unsafe_ptr,__temp1366v__,8);
  memcpy(&__temp1367v__s__dat__pos,__temp1366v__+8,8);
  memcpy(&__temp1367v__s__dat__length,__temp1366v__+16,8);
  memcpy(&__temp1367v__s__dat__first,__temp1366v__+24,1);
  memcpy(&__temp1367v__cost,__temp1366v__+25,8);
  entry__s__unsafe_ptr=__temp1367v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1367v__s__dat__pos;
  entry__s__dat__length=__temp1367v__s__dat__length;
  entry__s__dat__first=__temp1367v__s__dat__first;
  entry__cost=__temp1367v__cost;
  raw__temp1297v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1368v__unsafe_ptr,&__temp1368v__dat__pos,&__temp1368v__dat__length,&__temp1368v__dat__first);
  is_zero__temp1303v(__temp1368v__unsafe_ptr,__temp1368v__dat__pos,__temp1368v__dat__length,__temp1368v__dat__first,&__temp1369v__);
  if(__temp1369v__){
  continue;
  }
  raw__temp1297v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1370v__unsafe_ptr,&__temp1370v__dat__pos,&__temp1370v__dat__length,&__temp1370v__dat__first);
  eq__temp785v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1370v__unsafe_ptr,__temp1370v__dat__pos,__temp1370v__dat__length,__temp1370v__dat__first,&__temp1371v__);
  if(__temp1371v__){
  __temp1348v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=32;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1991v=__temp1348v;
  
  return __temp_errcode;
}

int get__temp1696v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint16_t keys__unsafe_offset, uint16_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint16_t values__unsafe_offset, uint16_t values__unsafe_align, const char* key, char** __temp1992v) {
  char* __temp1697v__unsafe_ptr=0;
  uint64_t __temp1697v__dat__pos=0;
  uint64_t __temp1697v__dat__length=0;
  char __temp1697v__dat__first=0;
  uint64_t __temp1698v__=0;
  char* __temp1699v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1301v(key,&__temp1697v__unsafe_ptr,&__temp1697v__dat__pos,&__temp1697v__dat__length,&__temp1697v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1345v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_offset,keys__unsafe_align,__temp1697v__unsafe_ptr,__temp1697v__dat__pos,__temp1697v__dat__length,__temp1697v__dat__first,&__temp1698v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp550v(values__unsafe_ptr,values__unsafe_size,values__unsafe_offset,values__unsafe_align,__temp1698v__,&__temp1699v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1992v=__temp1699v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1806v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint16_t map__keys__unsafe_offset, uint16_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint16_t map__values__unsafe_offset, uint16_t map__values__unsafe_align) {
  char* __temp1807v__=0;
  char* __temp1808v__unsafe_ptr=0;
  uint64_t __temp1808v__dat__pos=0;
  uint64_t __temp1808v__dat__length=0;
  char __temp1808v__dat__first=0;
  char* __temp1810v__=0;
  char* __temp1811v__unsafe_ptr=0;
  uint64_t __temp1811v__dat__pos=0;
  uint64_t __temp1811v__dat__length=0;
  char __temp1811v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1696v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1781v,&__temp1807v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1807v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1808v__unsafe_ptr,__temp1807v__,8);
  memcpy(&__temp1808v__dat__pos,__temp1807v__+8,8);
  memcpy(&__temp1808v__dat__length,__temp1807v__+16,8);
  memcpy(&__temp1808v__dat__first,__temp1807v__+24,1);
  print__temp742v(__temp1808v__unsafe_ptr,__temp1808v__dat__pos,__temp1808v__dat__length,__temp1808v__dat__first);
  __temp_errcode=get__temp1696v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_offset,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_offset,map__values__unsafe_align,__temp1786v,&__temp1810v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1810v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1811v__unsafe_ptr,__temp1810v__,8);
  memcpy(&__temp1811v__dat__pos,__temp1810v__+8,8);
  memcpy(&__temp1811v__dat__length,__temp1810v__+16,8);
  memcpy(&__temp1811v__dat__first,__temp1810v__+24,1);
  print__temp742v(__temp1811v__unsafe_ptr,__temp1811v__dat__pos,__temp1811v__dat__length,__temp1811v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1813v() {
  char* __temp1814v__map__keys__unsafe_ptr=0;
  uint64_t __temp1814v__map__keys__unsafe_size=0;
  uint16_t __temp1814v__map__keys__unsafe_offset=0;
  uint16_t __temp1814v__map__keys__unsafe_align=0;
  char* __temp1814v__map__values__unsafe_ptr=0;
  uint64_t __temp1814v__map__values__unsafe_size=0;
  uint16_t __temp1814v__map__values__unsafe_offset=0;
  uint16_t __temp1814v__map__values__unsafe_align=0;
  char* __temp1814v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1814v__buf__buf__unsafe_size=0;
  uint16_t __temp1814v__buf__buf__unsafe_offset=0;
  uint16_t __temp1814v__buf__buf__unsafe_align=0;
  uint64_t __temp1814v__buf__pos=0;
  char __temp1815v____temp1802v____temp475v__=0;
  char __temp1815v____temp1805v____temp1778v____temp475v__=0;
  char __temp1815v____temp1805v____temp1780v____temp1687v____temp475v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test2__temp1795v(&__temp1814v__map__keys__unsafe_ptr,&__temp1814v__map__keys__unsafe_size,&__temp1814v__map__keys__unsafe_offset,&__temp1814v__map__keys__unsafe_align,&__temp1814v__map__values__unsafe_ptr,&__temp1814v__map__values__unsafe_size,&__temp1814v__map__values__unsafe_offset,&__temp1814v__map__values__unsafe_align,&__temp1814v__buf__buf__unsafe_ptr,&__temp1814v__buf__buf__unsafe_size,&__temp1814v__buf__buf__unsafe_offset,&__temp1814v__buf__buf__unsafe_align,&__temp1814v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1806v(__temp1814v__map__keys__unsafe_ptr,__temp1814v__map__keys__unsafe_size,__temp1814v__map__keys__unsafe_offset,__temp1814v__map__keys__unsafe_align,__temp1814v__map__values__unsafe_ptr,__temp1814v__map__values__unsafe_size,__temp1814v__map__values__unsafe_offset,__temp1814v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1814v__map__keys__unsafe_ptr,&__temp1815v____temp1805v____temp1780v____temp1687v____temp475v__);
  if(__temp1815v____temp1805v____temp1780v____temp1687v____temp475v__){
  __temp1814v__map__keys__unsafe_size=0;
  __temp1814v__map__keys__unsafe_size=__temp1814v__map__keys__unsafe_size;
  __temp1814v__map__keys__unsafe_ptr=__temp1814v__map__keys__unsafe_ptr;
  free__temp466v(&__temp1814v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1814v__map__values__unsafe_ptr,&__temp1815v____temp1805v____temp1778v____temp475v__);
  if(__temp1815v____temp1805v____temp1778v____temp475v__){
  __temp1814v__map__values__unsafe_size=0;
  __temp1814v__map__values__unsafe_size=__temp1814v__map__values__unsafe_size;
  __temp1814v__map__values__unsafe_ptr=__temp1814v__map__values__unsafe_ptr;
  free__temp466v(&__temp1814v__map__values__unsafe_ptr);
  }
  exists__temp412v(__temp1814v__buf__buf__unsafe_ptr,&__temp1815v____temp1802v____temp475v__);
  if(__temp1815v____temp1802v____temp475v__){
  __temp1814v__buf__buf__unsafe_size=0;
  __temp1814v__buf__buf__unsafe_size=__temp1814v__buf__buf__unsafe_size;
  __temp1814v__buf__buf__unsafe_ptr=__temp1814v__buf__buf__unsafe_ptr;
  free__temp466v(&__temp1814v__buf__buf__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1813v();return 0;}