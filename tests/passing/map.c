#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
const char* const __temp1766v="manio";
const char* const __temp1761v="hello";
const char* const __temp1763v="hello world!";
const char* const __temp1768v="it's a me, manio.";
static const char* __temp_all_errcodes[33] = {"noerr",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1739v(char** __temp1786v, uint64_t* __temp1787v, uint64_t* __temp1788v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=25;
  *__temp1786v=unsafe_ptr;
  *__temp1787v=unsafe_size;
  *__temp1788v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1789v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1789v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1790v) {
  char* allocated=*__temp1790v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1790v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1791v) {
  int value=0;
  *__temp1791v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1792v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1792v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1793v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1793v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1794v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1794v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1795v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1795v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1796v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1796v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1797v) {
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
  *__temp1797v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1798v, uint64_t* __temp1799v, uint64_t* __temp1800v, uint64_t size, char** __temp1801v, uint64_t* __temp1802v, uint64_t* __temp1803v) {
  char* buffer__unsafe_ptr=*__temp1798v;
  uint64_t buffer__unsafe_size=*__temp1799v;
  uint64_t buffer__unsafe_align=*__temp1800v;
  int __temp468v=0;
  char __temp469v__=0;
  uint64_t __temp470v=0;
  char __temp472v__=0;
  uint64_t __temp473v=0;
  char __temp474v__=0;
  uint64_t __temp475v=0;
  uint64_t __temp476v__=0;
  uint64_t __temp478v=0;
  char __temp479v__=0;
  uint64_t __temp480v__=0;
  uint64_t bytes=0;
  char* __temp481v__=0;
  uint64_t __temp482v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp118v(buffer__unsafe_size,size,&__temp472v__);
  if(__temp472v__){
  __temp473v=0;
  neq__temp142v(size,__temp473v,&__temp474v__);
  if(__temp474v__){
  __temp475v=0;
  mul__temp194v(buffer__unsafe_align,size,&__temp476v__);
  zero__temp462v(buffer__unsafe_ptr,__temp475v,__temp476v__);
  }
  goto __temp_return;
  }
  __temp478v=0;
  neq__temp142v(buffer__unsafe_size,__temp478v,&__temp479v__);
  if(__temp479v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp194v(buffer__unsafe_align,size,&__temp480v__);
  bytes=__temp480v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp458v(bytes,&__temp481v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp481v__;
  __temp482v=0;
  zero__temp462v(buffer__unsafe_ptr,__temp482v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buffer__unsafe_ptr,&__temp469v__);
  if(__temp469v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp461v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1798v=buffer__unsafe_ptr;
  *__temp1799v=buffer__unsafe_size;
  *__temp1800v=buffer__unsafe_align;
  *__temp1801v=buffer__unsafe_ptr;
  *__temp1802v=buffer__unsafe_size;
  *__temp1803v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1655v(char** __temp1804v, uint64_t* __temp1805v, uint64_t* __temp1806v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=33;
  *__temp1804v=unsafe_ptr;
  *__temp1805v=unsafe_size;
  *__temp1806v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1807v) {
  goto __temp_return;
  __temp_return:
  *__temp1807v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1654v(char** __temp1808v, uint64_t* __temp1809v, uint64_t* __temp1810v, char** __temp1811v, uint64_t* __temp1812v, uint64_t* __temp1813v, char** __temp1814v, uint64_t* __temp1815v, uint64_t* __temp1816v) {
  char* values__unsafe_ptr=*__temp1808v;
  uint64_t values__unsafe_size=*__temp1809v;
  uint64_t values__unsafe_align=*__temp1810v;
  char* __temp1657v__unsafe_ptr=0;
  uint64_t __temp1657v__unsafe_size=0;
  uint64_t __temp1657v__unsafe_align=0;
  char* __temp1658v__unsafe_ptr=0;
  uint64_t __temp1658v__unsafe_size=0;
  uint64_t __temp1658v__unsafe_align=0;
  uint64_t __temp1659v__=0;
  char* __temp1660v__unsafe_ptr=0;
  uint64_t __temp1660v__unsafe_size=0;
  uint64_t __temp1660v__unsafe_align=0;
  char __temp1661v____temp469v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint64_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry____temp_buffer____buffer__temp1655v(&__temp1657v__unsafe_ptr,&__temp1657v__unsafe_size,&__temp1657v__unsafe_align);
  __temp1658v__unsafe_ptr=__temp1657v__unsafe_ptr;
  __temp1658v__unsafe_size=__temp1657v__unsafe_size;
  __temp1658v__unsafe_align=__temp1657v__unsafe_align;
  len__temp537v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,&__temp1659v__);
  __temp_errcode=alloc__temp467v(&__temp1658v__unsafe_ptr,&__temp1658v__unsafe_size,&__temp1658v__unsafe_align,__temp1659v__,&__temp1660v__unsafe_ptr,&__temp1660v__unsafe_size,&__temp1660v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1660v__unsafe_ptr;
  keys__unsafe_size=__temp1660v__unsafe_size;
  keys__unsafe_align=__temp1660v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1661v____temp469v__);
  if(__temp1661v____temp469v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  free__temp461v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1808v=values__unsafe_ptr;
  *__temp1809v=values__unsafe_size;
  *__temp1810v=values__unsafe_align;
  *__temp1811v=keys__unsafe_ptr;
  *__temp1812v=keys__unsafe_size;
  *__temp1813v=keys__unsafe_align;
  *__temp1814v=values__unsafe_ptr;
  *__temp1815v=values__unsafe_size;
  *__temp1816v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void KB__temp443v(uint64_t x, uint64_t* __temp1817v) {
  uint64_t __temp444v=0;
  uint64_t __temp445v__=0;
  __temp444v=1024;
  mul__temp194v(x,__temp444v,&__temp445v__);
  goto __temp_return;
  __temp_return:
  *__temp1817v=__temp445v__;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1818v, uint64_t* __temp1819v, uint64_t* __temp1820v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1818v=unsafe_ptr;
  *__temp1819v=unsafe_size;
  *__temp1820v=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__temp538v(uint64_t size, char** __temp1821v, uint64_t* __temp1822v, uint64_t* __temp1823v) {
  char* __temp541v__unsafe_ptr=0;
  uint64_t __temp541v__unsafe_size=0;
  uint64_t __temp541v__unsafe_align=0;
  char* __temp542v__unsafe_ptr=0;
  uint64_t __temp542v__unsafe_size=0;
  uint64_t __temp542v__unsafe_align=0;
  char* __temp543v__unsafe_ptr=0;
  uint64_t __temp543v__unsafe_size=0;
  uint64_t __temp543v__unsafe_align=0;
  char __temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp541v__unsafe_ptr,&__temp541v__unsafe_size,&__temp541v__unsafe_align);
  __temp542v__unsafe_ptr=__temp541v__unsafe_ptr;
  __temp542v__unsafe_size=__temp541v__unsafe_size;
  __temp542v__unsafe_align=__temp541v__unsafe_align;
  __temp_errcode=alloc__temp467v(&__temp542v__unsafe_ptr,&__temp542v__unsafe_size,&__temp542v__unsafe_align,size,&__temp543v__unsafe_ptr,&__temp543v__unsafe_size,&__temp543v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(__temp543v__unsafe_ptr,&__temp544v____temp469v__);
  if(__temp544v____temp469v__){
  __temp543v__unsafe_size=0;
  __temp543v__unsafe_size=__temp543v__unsafe_size;
  free__temp461v(&__temp543v__unsafe_ptr);
  }
  __temp_return:
  *__temp1821v=__temp543v__unsafe_ptr;
  *__temp1822v=__temp543v__unsafe_size;
  *__temp1823v=__temp543v__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1824v, uint64_t* __temp1825v, uint64_t* __temp1826v, char** __temp1827v, uint64_t* __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v) {
  char* buf__unsafe_ptr=*__temp1824v;
  uint64_t buf__unsafe_size=*__temp1825v;
  uint64_t buf__unsafe_align=*__temp1826v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1824v=buf__unsafe_ptr;
  *__temp1825v=buf__unsafe_size;
  *__temp1826v=buf__unsafe_align;
  *__temp1827v=buf__unsafe_ptr;
  *__temp1828v=buf__unsafe_size;
  *__temp1829v=buf__unsafe_align;
  *__temp1830v=pos;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1831v) {
  *__temp1831v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1832v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1832v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1833v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1833v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1834v) {
  *__temp1834v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1835v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1835v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1836v) {
  char __temp534v__=0;
  uint64_t __temp535v__=0;
  char* __temp536v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp534v__);
  if(__temp534v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp535v__);
  add__temp463v(buffer__unsafe_ptr,__temp535v__,&__temp536v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1836v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1837v, uint64_t* __temp1838v, uint64_t* __temp1839v, char* __temp1840v) {
  goto __temp_return;
  __temp_return:
  *__temp1837v=unsafe_ptr;
  *__temp1838v=dat__pos;
  *__temp1839v=dat__length;
  *__temp1840v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1841v, uint64_t* __temp1842v, uint64_t* __temp1843v, char* __temp1844v) {
  char* unsafe_ptr=0;
  uint64_t __temp580v=0;
  char __temp581v__=0;
  char* __temp582v__unsafe_ptr=0;
  uint64_t __temp582v__dat__pos=0;
  uint64_t __temp582v__dat__length=0;
  char __temp582v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  unsafe_ptr=buf__unsafe_ptr;
  __temp580v=1;
  neq__temp142v(buf__unsafe_align,__temp580v,&__temp581v__);
  if(__temp581v__){
  __temp_errcode=13;
  goto __temp_failure;
  }
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp582v__unsafe_ptr,&__temp582v__dat__pos,&__temp582v__dat__length,&__temp582v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1841v=__temp582v__unsafe_ptr;
  *__temp1842v=__temp582v__dat__pos;
  *__temp1843v=__temp582v__dat__length;
  *__temp1844v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1845v, uint64_t* __temp1846v, uint64_t* __temp1847v, char* __temp1848v) {
  uint64_t __temp608v=0;
  char __temp609v__=0;
  char* __temp610v__=0;
  char __temp611v__value=0;
  char first=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__dat__pos=0;
  uint64_t __temp612v__dat__length=0;
  char __temp612v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp608v=0;
  neq__temp142v(length,__temp608v,&__temp609v__);
  if(__temp609v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp610v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp610v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp611v__value,__temp610v__,1);
  first=__temp611v__value;
  }
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp612v__unsafe_ptr,&__temp612v__dat__pos,&__temp612v__dat__length,&__temp612v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1845v=__temp612v__unsafe_ptr;
  *__temp1846v=__temp612v__dat__pos;
  *__temp1847v=__temp612v__dat__length;
  *__temp1848v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1849v, uint64_t* __temp1850v, uint64_t* __temp1851v, char* __temp1852v) {
  char* __temp614v__unsafe_ptr=0;
  uint64_t __temp614v__unsafe_size=0;
  uint64_t __temp614v__unsafe_align=0;
  char* __temp615v__unsafe_ptr=0;
  uint64_t __temp615v__unsafe_size=0;
  uint64_t __temp615v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp616v__=0;
  uint64_t length=0;
  uint64_t __temp617v=0;
  uint64_t __temp618v__=0;
  uint64_t __temp619v=0;
  char* __temp620v__unsafe_ptr=0;
  uint64_t __temp620v__dat__pos=0;
  uint64_t __temp620v__dat__length=0;
  char __temp620v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char____temp_buffer____buffer__temp539v(&__temp614v__unsafe_ptr,&__temp614v__unsafe_size,&__temp614v__unsafe_align);
  __temp615v__unsafe_ptr=__temp614v__unsafe_ptr;
  __temp615v__unsafe_size=__temp614v__unsafe_size;
  __temp615v__unsafe_align=__temp614v__unsafe_align;
  buf__unsafe_ptr=__temp615v__unsafe_ptr;
  buf__unsafe_size=__temp615v__unsafe_size;
  buf__unsafe_align=__temp615v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp616v__);
  buf__unsafe_ptr=__temp616v__;
  if(c){
  length=strlen(c);
  }
  __temp617v=1;
  add__temp170v(length,__temp617v,&__temp618v__);
  buf__unsafe_size=__temp618v__;
  __temp619v=0;
  __temp_errcode=str__temp607v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp619v,length,&__temp620v__unsafe_ptr,&__temp620v__dat__pos,&__temp620v__dat__length,&__temp620v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1849v=__temp620v__unsafe_ptr;
  *__temp1850v=__temp620v__dat__pos;
  *__temp1851v=__temp620v__dat__length;
  *__temp1852v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1273v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1853v, uint64_t* __temp1854v, uint64_t* __temp1855v, char* __temp1856v) {
  goto __temp_return;
  __temp_return:
  *__temp1853v=r__unsafe_ptr;
  *__temp1854v=r__dat__pos;
  *__temp1855v=r__dat__length;
  *__temp1856v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1857v) {
  goto __temp_return;
  __temp_return:
  *__temp1857v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1277v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1858v) {
  uint64_t __temp1278v=0;
  uint64_t __temp1279v__=0;
  char __temp1280v__=0;
  __temp1278v=0;
  len__temp621v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1279v__);
  eq__temp118v(__temp1278v,__temp1279v__,&__temp1280v__);
  goto __temp_return;
  __temp_return:
  *__temp1858v=__temp1280v__;
}

static inline __attribute__((always_inline)) void raw__temp1271v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1859v, uint64_t* __temp1860v, uint64_t* __temp1861v, char* __temp1862v) {
  goto __temp_return;
  __temp_return:
  *__temp1859v=r__s__unsafe_ptr;
  *__temp1860v=r__s__dat__pos;
  *__temp1861v=r__s__dat__length;
  *__temp1862v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1863v, uint64_t* __temp1864v) {
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
  *__temp1863v=from;
  *__temp1864v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1865v, uint64_t r__to, uint64_t* __temp1866v) {
  uint64_t r__from=*__temp1865v;
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
  *__temp1865v=r__from;
  *__temp1866v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1867v) {
  goto __temp_return;
  __temp_return:
  *__temp1867v=value;
}

static inline __attribute__((always_inline)) void lshift__temp422v(uint64_t x__value, uint64_t y, uint64_t* __temp1868v) {
  uint64_t z=0;
  uint64_t __temp423v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp423v__value);
  goto __temp_return;
  __temp_return:
  *__temp1868v=__temp423v__value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1869v) {
  goto __temp_return;
  __temp_return:
  *__temp1869v=x__value;
}

static inline __attribute__((always_inline)) void get__temp755v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1870v) {
  uint64_t __temp756v__=0;
  char* __temp757v__=0;
  add__temp170v(s__dat__pos,i,&__temp756v__);
  add__temp463v(s__unsafe_ptr,__temp756v__,&__temp757v__);
  goto __temp_return;
  __temp_return:
  *__temp1870v=__temp757v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1871v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1871v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1872v) {
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
  *__temp1872v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1222v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1873v) {
  uint64_t __temp1223v=0;
  uint64_t __temp1224v=0;
  uint64_t h=0;
  uint64_t __temp1225v__=0;
  uint64_t __temp1226v__from=0;
  uint64_t __temp1226v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1227v=0;
  uint64_t __temp1228v__=0;
  uint64_t i=0;
  uint64_t __temp1229v__value=0;
  uint64_t __temp1230v=0;
  uint64_t __temp1231v__value=0;
  uint64_t __temp1232v__=0;
  uint64_t __temp1233v__=0;
  char* __temp1234v__=0;
  char __temp1235v__value=0;
  uint64_t __temp1236v__=0;
  uint64_t __temp1237v__=0;
  uint64_t __temp1238v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1223v=5381;
  __temp1224v=__temp1223v;
  h=__temp1224v;
  len__temp621v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1225v__);
  range__temp435v(__temp1225v__,&__temp1226v__from,&__temp1226v__to);
  iter__from=__temp1226v__from;
  iter__to=__temp1226v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1228v__);
  __temp1227v=__temp_complain;
  i=__temp1228v__;
  __temp1227v=__temp1227v==0;
  if(!__temp1227v){
  break;
  }
  bits__temp413v(h,&__temp1229v__value);
  __temp1230v=5;
  lshift__temp422v(__temp1229v__value,__temp1230v,&__temp1231v__value);
  nat__temp419v(__temp1231v__value,&__temp1232v__);
  add__temp170v(__temp1232v__,h,&__temp1233v__);
  get__temp755v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1234v__);
  if(!__temp1234v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1235v__value,__temp1234v__,1);
  nat__temp411v(__temp1235v__value,&__temp1236v__);
  add__temp170v(__temp1233v__,__temp1236v__,&__temp1237v__);
  h=__temp1237v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1238v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1873v=__temp1238v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1874v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1874v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1875v) {
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
  *__temp1875v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1876v, uint64_t* __temp1877v, uint64_t* __temp1878v, uint64_t i, char** __temp1879v) {
  char* buffer__unsafe_ptr=*__temp1876v;
  uint64_t buffer__unsafe_size=*__temp1877v;
  uint64_t buffer__unsafe_align=*__temp1878v;
  char __temp530v__=0;
  uint64_t __temp531v__=0;
  char* __temp532v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(i,buffer__unsafe_size,&__temp530v__);
  if(__temp530v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp194v(i,buffer__unsafe_align,&__temp531v__);
  add__temp463v(buffer__unsafe_ptr,__temp531v__,&__temp532v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1876v=buffer__unsafe_ptr;
  *__temp1877v=buffer__unsafe_size;
  *__temp1878v=buffer__unsafe_align;
  *__temp1879v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp625v(char x, char y, char* __temp1880v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1880v=z;
}

static inline __attribute__((always_inline)) void eq__temp759v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1881v) {
  uint64_t __temp760v__=0;
  uint64_t n=0;
  uint64_t __temp761v__=0;
  char __temp762v__=0;
  char __temp763v=0;
  char __temp764v__=0;
  char __temp765v=0;
  char z=0;
  len__temp621v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp760v__);
  n=__temp760v__;
  len__temp621v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp761v__);
  neq__temp142v(n,__temp761v__,&__temp762v__);
  if(__temp762v__){
  __temp763v=0;
  goto __temp_return;
  }
  neq__temp625v(x__dat__first,y__dat__first,&__temp764v__);
  if(__temp764v__){
  __temp765v=0;
  __temp763v=__temp765v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp763v=z;
  goto __temp_return;
  __temp_return:
  *__temp1881v=__temp763v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1882v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1882v=z;
}

int at__temp1553v(char** __temp1883v, uint64_t* __temp1884v, uint64_t* __temp1885v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1886v) {
  char* data__unsafe_ptr=*__temp1883v;
  uint64_t data__unsafe_size=*__temp1884v;
  uint64_t data__unsafe_align=*__temp1885v;
  char* __temp1554v__unsafe_ptr=0;
  uint64_t __temp1554v__dat__pos=0;
  uint64_t __temp1554v__dat__length=0;
  char __temp1554v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1555v__=0;
  uint64_t __temp1556v=0;
  uint64_t __temp1557v=0;
  char* __temp1558v__=0;
  char* __temp1559v__s__unsafe_ptr=0;
  uint64_t __temp1559v__s__dat__pos=0;
  uint64_t __temp1559v__s__dat__length=0;
  char __temp1559v__s__dat__first=0;
  uint64_t __temp1559v__cost=0;
  char* __temp1560v__unsafe_ptr=0;
  uint64_t __temp1560v__dat__pos=0;
  uint64_t __temp1560v__dat__length=0;
  char __temp1560v__dat__first=0;
  int __temp1561v=0;
  int __temp1562v__=0;
  uint64_t __temp1563v__=0;
  uint64_t n=0;
  uint64_t __temp1564v__=0;
  uint64_t pos=0;
  uint64_t __temp1565v__from=0;
  uint64_t __temp1565v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1566v=0;
  uint64_t __temp1567v__=0;
  uint64_t i=0;
  uint64_t __temp1568v__=0;
  uint64_t __temp1569v=0;
  uint64_t idx=0;
  char __temp1570v__=0;
  uint64_t __temp1571v__=0;
  uint64_t __temp1572v=0;
  char __temp1573v__=0;
  char* __temp1574v__=0;
  char* __temp1575v__s__unsafe_ptr=0;
  uint64_t __temp1575v__s__dat__pos=0;
  uint64_t __temp1575v__s__dat__length=0;
  char __temp1575v__s__dat__first=0;
  uint64_t __temp1575v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1576v__unsafe_ptr=0;
  uint64_t __temp1576v__dat__pos=0;
  uint64_t __temp1576v__dat__length=0;
  char __temp1576v__dat__first=0;
  char __temp1577v__=0;
  char* __temp1578v__=0;
  char* __temp1579v__unsafe_ptr=0;
  uint64_t __temp1579v__dat__pos=0;
  uint64_t __temp1579v__dat__length=0;
  char __temp1579v__dat__first=0;
  char __temp1580v__=0;
  char __temp1581v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
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
  char* __temp1585v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1273v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1554v__unsafe_ptr,&__temp1554v__dat__pos,&__temp1554v__dat__length,&__temp1554v__dat__first);
  k__unsafe_ptr=__temp1554v__unsafe_ptr;
  k__dat__pos=__temp1554v__dat__pos;
  k__dat__length=__temp1554v__dat__length;
  k__dat__first=__temp1554v__dat__first;
  is_zero__temp1277v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1555v__);
  if(__temp1555v__){
  __temp1556v=0;
  goto __temp_return;
  }
  __temp1557v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1557v,&__temp1558v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1558v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1559v__s__unsafe_ptr,__temp1558v__,8);
  memcpy(&__temp1559v__s__dat__pos,__temp1558v__+8,8);
  memcpy(&__temp1559v__s__dat__length,__temp1558v__+16,8);
  memcpy(&__temp1559v__s__dat__first,__temp1558v__+24,1);
  memcpy(&__temp1559v__cost,__temp1558v__+25,8);
  raw__temp1271v(__temp1559v__s__unsafe_ptr,__temp1559v__s__dat__pos,__temp1559v__s__dat__length,__temp1559v__s__dat__first,__temp1559v__cost,&__temp1560v__unsafe_ptr,&__temp1560v__dat__pos,&__temp1560v__dat__length,&__temp1560v__dat__first);
  not__temp35v(__temp1561v,&__temp1562v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1563v__);
  n=__temp1563v__;
  __temp_errcode=hash__temp1222v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1564v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1564v__;
  range__temp435v(n,&__temp1565v__from,&__temp1565v__to);
  iter__from=__temp1565v__from;
  iter__to=__temp1565v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1567v__);
  __temp1566v=__temp_complain;
  i=__temp1567v__;
  __temp1566v=__temp1566v==0;
  if(!__temp1566v){
  break;
  }
  add__temp170v(pos,i,&__temp1568v__);
  __temp1569v=__temp1568v__;
  idx=__temp1569v;
  ge__temp319v(idx,n,&__temp1570v__);
  if(__temp1570v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1571v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1571v__;
  }
  __temp1572v=0;
  eq__temp118v(idx,__temp1572v,&__temp1573v__);
  if(__temp1573v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1574v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1574v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1575v__s__unsafe_ptr,__temp1574v__,8);
  memcpy(&__temp1575v__s__dat__pos,__temp1574v__+8,8);
  memcpy(&__temp1575v__s__dat__length,__temp1574v__+16,8);
  memcpy(&__temp1575v__s__dat__first,__temp1574v__+24,1);
  memcpy(&__temp1575v__cost,__temp1574v__+25,8);
  entry__s__unsafe_ptr=__temp1575v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1575v__s__dat__pos;
  entry__s__dat__length=__temp1575v__s__dat__length;
  entry__s__dat__first=__temp1575v__s__dat__first;
  entry__cost=__temp1575v__cost;
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1576v__unsafe_ptr,&__temp1576v__dat__pos,&__temp1576v__dat__length,&__temp1576v__dat__first);
  is_zero__temp1277v(__temp1576v__unsafe_ptr,__temp1576v__dat__pos,__temp1576v__dat__length,__temp1576v__dat__first,&__temp1577v__);
  if(__temp1577v__){
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1578v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1578v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1578v__,&k__unsafe_ptr,8);
  memcpy(__temp1578v__+8,&k__dat__pos,8);
  memcpy(__temp1578v__+16,&k__dat__length,8);
  memcpy(__temp1578v__+24,&k__dat__first,1);
  memcpy(__temp1578v__+25,&i,8);
  __temp1556v=idx;
  goto __temp_return;
  }
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1579v__unsafe_ptr,&__temp1579v__dat__pos,&__temp1579v__dat__length,&__temp1579v__dat__first);
  eq__temp759v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1579v__unsafe_ptr,__temp1579v__dat__pos,__temp1579v__dat__length,__temp1579v__dat__first,&__temp1580v__);
  if(__temp1580v__){
  __temp1556v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1581v__);
  if(__temp1581v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1582v__);
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
  raw__temp1271v(__temp1583v__s__unsafe_ptr,__temp1583v__s__dat__pos,__temp1583v__s__dat__length,__temp1583v__s__dat__first,__temp1583v__cost,&__temp1584v__unsafe_ptr,&__temp1584v__dat__pos,&__temp1584v__dat__length,&__temp1584v__dat__first);
  k__unsafe_ptr=__temp1584v__unsafe_ptr;
  k__dat__pos=__temp1584v__dat__pos;
  k__dat__length=__temp1584v__dat__length;
  k__dat__first=__temp1584v__dat__first;
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1585v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1585v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1585v__,&tmp__unsafe_ptr,8);
  memcpy(__temp1585v__+8,&tmp__dat__pos,8);
  memcpy(__temp1585v__+16,&tmp__dat__length,8);
  memcpy(__temp1585v__+24,&tmp__dat__first,1);
  memcpy(__temp1585v__+25,&i,8);
  }
  }
  __temp_errcode=31;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1883v=data__unsafe_ptr;
  *__temp1884v=data__unsafe_size;
  *__temp1885v=data__unsafe_align;
  *__temp1886v=__temp1556v;
  
  return __temp_errcode;
}

