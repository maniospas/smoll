#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1749v="manio";
const char* const __temp364v="\n";
const char* const __temp1751v="it's a me, manio.";
const char* const __temp1747v="hello world!";
const char* const __temp1745v="hello";
static const char* __temp_all_errcodes[31] = {"noerr",
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

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1736v(char** __temp1763v, uint64_t* __temp1764v, uint64_t* __temp1765v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=25;
  *__temp1763v=unsafe_ptr;
  *__temp1764v=unsafe_size;
  *__temp1765v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp411v(char* x, char* __temp1766v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1766v=z;
}

static inline __attribute__((always_inline)) void free__temp460v(char** __temp1767v) {
  char* allocated=*__temp1767v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1767v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1768v) {
  int value=0;
  *__temp1768v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1769v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1769v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1770v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1770v=__temp94v__;
}

static inline __attribute__((always_inline)) void eq__temp117v(uint64_t x, uint64_t y, char* __temp1771v) {
  int __temp118v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp118v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1771v=z;
}

static inline __attribute__((always_inline)) void neq__temp141v(uint64_t x, uint64_t y, char* __temp1772v) {
  int __temp142v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp142v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp1773v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1773v=z;
}

static inline __attribute__((always_inline)) void zero__temp461v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp457v(uint64_t bytes, char** __temp1774v) {
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
  *__temp1774v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp466v(char** __temp1775v, uint64_t* __temp1776v, uint64_t* __temp1777v, uint64_t size, char** __temp1778v, uint64_t* __temp1779v, uint64_t* __temp1780v) {
  char* buffer__unsafe_ptr=*__temp1775v;
  uint64_t buffer__unsafe_size=*__temp1776v;
  uint64_t buffer__unsafe_align=*__temp1777v;
  int __temp467v=0;
  char __temp468v__=0;
  uint64_t __temp469v=0;
  char __temp471v__=0;
  uint64_t __temp472v=0;
  char __temp473v__=0;
  uint64_t __temp474v=0;
  uint64_t __temp475v__=0;
  uint64_t __temp477v=0;
  char __temp478v__=0;
  uint64_t __temp479v__=0;
  uint64_t bytes=0;
  char* __temp480v__=0;
  uint64_t __temp481v=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  eq__temp117v(buffer__unsafe_size,size,&__temp471v__);
  if(__temp471v__){
  __temp472v=0;
  neq__temp141v(size,__temp472v,&__temp473v__);
  if(__temp473v__){
  __temp474v=0;
  mul__temp193v(buffer__unsafe_align,size,&__temp475v__);
  zero__temp461v(buffer__unsafe_ptr,__temp474v,__temp475v__);
  }
  goto __temp_return;
  }
  __temp477v=0;
  neq__temp141v(buffer__unsafe_size,__temp477v,&__temp478v__);
  if(__temp478v__){
  __temp_errcode=10;
  goto __temp_failure;
  }
  mul__temp193v(buffer__unsafe_align,size,&__temp479v__);
  bytes=__temp479v__;
  buffer__unsafe_size=size;
  __temp_errcode=alloc__temp457v(bytes,&__temp480v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  buffer__unsafe_ptr=__temp480v__;
  __temp481v=0;
  zero__temp461v(buffer__unsafe_ptr,__temp481v,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(buffer__unsafe_ptr,&__temp468v__);
  if(__temp468v__){
  buffer__unsafe_size=0;
  buffer__unsafe_size=buffer__unsafe_size;
  free__temp460v(&buffer__unsafe_ptr);
  }
  __temp_return:
  *__temp1775v=buffer__unsafe_ptr;
  *__temp1776v=buffer__unsafe_size;
  *__temp1777v=buffer__unsafe_align;
  *__temp1778v=buffer__unsafe_ptr;
  *__temp1779v=buffer__unsafe_size;
  *__temp1780v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry__temp_buffer__buffer__temp1652v(char** __temp1781v, uint64_t* __temp1782v, uint64_t* __temp1783v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=33;
  *__temp1781v=unsafe_ptr;
  *__temp1782v=unsafe_size;
  *__temp1783v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp536v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1784v) {
  goto __temp_return;
  __temp_return:
  *__temp1784v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1651v(char** __temp1785v, uint64_t* __temp1786v, uint64_t* __temp1787v, char** __temp1788v, uint64_t* __temp1789v, uint64_t* __temp1790v, char** __temp1791v, uint64_t* __temp1792v, uint64_t* __temp1793v) {
  char* values__unsafe_ptr=*__temp1785v;
  uint64_t values__unsafe_size=*__temp1786v;
  uint64_t values__unsafe_align=*__temp1787v;
  char* __temp1654v__unsafe_ptr=0;
  uint64_t __temp1654v__unsafe_size=0;
  uint64_t __temp1654v__unsafe_align=0;
  char* __temp1655v__unsafe_ptr=0;
  uint64_t __temp1655v__unsafe_size=0;
  uint64_t __temp1655v__unsafe_align=0;
  uint64_t __temp1656v__=0;
  char* __temp1657v__unsafe_ptr=0;
  uint64_t __temp1657v__unsafe_size=0;
  uint64_t __temp1657v__unsafe_align=0;
  char __temp1658v____temp468v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint64_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry__temp_buffer__buffer__temp1652v(&__temp1654v__unsafe_ptr,&__temp1654v__unsafe_size,&__temp1654v__unsafe_align);
  __temp1655v__unsafe_ptr=__temp1654v__unsafe_ptr;
  __temp1655v__unsafe_size=__temp1654v__unsafe_size;
  __temp1655v__unsafe_align=__temp1654v__unsafe_align;
  len__temp536v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,&__temp1656v__);
  __temp_errcode=alloc__temp466v(&__temp1655v__unsafe_ptr,&__temp1655v__unsafe_size,&__temp1655v__unsafe_align,__temp1656v__,&__temp1657v__unsafe_ptr,&__temp1657v__unsafe_size,&__temp1657v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1657v__unsafe_ptr;
  keys__unsafe_size=__temp1657v__unsafe_size;
  keys__unsafe_align=__temp1657v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp411v(keys__unsafe_ptr,&__temp1658v____temp468v__);
  if(__temp1658v____temp468v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  free__temp460v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1785v=values__unsafe_ptr;
  *__temp1786v=values__unsafe_size;
  *__temp1787v=values__unsafe_align;
  *__temp1788v=keys__unsafe_ptr;
  *__temp1789v=keys__unsafe_size;
  *__temp1790v=keys__unsafe_align;
  *__temp1791v=values__unsafe_ptr;
  *__temp1792v=values__unsafe_size;
  *__temp1793v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp538v(char** __temp1794v, uint64_t* __temp1795v, uint64_t* __temp1796v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1794v=unsafe_ptr;
  *__temp1795v=unsafe_size;
  *__temp1796v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, const char* from, char** __temp1797v) {
  *__temp1797v=to;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1798v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1798v=z;
}

static inline __attribute__((always_inline)) void ge__temp318v(uint64_t x, uint64_t y, char* __temp1799v) {
  int __temp319v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp319v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1799v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp19v(char* to, char* from, char** __temp1800v) {
  *__temp1800v=to;
}

static inline __attribute__((always_inline)) void add__temp462v(char* allocated, uint64_t offset, char** __temp1801v) {
  char* element=0;
  char* __temp463v__=0;
  element=allocated+offset;
  attach_type__temp19v(element,allocated,&__temp463v__);
  goto __temp_return;
  __temp_return:
  *__temp1801v=__temp463v__;
}

static inline __attribute__((always_inline)) int get__temp532v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1802v) {
  char __temp533v__=0;
  uint64_t __temp534v__=0;
  char* __temp535v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp533v__);
  if(__temp533v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp534v__);
  add__temp462v(buffer__unsafe_ptr,__temp534v__,&__temp535v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1802v=__temp535v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp574v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1803v, uint64_t* __temp1804v, uint64_t* __temp1805v, char* __temp1806v) {
  goto __temp_return;
  __temp_return:
  *__temp1803v=unsafe_ptr;
  *__temp1804v=dat__pos;
  *__temp1805v=dat__length;
  *__temp1806v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp578v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1807v, uint64_t* __temp1808v, uint64_t* __temp1809v, char* __temp1810v) {
  char* unsafe_ptr=0;
  char* __temp579v__unsafe_ptr=0;
  uint64_t __temp579v__dat__pos=0;
  uint64_t __temp579v__dat__length=0;
  char __temp579v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp574v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp579v__unsafe_ptr,&__temp579v__dat__pos,&__temp579v__dat__length,&__temp579v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1807v=__temp579v__unsafe_ptr;
  *__temp1808v=__temp579v__dat__pos;
  *__temp1809v=__temp579v__dat__length;
  *__temp1810v=__temp579v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp604v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1811v, uint64_t* __temp1812v, uint64_t* __temp1813v, char* __temp1814v) {
  uint64_t __temp605v=0;
  char __temp606v__=0;
  char* __temp607v__=0;
  char __temp608v__value=0;
  char first=0;
  char* __temp609v__unsafe_ptr=0;
  uint64_t __temp609v__dat__pos=0;
  uint64_t __temp609v__dat__length=0;
  char __temp609v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp605v=0;
  neq__temp141v(length,__temp605v,&__temp606v__);
  if(__temp606v__){
  __temp_errcode=get__temp532v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp607v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp607v__){
  goto __temp_failure;
  }
  memcpy(&__temp608v__value,__temp607v__,1);
  first=__temp608v__value;
  }
  str__temp578v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp609v__unsafe_ptr,&__temp609v__dat__pos,&__temp609v__dat__length,&__temp609v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1811v=__temp609v__unsafe_ptr;
  *__temp1812v=__temp609v__dat__pos;
  *__temp1813v=__temp609v__dat__length;
  *__temp1814v=__temp609v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp610v(const char* c, char** __temp1815v, uint64_t* __temp1816v, uint64_t* __temp1817v, char* __temp1818v) {
  char* __temp611v__unsafe_ptr=0;
  uint64_t __temp611v__unsafe_size=0;
  uint64_t __temp611v__unsafe_align=0;
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp613v__=0;
  uint64_t length=0;
  uint64_t __temp614v=0;
  uint64_t __temp615v__=0;
  uint64_t __temp616v=0;
  char* __temp617v__unsafe_ptr=0;
  uint64_t __temp617v__dat__pos=0;
  uint64_t __temp617v__dat__length=0;
  char __temp617v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp538v(&__temp611v__unsafe_ptr,&__temp611v__unsafe_size,&__temp611v__unsafe_align);
  __temp612v__unsafe_ptr=__temp611v__unsafe_ptr;
  __temp612v__unsafe_size=__temp611v__unsafe_size;
  __temp612v__unsafe_align=__temp611v__unsafe_align;
  buf__unsafe_ptr=__temp612v__unsafe_ptr;
  buf__unsafe_size=__temp612v__unsafe_size;
  buf__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp20v(buf__unsafe_ptr,c,&__temp613v__);
  buf__unsafe_ptr=__temp613v__;
  if(c){
  length=strlen(c);
  }
  __temp614v=1;
  add__temp169v(length,__temp614v,&__temp615v__);
  buf__unsafe_size=__temp615v__;
  __temp616v=0;
  __temp_errcode=str__temp604v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp616v,length,&__temp617v__unsafe_ptr,&__temp617v__dat__pos,&__temp617v__dat__length,&__temp617v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1815v=__temp617v__unsafe_ptr;
  *__temp1816v=__temp617v__dat__pos;
  *__temp1817v=__temp617v__dat__length;
  *__temp1818v=__temp617v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1270v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1819v, uint64_t* __temp1820v, uint64_t* __temp1821v, char* __temp1822v) {
  goto __temp_return;
  __temp_return:
  *__temp1819v=r__unsafe_ptr;
  *__temp1820v=r__dat__pos;
  *__temp1821v=r__dat__length;
  *__temp1822v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp618v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1823v) {
  goto __temp_return;
  __temp_return:
  *__temp1823v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1274v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1824v) {
  uint64_t __temp1275v=0;
  uint64_t __temp1276v__=0;
  char __temp1277v__=0;
  __temp1275v=0;
  len__temp618v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1276v__);
  eq__temp117v(__temp1275v,__temp1276v__,&__temp1277v__);
  goto __temp_return;
  __temp_return:
  *__temp1824v=__temp1277v__;
}

static inline __attribute__((always_inline)) void raw__temp1268v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1825v, uint64_t* __temp1826v, uint64_t* __temp1827v, char* __temp1828v) {
  goto __temp_return;
  __temp_return:
  *__temp1825v=r__s__unsafe_ptr;
  *__temp1826v=r__s__dat__pos;
  *__temp1827v=r__s__dat__length;
  *__temp1828v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp434v(uint64_t to, uint64_t* __temp1829v, uint64_t* __temp1830v) {
  int __temp435v=0;
  uint64_t __temp436v=0;
  uint64_t _from=0;
  uint64_t __temp437v=0;
  uint64_t from=0;
  __temp436v=0;
  _from=__temp436v;
  __temp437v=_from;
  from=__temp437v;
  goto __temp_return;
  __temp_return:
  *__temp1829v=from;
  *__temp1830v=to;
}

static inline __attribute__((always_inline)) int next__temp438v(uint64_t* __temp1831v, uint64_t r__to, uint64_t* __temp1832v) {
  uint64_t r__from=*__temp1831v;
  char __temp439v__=0;
  uint64_t ret=0;
  uint64_t __temp440v=0;
  uint64_t __temp441v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(r__from,r__to,&__temp439v__);
  if(__temp439v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp440v=1;
  add__temp169v(ret,__temp440v,&__temp441v__);
  r__from=__temp441v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1831v=r__from;
  *__temp1832v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp412v(uint64_t value, uint64_t* __temp1833v) {
  goto __temp_return;
  __temp_return:
  *__temp1833v=value;
}

static inline __attribute__((always_inline)) void lshift__temp421v(uint64_t x__value, uint64_t y, uint64_t* __temp1834v) {
  uint64_t z=0;
  uint64_t __temp422v__value=0;
  z=(x__value<<y);
  bits__temp412v(z,&__temp422v__value);
  goto __temp_return;
  __temp_return:
  *__temp1834v=__temp422v__value;
}

static inline __attribute__((always_inline)) void nat__temp418v(uint64_t x__value, uint64_t* __temp1835v) {
  goto __temp_return;
  __temp_return:
  *__temp1835v=x__value;
}

static inline __attribute__((always_inline)) void get__temp752v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1836v) {
  uint64_t __temp753v__=0;
  char* __temp754v__=0;
  add__temp169v(s__dat__pos,i,&__temp753v__);
  add__temp462v(s__unsafe_ptr,__temp753v__,&__temp754v__);
  goto __temp_return;
  __temp_return:
  *__temp1836v=__temp754v__;
}

static inline __attribute__((always_inline)) void nat__temp410v(char x, uint64_t* __temp1837v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1837v=value;
}

static inline __attribute__((always_inline)) int mod__temp222v(uint64_t x, uint64_t y, uint64_t* __temp1838v) {
  uint64_t zero=0;
  char __temp223v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  zero=0;
  eq__temp117v(y,zero,&__temp223v__);
  if(__temp223v__){
  __temp_errcode=3;
  goto __temp_failure;
  }
  z=x%y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1838v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1219v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1839v) {
  uint64_t __temp1220v=0;
  uint64_t __temp1221v=0;
  uint64_t h=0;
  uint64_t __temp1222v__=0;
  uint64_t __temp1223v__from=0;
  uint64_t __temp1223v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1224v=0;
  uint64_t __temp1225v__=0;
  uint64_t i=0;
  uint64_t __temp1226v__value=0;
  uint64_t __temp1227v=0;
  uint64_t __temp1228v__value=0;
  uint64_t __temp1229v__=0;
  uint64_t __temp1230v__=0;
  char* __temp1231v__=0;
  char __temp1232v__value=0;
  uint64_t __temp1233v__=0;
  uint64_t __temp1234v__=0;
  uint64_t __temp1235v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1220v=5381;
  __temp1221v=__temp1220v;
  h=__temp1221v;
  len__temp618v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1222v__);
  range__temp434v(__temp1222v__,&__temp1223v__from,&__temp1223v__to);
  iter__from=__temp1223v__from;
  iter__to=__temp1223v__to;
  while(1){
  __temp_complain=next__temp438v(&iter__from,iter__to,&__temp1225v__);
  __temp1224v=__temp_complain;
  i=__temp1225v__;
  __temp1224v=__temp1224v==0;
  if(!__temp1224v){
  break;
  }
  bits__temp412v(h,&__temp1226v__value);
  __temp1227v=5;
  lshift__temp421v(__temp1226v__value,__temp1227v,&__temp1228v__value);
  nat__temp418v(__temp1228v__value,&__temp1229v__);
  add__temp169v(__temp1229v__,h,&__temp1230v__);
  get__temp752v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1231v__);
  if(!__temp1231v__){
  goto __temp_failure;
  }
  memcpy(&__temp1232v__value,__temp1231v__,1);
  nat__temp410v(__temp1232v__value,&__temp1233v__);
  add__temp169v(__temp1230v__,__temp1233v__,&__temp1234v__);
  h=__temp1234v__;
  }
  __temp_errcode=mod__temp222v(h,size,&__temp1235v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1839v=__temp1235v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp1840v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1840v=z;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp1841v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1841v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp528v(char** __temp1842v, uint64_t* __temp1843v, uint64_t* __temp1844v, uint64_t i, char** __temp1845v) {
  char* buffer__unsafe_ptr=*__temp1842v;
  uint64_t buffer__unsafe_size=*__temp1843v;
  uint64_t buffer__unsafe_align=*__temp1844v;
  char __temp529v__=0;
  uint64_t __temp530v__=0;
  char* __temp531v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp318v(i,buffer__unsafe_size,&__temp529v__);
  if(__temp529v__){
  __temp_errcode=12;
  goto __temp_failure;
  }
  mul__temp193v(i,buffer__unsafe_align,&__temp530v__);
  add__temp462v(buffer__unsafe_ptr,__temp530v__,&__temp531v__);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1842v=buffer__unsafe_ptr;
  *__temp1843v=buffer__unsafe_size;
  *__temp1844v=buffer__unsafe_align;
  *__temp1845v=__temp531v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp622v(char x, char y, char* __temp1846v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1846v=z;
}

static inline __attribute__((always_inline)) void eq__temp756v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1847v) {
  uint64_t __temp757v__=0;
  uint64_t n=0;
  uint64_t __temp758v__=0;
  char __temp759v__=0;
  char __temp760v=0;
  char __temp761v__=0;
  char __temp762v=0;
  char z=0;
  len__temp618v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp757v__);
  n=__temp757v__;
  len__temp618v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp758v__);
  neq__temp141v(n,__temp758v__,&__temp759v__);
  if(__temp759v__){
  __temp760v=0;
  goto __temp_return;
  }
  neq__temp622v(x__dat__first,y__dat__first,&__temp761v__);
  if(__temp761v__){
  __temp762v=0;
  __temp760v=__temp762v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp760v=z;
  goto __temp_return;
  __temp_return:
  *__temp1847v=__temp760v;
}

static inline __attribute__((always_inline)) void gt__temp270v(uint64_t x, uint64_t y, char* __temp1848v) {
  int __temp271v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp271v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1848v=z;
}

int at__temp1517v(char** __temp1849v, uint64_t* __temp1850v, uint64_t* __temp1851v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1852v) {
  char* data__unsafe_ptr=*__temp1849v;
  uint64_t data__unsafe_size=*__temp1850v;
  uint64_t data__unsafe_align=*__temp1851v;
  char* __temp1518v__unsafe_ptr=0;
  uint64_t __temp1518v__dat__pos=0;
  uint64_t __temp1518v__dat__length=0;
  char __temp1518v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1519v__=0;
  uint64_t __temp1520v=0;
  uint64_t __temp1521v=0;
  char* __temp1522v__=0;
  char* __temp1523v__s__unsafe_ptr=0;
  uint64_t __temp1523v__s__dat__pos=0;
  uint64_t __temp1523v__s__dat__length=0;
  char __temp1523v__s__dat__first=0;
  uint64_t __temp1523v__cost=0;
  char* __temp1524v__unsafe_ptr=0;
  uint64_t __temp1524v__dat__pos=0;
  uint64_t __temp1524v__dat__length=0;
  char __temp1524v__dat__first=0;
  int __temp1525v=0;
  int __temp1526v__=0;
  uint64_t __temp1527v__=0;
  uint64_t n=0;
  uint64_t __temp1528v__=0;
  uint64_t pos=0;
  uint64_t __temp1529v__from=0;
  uint64_t __temp1529v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1530v=0;
  uint64_t __temp1531v__=0;
  uint64_t i=0;
  uint64_t __temp1532v__=0;
  uint64_t __temp1533v=0;
  uint64_t idx=0;
  char __temp1534v__=0;
  uint64_t __temp1535v__=0;
  uint64_t __temp1536v=0;
  char __temp1537v__=0;
  char* __temp1538v__=0;
  char* __temp1539v__s__unsafe_ptr=0;
  uint64_t __temp1539v__s__dat__pos=0;
  uint64_t __temp1539v__s__dat__length=0;
  char __temp1539v__s__dat__first=0;
  uint64_t __temp1539v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1540v__unsafe_ptr=0;
  uint64_t __temp1540v__dat__pos=0;
  uint64_t __temp1540v__dat__length=0;
  char __temp1540v__dat__first=0;
  char __temp1541v__=0;
  char* __temp1542v__=0;
  char* __temp1543v__unsafe_ptr=0;
  uint64_t __temp1543v__dat__pos=0;
  uint64_t __temp1543v__dat__length=0;
  char __temp1543v__dat__first=0;
  char __temp1544v__=0;
  char __temp1545v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1546v__=0;
  char* __temp1547v__s__unsafe_ptr=0;
  uint64_t __temp1547v__s__dat__pos=0;
  uint64_t __temp1547v__s__dat__length=0;
  char __temp1547v__s__dat__first=0;
  uint64_t __temp1547v__cost=0;
  char* __temp1548v__unsafe_ptr=0;
  uint64_t __temp1548v__dat__pos=0;
  uint64_t __temp1548v__dat__length=0;
  char __temp1548v__dat__first=0;
  char* __temp1549v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1270v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1518v__unsafe_ptr,&__temp1518v__dat__pos,&__temp1518v__dat__length,&__temp1518v__dat__first);
  k__unsafe_ptr=__temp1518v__unsafe_ptr;
  k__dat__pos=__temp1518v__dat__pos;
  k__dat__length=__temp1518v__dat__length;
  k__dat__first=__temp1518v__dat__first;
  is_zero__temp1274v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1519v__);
  if(__temp1519v__){
  __temp1520v=0;
  goto __temp_return;
  }
  __temp1521v=0;
  __temp_errcode=get__temp532v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1521v,&__temp1522v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1522v__){
  goto __temp_failure;
  }
  memcpy(&__temp1523v__s__unsafe_ptr,__temp1522v__,8);
  if(!__temp1522v__){
  goto __temp_failure;
  }
  memcpy(&__temp1523v__s__dat__pos,__temp1522v__+8,8);
  if(!__temp1522v__){
  goto __temp_failure;
  }
  memcpy(&__temp1523v__s__dat__length,__temp1522v__+16,8);
  if(!__temp1522v__){
  goto __temp_failure;
  }
  memcpy(&__temp1523v__s__dat__first,__temp1522v__+24,1);
  if(!__temp1522v__){
  goto __temp_failure;
  }
  memcpy(&__temp1523v__cost,__temp1522v__+25,8);
  raw__temp1268v(__temp1523v__s__unsafe_ptr,__temp1523v__s__dat__pos,__temp1523v__s__dat__length,__temp1523v__s__dat__first,__temp1523v__cost,&__temp1524v__unsafe_ptr,&__temp1524v__dat__pos,&__temp1524v__dat__length,&__temp1524v__dat__first);
  not__temp34v(__temp1525v,&__temp1526v__);
  len__temp536v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1527v__);
  n=__temp1527v__;
  __temp_errcode=hash__temp1219v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1528v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1528v__;
  range__temp434v(n,&__temp1529v__from,&__temp1529v__to);
  iter__from=__temp1529v__from;
  iter__to=__temp1529v__to;
  while(1){
  __temp_complain=next__temp438v(&iter__from,iter__to,&__temp1531v__);
  __temp1530v=__temp_complain;
  i=__temp1531v__;
  __temp1530v=__temp1530v==0;
  if(!__temp1530v){
  break;
  }
  add__temp169v(pos,i,&__temp1532v__);
  __temp1533v=__temp1532v__;
  idx=__temp1533v;
  ge__temp318v(idx,n,&__temp1534v__);
  if(__temp1534v__){
  __temp_errcode=sub__temp346v(idx,n,&__temp1535v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1535v__;
  }
  __temp1536v=0;
  eq__temp117v(idx,__temp1536v,&__temp1537v__);
  if(__temp1537v__){
  continue;
  }
  __temp_errcode=get__temp532v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1538v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1538v__){
  goto __temp_failure;
  }
  memcpy(&__temp1539v__s__unsafe_ptr,__temp1538v__,8);
  if(!__temp1538v__){
  goto __temp_failure;
  }
  memcpy(&__temp1539v__s__dat__pos,__temp1538v__+8,8);
  if(!__temp1538v__){
  goto __temp_failure;
  }
  memcpy(&__temp1539v__s__dat__length,__temp1538v__+16,8);
  if(!__temp1538v__){
  goto __temp_failure;
  }
  memcpy(&__temp1539v__s__dat__first,__temp1538v__+24,1);
  if(!__temp1538v__){
  goto __temp_failure;
  }
  memcpy(&__temp1539v__cost,__temp1538v__+25,8);
  entry__s__unsafe_ptr=__temp1539v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1539v__s__dat__pos;
  entry__s__dat__length=__temp1539v__s__dat__length;
  entry__s__dat__first=__temp1539v__s__dat__first;
  entry__cost=__temp1539v__cost;
  raw__temp1268v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1540v__unsafe_ptr,&__temp1540v__dat__pos,&__temp1540v__dat__length,&__temp1540v__dat__first);
  is_zero__temp1274v(__temp1540v__unsafe_ptr,__temp1540v__dat__pos,__temp1540v__dat__length,__temp1540v__dat__first,&__temp1541v__);
  if(__temp1541v__){
  __temp_errcode=mutget__temp528v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1542v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1542v__){
  goto __temp_failure;
  }
  memcpy(__temp1542v__,&k__unsafe_ptr,8);
  if(!__temp1542v__){
  goto __temp_failure;
  }
  memcpy(__temp1542v__+8,&k__dat__pos,8);
  if(!__temp1542v__){
  goto __temp_failure;
  }
  memcpy(__temp1542v__+16,&k__dat__length,8);
  if(!__temp1542v__){
  goto __temp_failure;
  }
  memcpy(__temp1542v__+24,&k__dat__first,1);
  if(!__temp1542v__){
  goto __temp_failure;
  }
  memcpy(__temp1542v__+25,&i,8);
  __temp1520v=idx;
  goto __temp_return;
  }
  raw__temp1268v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1543v__unsafe_ptr,&__temp1543v__dat__pos,&__temp1543v__dat__length,&__temp1543v__dat__first);
  eq__temp756v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1543v__unsafe_ptr,__temp1543v__dat__pos,__temp1543v__dat__length,__temp1543v__dat__first,&__temp1544v__);
  if(__temp1544v__){
  __temp1520v=idx;
  goto __temp_return;
  }
  gt__temp270v(i,entry__cost,&__temp1545v__);
  if(__temp1545v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp532v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1546v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1546v__){
  goto __temp_failure;
  }
  memcpy(&__temp1547v__s__unsafe_ptr,__temp1546v__,8);
  if(!__temp1546v__){
  goto __temp_failure;
  }
  memcpy(&__temp1547v__s__dat__pos,__temp1546v__+8,8);
  if(!__temp1546v__){
  goto __temp_failure;
  }
  memcpy(&__temp1547v__s__dat__length,__temp1546v__+16,8);
  if(!__temp1546v__){
  goto __temp_failure;
  }
  memcpy(&__temp1547v__s__dat__first,__temp1546v__+24,1);
  if(!__temp1546v__){
  goto __temp_failure;
  }
  memcpy(&__temp1547v__cost,__temp1546v__+25,8);
  raw__temp1268v(__temp1547v__s__unsafe_ptr,__temp1547v__s__dat__pos,__temp1547v__s__dat__length,__temp1547v__s__dat__first,__temp1547v__cost,&__temp1548v__unsafe_ptr,&__temp1548v__dat__pos,&__temp1548v__dat__length,&__temp1548v__dat__first);
  k__unsafe_ptr=__temp1548v__unsafe_ptr;
  k__dat__pos=__temp1548v__dat__pos;
  k__dat__length=__temp1548v__dat__length;
  k__dat__first=__temp1548v__dat__first;
  __temp_errcode=mutget__temp528v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1549v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(__temp1549v__,&tmp__unsafe_ptr,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(__temp1549v__+8,&tmp__dat__pos,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(__temp1549v__+16,&tmp__dat__length,8);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(__temp1549v__+24,&tmp__dat__first,1);
  if(!__temp1549v__){
  goto __temp_failure;
  }
  memcpy(__temp1549v__+25,&i,8);
  }
  }
  __temp_errcode=30;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1849v=data__unsafe_ptr;
  *__temp1850v=data__unsafe_size;
  *__temp1851v=data__unsafe_align;
  *__temp1852v=__temp1520v;
  
  return __temp_errcode;
}

int mutget__temp1679v(char** __temp1853v, uint64_t* __temp1854v, uint64_t* __temp1855v, char** __temp1856v, uint64_t* __temp1857v, uint64_t* __temp1858v, const char* key, char** __temp1859v) {
  char* keys__unsafe_ptr=*__temp1853v;
  uint64_t keys__unsafe_size=*__temp1854v;
  uint64_t keys__unsafe_align=*__temp1855v;
  char* values__unsafe_ptr=*__temp1856v;
  uint64_t values__unsafe_size=*__temp1857v;
  uint64_t values__unsafe_align=*__temp1858v;
  char* __temp1680v__unsafe_ptr=0;
  uint64_t __temp1680v__dat__pos=0;
  uint64_t __temp1680v__dat__length=0;
  char __temp1680v__dat__first=0;
  uint64_t __temp1681v__=0;
  char* __temp1682v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(key,&__temp1680v__unsafe_ptr,&__temp1680v__dat__pos,&__temp1680v__dat__length,&__temp1680v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1517v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_align,__temp1680v__unsafe_ptr,__temp1680v__dat__pos,__temp1680v__dat__length,__temp1680v__dat__first,&__temp1681v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp528v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_align,__temp1681v__,&__temp1682v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1853v=keys__unsafe_ptr;
  *__temp1854v=keys__unsafe_size;
  *__temp1855v=keys__unsafe_align;
  *__temp1856v=values__unsafe_ptr;
  *__temp1857v=values__unsafe_size;
  *__temp1858v=values__unsafe_align;
  *__temp1859v=__temp1682v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int raw__temp1272v(const char* r, char** __temp1860v, uint64_t* __temp1861v, uint64_t* __temp1862v, char* __temp1863v) {
  char* __temp1273v__unsafe_ptr=0;
  uint64_t __temp1273v__dat__pos=0;
  uint64_t __temp1273v__dat__length=0;
  char __temp1273v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp610v(r,&__temp1273v__unsafe_ptr,&__temp1273v__dat__pos,&__temp1273v__dat__length,&__temp1273v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1860v=__temp1273v__unsafe_ptr;
  *__temp1861v=__temp1273v__dat__pos;
  *__temp1862v=__temp1273v__dat__length;
  *__temp1863v=__temp1273v__dat__first;
  
  return __temp_errcode;
}

int find__temp1338v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint64_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1864v) {
  char* __temp1339v__unsafe_ptr=0;
  uint64_t __temp1339v__dat__pos=0;
  uint64_t __temp1339v__dat__length=0;
  char __temp1339v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1340v__=0;
  uint64_t __temp1341v=0;
  uint64_t __temp1342v=0;
  char* __temp1343v__=0;
  char* __temp1344v__s__unsafe_ptr=0;
  uint64_t __temp1344v__s__dat__pos=0;
  uint64_t __temp1344v__s__dat__length=0;
  char __temp1344v__s__dat__first=0;
  uint64_t __temp1344v__cost=0;
  char* __temp1345v__unsafe_ptr=0;
  uint64_t __temp1345v__dat__pos=0;
  uint64_t __temp1345v__dat__length=0;
  char __temp1345v__dat__first=0;
  int __temp1346v=0;
  int __temp1347v__=0;
  uint64_t __temp1348v__=0;
  uint64_t n=0;
  uint64_t __temp1349v__=0;
  uint64_t pos=0;
  uint64_t __temp1350v__from=0;
  uint64_t __temp1350v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1351v=0;
  uint64_t __temp1352v__=0;
  uint64_t i=0;
  uint64_t __temp1353v__=0;
  uint64_t __temp1354v=0;
  uint64_t idx=0;
  char __temp1355v__=0;
  uint64_t __temp1356v__=0;
  uint64_t __temp1357v=0;
  char __temp1358v__=0;
  char* __temp1359v__=0;
  char* __temp1360v__s__unsafe_ptr=0;
  uint64_t __temp1360v__s__dat__pos=0;
  uint64_t __temp1360v__s__dat__length=0;
  char __temp1360v__s__dat__first=0;
  uint64_t __temp1360v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1361v__unsafe_ptr=0;
  uint64_t __temp1361v__dat__pos=0;
  uint64_t __temp1361v__dat__length=0;
  char __temp1361v__dat__first=0;
  char __temp1362v__=0;
  char* __temp1363v__unsafe_ptr=0;
  uint64_t __temp1363v__dat__pos=0;
  uint64_t __temp1363v__dat__length=0;
  char __temp1363v__dat__first=0;
  char __temp1364v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1270v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1339v__unsafe_ptr,&__temp1339v__dat__pos,&__temp1339v__dat__length,&__temp1339v__dat__first);
  k__unsafe_ptr=__temp1339v__unsafe_ptr;
  k__dat__pos=__temp1339v__dat__pos;
  k__dat__length=__temp1339v__dat__length;
  k__dat__first=__temp1339v__dat__first;
  is_zero__temp1274v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1340v__);
  if(__temp1340v__){
  __temp1341v=0;
  goto __temp_return;
  }
  __temp1342v=0;
  __temp_errcode=get__temp532v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1342v,&__temp1343v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1343v__){
  goto __temp_failure;
  }
  memcpy(&__temp1344v__s__unsafe_ptr,__temp1343v__,8);
  if(!__temp1343v__){
  goto __temp_failure;
  }
  memcpy(&__temp1344v__s__dat__pos,__temp1343v__+8,8);
  if(!__temp1343v__){
  goto __temp_failure;
  }
  memcpy(&__temp1344v__s__dat__length,__temp1343v__+16,8);
  if(!__temp1343v__){
  goto __temp_failure;
  }
  memcpy(&__temp1344v__s__dat__first,__temp1343v__+24,1);
  if(!__temp1343v__){
  goto __temp_failure;
  }
  memcpy(&__temp1344v__cost,__temp1343v__+25,8);
  raw__temp1268v(__temp1344v__s__unsafe_ptr,__temp1344v__s__dat__pos,__temp1344v__s__dat__length,__temp1344v__s__dat__first,__temp1344v__cost,&__temp1345v__unsafe_ptr,&__temp1345v__dat__pos,&__temp1345v__dat__length,&__temp1345v__dat__first);
  not__temp34v(__temp1346v,&__temp1347v__);
  len__temp536v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1348v__);
  n=__temp1348v__;
  __temp_errcode=hash__temp1219v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1349v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1349v__;
  range__temp434v(n,&__temp1350v__from,&__temp1350v__to);
  iter__from=__temp1350v__from;
  iter__to=__temp1350v__to;
  while(1){
  __temp_complain=next__temp438v(&iter__from,iter__to,&__temp1352v__);
  __temp1351v=__temp_complain;
  i=__temp1352v__;
  __temp1351v=__temp1351v==0;
  if(!__temp1351v){
  break;
  }
  add__temp169v(pos,i,&__temp1353v__);
  __temp1354v=__temp1353v__;
  idx=__temp1354v;
  ge__temp318v(idx,n,&__temp1355v__);
  if(__temp1355v__){
  __temp_errcode=sub__temp346v(idx,n,&__temp1356v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1356v__;
  }
  __temp1357v=0;
  eq__temp117v(idx,__temp1357v,&__temp1358v__);
  if(__temp1358v__){
  continue;
  }
  __temp_errcode=get__temp532v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1359v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1359v__){
  goto __temp_failure;
  }
  memcpy(&__temp1360v__s__unsafe_ptr,__temp1359v__,8);
  if(!__temp1359v__){
  goto __temp_failure;
  }
  memcpy(&__temp1360v__s__dat__pos,__temp1359v__+8,8);
  if(!__temp1359v__){
  goto __temp_failure;
  }
  memcpy(&__temp1360v__s__dat__length,__temp1359v__+16,8);
  if(!__temp1359v__){
  goto __temp_failure;
  }
  memcpy(&__temp1360v__s__dat__first,__temp1359v__+24,1);
  if(!__temp1359v__){
  goto __temp_failure;
  }
  memcpy(&__temp1360v__cost,__temp1359v__+25,8);
  entry__s__unsafe_ptr=__temp1360v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1360v__s__dat__pos;
  entry__s__dat__length=__temp1360v__s__dat__length;
  entry__s__dat__first=__temp1360v__s__dat__first;
  entry__cost=__temp1360v__cost;
  raw__temp1268v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1361v__unsafe_ptr,&__temp1361v__dat__pos,&__temp1361v__dat__length,&__temp1361v__dat__first);
  is_zero__temp1274v(__temp1361v__unsafe_ptr,__temp1361v__dat__pos,__temp1361v__dat__length,__temp1361v__dat__first,&__temp1362v__);
  if(__temp1362v__){
  continue;
  }
  raw__temp1268v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1363v__unsafe_ptr,&__temp1363v__dat__pos,&__temp1363v__dat__length,&__temp1363v__dat__first);
  eq__temp756v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1363v__unsafe_ptr,__temp1363v__dat__pos,__temp1363v__dat__length,__temp1363v__dat__first,&__temp1364v__);
  if(__temp1364v__){
  __temp1341v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=29;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1864v=__temp1341v;
  
  return __temp_errcode;
}

