#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1750v="hello world!";
const char* const __temp363v="\n";
const char* const __temp1748v="hello";
const char* const __temp1752v="manio";
const char* const __temp1754v="it's a me, manio.";
static const char* __temp_all_errcodes[32] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void str____temp_buffer____buffer__temp1739v(char** __temp1766v, uint64_t* __temp1767v, uint64_t* __temp1768v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=25;
  *__temp1766v=unsafe_ptr;
  *__temp1767v=unsafe_size;
  *__temp1768v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1769v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1769v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1770v) {
  char* allocated=*__temp1770v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1770v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1771v) {
  int value=0;
  *__temp1771v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1772v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1772v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1773v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1773v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1774v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1774v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1775v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1775v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1776v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1776v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1777v) {
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
  *__temp1777v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1778v, uint64_t* __temp1779v, uint64_t* __temp1780v, uint64_t size, char** __temp1781v, uint64_t* __temp1782v, uint64_t* __temp1783v) {
  char* buffer__unsafe_ptr=*__temp1778v;
  uint64_t buffer__unsafe_size=*__temp1779v;
  uint64_t buffer__unsafe_align=*__temp1780v;
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
  *__temp1778v=buffer__unsafe_ptr;
  *__temp1779v=buffer__unsafe_size;
  *__temp1780v=buffer__unsafe_align;
  *__temp1781v=buffer__unsafe_ptr;
  *__temp1782v=buffer__unsafe_size;
  *__temp1783v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry____temp_buffer____buffer__temp1655v(char** __temp1784v, uint64_t* __temp1785v, uint64_t* __temp1786v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=33;
  *__temp1784v=unsafe_ptr;
  *__temp1785v=unsafe_size;
  *__temp1786v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1787v) {
  goto __temp_return;
  __temp_return:
  *__temp1787v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1654v(char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v, char** __temp1791v, uint64_t* __temp1792v, uint64_t* __temp1793v, char** __temp1794v, uint64_t* __temp1795v, uint64_t* __temp1796v) {
  char* values__unsafe_ptr=*__temp1788v;
  uint64_t values__unsafe_size=*__temp1789v;
  uint64_t values__unsafe_align=*__temp1790v;
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
  *__temp1788v=values__unsafe_ptr;
  *__temp1789v=values__unsafe_size;
  *__temp1790v=values__unsafe_align;
  *__temp1791v=keys__unsafe_ptr;
  *__temp1792v=keys__unsafe_size;
  *__temp1793v=keys__unsafe_align;
  *__temp1794v=values__unsafe_ptr;
  *__temp1795v=values__unsafe_size;
  *__temp1796v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char____temp_buffer____buffer__temp539v(char** __temp1797v, uint64_t* __temp1798v, uint64_t* __temp1799v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1797v=unsafe_ptr;
  *__temp1798v=unsafe_size;
  *__temp1799v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1800v) {
  *__temp1800v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1801v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1801v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1802v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1802v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1803v) {
  *__temp1803v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1804v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1804v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1805v) {
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
  *__temp1805v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1806v, uint64_t* __temp1807v, uint64_t* __temp1808v, char* __temp1809v) {
  goto __temp_return;
  __temp_return:
  *__temp1806v=unsafe_ptr;
  *__temp1807v=dat__pos;
  *__temp1808v=dat__length;
  *__temp1809v=dat__first;
}

static inline __attribute__((always_inline)) int str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1810v, uint64_t* __temp1811v, uint64_t* __temp1812v, char* __temp1813v) {
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
  *__temp1810v=__temp582v__unsafe_ptr;
  *__temp1811v=__temp582v__dat__pos;
  *__temp1812v=__temp582v__dat__length;
  *__temp1813v=__temp582v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp607v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1814v, uint64_t* __temp1815v, uint64_t* __temp1816v, char* __temp1817v) {
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
  *__temp1814v=__temp612v__unsafe_ptr;
  *__temp1815v=__temp612v__dat__pos;
  *__temp1816v=__temp612v__dat__length;
  *__temp1817v=__temp612v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp613v(const char* c, char** __temp1818v, uint64_t* __temp1819v, uint64_t* __temp1820v, char* __temp1821v) {
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
  *__temp1818v=__temp620v__unsafe_ptr;
  *__temp1819v=__temp620v__dat__pos;
  *__temp1820v=__temp620v__dat__length;
  *__temp1821v=__temp620v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1273v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1822v, uint64_t* __temp1823v, uint64_t* __temp1824v, char* __temp1825v) {
  goto __temp_return;
  __temp_return:
  *__temp1822v=r__unsafe_ptr;
  *__temp1823v=r__dat__pos;
  *__temp1824v=r__dat__length;
  *__temp1825v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp621v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1826v) {
  goto __temp_return;
  __temp_return:
  *__temp1826v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1277v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1827v) {
  uint64_t __temp1278v=0;
  uint64_t __temp1279v__=0;
  char __temp1280v__=0;
  __temp1278v=0;
  len__temp621v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1279v__);
  eq__temp118v(__temp1278v,__temp1279v__,&__temp1280v__);
  goto __temp_return;
  __temp_return:
  *__temp1827v=__temp1280v__;
}

static inline __attribute__((always_inline)) void raw__temp1271v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1828v, uint64_t* __temp1829v, uint64_t* __temp1830v, char* __temp1831v) {
  goto __temp_return;
  __temp_return:
  *__temp1828v=r__s__unsafe_ptr;
  *__temp1829v=r__s__dat__pos;
  *__temp1830v=r__s__dat__length;
  *__temp1831v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1832v, uint64_t* __temp1833v) {
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
  *__temp1832v=from;
  *__temp1833v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1834v, uint64_t r__to, uint64_t* __temp1835v) {
  uint64_t r__from=*__temp1834v;
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
  *__temp1834v=r__from;
  *__temp1835v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1836v) {
  goto __temp_return;
  __temp_return:
  *__temp1836v=value;
}

static inline __attribute__((always_inline)) void lshift__temp422v(uint64_t x__value, uint64_t y, uint64_t* __temp1837v) {
  uint64_t z=0;
  uint64_t __temp423v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp423v__value);
  goto __temp_return;
  __temp_return:
  *__temp1837v=__temp423v__value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1838v) {
  goto __temp_return;
  __temp_return:
  *__temp1838v=x__value;
}