int mutget__temp1678v(char** __temp1887v, uint64_t* __temp1888v, uint64_t* __temp1889v, char** __temp1890v, uint64_t* __temp1891v, uint64_t* __temp1892v, const char* key, char** __temp1893v) {
  char* keys__unsafe_ptr=*__temp1887v;
  uint64_t keys__unsafe_size=*__temp1888v;
  uint64_t keys__unsafe_align=*__temp1889v;
  char* values__unsafe_ptr=*__temp1890v;
  uint64_t values__unsafe_size=*__temp1891v;
  uint64_t values__unsafe_align=*__temp1892v;
  char* __temp1679v__unsafe_ptr=0;
  uint64_t __temp1679v__dat__pos=0;
  uint64_t __temp1679v__dat__length=0;
  char __temp1679v__dat__first=0;
  uint64_t __temp1680v__=0;
  char* __temp1681v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(key,&__temp1679v__unsafe_ptr,&__temp1679v__dat__pos,&__temp1679v__dat__length,&__temp1679v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1553v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_align,__temp1679v__unsafe_ptr,__temp1679v__dat__pos,__temp1679v__dat__length,__temp1679v__dat__first,&__temp1680v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp529v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_align,__temp1680v__,&__temp1681v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1887v=keys__unsafe_ptr;
  *__temp1888v=keys__unsafe_size;
  *__temp1889v=keys__unsafe_align;
  *__temp1890v=values__unsafe_ptr;
  *__temp1891v=values__unsafe_size;
  *__temp1892v=values__unsafe_align;
  *__temp1893v=__temp1681v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp606v(char* other__unsafe_ptr, uint64_t other__dat__pos, uint64_t other__dat__length, char other__dat__first, char** __temp1894v, uint64_t* __temp1895v, uint64_t* __temp1896v, char* __temp1897v) {
  goto __temp_return;
  __temp_return:
  *__temp1894v=other__unsafe_ptr;
  *__temp1895v=other__dat__pos;
  *__temp1896v=other__dat__length;
  *__temp1897v=other__dat__first;
}

static inline __attribute__((always_inline)) int copy__temp676v(char** __temp1898v, uint64_t* __temp1899v, uint64_t* __temp1900v, uint64_t* __temp1901v, char* _other__unsafe_ptr, uint64_t _other__dat__pos, uint64_t _other__dat__length, char _other__dat__first, char** __temp1902v, uint64_t* __temp1903v, uint64_t* __temp1904v, char* __temp1905v) {
  char* buf__unsafe_ptr=*__temp1898v;
  uint64_t buf__unsafe_size=*__temp1899v;
  uint64_t buf__unsafe_align=*__temp1900v;
  uint64_t pos=*__temp1901v;
  char* __temp677v__unsafe_ptr=0;
  uint64_t __temp677v__dat__pos=0;
  uint64_t __temp677v__dat__length=0;
  char __temp677v__dat__first=0;
  char* other__unsafe_ptr=0;
  uint64_t other__dat__pos=0;
  uint64_t other__dat__length=0;
  char other__dat__first=0;
  uint64_t __temp678v__=0;
  uint64_t __temp679v__=0;
  uint64_t next_pos=0;
  uint64_t __temp680v__=0;
  char __temp681v__=0;
  uint64_t __temp682v=0;
  uint64_t __temp683v__=0;
  uint64_t prev_pos=0;
  char* __temp684v__unsafe_ptr=0;
  uint64_t __temp684v__dat__pos=0;
  uint64_t __temp684v__dat__length=0;
  char __temp684v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp606v(_other__unsafe_ptr,_other__dat__pos,_other__dat__length,_other__dat__first,&__temp677v__unsafe_ptr,&__temp677v__dat__pos,&__temp677v__dat__length,&__temp677v__dat__first);
  other__unsafe_ptr=__temp677v__unsafe_ptr;
  other__dat__pos=__temp677v__dat__pos;
  other__dat__length=__temp677v__dat__length;
  other__dat__first=__temp677v__dat__first;
  len__temp621v(other__unsafe_ptr,other__dat__pos,other__dat__length,other__dat__first,&__temp678v__);
  add__temp170v(pos,__temp678v__,&__temp679v__);
  next_pos=__temp679v__;
  len__temp537v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,&__temp680v__);
  gt__temp271v(next_pos,__temp680v__,&__temp681v__);
  if(__temp681v__){
  __temp_errcode=16;
  goto __temp_failure;
  }
  memcpy(buf__unsafe_ptr+pos,other__unsafe_ptr+other__dat__pos,other__dat__length);
  __temp682v=0;
  add__temp170v(pos,__temp682v,&__temp683v__);
  prev_pos=__temp683v__;
  pos=next_pos;
  __temp_errcode=str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,prev_pos,other__dat__length,other__dat__first,&__temp684v__unsafe_ptr,&__temp684v__dat__pos,&__temp684v__dat__length,&__temp684v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1898v=buf__unsafe_ptr;
  *__temp1899v=buf__unsafe_size;
  *__temp1900v=buf__unsafe_align;
  *__temp1901v=pos;
  *__temp1902v=__temp684v__unsafe_ptr;
  *__temp1903v=__temp684v__dat__pos;
  *__temp1904v=__temp684v__dat__length;
  *__temp1905v=__temp684v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int next__temp1696v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, uint64_t* __temp1906v, char** __temp1907v, uint64_t* __temp1908v, uint64_t* __temp1909v, char* __temp1910v) {
  uint64_t pos=*__temp1906v;
  uint64_t __temp1697v=0;
  char __temp1698v__=0;
  uint64_t __temp1699v=0;
  uint64_t __temp1700v__=0;
  uint64_t __temp1701v=0;
  char* __temp1702v__=0;
  char* __temp1703v__s__unsafe_ptr=0;
  uint64_t __temp1703v__s__dat__pos=0;
  uint64_t __temp1703v__s__dat__length=0;
  char __temp1703v__s__dat__first=0;
  uint64_t __temp1703v__cost=0;
  char* __temp1704v__unsafe_ptr=0;
  uint64_t __temp1704v__dat__pos=0;
  uint64_t __temp1704v__dat__length=0;
  char __temp1704v__dat__first=0;
  char* __temp1705v__=0;
  char* __temp1706v__s__unsafe_ptr=0;
  uint64_t __temp1706v__s__dat__pos=0;
  uint64_t __temp1706v__s__dat__length=0;
  char __temp1706v__s__dat__first=0;
  uint64_t __temp1706v__cost=0;
  char* __temp1707v__unsafe_ptr=0;
  uint64_t __temp1707v__dat__pos=0;
  uint64_t __temp1707v__dat__length=0;
  char __temp1707v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1708v=0;
  uint64_t __temp1709v__=0;
  char* __temp1710v__unsafe_ptr=0;
  uint64_t __temp1710v__dat__pos=0;
  uint64_t __temp1710v__dat__length=0;
  char __temp1710v__dat__first=0;
  char __temp1711v__=0;
  char* __temp1712v__=0;
  char* __temp1713v__s__unsafe_ptr=0;
  uint64_t __temp1713v__s__dat__pos=0;
  uint64_t __temp1713v__s__dat__length=0;
  char __temp1713v__s__dat__first=0;
  uint64_t __temp1713v__cost=0;
  char* __temp1714v__unsafe_ptr=0;
  uint64_t __temp1714v__dat__pos=0;
  uint64_t __temp1714v__dat__length=0;
  char __temp1714v__dat__first=0;
  uint64_t __temp1715v=0;
  uint64_t __temp1716v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1697v=0;
  eq__temp118v(pos,__temp1697v,&__temp1698v__);
  if(__temp1698v__){
  __temp1699v=1;
  add__temp170v(pos,__temp1699v,&__temp1700v__);
  pos=__temp1700v__;
  __temp1701v=0;
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1701v,&__temp1702v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1702v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1703v__s__unsafe_ptr,__temp1702v__,8);
  memcpy(&__temp1703v__s__dat__pos,__temp1702v__+8,8);
  memcpy(&__temp1703v__s__dat__length,__temp1702v__+16,8);
  memcpy(&__temp1703v__s__dat__first,__temp1702v__+24,1);
  memcpy(&__temp1703v__cost,__temp1702v__+25,8);
  raw__temp1271v(__temp1703v__s__unsafe_ptr,__temp1703v__s__dat__pos,__temp1703v__s__dat__length,__temp1703v__s__dat__first,__temp1703v__cost,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1705v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1706v__s__unsafe_ptr,__temp1705v__,8);
  memcpy(&__temp1706v__s__dat__pos,__temp1705v__+8,8);
  memcpy(&__temp1706v__s__dat__length,__temp1705v__+16,8);
  memcpy(&__temp1706v__s__dat__first,__temp1705v__+24,1);
  memcpy(&__temp1706v__cost,__temp1705v__+25,8);
  raw__temp1271v(__temp1706v__s__unsafe_ptr,__temp1706v__s__dat__pos,__temp1706v__s__dat__length,__temp1706v__s__dat__first,__temp1706v__cost,&__temp1707v__unsafe_ptr,&__temp1707v__dat__pos,&__temp1707v__dat__length,&__temp1707v__dat__first);
  ret__unsafe_ptr=__temp1707v__unsafe_ptr;
  ret__dat__pos=__temp1707v__dat__pos;
  ret__dat__length=__temp1707v__dat__length;
  ret__dat__first=__temp1707v__dat__first;
  __temp1708v=1;
  add__temp170v(pos,__temp1708v,&__temp1709v__);
  pos=__temp1709v__;
  while(1){
  raw__temp1273v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1710v__unsafe_ptr,&__temp1710v__dat__pos,&__temp1710v__dat__length,&__temp1710v__dat__first);
  is_zero__temp1277v(__temp1710v__unsafe_ptr,__temp1710v__dat__pos,__temp1710v__dat__length,__temp1710v__dat__first,&__temp1711v__);
  if(!__temp1711v__){
  break;
  }
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1712v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1712v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1713v__s__unsafe_ptr,__temp1712v__,8);
  memcpy(&__temp1713v__s__dat__pos,__temp1712v__+8,8);
  memcpy(&__temp1713v__s__dat__length,__temp1712v__+16,8);
  memcpy(&__temp1713v__s__dat__first,__temp1712v__+24,1);
  memcpy(&__temp1713v__cost,__temp1712v__+25,8);
  raw__temp1271v(__temp1713v__s__unsafe_ptr,__temp1713v__s__dat__pos,__temp1713v__s__dat__length,__temp1713v__s__dat__first,__temp1713v__cost,&__temp1714v__unsafe_ptr,&__temp1714v__dat__pos,&__temp1714v__dat__length,&__temp1714v__dat__first);
  ret__unsafe_ptr=__temp1714v__unsafe_ptr;
  ret__dat__pos=__temp1714v__dat__pos;
  ret__dat__length=__temp1714v__dat__length;
  ret__dat__first=__temp1714v__dat__first;
  __temp1715v=1;
  add__temp170v(pos,__temp1715v,&__temp1716v__);
  pos=__temp1716v__;
  }
  __temp1704v__unsafe_ptr=ret__unsafe_ptr;
  __temp1704v__dat__pos=ret__dat__pos;
  __temp1704v__dat__length=ret__dat__length;
  __temp1704v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1906v=pos;
  *__temp1907v=__temp1704v__unsafe_ptr;
  *__temp1908v=__temp1704v__dat__pos;
  *__temp1909v=__temp1704v__dat__length;
  *__temp1910v=__temp1704v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp718v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp719v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) int test__temp1747v(char** __temp1911v, uint64_t* __temp1912v, uint64_t* __temp1913v, char** __temp1914v, uint64_t* __temp1915v, uint64_t* __temp1916v, char** __temp1917v, uint64_t* __temp1918v, uint64_t* __temp1919v, uint64_t* __temp1920v) {
  char* __temp1748v__unsafe_ptr=0;
  uint64_t __temp1748v__unsafe_size=0;
  uint64_t __temp1748v__unsafe_align=0;
  char* __temp1749v__unsafe_ptr=0;
  uint64_t __temp1749v__unsafe_size=0;
  uint64_t __temp1749v__unsafe_align=0;
  uint64_t __temp1750v=0;
  char* __temp1751v__unsafe_ptr=0;
  uint64_t __temp1751v__unsafe_size=0;
  uint64_t __temp1751v__unsafe_align=0;
  char __temp1752v____temp469v__=0;
  char* __temp1753v__keys__unsafe_ptr=0;
  uint64_t __temp1753v__keys__unsafe_size=0;
  uint64_t __temp1753v__keys__unsafe_align=0;
  char* __temp1753v__values__unsafe_ptr=0;
  uint64_t __temp1753v__values__unsafe_size=0;
  uint64_t __temp1753v__values__unsafe_align=0;
  char __temp1754v____temp1661v____temp469v__=0;
  char* __temp1755v__keys__unsafe_ptr=0;
  uint64_t __temp1755v__keys__unsafe_size=0;
  uint64_t __temp1755v__keys__unsafe_align=0;
  char* __temp1755v__values__unsafe_ptr=0;
  uint64_t __temp1755v__values__unsafe_size=0;
  uint64_t __temp1755v__values__unsafe_align=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint64_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint64_t map__values__unsafe_align=0;
  uint64_t __temp1756v=0;
  uint64_t __temp1757v__=0;
  char* __temp1758v__unsafe_ptr=0;
  uint64_t __temp1758v__unsafe_size=0;
  uint64_t __temp1758v__unsafe_align=0;
  char __temp1759v____temp544v____temp469v__=0;
  char* __temp1760v__buf__unsafe_ptr=0;
  uint64_t __temp1760v__buf__unsafe_size=0;
  uint64_t __temp1760v__buf__unsafe_align=0;
  uint64_t __temp1760v__pos=0;
  char* buf__buf__unsafe_ptr=0;
  uint64_t buf__buf__unsafe_size=0;
  uint64_t buf__buf__unsafe_align=0;
  uint64_t buf__pos=0;
  char* __temp1762v__=0;
  char* __temp1764v__unsafe_ptr=0;
  uint64_t __temp1764v__dat__pos=0;
  uint64_t __temp1764v__dat__length=0;
  char __temp1764v__dat__first=0;
  char* __temp1765v__unsafe_ptr=0;
  uint64_t __temp1765v__dat__pos=0;
  uint64_t __temp1765v__dat__length=0;
  char __temp1765v__dat__first=0;
  char* __temp1767v__=0;
  char* __temp1769v__unsafe_ptr=0;
  uint64_t __temp1769v__dat__pos=0;
  uint64_t __temp1769v__dat__length=0;
  char __temp1769v__dat__first=0;
  char* __temp1770v__unsafe_ptr=0;
  uint64_t __temp1770v__dat__pos=0;
  uint64_t __temp1770v__dat__length=0;
  char __temp1770v__dat__first=0;
  char* __temp1771v__buf__unsafe_ptr=0;
  uint64_t __temp1771v__buf__unsafe_size=0;
  uint64_t __temp1771v__buf__unsafe_align=0;
  uint64_t __temp1771v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint64_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1772v=0;
  char* __temp1773v__unsafe_ptr=0;
  uint64_t __temp1773v__dat__pos=0;
  uint64_t __temp1773v__dat__length=0;
  char __temp1773v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1739v(&__temp1748v__unsafe_ptr,&__temp1748v__unsafe_size,&__temp1748v__unsafe_align);
  __temp1749v__unsafe_ptr=__temp1748v__unsafe_ptr;
  __temp1749v__unsafe_size=__temp1748v__unsafe_size;
  __temp1749v__unsafe_align=__temp1748v__unsafe_align;
  __temp1750v=128;
  __temp_errcode=alloc__temp467v(&__temp1749v__unsafe_ptr,&__temp1749v__unsafe_size,&__temp1749v__unsafe_align,__temp1750v,&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1654v(&__temp1751v__unsafe_ptr,&__temp1751v__unsafe_size,&__temp1751v__unsafe_align,&__temp1753v__keys__unsafe_ptr,&__temp1753v__keys__unsafe_size,&__temp1753v__keys__unsafe_align,&__temp1753v__values__unsafe_ptr,&__temp1753v__values__unsafe_size,&__temp1753v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1755v__keys__unsafe_ptr=__temp1753v__keys__unsafe_ptr;
  __temp1755v__keys__unsafe_size=__temp1753v__keys__unsafe_size;
  __temp1755v__keys__unsafe_align=__temp1753v__keys__unsafe_align;
  __temp1755v__values__unsafe_ptr=__temp1753v__values__unsafe_ptr;
  __temp1755v__values__unsafe_size=__temp1753v__values__unsafe_size;
  __temp1755v__values__unsafe_align=__temp1753v__values__unsafe_align;
  map__keys__unsafe_ptr=__temp1755v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1755v__keys__unsafe_size;
  map__keys__unsafe_align=__temp1755v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1755v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1755v__values__unsafe_size;
  map__values__unsafe_align=__temp1755v__values__unsafe_align;
  __temp1756v=4;
  KB__temp443v(__temp1756v,&__temp1757v__);
  __temp_errcode=alloc__temp538v(__temp1757v__,&__temp1758v__unsafe_ptr,&__temp1758v__unsafe_size,&__temp1758v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  bufpos__temp654v(&__temp1758v__unsafe_ptr,&__temp1758v__unsafe_size,&__temp1758v__unsafe_align,&__temp1760v__buf__unsafe_ptr,&__temp1760v__buf__unsafe_size,&__temp1760v__buf__unsafe_align,&__temp1760v__pos);
  buf__buf__unsafe_ptr=__temp1760v__buf__unsafe_ptr;
  buf__buf__unsafe_size=__temp1760v__buf__unsafe_size;
  buf__buf__unsafe_align=__temp1760v__buf__unsafe_align;
  buf__pos=__temp1760v__pos;
  __temp_errcode=mutget__temp1678v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1761v,&__temp1762v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(__temp1763v,&__temp1764v__unsafe_ptr,&__temp1764v__dat__pos,&__temp1764v__dat__length,&__temp1764v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp676v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1764v__unsafe_ptr,__temp1764v__dat__pos,__temp1764v__dat__length,__temp1764v__dat__first,&__temp1765v__unsafe_ptr,&__temp1765v__dat__pos,&__temp1765v__dat__length,&__temp1765v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1762v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1762v__,&__temp1765v__unsafe_ptr,8);
  memcpy(__temp1762v__+8,&__temp1765v__dat__pos,8);
  memcpy(__temp1762v__+16,&__temp1765v__dat__length,8);
  memcpy(__temp1762v__+24,&__temp1765v__dat__first,1);
  __temp_errcode=mutget__temp1678v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1766v,&__temp1767v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(__temp1768v,&__temp1769v__unsafe_ptr,&__temp1769v__dat__pos,&__temp1769v__dat__length,&__temp1769v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=copy__temp676v(&buf__buf__unsafe_ptr,&buf__buf__unsafe_size,&buf__buf__unsafe_align,&buf__pos,__temp1769v__unsafe_ptr,__temp1769v__dat__pos,__temp1769v__dat__length,__temp1769v__dat__first,&__temp1770v__unsafe_ptr,&__temp1770v__dat__pos,&__temp1770v__dat__length,&__temp1770v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1767v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(__temp1767v__,&__temp1770v__unsafe_ptr,8);
  memcpy(__temp1767v__+8,&__temp1770v__dat__pos,8);
  memcpy(__temp1767v__+16,&__temp1770v__dat__length,8);
  memcpy(__temp1767v__+24,&__temp1770v__dat__first,1);
  bufpos__temp654v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&__temp1771v__buf__unsafe_ptr,&__temp1771v__buf__unsafe_size,&__temp1771v__buf__unsafe_align,&__temp1771v__pos);
  it__buf__unsafe_ptr=__temp1771v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1771v__buf__unsafe_size;
  it__buf__unsafe_align=__temp1771v__buf__unsafe_align;
  it__pos=__temp1771v__pos;
  while(1){
  __temp_complain=next__temp1696v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_align,&it__pos,&__temp1773v__unsafe_ptr,&__temp1773v__dat__pos,&__temp1773v__dat__length,&__temp1773v__dat__first);
  __temp1772v=__temp_complain;
  key__unsafe_ptr=__temp1773v__unsafe_ptr;
  key__dat__pos=__temp1773v__dat__pos;
  key__dat__length=__temp1773v__dat__length;
  key__dat__first=__temp1773v__dat__first;
  __temp1772v=__temp1772v==0;
  if(!__temp1772v){
  break;
  }
  print__temp718v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  goto __temp_return;
  
  __temp_failure:exists__temp412v(buf__buf__unsafe_ptr,&__temp1759v____temp544v____temp469v__);
  if(__temp1759v____temp544v____temp469v__){
  buf__buf__unsafe_size=0;
  buf__buf__unsafe_size=buf__buf__unsafe_size;
  free__temp461v(&buf__buf__unsafe_ptr);
  }
  exists__temp412v(map__keys__unsafe_ptr,&__temp1754v____temp1661v____temp469v__);
  if(__temp1754v____temp1661v____temp469v__){
  map__keys__unsafe_size=0;
  map__keys__unsafe_size=map__keys__unsafe_size;
  free__temp461v(&map__keys__unsafe_ptr);
  }
  exists__temp412v(map__values__unsafe_ptr,&__temp1752v____temp469v__);
  if(__temp1752v____temp469v__){
  map__values__unsafe_size=0;
  map__values__unsafe_size=map__values__unsafe_size;
  free__temp461v(&map__values__unsafe_ptr);
  }
  __temp_return:
  *__temp1911v=map__keys__unsafe_ptr;
  *__temp1912v=map__keys__unsafe_size;
  *__temp1913v=map__keys__unsafe_align;
  *__temp1914v=map__values__unsafe_ptr;
  *__temp1915v=map__values__unsafe_size;
  *__temp1916v=map__values__unsafe_align;
  *__temp1917v=buf__buf__unsafe_ptr;
  *__temp1918v=buf__buf__unsafe_size;
  *__temp1919v=buf__buf__unsafe_align;
  *__temp1920v=buf__pos;
  
  return __temp_errcode;
}

int raw__temp1275v(const char* r, char** __temp1921v, uint64_t* __temp1922v, uint64_t* __temp1923v, char* __temp1924v) {
  char* __temp1276v__unsafe_ptr=0;
  uint64_t __temp1276v__dat__pos=0;
  uint64_t __temp1276v__dat__length=0;
  char __temp1276v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(r,&__temp1276v__unsafe_ptr,&__temp1276v__dat__pos,&__temp1276v__dat__length,&__temp1276v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1921v=__temp1276v__unsafe_ptr;
  *__temp1922v=__temp1276v__dat__pos;
  *__temp1923v=__temp1276v__dat__length;
  *__temp1924v=__temp1276v__dat__first;
  
  return __temp_errcode;
}

int find__temp1319v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint64_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1925v) {
  char* __temp1320v__unsafe_ptr=0;
  uint64_t __temp1320v__dat__pos=0;
  uint64_t __temp1320v__dat__length=0;
  char __temp1320v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1321v__=0;
  uint64_t __temp1322v=0;
  uint64_t __temp1323v=0;
  char* __temp1324v__=0;
  char* __temp1325v__s__unsafe_ptr=0;
  uint64_t __temp1325v__s__dat__pos=0;
  uint64_t __temp1325v__s__dat__length=0;
  char __temp1325v__s__dat__first=0;
  uint64_t __temp1325v__cost=0;
  char* __temp1326v__unsafe_ptr=0;
  uint64_t __temp1326v__dat__pos=0;
  uint64_t __temp1326v__dat__length=0;
  char __temp1326v__dat__first=0;
  int __temp1327v=0;
  int __temp1328v__=0;
  uint64_t __temp1329v__=0;
  uint64_t n=0;
  uint64_t __temp1330v__=0;
  uint64_t pos=0;
  uint64_t __temp1331v__from=0;
  uint64_t __temp1331v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1332v=0;
  uint64_t __temp1333v__=0;
  uint64_t i=0;
  uint64_t __temp1334v__=0;
  uint64_t __temp1335v=0;
  uint64_t idx=0;
  char __temp1336v__=0;
  uint64_t __temp1337v__=0;
  uint64_t __temp1338v=0;
  char __temp1339v__=0;
  char* __temp1340v__=0;
  char* __temp1341v__s__unsafe_ptr=0;
  uint64_t __temp1341v__s__dat__pos=0;
  uint64_t __temp1341v__s__dat__length=0;
  char __temp1341v__s__dat__first=0;
  uint64_t __temp1341v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1342v__unsafe_ptr=0;
  uint64_t __temp1342v__dat__pos=0;
  uint64_t __temp1342v__dat__length=0;
  char __temp1342v__dat__first=0;
  char __temp1343v__=0;
  char* __temp1344v__unsafe_ptr=0;
  uint64_t __temp1344v__dat__pos=0;
  uint64_t __temp1344v__dat__length=0;
  char __temp1344v__dat__first=0;
  char __temp1345v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1273v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1320v__unsafe_ptr,&__temp1320v__dat__pos,&__temp1320v__dat__length,&__temp1320v__dat__first);
  k__unsafe_ptr=__temp1320v__unsafe_ptr;
  k__dat__pos=__temp1320v__dat__pos;
  k__dat__length=__temp1320v__dat__length;
  k__dat__first=__temp1320v__dat__first;
  is_zero__temp1277v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1321v__);
  if(__temp1321v__){
  __temp1322v=0;
  goto __temp_return;
  }
  __temp1323v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1323v,&__temp1324v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1324v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1325v__s__unsafe_ptr,__temp1324v__,8);
  memcpy(&__temp1325v__s__dat__pos,__temp1324v__+8,8);
  memcpy(&__temp1325v__s__dat__length,__temp1324v__+16,8);
  memcpy(&__temp1325v__s__dat__first,__temp1324v__+24,1);
  memcpy(&__temp1325v__cost,__temp1324v__+25,8);
  raw__temp1271v(__temp1325v__s__unsafe_ptr,__temp1325v__s__dat__pos,__temp1325v__s__dat__length,__temp1325v__s__dat__first,__temp1325v__cost,&__temp1326v__unsafe_ptr,&__temp1326v__dat__pos,&__temp1326v__dat__length,&__temp1326v__dat__first);
  not__temp35v(__temp1327v,&__temp1328v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1329v__);
  n=__temp1329v__;
  __temp_errcode=hash__temp1222v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1330v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1330v__;
  range__temp435v(n,&__temp1331v__from,&__temp1331v__to);
  iter__from=__temp1331v__from;
  iter__to=__temp1331v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1333v__);
  __temp1332v=__temp_complain;
  i=__temp1333v__;
  __temp1332v=__temp1332v==0;
  if(!__temp1332v){
  break;
  }
  add__temp170v(pos,i,&__temp1334v__);
  __temp1335v=__temp1334v__;
  idx=__temp1335v;
  ge__temp319v(idx,n,&__temp1336v__);
  if(__temp1336v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1337v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1337v__;
  }
  __temp1338v=0;
  eq__temp118v(idx,__temp1338v,&__temp1339v__);
  if(__temp1339v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1340v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1340v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1341v__s__unsafe_ptr,__temp1340v__,8);
  memcpy(&__temp1341v__s__dat__pos,__temp1340v__+8,8);
  memcpy(&__temp1341v__s__dat__length,__temp1340v__+16,8);
  memcpy(&__temp1341v__s__dat__first,__temp1340v__+24,1);
  memcpy(&__temp1341v__cost,__temp1340v__+25,8);
  entry__s__unsafe_ptr=__temp1341v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1341v__s__dat__pos;
  entry__s__dat__length=__temp1341v__s__dat__length;
  entry__s__dat__first=__temp1341v__s__dat__first;
  entry__cost=__temp1341v__cost;
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1342v__unsafe_ptr,&__temp1342v__dat__pos,&__temp1342v__dat__length,&__temp1342v__dat__first);
  is_zero__temp1277v(__temp1342v__unsafe_ptr,__temp1342v__dat__pos,__temp1342v__dat__length,__temp1342v__dat__first,&__temp1343v__);
  if(__temp1343v__){
  continue;
  }
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1344v__unsafe_ptr,&__temp1344v__dat__pos,&__temp1344v__dat__length,&__temp1344v__dat__first);
  eq__temp759v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1344v__unsafe_ptr,__temp1344v__dat__pos,__temp1344v__dat__length,__temp1344v__dat__first,&__temp1345v__);
  if(__temp1345v__){
  __temp1322v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=30;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1925v=__temp1322v;
  
  return __temp_errcode;
}