int get__temp1671v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, char** __temp1865v, uint64_t* __temp1866v, uint64_t* __temp1867v, const char* key, char** __temp1868v) {
  char* values__unsafe_ptr=*__temp1865v;
  uint64_t values__unsafe_size=*__temp1866v;
  uint64_t values__unsafe_align=*__temp1867v;
  char* __temp1672v__unsafe_ptr=0;
  uint64_t __temp1672v__dat__pos=0;
  uint64_t __temp1672v__dat__length=0;
  char __temp1672v__dat__first=0;
  uint64_t __temp1673v__=0;
  char* __temp1674v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1272v(key,&__temp1672v__unsafe_ptr,&__temp1672v__dat__pos,&__temp1672v__dat__length,&__temp1672v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1338v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1672v__unsafe_ptr,__temp1672v__dat__pos,__temp1672v__dat__length,__temp1672v__dat__first,&__temp1673v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp532v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,__temp1673v__,&__temp1674v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1865v=values__unsafe_ptr;
  *__temp1866v=values__unsafe_size;
  *__temp1867v=values__unsafe_align;
  *__temp1868v=__temp1674v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp715v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp716v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void bufpos__temp651v(char** __temp1869v, uint64_t* __temp1870v, uint64_t* __temp1871v, char** __temp1872v, uint64_t* __temp1873v, uint64_t* __temp1874v, uint64_t* __temp1875v) {
  char* buf__unsafe_ptr=*__temp1869v;
  uint64_t buf__unsafe_size=*__temp1870v;
  uint64_t buf__unsafe_align=*__temp1871v;
  uint64_t __temp652v=0;
  uint64_t __temp653v=0;
  uint64_t pos=0;
  __temp652v=0;
  __temp653v=__temp652v;
  pos=__temp653v;
  goto __temp_return;
  __temp_return:
  *__temp1869v=buf__unsafe_ptr;
  *__temp1870v=buf__unsafe_size;
  *__temp1871v=buf__unsafe_align;
  *__temp1872v=buf__unsafe_ptr;
  *__temp1873v=buf__unsafe_size;
  *__temp1874v=buf__unsafe_align;
  *__temp1875v=pos;
}

static inline __attribute__((always_inline)) int next__temp1693v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, uint64_t* __temp1876v, char** __temp1877v, uint64_t* __temp1878v, uint64_t* __temp1879v, char* __temp1880v) {
  uint64_t pos=*__temp1876v;
  uint64_t __temp1694v=0;
  char __temp1695v__=0;
  uint64_t __temp1696v=0;
  uint64_t __temp1697v__=0;
  uint64_t __temp1698v=0;
  char* __temp1699v__=0;
  char* __temp1700v__s__unsafe_ptr=0;
  uint64_t __temp1700v__s__dat__pos=0;
  uint64_t __temp1700v__s__dat__length=0;
  char __temp1700v__s__dat__first=0;
  uint64_t __temp1700v__cost=0;
  char* __temp1701v__unsafe_ptr=0;
  uint64_t __temp1701v__dat__pos=0;
  uint64_t __temp1701v__dat__length=0;
  char __temp1701v__dat__first=0;
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
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1705v=0;
  uint64_t __temp1706v__=0;
  char* __temp1707v__unsafe_ptr=0;
  uint64_t __temp1707v__dat__pos=0;
  uint64_t __temp1707v__dat__length=0;
  char __temp1707v__dat__first=0;
  char __temp1708v__=0;
  char* __temp1709v__=0;
  char* __temp1710v__s__unsafe_ptr=0;
  uint64_t __temp1710v__s__dat__pos=0;
  uint64_t __temp1710v__s__dat__length=0;
  char __temp1710v__s__dat__first=0;
  uint64_t __temp1710v__cost=0;
  char* __temp1711v__unsafe_ptr=0;
  uint64_t __temp1711v__dat__pos=0;
  uint64_t __temp1711v__dat__length=0;
  char __temp1711v__dat__first=0;
  uint64_t __temp1712v=0;
  uint64_t __temp1713v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1694v=0;
  eq__temp117v(pos,__temp1694v,&__temp1695v__);
  if(__temp1695v__){
  __temp1696v=1;
  add__temp169v(pos,__temp1696v,&__temp1697v__);
  pos=__temp1697v__;
  __temp1698v=0;
  __temp_errcode=get__temp532v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1698v,&__temp1699v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1699v__){
  goto __temp_failure;
  }
  memcpy(&__temp1700v__s__unsafe_ptr,__temp1699v__,8);
  if(!__temp1699v__){
  goto __temp_failure;
  }
  memcpy(&__temp1700v__s__dat__pos,__temp1699v__+8,8);
  if(!__temp1699v__){
  goto __temp_failure;
  }
  memcpy(&__temp1700v__s__dat__length,__temp1699v__+16,8);
  if(!__temp1699v__){
  goto __temp_failure;
  }
  memcpy(&__temp1700v__s__dat__first,__temp1699v__+24,1);
  if(!__temp1699v__){
  goto __temp_failure;
  }
  memcpy(&__temp1700v__cost,__temp1699v__+25,8);
  raw__temp1268v(__temp1700v__s__unsafe_ptr,__temp1700v__s__dat__pos,__temp1700v__s__dat__length,__temp1700v__s__dat__first,__temp1700v__cost,&__temp1701v__unsafe_ptr,&__temp1701v__dat__pos,&__temp1701v__dat__length,&__temp1701v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp532v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1702v__);
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
  raw__temp1268v(__temp1703v__s__unsafe_ptr,__temp1703v__s__dat__pos,__temp1703v__s__dat__length,__temp1703v__s__dat__first,__temp1703v__cost,&__temp1704v__unsafe_ptr,&__temp1704v__dat__pos,&__temp1704v__dat__length,&__temp1704v__dat__first);
  ret__unsafe_ptr=__temp1704v__unsafe_ptr;
  ret__dat__pos=__temp1704v__dat__pos;
  ret__dat__length=__temp1704v__dat__length;
  ret__dat__first=__temp1704v__dat__first;
  __temp1705v=1;
  add__temp169v(pos,__temp1705v,&__temp1706v__);
  pos=__temp1706v__;
  while(1){
  raw__temp1270v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1707v__unsafe_ptr,&__temp1707v__dat__pos,&__temp1707v__dat__length,&__temp1707v__dat__first);
  is_zero__temp1274v(__temp1707v__unsafe_ptr,__temp1707v__dat__pos,__temp1707v__dat__length,__temp1707v__dat__first,&__temp1708v__);
  if(!__temp1708v__){
  break;
  }
  __temp_errcode=get__temp532v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1709v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1709v__){
  goto __temp_failure;
  }
  memcpy(&__temp1710v__s__unsafe_ptr,__temp1709v__,8);
  if(!__temp1709v__){
  goto __temp_failure;
  }
  memcpy(&__temp1710v__s__dat__pos,__temp1709v__+8,8);
  if(!__temp1709v__){
  goto __temp_failure;
  }
  memcpy(&__temp1710v__s__dat__length,__temp1709v__+16,8);
  if(!__temp1709v__){
  goto __temp_failure;
  }
  memcpy(&__temp1710v__s__dat__first,__temp1709v__+24,1);
  if(!__temp1709v__){
  goto __temp_failure;
  }
  memcpy(&__temp1710v__cost,__temp1709v__+25,8);
  raw__temp1268v(__temp1710v__s__unsafe_ptr,__temp1710v__s__dat__pos,__temp1710v__s__dat__length,__temp1710v__s__dat__first,__temp1710v__cost,&__temp1711v__unsafe_ptr,&__temp1711v__dat__pos,&__temp1711v__dat__length,&__temp1711v__dat__first);
  ret__unsafe_ptr=__temp1711v__unsafe_ptr;
  ret__dat__pos=__temp1711v__dat__pos;
  ret__dat__length=__temp1711v__dat__length;
  ret__dat__first=__temp1711v__dat__first;
  __temp1712v=1;
  add__temp169v(pos,__temp1712v,&__temp1713v__);
  pos=__temp1713v__;
  }
  __temp1701v__unsafe_ptr=ret__unsafe_ptr;
  __temp1701v__dat__pos=ret__dat__pos;
  __temp1701v__dat__length=ret__dat__length;
  __temp1701v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1876v=pos;
  *__temp1877v=__temp1701v__unsafe_ptr;
  *__temp1878v=__temp1701v__dat__pos;
  *__temp1879v=__temp1701v__dat__length;
  *__temp1880v=__temp1701v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1735v() {
  char* __temp1738v__unsafe_ptr=0;
  uint64_t __temp1738v__unsafe_size=0;
  uint64_t __temp1738v__unsafe_align=0;
  char* __temp1739v__unsafe_ptr=0;
  uint64_t __temp1739v__unsafe_size=0;
  uint64_t __temp1739v__unsafe_align=0;
  uint64_t __temp1740v=0;
  char* __temp1741v__unsafe_ptr=0;
  uint64_t __temp1741v__unsafe_size=0;
  uint64_t __temp1741v__unsafe_align=0;
  char __temp1742v____temp468v__=0;
  char* __temp1743v__keys__unsafe_ptr=0;
  uint64_t __temp1743v__keys__unsafe_size=0;
  uint64_t __temp1743v__keys__unsafe_align=0;
  char* __temp1743v__values__unsafe_ptr=0;
  uint64_t __temp1743v__values__unsafe_size=0;
  uint64_t __temp1743v__values__unsafe_align=0;
  char __temp1744v____temp1658v____temp468v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint64_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint64_t map__values__unsafe_align=0;
  char* __temp1746v__=0;
  char* __temp1748v__unsafe_ptr=0;
  uint64_t __temp1748v__dat__pos=0;
  uint64_t __temp1748v__dat__length=0;
  char __temp1748v__dat__first=0;
  char* __temp1750v__=0;
  char* __temp1752v__unsafe_ptr=0;
  uint64_t __temp1752v__dat__pos=0;
  uint64_t __temp1752v__dat__length=0;
  char __temp1752v__dat__first=0;
  char* __temp1753v__=0;
  char* __temp1754v__unsafe_ptr=0;
  uint64_t __temp1754v__dat__pos=0;
  uint64_t __temp1754v__dat__length=0;
  char __temp1754v__dat__first=0;
  char* __temp1756v__=0;
  char* __temp1757v__unsafe_ptr=0;
  uint64_t __temp1757v__dat__pos=0;
  uint64_t __temp1757v__dat__length=0;
  char __temp1757v__dat__first=0;
  char* __temp1759v__buf__unsafe_ptr=0;
  uint64_t __temp1759v__buf__unsafe_size=0;
  uint64_t __temp1759v__buf__unsafe_align=0;
  uint64_t __temp1759v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint64_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1760v=0;
  char* __temp1761v__unsafe_ptr=0;
  uint64_t __temp1761v__dat__pos=0;
  uint64_t __temp1761v__dat__length=0;
  char __temp1761v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1736v(&__temp1738v__unsafe_ptr,&__temp1738v__unsafe_size,&__temp1738v__unsafe_align);
  __temp1739v__unsafe_ptr=__temp1738v__unsafe_ptr;
  __temp1739v__unsafe_size=__temp1738v__unsafe_size;
  __temp1739v__unsafe_align=__temp1738v__unsafe_align;
  __temp1740v=128;
  __temp_errcode=alloc__temp466v(&__temp1739v__unsafe_ptr,&__temp1739v__unsafe_size,&__temp1739v__unsafe_align,__temp1740v,&__temp1741v__unsafe_ptr,&__temp1741v__unsafe_size,&__temp1741v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1651v(&__temp1741v__unsafe_ptr,&__temp1741v__unsafe_size,&__temp1741v__unsafe_align,&__temp1743v__keys__unsafe_ptr,&__temp1743v__keys__unsafe_size,&__temp1743v__keys__unsafe_align,&__temp1743v__values__unsafe_ptr,&__temp1743v__values__unsafe_size,&__temp1743v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1743v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1743v__keys__unsafe_size;
  map__keys__unsafe_align=__temp1743v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1743v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1743v__values__unsafe_size;
  map__values__unsafe_align=__temp1743v__values__unsafe_align;
  __temp_errcode=mutget__temp1679v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1745v,&__temp1746v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp610v(__temp1747v,&__temp1748v__unsafe_ptr,&__temp1748v__dat__pos,&__temp1748v__dat__length,&__temp1748v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1746v__){
  goto __temp_failure;
  }
  memcpy(__temp1746v__,&__temp1748v__unsafe_ptr,8);
  if(!__temp1746v__){
  goto __temp_failure;
  }
  memcpy(__temp1746v__+8,&__temp1748v__dat__pos,8);
  if(!__temp1746v__){
  goto __temp_failure;
  }
  memcpy(__temp1746v__+16,&__temp1748v__dat__length,8);
  if(!__temp1746v__){
  goto __temp_failure;
  }
  memcpy(__temp1746v__+24,&__temp1748v__dat__first,1);
  __temp_errcode=mutget__temp1679v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1749v,&__temp1750v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp610v(__temp1751v,&__temp1752v__unsafe_ptr,&__temp1752v__dat__pos,&__temp1752v__dat__length,&__temp1752v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1750v__){
  goto __temp_failure;
  }
  memcpy(__temp1750v__,&__temp1752v__unsafe_ptr,8);
  if(!__temp1750v__){
  goto __temp_failure;
  }
  memcpy(__temp1750v__+8,&__temp1752v__dat__pos,8);
  if(!__temp1750v__){
  goto __temp_failure;
  }
  memcpy(__temp1750v__+16,&__temp1752v__dat__length,8);
  if(!__temp1750v__){
  goto __temp_failure;
  }
  memcpy(__temp1750v__+24,&__temp1752v__dat__first,1);
  __temp_errcode=get__temp1671v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1745v,&__temp1753v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(&__temp1754v__unsafe_ptr,__temp1753v__,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(&__temp1754v__dat__pos,__temp1753v__+8,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(&__temp1754v__dat__length,__temp1753v__+16,8);
  if(!__temp1753v__){
  goto __temp_failure;
  }
  memcpy(&__temp1754v__dat__first,__temp1753v__+24,1);
  print__temp715v(__temp1754v__unsafe_ptr,__temp1754v__dat__pos,__temp1754v__dat__length,__temp1754v__dat__first);
  __temp_errcode=get__temp1671v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1749v,&__temp1756v__);
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
  print__temp715v(__temp1757v__unsafe_ptr,__temp1757v__dat__pos,__temp1757v__dat__length,__temp1757v__dat__first);
  bufpos__temp651v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&__temp1759v__buf__unsafe_ptr,&__temp1759v__buf__unsafe_size,&__temp1759v__buf__unsafe_align,&__temp1759v__pos);
  it__buf__unsafe_ptr=__temp1759v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1759v__buf__unsafe_size;
  it__buf__unsafe_align=__temp1759v__buf__unsafe_align;
  it__pos=__temp1759v__pos;
  while(1){
  __temp_complain=next__temp1693v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_align,&it__pos,&__temp1761v__unsafe_ptr,&__temp1761v__dat__pos,&__temp1761v__dat__length,&__temp1761v__dat__first);
  __temp1760v=__temp_complain;
  key__unsafe_ptr=__temp1761v__unsafe_ptr;
  key__dat__pos=__temp1761v__dat__pos;
  key__dat__length=__temp1761v__dat__length;
  key__dat__first=__temp1761v__dat__first;
  __temp1760v=__temp1760v==0;
  if(!__temp1760v){
  break;
  }
  print__temp715v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  
  __temp_failure:exists__temp411v(__temp1743v__keys__unsafe_ptr,&__temp1744v____temp1658v____temp468v__);
  if(__temp1744v____temp1658v____temp468v__){
  __temp1743v__keys__unsafe_size=0;
  __temp1743v__keys__unsafe_size=__temp1743v__keys__unsafe_size;
  free__temp460v(&__temp1743v__keys__unsafe_ptr);
  }
  exists__temp411v(__temp1741v__unsafe_ptr,&__temp1742v____temp468v__);
  if(__temp1742v____temp468v__){
  __temp1741v__unsafe_size=0;
  __temp1741v__unsafe_size=__temp1741v__unsafe_size;
  free__temp460v(&__temp1741v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1735v();return 0;}