static inline __attribute__((always_inline)) void get__temp755v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1839v) {
  uint64_t __temp756v__=0;
  char* __temp757v__=0;
  add__temp170v(s__dat__pos,i,&__temp756v__);
  add__temp463v(s__unsafe_ptr,__temp756v__,&__temp757v__);
  goto __temp_return;
  __temp_return:
  *__temp1839v=__temp757v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1840v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1840v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1841v) {
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
  *__temp1841v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1222v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1842v) {
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
  *__temp1842v=__temp1238v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1843v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1843v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1844v) {
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
  *__temp1844v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1845v, uint64_t* __temp1846v, uint64_t* __temp1847v, uint64_t i, char** __temp1848v) {
  char* buffer__unsafe_ptr=*__temp1845v;
  uint64_t buffer__unsafe_size=*__temp1846v;
  uint64_t buffer__unsafe_align=*__temp1847v;
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
  *__temp1845v=buffer__unsafe_ptr;
  *__temp1846v=buffer__unsafe_size;
  *__temp1847v=buffer__unsafe_align;
  *__temp1848v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp625v(char x, char y, char* __temp1849v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1849v=z;
}

static inline __attribute__((always_inline)) void eq__temp759v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1850v) {
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
  *__temp1850v=__temp763v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1851v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1851v=z;
}