int get__temp1670v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, char* values__unsafe_ptr, uint64_t values__unsafe_size, uint64_t values__unsafe_align, const char* key, char** __temp1926v) {
  char* __temp1671v__unsafe_ptr=0;
  uint64_t __temp1671v__dat__pos=0;
  uint64_t __temp1671v__dat__length=0;
  char __temp1671v__dat__first=0;
  uint64_t __temp1672v__=0;
  char* __temp1673v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1275v(key,&__temp1671v__unsafe_ptr,&__temp1671v__dat__pos,&__temp1671v__dat__length,&__temp1671v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1319v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1671v__unsafe_ptr,__temp1671v__dat__pos,__temp1671v__dat__length,__temp1671v__dat__first,&__temp1672v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp533v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,__temp1672v__,&__temp1673v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1926v=__temp1673v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int print__temp1775v(char* map__keys__unsafe_ptr, uint64_t map__keys__unsafe_size, uint64_t map__keys__unsafe_align, char* map__values__unsafe_ptr, uint64_t map__values__unsafe_size, uint64_t map__values__unsafe_align) {
  char* __temp1776v__=0;
  char* __temp1777v__unsafe_ptr=0;
  uint64_t __temp1777v__dat__pos=0;
  uint64_t __temp1777v__dat__length=0;
  char __temp1777v__dat__first=0;
  char* __temp1779v__=0;
  char* __temp1780v__unsafe_ptr=0;
  uint64_t __temp1780v__dat__pos=0;
  uint64_t __temp1780v__dat__length=0;
  char __temp1780v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=get__temp1670v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_align,__temp1761v,&__temp1776v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1776v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1777v__unsafe_ptr,__temp1776v__,8);
  memcpy(&__temp1777v__dat__pos,__temp1776v__+8,8);
  memcpy(&__temp1777v__dat__length,__temp1776v__+16,8);
  memcpy(&__temp1777v__dat__first,__temp1776v__+24,1);
  print__temp718v(__temp1777v__unsafe_ptr,__temp1777v__dat__pos,__temp1777v__dat__length,__temp1777v__dat__first);
  __temp_errcode=get__temp1670v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,map__values__unsafe_ptr,map__values__unsafe_size,map__values__unsafe_align,__temp1766v,&__temp1779v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1779v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  memcpy(&__temp1780v__unsafe_ptr,__temp1779v__,8);
  memcpy(&__temp1780v__dat__pos,__temp1779v__+8,8);
  memcpy(&__temp1780v__dat__length,__temp1779v__+16,8);
  memcpy(&__temp1780v__dat__first,__temp1779v__+24,1);
  print__temp718v(__temp1780v__unsafe_ptr,__temp1780v__dat__pos,__temp1780v__dat__length,__temp1780v__dat__first);
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1782v() {
  char* __temp1783v__map__keys__unsafe_ptr=0;
  uint64_t __temp1783v__map__keys__unsafe_size=0;
  uint64_t __temp1783v__map__keys__unsafe_align=0;
  char* __temp1783v__map__values__unsafe_ptr=0;
  uint64_t __temp1783v__map__values__unsafe_size=0;
  uint64_t __temp1783v__map__values__unsafe_align=0;
  char* __temp1783v__buf__buf__unsafe_ptr=0;
  uint64_t __temp1783v__buf__buf__unsafe_size=0;
  uint64_t __temp1783v__buf__buf__unsafe_align=0;
  uint64_t __temp1783v__buf__pos=0;
  char __temp1784v____temp1752v____temp469v__=0;
  char __temp1784v____temp1754v____temp1661v____temp469v__=0;
  char __temp1784v____temp1759v____temp544v____temp469v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=test__temp1747v(&__temp1783v__map__keys__unsafe_ptr,&__temp1783v__map__keys__unsafe_size,&__temp1783v__map__keys__unsafe_align,&__temp1783v__map__values__unsafe_ptr,&__temp1783v__map__values__unsafe_size,&__temp1783v__map__values__unsafe_align,&__temp1783v__buf__buf__unsafe_ptr,&__temp1783v__buf__buf__unsafe_size,&__temp1783v__buf__buf__unsafe_align,&__temp1783v__buf__pos);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=print__temp1775v(__temp1783v__map__keys__unsafe_ptr,__temp1783v__map__keys__unsafe_size,__temp1783v__map__keys__unsafe_align,__temp1783v__map__values__unsafe_ptr,__temp1783v__map__values__unsafe_size,__temp1783v__map__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  
  __temp_failure:exists__temp412v(__temp1783v__buf__buf__unsafe_ptr,&__temp1784v____temp1759v____temp544v____temp469v__);
  if(__temp1784v____temp1759v____temp544v____temp469v__){
  __temp1783v__buf__buf__unsafe_size=0;
  __temp1783v__buf__buf__unsafe_size=__temp1783v__buf__buf__unsafe_size;
  free__temp461v(&__temp1783v__buf__buf__unsafe_ptr);
  }
  exists__temp412v(__temp1783v__map__keys__unsafe_ptr,&__temp1784v____temp1754v____temp1661v____temp469v__);
  if(__temp1784v____temp1754v____temp1661v____temp469v__){
  __temp1783v__map__keys__unsafe_size=0;
  __temp1783v__map__keys__unsafe_size=__temp1783v__map__keys__unsafe_size;
  free__temp461v(&__temp1783v__map__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1783v__map__values__unsafe_ptr,&__temp1784v____temp1752v____temp469v__);
  if(__temp1784v____temp1752v____temp469v__){
  __temp1783v__map__values__unsafe_size=0;
  __temp1783v__map__values__unsafe_size=__temp1783v__map__values__unsafe_size;
  free__temp461v(&__temp1783v__map__values__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1782v();return 0;}