int at__temp1520v(char** __temp1852v, uint64_t* __temp1853v, uint64_t* __temp1854v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1855v) {
  char* data__unsafe_ptr=*__temp1852v;
  uint64_t data__unsafe_size=*__temp1853v;
  uint64_t data__unsafe_align=*__temp1854v;
  char* __temp1521v__unsafe_ptr=0;
  uint64_t __temp1521v__dat__pos=0;
  uint64_t __temp1521v__dat__length=0;
  char __temp1521v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1522v__=0;
  uint64_t __temp1523v=0;
  uint64_t __temp1524v=0;
  char* __temp1525v__=0;
  char* __temp1526v__s__unsafe_ptr=0;
  uint64_t __temp1526v__s__dat__pos=0;
  uint64_t __temp1526v__s__dat__length=0;
  char __temp1526v__s__dat__first=0;
  uint64_t __temp1526v__cost=0;
  char* __temp1527v__unsafe_ptr=0;
  uint64_t __temp1527v__dat__pos=0;
  uint64_t __temp1527v__dat__length=0;
  char __temp1527v__dat__first=0;
  int __temp1528v=0;
  int __temp1529v__=0;
  uint64_t __temp1530v__=0;
  uint64_t n=0;
  uint64_t __temp1531v__=0;
  uint64_t pos=0;
  uint64_t __temp1532v__from=0;
  uint64_t __temp1532v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1533v=0;
  uint64_t __temp1534v__=0;
  uint64_t i=0;
  uint64_t __temp1535v__=0;
  uint64_t __temp1536v=0;
  uint64_t idx=0;
  char __temp1537v__=0;
  uint64_t __temp1538v__=0;
  uint64_t __temp1539v=0;
  char __temp1540v__=0;
  char* __temp1541v__=0;
  char* __temp1542v__s__unsafe_ptr=0;
  uint64_t __temp1542v__s__dat__pos=0;
  uint64_t __temp1542v__s__dat__length=0;
  char __temp1542v__s__dat__first=0;
  uint64_t __temp1542v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1543v__unsafe_ptr=0;
  uint64_t __temp1543v__dat__pos=0;
  uint64_t __temp1543v__dat__length=0;
  char __temp1543v__dat__first=0;
  char __temp1544v__=0;
  char* __temp1545v__=0;
  char* __temp1546v__unsafe_ptr=0;
  uint64_t __temp1546v__dat__pos=0;
  uint64_t __temp1546v__dat__length=0;
  char __temp1546v__dat__first=0;
  char __temp1547v__=0;
  char __temp1548v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1549v__=0;
  char* __temp1550v__s__unsafe_ptr=0;
  uint64_t __temp1550v__s__dat__pos=0;
  uint64_t __temp1550v__s__dat__length=0;
  char __temp1550v__s__dat__first=0;
  uint64_t __temp1550v__cost=0;
  char* __temp1551v__unsafe_ptr=0;
  uint64_t __temp1551v__dat__pos=0;
  uint64_t __temp1551v__dat__length=0;
  char __temp1551v__dat__first=0;
  char* __temp1552v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1273v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1521v__unsafe_ptr,&__temp1521v__dat__pos,&__temp1521v__dat__length,&__temp1521v__dat__first);
  k__unsafe_ptr=__temp1521v__unsafe_ptr;
  k__dat__pos=__temp1521v__dat__pos;
  k__dat__length=__temp1521v__dat__length;
  k__dat__first=__temp1521v__dat__first;
  is_zero__temp1277v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1522v__);
  if(__temp1522v__){
  __temp1523v=0;
  goto __temp_return;
  }
  __temp1524v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1524v,&__temp1525v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1525v__){
  goto __temp_failure;
  }
  memcpy(&__temp1526v__s__unsafe_ptr,__temp1525v__,8);
  if(!__temp1525v__){
  goto __temp_failure;
  }
  memcpy(&__temp1526v__s__dat__pos,__temp1525v__+8,8);
  if(!__temp1525v__){
  goto __temp_failure;
  }
  memcpy(&__temp1526v__s__dat__length,__temp1525v__+16,8);
  if(!__temp1525v__){
  goto __temp_failure;
  }
  memcpy(&__temp1526v__s__dat__first,__temp1525v__+24,1);
  if(!__temp1525v__){
  goto __temp_failure;
  }
  memcpy(&__temp1526v__cost,__temp1525v__+25,8);
  raw__temp1271v(__temp1526v__s__unsafe_ptr,__temp1526v__s__dat__pos,__temp1526v__s__dat__length,__temp1526v__s__dat__first,__temp1526v__cost,&__temp1527v__unsafe_ptr,&__temp1527v__dat__pos,&__temp1527v__dat__length,&__temp1527v__dat__first);
  not__temp35v(__temp1528v,&__temp1529v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1530v__);
  n=__temp1530v__;
  __temp_errcode=hash__temp1222v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1531v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1531v__;
  range__temp435v(n,&__temp1532v__from,&__temp1532v__to);
  iter__from=__temp1532v__from;
  iter__to=__temp1532v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1534v__);
  __temp1533v=__temp_complain;
  i=__temp1534v__;
  __temp1533v=__temp1533v==0;
  if(!__temp1533v){
  break;
  }
  add__temp170v(pos,i,&__temp1535v__);
  __temp1536v=__temp1535v__;
  idx=__temp1536v;
  ge__temp319v(idx,n,&__temp1537v__);
  if(__temp1537v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1538v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1538v__;
  }
  __temp1539v=0;
  eq__temp118v(idx,__temp1539v,&__temp1540v__);
  if(__temp1540v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1541v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1541v__){
  goto __temp_failure;
  }
  memcpy(&__temp1542v__s__unsafe_ptr,__temp1541v__,8);
  if(!__temp1541v__){
  goto __temp_failure;
  }
  memcpy(&__temp1542v__s__dat__pos,__temp1541v__+8,8);
  if(!__temp1541v__){
  goto __temp_failure;
  }
  memcpy(&__temp1542v__s__dat__length,__temp1541v__+16,8);
  if(!__temp1541v__){
  goto __temp_failure;
  }
  memcpy(&__temp1542v__s__dat__first,__temp1541v__+24,1);
  if(!__temp1541v__){
  goto __temp_failure;
  }
  memcpy(&__temp1542v__cost,__temp1541v__+25,8);
  entry__s__unsafe_ptr=__temp1542v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1542v__s__dat__pos;
  entry__s__dat__length=__temp1542v__s__dat__length;
  entry__s__dat__first=__temp1542v__s__dat__first;
  entry__cost=__temp1542v__cost;
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1543v__unsafe_ptr,&__temp1543v__dat__pos,&__temp1543v__dat__length,&__temp1543v__dat__first);
  is_zero__temp1277v(__temp1543v__unsafe_ptr,__temp1543v__dat__pos,__temp1543v__dat__length,__temp1543v__dat__first,&__temp1544v__);
  if(__temp1544v__){
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1545v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1545v__){
  goto __temp_failure;
  }
  memcpy(__temp1545v__,&k__unsafe_ptr,8);
  if(!__temp1545v__){
  goto __temp_failure;
  }
  memcpy(__temp1545v__+8,&k__dat__pos,8);
  if(!__temp1545v__){
  goto __temp_failure;
  }
  memcpy(__temp1545v__+16,&k__dat__length,8);
  if(!__temp1545v__){
  goto __temp_failure;
  }
  memcpy(__temp1545v__+24,&k__dat__first,1);
  if(!__temp1545v__){
  goto __temp_failure;
  }
  memcpy(__temp1545v__+25,&i,8);
  __temp1523v=idx;
  goto __temp_return;
  }
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1546v__unsafe_ptr,&__temp1546v__dat__pos,&__temp1546v__dat__length,&__temp1546v__dat__first);
  eq__temp759v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1546v__unsafe_ptr,__temp1546v__dat__pos,__temp1546v__dat__length,__temp1546v__dat__first,&__temp1547v__);
  if(__temp1547v__){
  __temp1523v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1548v__);
  if(__temp1548v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1549v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(&__temp1550v__s__unsafe_ptr,__temp1549v__,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(&__temp1550v__s__dat__pos,__temp1549v__+8,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(&__temp1550v__s__dat__length,__temp1549v__+16,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(&__temp1550v__s__dat__first,__temp1549v__+24,1);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(&__temp1550v__cost,__temp1549v__+25,8);
  raw__temp1271v(__temp1550v__s__unsafe_ptr,__temp1550v__s__dat__pos,__temp1550v__s__dat__length,__temp1550v__s__dat__first,__temp1550v__cost,&__temp1551v__unsafe_ptr,&__temp1551v__dat__pos,&__temp1551v__dat__length,&__temp1551v__dat__first);
  k__unsafe_ptr=__temp1551v__unsafe_ptr;
  k__dat__pos=__temp1551v__dat__pos;
  k__dat__length=__temp1551v__dat__length;
  k__dat__first=__temp1551v__dat__first;
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1552v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1552v__){
  goto __temp_failure;
  }
  memcpy(__temp1552v__,&tmp__unsafe_ptr,8);
  if(!__temp1552v__){
  goto __temp_failure;
  }
  memcpy(__temp1552v__+8,&tmp__dat__pos,8);
  if(!__temp1552v__){
  goto __temp_failure;
  }
  memcpy(__temp1552v__+16,&tmp__dat__length,8);
  if(!__temp1552v__){
  goto __temp_failure;
  }
  memcpy(__temp1552v__+24,&tmp__dat__first,1);
  if(!__temp1552v__){
  goto __temp_failure;
  }
  memcpy(__temp1552v__+25,&i,8);
  }
  }
  __temp_errcode=31;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1852v=data__unsafe_ptr;
  *__temp1853v=data__unsafe_size;
  *__temp1854v=data__unsafe_align;
  *__temp1855v=__temp1523v;
  
  return __temp_errcode;
}

int mutget__temp1682v(char** __temp1856v, uint64_t* __temp1857v, uint64_t* __temp1858v, char** __temp1859v, uint64_t* __temp1860v, uint64_t* __temp1861v, const char* key, char** __temp1862v) {
  char* keys__unsafe_ptr=*__temp1856v;
  uint64_t keys__unsafe_size=*__temp1857v;
  uint64_t keys__unsafe_align=*__temp1858v;
  char* values__unsafe_ptr=*__temp1859v;
  uint64_t values__unsafe_size=*__temp1860v;
  uint64_t values__unsafe_align=*__temp1861v;
  char* __temp1683v__unsafe_ptr=0;
  uint64_t __temp1683v__dat__pos=0;
  uint64_t __temp1683v__dat__length=0;
  char __temp1683v__dat__first=0;
  uint64_t __temp1684v__=0;
  char* __temp1685v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp613v(key,&__temp1683v__unsafe_ptr,&__temp1683v__dat__pos,&__temp1683v__dat__length,&__temp1683v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1520v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_align,__temp1683v__unsafe_ptr,__temp1683v__dat__pos,__temp1683v__dat__length,__temp1683v__dat__first,&__temp1684v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp529v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_align,__temp1684v__,&__temp1685v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1856v=keys__unsafe_ptr;
  *__temp1857v=keys__unsafe_size;
  *__temp1858v=keys__unsafe_align;
  *__temp1859v=values__unsafe_ptr;
  *__temp1860v=values__unsafe_size;
  *__temp1861v=values__unsafe_align;
  *__temp1862v=__temp1685v__;
  
  return __temp_errcode;
}

int raw__temp1275v(const char* r, char** __temp1863v, uint64_t* __temp1864v, uint64_t* __temp1865v, char* __temp1866v) {
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
  *__temp1863v=__temp1276v__unsafe_ptr;
  *__temp1864v=__temp1276v__dat__pos;
  *__temp1865v=__temp1276v__dat__length;
  *__temp1866v=__temp1276v__dat__first;
  
  return __temp_errcode;
}

int find__temp1390v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint64_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1867v) {
  char* __temp1391v__unsafe_ptr=0;
  uint64_t __temp1391v__dat__pos=0;
  uint64_t __temp1391v__dat__length=0;
  char __temp1391v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1392v__=0;
  uint64_t __temp1393v=0;
  uint64_t __temp1394v=0;
  char* __temp1395v__=0;
  char* __temp1396v__s__unsafe_ptr=0;
  uint64_t __temp1396v__s__dat__pos=0;
  uint64_t __temp1396v__s__dat__length=0;
  char __temp1396v__s__dat__first=0;
  uint64_t __temp1396v__cost=0;
  char* __temp1397v__unsafe_ptr=0;
  uint64_t __temp1397v__dat__pos=0;
  uint64_t __temp1397v__dat__length=0;
  char __temp1397v__dat__first=0;
  int __temp1398v=0;
  int __temp1399v__=0;
  uint64_t __temp1400v__=0;
  uint64_t n=0;
  uint64_t __temp1401v__=0;
  uint64_t pos=0;
  uint64_t __temp1402v__from=0;
  uint64_t __temp1402v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1403v=0;
  uint64_t __temp1404v__=0;
  uint64_t i=0;
  uint64_t __temp1405v__=0;
  uint64_t __temp1406v=0;
  uint64_t idx=0;
  char __temp1407v__=0;
  uint64_t __temp1408v__=0;
  uint64_t __temp1409v=0;
  char __temp1410v__=0;
  char* __temp1411v__=0;
  char* __temp1412v__s__unsafe_ptr=0;
  uint64_t __temp1412v__s__dat__pos=0;
  uint64_t __temp1412v__s__dat__length=0;
  char __temp1412v__s__dat__first=0;
  uint64_t __temp1412v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1413v__unsafe_ptr=0;
  uint64_t __temp1413v__dat__pos=0;
  uint64_t __temp1413v__dat__length=0;
  char __temp1413v__dat__first=0;
  char __temp1414v__=0;
  char* __temp1415v__unsafe_ptr=0;
  uint64_t __temp1415v__dat__pos=0;
  uint64_t __temp1415v__dat__length=0;
  char __temp1415v__dat__first=0;
  char __temp1416v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1273v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1391v__unsafe_ptr,&__temp1391v__dat__pos,&__temp1391v__dat__length,&__temp1391v__dat__first);
  k__unsafe_ptr=__temp1391v__unsafe_ptr;
  k__dat__pos=__temp1391v__dat__pos;
  k__dat__length=__temp1391v__dat__length;
  k__dat__first=__temp1391v__dat__first;
  is_zero__temp1277v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1392v__);
  if(__temp1392v__){
  __temp1393v=0;
  goto __temp_return;
  }
  __temp1394v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1394v,&__temp1395v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1395v__){
  goto __temp_failure;
  }
  memcpy(&__temp1396v__s__unsafe_ptr,__temp1395v__,8);
  if(!__temp1395v__){
  goto __temp_failure;
  }
  memcpy(&__temp1396v__s__dat__pos,__temp1395v__+8,8);
  if(!__temp1395v__){
  goto __temp_failure;
  }
  memcpy(&__temp1396v__s__dat__length,__temp1395v__+16,8);
  if(!__temp1395v__){
  goto __temp_failure;
  }
  memcpy(&__temp1396v__s__dat__first,__temp1395v__+24,1);
  if(!__temp1395v__){
  goto __temp_failure;
  }
  memcpy(&__temp1396v__cost,__temp1395v__+25,8);
  raw__temp1271v(__temp1396v__s__unsafe_ptr,__temp1396v__s__dat__pos,__temp1396v__s__dat__length,__temp1396v__s__dat__first,__temp1396v__cost,&__temp1397v__unsafe_ptr,&__temp1397v__dat__pos,&__temp1397v__dat__length,&__temp1397v__dat__first);
  not__temp35v(__temp1398v,&__temp1399v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1400v__);
  n=__temp1400v__;
  __temp_errcode=hash__temp1222v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1401v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1401v__;
  range__temp435v(n,&__temp1402v__from,&__temp1402v__to);
  iter__from=__temp1402v__from;
  iter__to=__temp1402v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1404v__);
  __temp1403v=__temp_complain;
  i=__temp1404v__;
  __temp1403v=__temp1403v==0;
  if(!__temp1403v){
  break;
  }
  add__temp170v(pos,i,&__temp1405v__);
  __temp1406v=__temp1405v__;
  idx=__temp1406v;
  ge__temp319v(idx,n,&__temp1407v__);
  if(__temp1407v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1408v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1408v__;
  }
  __temp1409v=0;
  eq__temp118v(idx,__temp1409v,&__temp1410v__);
  if(__temp1410v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1411v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__s__unsafe_ptr,__temp1411v__,8);
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__s__dat__pos,__temp1411v__+8,8);
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__s__dat__length,__temp1411v__+16,8);
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__s__dat__first,__temp1411v__+24,1);
  if(!__temp1411v__){
  goto __temp_failure;
  }
  memcpy(&__temp1412v__cost,__temp1411v__+25,8);
  entry__s__unsafe_ptr=__temp1412v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1412v__s__dat__pos;
  entry__s__dat__length=__temp1412v__s__dat__length;
  entry__s__dat__first=__temp1412v__s__dat__first;
  entry__cost=__temp1412v__cost;
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1413v__unsafe_ptr,&__temp1413v__dat__pos,&__temp1413v__dat__length,&__temp1413v__dat__first);
  is_zero__temp1277v(__temp1413v__unsafe_ptr,__temp1413v__dat__pos,__temp1413v__dat__length,__temp1413v__dat__first,&__temp1414v__);
  if(__temp1414v__){
  continue;
  }
  raw__temp1271v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1415v__unsafe_ptr,&__temp1415v__dat__pos,&__temp1415v__dat__length,&__temp1415v__dat__first);
  eq__temp759v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1415v__unsafe_ptr,__temp1415v__dat__pos,__temp1415v__dat__length,__temp1415v__dat__first,&__temp1416v__);
  if(__temp1416v__){
  __temp1393v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=30;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1867v=__temp1393v;
  
  return __temp_errcode;
}

int get__temp1674v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, char** __temp1868v, uint64_t* __temp1869v, uint64_t* __temp1870v, const char* key, char** __temp1871v) {
  char* values__unsafe_ptr=*__temp1868v;
  uint64_t values__unsafe_size=*__temp1869v;
  uint64_t values__unsafe_align=*__temp1870v;
  char* __temp1675v__unsafe_ptr=0;
  uint64_t __temp1675v__dat__pos=0;
  uint64_t __temp1675v__dat__length=0;
  char __temp1675v__dat__first=0;
  uint64_t __temp1676v__=0;
  char* __temp1677v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1275v(key,&__temp1675v__unsafe_ptr,&__temp1675v__dat__pos,&__temp1675v__dat__length,&__temp1675v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1390v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1675v__unsafe_ptr,__temp1675v__dat__pos,__temp1675v__dat__length,__temp1675v__dat__first,&__temp1676v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp533v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,__temp1676v__,&__temp1677v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1868v=values__unsafe_ptr;
  *__temp1869v=values__unsafe_size;
  *__temp1870v=values__unsafe_align;
  *__temp1871v=__temp1677v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp716v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp717v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void bufpos__temp654v(char** __temp1872v, uint64_t* __temp1873v, uint64_t* __temp1874v, char** __temp1875v, uint64_t* __temp1876v, uint64_t* __temp1877v, uint64_t* __temp1878v) {
  char* buf__unsafe_ptr=*__temp1872v;
  uint64_t buf__unsafe_size=*__temp1873v;
  uint64_t buf__unsafe_align=*__temp1874v;
  uint64_t __temp655v=0;
  uint64_t __temp656v=0;
  uint64_t pos=0;
  __temp655v=0;
  __temp656v=__temp655v;
  pos=__temp656v;
  goto __temp_return;
  __temp_return:
  *__temp1872v=buf__unsafe_ptr;
  *__temp1873v=buf__unsafe_size;
  *__temp1874v=buf__unsafe_align;
  *__temp1875v=buf__unsafe_ptr;
  *__temp1876v=buf__unsafe_size;
  *__temp1877v=buf__unsafe_align;
  *__temp1878v=pos;
}

static inline __attribute__((always_inline)) int next__temp1696v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, uint64_t* __temp1879v, char** __temp1880v, uint64_t* __temp1881v, uint64_t* __temp1882v, char* __temp1883v) {
  uint64_t pos=*__temp1879v;
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
  goto __temp_failure;
  }
  memcpy(&__temp1703v__s__unsafe_ptr,__temp1702v__,8);
  if(!__temp1702v__){
  goto __temp_failure;
  }
  memcpy(&__temp1703v__s__dat__pos,__temp1702v__+8,8);
  if(!__temp1702v__){
  goto __temp_failure;
  }
  memcpy(&__temp1703v__s__dat__length,__temp1702v__+16,8);
  if(!__temp1702v__){
  goto __temp_failure;
  }
  memcpy(&__temp1703v__s__dat__first,__temp1702v__+24,1);
  if(!__temp1702v__){
  goto __temp_failure;
  }
  memcpy(&__temp1703v__cost,__temp1702v__+25,8);
  raw__temp1271v(__temp1703v__s__unsafe_ptr,__temp1703v__s__dat__pos,__temp1703v__s__dat__length,__temp1703v__s__dat__first,__temp1703v__cost,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1705v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1705v__){
  goto __temp_failure;
  }
  memcpy(&__temp1706v__s__unsafe_ptr,__temp1705v__,8);
  if(!__temp1705v__){
  goto __temp_failure;
  }
  memcpy(&__temp1706v__s__dat__pos,__temp1705v__+8,8);
  if(!__temp1705v__){
  goto __temp_failure;
  }
  memcpy(&__temp1706v__s__dat__length,__temp1705v__+16,8);
  if(!__temp1705v__){
  goto __temp_failure;
  }
  memcpy(&__temp1706v__s__dat__first,__temp1705v__+24,1);
  if(!__temp1705v__){
  goto __temp_failure;
  }
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
  goto __temp_failure;
  }
  memcpy(&__temp1713v__s__unsafe_ptr,__temp1712v__,8);
  if(!__temp1712v__){
  goto __temp_failure;
  }
  memcpy(&__temp1713v__s__dat__pos,__temp1712v__+8,8);
  if(!__temp1712v__){
  goto __temp_failure;
  }
  memcpy(&__temp1713v__s__dat__length,__temp1712v__+16,8);
  if(!__temp1712v__){
  goto __temp_failure;
  }
  memcpy(&__temp1713v__s__dat__first,__temp1712v__+24,1);
  if(!__temp1712v__){
  goto __temp_failure;
  }
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
  *__temp1879v=pos;
  *__temp1880v=__temp1704v__unsafe_ptr;
  *__temp1881v=__temp1704v__dat__pos;
  *__temp1882v=__temp1704v__dat__length;
  *__temp1883v=__temp1704v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1738v() {
  char* __temp1741v__unsafe_ptr=0;
  uint64_t __temp1741v__unsafe_size=0;
  uint64_t __temp1741v__unsafe_align=0;
  char* __temp1742v__unsafe_ptr=0;
  uint64_t __temp1742v__unsafe_size=0;
  uint64_t __temp1742v__unsafe_align=0;
  uint64_t __temp1743v=0;
  char* __temp1744v__unsafe_ptr=0;
  uint64_t __temp1744v__unsafe_size=0;
  uint64_t __temp1744v__unsafe_align=0;
  char __temp1745v____temp469v__=0;
  char* __temp1746v__keys__unsafe_ptr=0;
  uint64_t __temp1746v__keys__unsafe_size=0;
  uint64_t __temp1746v__keys__unsafe_align=0;
  char* __temp1746v__values__unsafe_ptr=0;
  uint64_t __temp1746v__values__unsafe_size=0;
  uint64_t __temp1746v__values__unsafe_align=0;
  char __temp1747v____temp1661v____temp469v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint64_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint64_t map__values__unsafe_align=0;
  char* __temp1749v__=0;
  char* __temp1751v__unsafe_ptr=0;
  uint64_t __temp1751v__dat__pos=0;
  uint64_t __temp1751v__dat__length=0;
  char __temp1751v__dat__first=0;
  char* __temp1753v__=0;
  char* __temp1755v__unsafe_ptr=0;
  uint64_t __temp1755v__dat__pos=0;
  uint64_t __temp1755v__dat__length=0;
  char __temp1755v__dat__first=0;
  char* __temp1756v__=0;
  char* __temp1757v__unsafe_ptr=0;
  uint64_t __temp1757v__dat__pos=0;
  uint64_t __temp1757v__dat__length=0;
  char __temp1757v__dat__first=0;
  char* __temp1759v__=0;
  char* __temp1760v__unsafe_ptr=0;
  uint64_t __temp1760v__dat__pos=0;
  uint64_t __temp1760v__dat__length=0;
  char __temp1760v__dat__first=0;
  char* __temp1762v__buf__unsafe_ptr=0;
  uint64_t __temp1762v__buf__unsafe_size=0;
  uint64_t __temp1762v__buf__unsafe_align=0;
  uint64_t __temp1762v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint64_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1763v=0;
  char* __temp1764v__unsafe_ptr=0;
  uint64_t __temp1764v__dat__pos=0;
  uint64_t __temp1764v__dat__length=0;
  char __temp1764v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str____temp_buffer____buffer__temp1739v(&__temp1741v__unsafe_ptr,&__temp1741v__unsafe_size,&__temp1741v__unsafe_align);
  __temp1742v__unsafe_ptr=__temp1741v__unsafe_ptr;
  __temp1742v__unsafe_size=__temp1741v__unsafe_size;
  __temp1742v__unsafe_align=__temp1741v__unsafe_align;
  __temp1743v=128;
  __temp_errcode=alloc__temp467v(&__temp1742v__unsafe_ptr,&__temp1742v__unsafe_size,&__temp1742v__unsafe_align,__temp1743v,&__temp1744v__unsafe_ptr,&__temp1744v__unsafe_size,&__temp1744v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1654v(&__temp1744v__unsafe_ptr,&__temp1744v__unsafe_size,&__temp1744v__unsafe_align,&__temp1746v__keys__unsafe_ptr,&__temp1746v__keys__unsafe_size,&__temp1746v__keys__unsafe_align,&__temp1746v__values__unsafe_ptr,&__temp1746v__values__unsafe_size,&__temp1746v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1746v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1746v__keys__unsafe_size;
  map__keys__unsafe_align=__temp1746v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1746v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1746v__values__unsafe_size;
  map__values__unsafe_align=__temp1746v__values__unsafe_align;
  __temp_errcode=mutget__temp1682v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1748v,&__temp1749v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(__temp1750v,&__temp1751v__unsafe_ptr,&__temp1751v__dat__pos,&__temp1751v__dat__length,&__temp1751v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1749v__){
  goto __temp_failure;
  }
  memcpy(__temp1749v__,&__temp1751v__unsafe_ptr,8);
  if(!__temp1749v__){
  goto __temp_failure;
  }
  memcpy(__temp1749v__+8,&__temp1751v__dat__pos,8);
  if(!__temp1749v__){
  goto __temp_failure;
  }
  memcpy(__temp1749v__+16,&__temp1751v__dat__length,8);
  if(!__temp1749v__){
  goto __temp_failure;
  }
  memcpy(__temp1749v__+24,&__temp1751v__dat__first,1);
  __temp_errcode=mutget__temp1682v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1752v,&__temp1753v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp613v(__temp1754v,&__temp1755v__unsafe_ptr,&__temp1755v__dat__pos,&__temp1755v__dat__length,&__temp1755v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(__temp1753v__,&__temp1755v__unsafe_ptr,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(__temp1753v__+8,&__temp1755v__dat__pos,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(__temp1753v__+16,&__temp1755v__dat__length,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(__temp1753v__+24,&__temp1755v__dat__first,1);
  __temp_errcode=get__temp1674v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1748v,&__temp1756v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1756v__){
  goto __temp_failure;
  }
  memcpy(&__temp1757v__unsafe_ptr,__temp1756v__,8);
  if(!__temp1756v__){
  goto __temp_failure;
  }
  memcpy(&__temp1757v__dat__pos,__temp1756v__+8,8);
  if(!__temp1756v__){
  goto __temp_failure;
  }
  memcpy(&__temp1757v__dat__length,__temp1756v__+16,8);
  if(!__temp1756v__){
  goto __temp_failure;
  }
  memcpy(&__temp1757v__dat__first,__temp1756v__+24,1);
  print__temp716v(__temp1757v__unsafe_ptr,__temp1757v__dat__pos,__temp1757v__dat__length,__temp1757v__dat__first);
  __temp_errcode=get__temp1674v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1752v,&__temp1759v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1759v__){
  goto __temp_failure;
  }
  memcpy(&__temp1760v__unsafe_ptr,__temp1759v__,8);
  if(!__temp1759v__){
  goto __temp_failure;
  }
  memcpy(&__temp1760v__dat__pos,__temp1759v__+8,8);
  if(!__temp1759v__){
  goto __temp_failure;
  }
  memcpy(&__temp1760v__dat__length,__temp1759v__+16,8);
  if(!__temp1759v__){
  goto __temp_failure;
  }
  memcpy(&__temp1760v__dat__first,__temp1759v__+24,1);
  print__temp716v(__temp1760v__unsafe_ptr,__temp1760v__dat__pos,__temp1760v__dat__length,__temp1760v__dat__first);
  bufpos__temp654v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&__temp1762v__buf__unsafe_ptr,&__temp1762v__buf__unsafe_size,&__temp1762v__buf__unsafe_align,&__temp1762v__pos);
  it__buf__unsafe_ptr=__temp1762v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1762v__buf__unsafe_size;
  it__buf__unsafe_align=__temp1762v__buf__unsafe_align;
  it__pos=__temp1762v__pos;
  while(1){
  __temp_complain=next__temp1696v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_align,&it__pos,&__temp1764v__unsafe_ptr,&__temp1764v__dat__pos,&__temp1764v__dat__length,&__temp1764v__dat__first);
  __temp1763v=__temp_complain;
  key__unsafe_ptr=__temp1764v__unsafe_ptr;
  key__dat__pos=__temp1764v__dat__pos;
  key__dat__length=__temp1764v__dat__length;
  key__dat__first=__temp1764v__dat__first;
  __temp1763v=__temp1763v==0;
  if(!__temp1763v){
  break;
  }
  print__temp716v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1746v__keys__unsafe_ptr,&__temp1747v____temp1661v____temp469v__);
  if(__temp1747v____temp1661v____temp469v__){
  __temp1746v__keys__unsafe_size=0;
  __temp1746v__keys__unsafe_size=__temp1746v__keys__unsafe_size;
  free__temp461v(&__temp1746v__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1744v__unsafe_ptr,&__temp1745v____temp469v__);
  if(__temp1745v____temp469v__){
  __temp1744v__unsafe_size=0;
  __temp1744v__unsafe_size=__temp1744v__unsafe_size;
  free__temp461v(&__temp1744v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1738v();return 0;}