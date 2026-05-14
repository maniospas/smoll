#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp1750v="manio";
const char* const __temp363v="\n";
const char* const __temp1748v="hello world!";
const char* const __temp1746v="hello";
const char* const __temp1752v="it's a me, manio.";
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

static inline __attribute__((always_inline)) void str__temp_buffer__buffer__temp1737v(char** __temp1764v, uint64_t* __temp1765v, uint64_t* __temp1766v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=25;
  *__temp1764v=unsafe_ptr;
  *__temp1765v=unsafe_size;
  *__temp1766v=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__temp412v(char* x, char* __temp1767v) {
  char z=0;
  z=x!=0;
  goto __temp_return;
  __temp_return:
  *__temp1767v=z;
}

static inline __attribute__((always_inline)) void free__temp461v(char** __temp1768v) {
  char* allocated=*__temp1768v;
  if(allocated){
  free(allocated);
  }
  allocated=0;
  *__temp1768v=allocated;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1769v) {
  int value=0;
  *__temp1769v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1770v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1770v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1771v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1771v=__temp95v__;
}

static inline __attribute__((always_inline)) void eq__temp118v(uint64_t x, uint64_t y, char* __temp1772v) {
  int __temp119v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp119v__);
  z=x==y;
  goto __temp_return;
  __temp_return:
  *__temp1772v=z;
}

static inline __attribute__((always_inline)) void neq__temp142v(uint64_t x, uint64_t y, char* __temp1773v) {
  int __temp143v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp143v__);
  z=x!=y;
  goto __temp_return;
  __temp_return:
  *__temp1773v=z;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp1774v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1774v=z;
}

static inline __attribute__((always_inline)) void zero__temp462v(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) int alloc__temp458v(uint64_t bytes, char** __temp1775v) {
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
  *__temp1775v=unsafe_ptr;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int alloc__temp467v(char** __temp1776v, uint64_t* __temp1777v, uint64_t* __temp1778v, uint64_t size, char** __temp1779v, uint64_t* __temp1780v, uint64_t* __temp1781v) {
  char* buffer__unsafe_ptr=*__temp1776v;
  uint64_t buffer__unsafe_size=*__temp1777v;
  uint64_t buffer__unsafe_align=*__temp1778v;
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
  *__temp1776v=buffer__unsafe_ptr;
  *__temp1777v=buffer__unsafe_size;
  *__temp1778v=buffer__unsafe_align;
  *__temp1779v=buffer__unsafe_ptr;
  *__temp1780v=buffer__unsafe_size;
  *__temp1781v=buffer__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void robinhood_str_entry__temp_buffer__buffer__temp1653v(char** __temp1782v, uint64_t* __temp1783v, uint64_t* __temp1784v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=33;
  *__temp1782v=unsafe_ptr;
  *__temp1783v=unsafe_size;
  *__temp1784v=unsafe_align;
}

static inline __attribute__((always_inline)) void len__temp537v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t* __temp1785v) {
  goto __temp_return;
  __temp_return:
  *__temp1785v=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int strmap__temp1652v(char** __temp1786v, uint64_t* __temp1787v, uint64_t* __temp1788v, char** __temp1789v, uint64_t* __temp1790v, uint64_t* __temp1791v, char** __temp1792v, uint64_t* __temp1793v, uint64_t* __temp1794v) {
  char* values__unsafe_ptr=*__temp1786v;
  uint64_t values__unsafe_size=*__temp1787v;
  uint64_t values__unsafe_align=*__temp1788v;
  char* __temp1655v__unsafe_ptr=0;
  uint64_t __temp1655v__unsafe_size=0;
  uint64_t __temp1655v__unsafe_align=0;
  char* __temp1656v__unsafe_ptr=0;
  uint64_t __temp1656v__unsafe_size=0;
  uint64_t __temp1656v__unsafe_align=0;
  uint64_t __temp1657v__=0;
  char* __temp1658v__unsafe_ptr=0;
  uint64_t __temp1658v__unsafe_size=0;
  uint64_t __temp1658v__unsafe_align=0;
  char __temp1659v____temp469v__=0;
  char* keys__unsafe_ptr=0;
  uint64_t keys__unsafe_size=0;
  uint64_t keys__unsafe_align=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  robinhood_str_entry__temp_buffer__buffer__temp1653v(&__temp1655v__unsafe_ptr,&__temp1655v__unsafe_size,&__temp1655v__unsafe_align);
  __temp1656v__unsafe_ptr=__temp1655v__unsafe_ptr;
  __temp1656v__unsafe_size=__temp1655v__unsafe_size;
  __temp1656v__unsafe_align=__temp1655v__unsafe_align;
  len__temp537v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,&__temp1657v__);
  __temp_errcode=alloc__temp467v(&__temp1656v__unsafe_ptr,&__temp1656v__unsafe_size,&__temp1656v__unsafe_align,__temp1657v__,&__temp1658v__unsafe_ptr,&__temp1658v__unsafe_size,&__temp1658v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  keys__unsafe_ptr=__temp1658v__unsafe_ptr;
  keys__unsafe_size=__temp1658v__unsafe_size;
  keys__unsafe_align=__temp1658v__unsafe_align;
  goto __temp_return;
  
  __temp_failure:exists__temp412v(keys__unsafe_ptr,&__temp1659v____temp469v__);
  if(__temp1659v____temp469v__){
  keys__unsafe_size=0;
  keys__unsafe_size=keys__unsafe_size;
  free__temp461v(&keys__unsafe_ptr);
  }
  __temp_return:
  *__temp1786v=values__unsafe_ptr;
  *__temp1787v=values__unsafe_size;
  *__temp1788v=values__unsafe_align;
  *__temp1789v=keys__unsafe_ptr;
  *__temp1790v=keys__unsafe_size;
  *__temp1791v=keys__unsafe_align;
  *__temp1792v=values__unsafe_ptr;
  *__temp1793v=values__unsafe_size;
  *__temp1794v=values__unsafe_align;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void char__temp_buffer__buffer__temp539v(char** __temp1795v, uint64_t* __temp1796v, uint64_t* __temp1797v) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint64_t unsafe_align=0;
  unsafe_align=1;
  *__temp1795v=unsafe_ptr;
  *__temp1796v=unsafe_size;
  *__temp1797v=unsafe_align;
}

static inline __attribute__((always_inline)) void attach_type__temp21v(char* to, const char* from, char** __temp1798v) {
  *__temp1798v=to;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1799v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1799v=z;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1800v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1800v=z;
}

static inline __attribute__((always_inline)) void attach_type__temp20v(char* to, char* from, char** __temp1801v) {
  *__temp1801v=to;
}

static inline __attribute__((always_inline)) void add__temp463v(char* allocated, uint64_t offset, char** __temp1802v) {
  char* element=0;
  char* __temp464v__=0;
  element=allocated+offset;
  attach_type__temp20v(element,allocated,&__temp464v__);
  goto __temp_return;
  __temp_return:
  *__temp1802v=__temp464v__;
}

static inline __attribute__((always_inline)) int get__temp533v(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint64_t buffer__unsafe_align, uint64_t i, char** __temp1803v) {
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
  *__temp1803v=__temp536v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void str__temp575v(char* unsafe_ptr, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1804v, uint64_t* __temp1805v, uint64_t* __temp1806v, char* __temp1807v) {
  goto __temp_return;
  __temp_return:
  *__temp1804v=unsafe_ptr;
  *__temp1805v=dat__pos;
  *__temp1806v=dat__length;
  *__temp1807v=dat__first;
}

static inline __attribute__((always_inline)) void str__temp579v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t dat__pos, uint64_t dat__length, char dat__first, char** __temp1808v, uint64_t* __temp1809v, uint64_t* __temp1810v, char* __temp1811v) {
  char* unsafe_ptr=0;
  char* __temp580v__unsafe_ptr=0;
  uint64_t __temp580v__dat__pos=0;
  uint64_t __temp580v__dat__length=0;
  char __temp580v__dat__first=0;
  unsafe_ptr=buf__unsafe_ptr;
  str__temp575v(unsafe_ptr,dat__pos,dat__length,dat__first,&__temp580v__unsafe_ptr,&__temp580v__dat__pos,&__temp580v__dat__length,&__temp580v__dat__first);
  goto __temp_return;
  __temp_return:
  *__temp1808v=__temp580v__unsafe_ptr;
  *__temp1809v=__temp580v__dat__pos;
  *__temp1810v=__temp580v__dat__length;
  *__temp1811v=__temp580v__dat__first;
}

static inline __attribute__((always_inline)) int str__temp605v(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint64_t buf__unsafe_align, uint64_t pos, uint64_t length, char** __temp1812v, uint64_t* __temp1813v, uint64_t* __temp1814v, char* __temp1815v) {
  uint64_t __temp606v=0;
  char __temp607v__=0;
  char* __temp608v__=0;
  char __temp609v__value=0;
  char first=0;
  char* __temp610v__unsafe_ptr=0;
  uint64_t __temp610v__dat__pos=0;
  uint64_t __temp610v__dat__length=0;
  char __temp610v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp606v=0;
  neq__temp142v(length,__temp606v,&__temp607v__);
  if(__temp607v__){
  __temp_errcode=get__temp533v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,&__temp608v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp608v__){
  goto __temp_failure;
  }
  memcpy(&__temp609v__value,__temp608v__,1);
  first=__temp609v__value;
  }
  str__temp579v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,pos,length,first,&__temp610v__unsafe_ptr,&__temp610v__dat__pos,&__temp610v__dat__length,&__temp610v__dat__first);
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1812v=__temp610v__unsafe_ptr;
  *__temp1813v=__temp610v__dat__pos;
  *__temp1814v=__temp610v__dat__length;
  *__temp1815v=__temp610v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int str__temp611v(const char* c, char** __temp1816v, uint64_t* __temp1817v, uint64_t* __temp1818v, char* __temp1819v) {
  char* __temp612v__unsafe_ptr=0;
  uint64_t __temp612v__unsafe_size=0;
  uint64_t __temp612v__unsafe_align=0;
  char* __temp613v__unsafe_ptr=0;
  uint64_t __temp613v__unsafe_size=0;
  uint64_t __temp613v__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint64_t buf__unsafe_align=0;
  char* __temp614v__=0;
  uint64_t length=0;
  uint64_t __temp615v=0;
  uint64_t __temp616v__=0;
  uint64_t __temp617v=0;
  char* __temp618v__unsafe_ptr=0;
  uint64_t __temp618v__dat__pos=0;
  uint64_t __temp618v__dat__length=0;
  char __temp618v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  char__temp_buffer__buffer__temp539v(&__temp612v__unsafe_ptr,&__temp612v__unsafe_size,&__temp612v__unsafe_align);
  __temp613v__unsafe_ptr=__temp612v__unsafe_ptr;
  __temp613v__unsafe_size=__temp612v__unsafe_size;
  __temp613v__unsafe_align=__temp612v__unsafe_align;
  buf__unsafe_ptr=__temp613v__unsafe_ptr;
  buf__unsafe_size=__temp613v__unsafe_size;
  buf__unsafe_align=__temp613v__unsafe_align;
  buf__unsafe_ptr=c;
  attach_type__temp21v(buf__unsafe_ptr,c,&__temp614v__);
  buf__unsafe_ptr=__temp614v__;
  if(c){
  length=strlen(c);
  }
  __temp615v=1;
  add__temp170v(length,__temp615v,&__temp616v__);
  buf__unsafe_size=__temp616v__;
  __temp617v=0;
  __temp_errcode=str__temp605v(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_align,__temp617v,length,&__temp618v__unsafe_ptr,&__temp618v__dat__pos,&__temp618v__dat__length,&__temp618v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1816v=__temp618v__unsafe_ptr;
  *__temp1817v=__temp618v__dat__pos;
  *__temp1818v=__temp618v__dat__length;
  *__temp1819v=__temp618v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void raw__temp1271v(char* r__unsafe_ptr, uint64_t r__dat__pos, uint64_t r__dat__length, char r__dat__first, char** __temp1820v, uint64_t* __temp1821v, uint64_t* __temp1822v, char* __temp1823v) {
  goto __temp_return;
  __temp_return:
  *__temp1820v=r__unsafe_ptr;
  *__temp1821v=r__dat__pos;
  *__temp1822v=r__dat__length;
  *__temp1823v=r__dat__first;
}

static inline __attribute__((always_inline)) void len__temp619v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t* __temp1824v) {
  goto __temp_return;
  __temp_return:
  *__temp1824v=s__dat__length;
}

static inline __attribute__((always_inline)) void is_zero__temp1275v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, char* __temp1825v) {
  uint64_t __temp1276v=0;
  uint64_t __temp1277v__=0;
  char __temp1278v__=0;
  __temp1276v=0;
  len__temp619v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1277v__);
  eq__temp118v(__temp1276v,__temp1277v__,&__temp1278v__);
  goto __temp_return;
  __temp_return:
  *__temp1825v=__temp1278v__;
}

static inline __attribute__((always_inline)) void raw__temp1269v(char* r__s__unsafe_ptr, uint64_t r__s__dat__pos, uint64_t r__s__dat__length, char r__s__dat__first, uint64_t r__cost, char** __temp1826v, uint64_t* __temp1827v, uint64_t* __temp1828v, char* __temp1829v) {
  goto __temp_return;
  __temp_return:
  *__temp1826v=r__s__unsafe_ptr;
  *__temp1827v=r__s__dat__pos;
  *__temp1828v=r__s__dat__length;
  *__temp1829v=r__s__dat__first;
}

static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1830v, uint64_t* __temp1831v) {
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
  *__temp1830v=from;
  *__temp1831v=to;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1832v, uint64_t r__to, uint64_t* __temp1833v) {
  uint64_t r__from=*__temp1832v;
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
  *__temp1832v=r__from;
  *__temp1833v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void bits__temp413v(uint64_t value, uint64_t* __temp1834v) {
  goto __temp_return;
  __temp_return:
  *__temp1834v=value;
}

static inline __attribute__((always_inline)) void lshift__temp422v(uint64_t x__value, uint64_t y, uint64_t* __temp1835v) {
  uint64_t z=0;
  uint64_t __temp423v__value=0;
  z=(x__value<<y);
  bits__temp413v(z,&__temp423v__value);
  goto __temp_return;
  __temp_return:
  *__temp1835v=__temp423v__value;
}

static inline __attribute__((always_inline)) void nat__temp419v(uint64_t x__value, uint64_t* __temp1836v) {
  goto __temp_return;
  __temp_return:
  *__temp1836v=x__value;
}

static inline __attribute__((always_inline)) void get__temp753v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first, uint64_t i, char** __temp1837v) {
  uint64_t __temp754v__=0;
  char* __temp755v__=0;
  add__temp170v(s__dat__pos,i,&__temp754v__);
  add__temp463v(s__unsafe_ptr,__temp754v__,&__temp755v__);
  goto __temp_return;
  __temp_return:
  *__temp1837v=__temp755v__;
}

static inline __attribute__((always_inline)) void nat__temp411v(char x, uint64_t* __temp1838v) {
  uint64_t value=0;
  value=x;
  goto __temp_return;
  __temp_return:
  *__temp1838v=value;
}

static inline __attribute__((always_inline)) int mod__temp223v(uint64_t x, uint64_t y, uint64_t* __temp1839v) {
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
  *__temp1839v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int hash__temp1220v(char* k__unsafe_ptr, uint64_t k__dat__pos, uint64_t k__dat__length, char k__dat__first, uint64_t size, uint64_t* __temp1840v) {
  uint64_t __temp1221v=0;
  uint64_t __temp1222v=0;
  uint64_t h=0;
  uint64_t __temp1223v__=0;
  uint64_t __temp1224v__from=0;
  uint64_t __temp1224v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1225v=0;
  uint64_t __temp1226v__=0;
  uint64_t i=0;
  uint64_t __temp1227v__value=0;
  uint64_t __temp1228v=0;
  uint64_t __temp1229v__value=0;
  uint64_t __temp1230v__=0;
  uint64_t __temp1231v__=0;
  char* __temp1232v__=0;
  char __temp1233v__value=0;
  uint64_t __temp1234v__=0;
  uint64_t __temp1235v__=0;
  uint64_t __temp1236v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1221v=5381;
  __temp1222v=__temp1221v;
  h=__temp1222v;
  len__temp619v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1223v__);
  range__temp435v(__temp1223v__,&__temp1224v__from,&__temp1224v__to);
  iter__from=__temp1224v__from;
  iter__to=__temp1224v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1226v__);
  __temp1225v=__temp_complain;
  i=__temp1226v__;
  __temp1225v=__temp1225v==0;
  if(!__temp1225v){
  break;
  }
  bits__temp413v(h,&__temp1227v__value);
  __temp1228v=5;
  lshift__temp422v(__temp1227v__value,__temp1228v,&__temp1229v__value);
  nat__temp419v(__temp1229v__value,&__temp1230v__);
  add__temp170v(__temp1230v__,h,&__temp1231v__);
  get__temp753v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,i,&__temp1232v__);
  if(!__temp1232v__){
  goto __temp_failure;
  }
  memcpy(&__temp1233v__value,__temp1232v__,1);
  nat__temp411v(__temp1233v__value,&__temp1234v__);
  add__temp170v(__temp1231v__,__temp1234v__,&__temp1235v__);
  h=__temp1235v__;
  }
  __temp_errcode=mod__temp223v(h,size,&__temp1236v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1840v=__temp1236v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp1841v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1841v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp1842v) {
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
  *__temp1842v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int mutget__temp529v(char** __temp1843v, uint64_t* __temp1844v, uint64_t* __temp1845v, uint64_t i, char** __temp1846v) {
  char* buffer__unsafe_ptr=*__temp1843v;
  uint64_t buffer__unsafe_size=*__temp1844v;
  uint64_t buffer__unsafe_align=*__temp1845v;
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
  *__temp1843v=buffer__unsafe_ptr;
  *__temp1844v=buffer__unsafe_size;
  *__temp1845v=buffer__unsafe_align;
  *__temp1846v=__temp532v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void neq__temp623v(char x, char y, char* __temp1847v) {
  char z=0;
  z=(x!=y);
  goto __temp_return;
  __temp_return:
  *__temp1847v=z;
}

static inline __attribute__((always_inline)) void eq__temp757v(char* x__unsafe_ptr, uint64_t x__dat__pos, uint64_t x__dat__length, char x__dat__first, char* y__unsafe_ptr, uint64_t y__dat__pos, uint64_t y__dat__length, char y__dat__first, char* __temp1848v) {
  uint64_t __temp758v__=0;
  uint64_t n=0;
  uint64_t __temp759v__=0;
  char __temp760v__=0;
  char __temp761v=0;
  char __temp762v__=0;
  char __temp763v=0;
  char z=0;
  len__temp619v(x__unsafe_ptr,x__dat__pos,x__dat__length,x__dat__first,&__temp758v__);
  n=__temp758v__;
  len__temp619v(y__unsafe_ptr,y__dat__pos,y__dat__length,y__dat__first,&__temp759v__);
  neq__temp142v(n,__temp759v__,&__temp760v__);
  if(__temp760v__){
  __temp761v=0;
  goto __temp_return;
  }
  neq__temp623v(x__dat__first,y__dat__first,&__temp762v__);
  if(__temp762v__){
  __temp763v=0;
  __temp761v=__temp763v;
  goto __temp_return;
  }
  z=!memcmp(x__unsafe_ptr+x__dat__pos,y__unsafe_ptr+y__dat__pos,n);
  __temp761v=z;
  goto __temp_return;
  __temp_return:
  *__temp1848v=__temp761v;
}

static inline __attribute__((always_inline)) void gt__temp271v(uint64_t x, uint64_t y, char* __temp1849v) {
  int __temp272v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp272v__);
  z=x>y;
  goto __temp_return;
  __temp_return:
  *__temp1849v=z;
}

int at__temp1518v(char** __temp1850v, uint64_t* __temp1851v, uint64_t* __temp1852v, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1853v) {
  char* data__unsafe_ptr=*__temp1850v;
  uint64_t data__unsafe_size=*__temp1851v;
  uint64_t data__unsafe_align=*__temp1852v;
  char* __temp1519v__unsafe_ptr=0;
  uint64_t __temp1519v__dat__pos=0;
  uint64_t __temp1519v__dat__length=0;
  char __temp1519v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1520v__=0;
  uint64_t __temp1521v=0;
  uint64_t __temp1522v=0;
  char* __temp1523v__=0;
  char* __temp1524v__s__unsafe_ptr=0;
  uint64_t __temp1524v__s__dat__pos=0;
  uint64_t __temp1524v__s__dat__length=0;
  char __temp1524v__s__dat__first=0;
  uint64_t __temp1524v__cost=0;
  char* __temp1525v__unsafe_ptr=0;
  uint64_t __temp1525v__dat__pos=0;
  uint64_t __temp1525v__dat__length=0;
  char __temp1525v__dat__first=0;
  int __temp1526v=0;
  int __temp1527v__=0;
  uint64_t __temp1528v__=0;
  uint64_t n=0;
  uint64_t __temp1529v__=0;
  uint64_t pos=0;
  uint64_t __temp1530v__from=0;
  uint64_t __temp1530v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1531v=0;
  uint64_t __temp1532v__=0;
  uint64_t i=0;
  uint64_t __temp1533v__=0;
  uint64_t __temp1534v=0;
  uint64_t idx=0;
  char __temp1535v__=0;
  uint64_t __temp1536v__=0;
  uint64_t __temp1537v=0;
  char __temp1538v__=0;
  char* __temp1539v__=0;
  char* __temp1540v__s__unsafe_ptr=0;
  uint64_t __temp1540v__s__dat__pos=0;
  uint64_t __temp1540v__s__dat__length=0;
  char __temp1540v__s__dat__first=0;
  uint64_t __temp1540v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1541v__unsafe_ptr=0;
  uint64_t __temp1541v__dat__pos=0;
  uint64_t __temp1541v__dat__length=0;
  char __temp1541v__dat__first=0;
  char __temp1542v__=0;
  char* __temp1543v__=0;
  char* __temp1544v__unsafe_ptr=0;
  uint64_t __temp1544v__dat__pos=0;
  uint64_t __temp1544v__dat__length=0;
  char __temp1544v__dat__first=0;
  char __temp1545v__=0;
  char __temp1546v__=0;
  char* tmp__unsafe_ptr=0;
  uint64_t tmp__dat__pos=0;
  uint64_t tmp__dat__length=0;
  char tmp__dat__first=0;
  char* __temp1547v__=0;
  char* __temp1548v__s__unsafe_ptr=0;
  uint64_t __temp1548v__s__dat__pos=0;
  uint64_t __temp1548v__s__dat__length=0;
  char __temp1548v__s__dat__first=0;
  uint64_t __temp1548v__cost=0;
  char* __temp1549v__unsafe_ptr=0;
  uint64_t __temp1549v__dat__pos=0;
  uint64_t __temp1549v__dat__length=0;
  char __temp1549v__dat__first=0;
  char* __temp1550v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1271v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1519v__unsafe_ptr,&__temp1519v__dat__pos,&__temp1519v__dat__length,&__temp1519v__dat__first);
  k__unsafe_ptr=__temp1519v__unsafe_ptr;
  k__dat__pos=__temp1519v__dat__pos;
  k__dat__length=__temp1519v__dat__length;
  k__dat__first=__temp1519v__dat__first;
  is_zero__temp1275v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1520v__);
  if(__temp1520v__){
  __temp1521v=0;
  goto __temp_return;
  }
  __temp1522v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1522v,&__temp1523v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1523v__){
  goto __temp_failure;
  }
  memcpy(&__temp1524v__s__unsafe_ptr,__temp1523v__,8);
  if(!__temp1523v__){
  goto __temp_failure;
  }
  memcpy(&__temp1524v__s__dat__pos,__temp1523v__+8,8);
  if(!__temp1523v__){
  goto __temp_failure;
  }
  memcpy(&__temp1524v__s__dat__length,__temp1523v__+16,8);
  if(!__temp1523v__){
  goto __temp_failure;
  }
  memcpy(&__temp1524v__s__dat__first,__temp1523v__+24,1);
  if(!__temp1523v__){
  goto __temp_failure;
  }
  memcpy(&__temp1524v__cost,__temp1523v__+25,8);
  raw__temp1269v(__temp1524v__s__unsafe_ptr,__temp1524v__s__dat__pos,__temp1524v__s__dat__length,__temp1524v__s__dat__first,__temp1524v__cost,&__temp1525v__unsafe_ptr,&__temp1525v__dat__pos,&__temp1525v__dat__length,&__temp1525v__dat__first);
  not__temp35v(__temp1526v,&__temp1527v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1528v__);
  n=__temp1528v__;
  __temp_errcode=hash__temp1220v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1529v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1529v__;
  range__temp435v(n,&__temp1530v__from,&__temp1530v__to);
  iter__from=__temp1530v__from;
  iter__to=__temp1530v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1532v__);
  __temp1531v=__temp_complain;
  i=__temp1532v__;
  __temp1531v=__temp1531v==0;
  if(!__temp1531v){
  break;
  }
  add__temp170v(pos,i,&__temp1533v__);
  __temp1534v=__temp1533v__;
  idx=__temp1534v;
  ge__temp319v(idx,n,&__temp1535v__);
  if(__temp1535v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1536v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1536v__;
  }
  __temp1537v=0;
  eq__temp118v(idx,__temp1537v,&__temp1538v__);
  if(__temp1538v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1539v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1539v__){
  goto __temp_failure;
  }
  memcpy(&__temp1540v__s__unsafe_ptr,__temp1539v__,8);
  if(!__temp1539v__){
  goto __temp_failure;
  }
  memcpy(&__temp1540v__s__dat__pos,__temp1539v__+8,8);
  if(!__temp1539v__){
  goto __temp_failure;
  }
  memcpy(&__temp1540v__s__dat__length,__temp1539v__+16,8);
  if(!__temp1539v__){
  goto __temp_failure;
  }
  memcpy(&__temp1540v__s__dat__first,__temp1539v__+24,1);
  if(!__temp1539v__){
  goto __temp_failure;
  }
  memcpy(&__temp1540v__cost,__temp1539v__+25,8);
  entry__s__unsafe_ptr=__temp1540v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1540v__s__dat__pos;
  entry__s__dat__length=__temp1540v__s__dat__length;
  entry__s__dat__first=__temp1540v__s__dat__first;
  entry__cost=__temp1540v__cost;
  raw__temp1269v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1541v__unsafe_ptr,&__temp1541v__dat__pos,&__temp1541v__dat__length,&__temp1541v__dat__first);
  is_zero__temp1275v(__temp1541v__unsafe_ptr,__temp1541v__dat__pos,__temp1541v__dat__length,__temp1541v__dat__first,&__temp1542v__);
  if(__temp1542v__){
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1543v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1543v__){
  goto __temp_failure;
  }
  memcpy(__temp1543v__,&k__unsafe_ptr,8);
  if(!__temp1543v__){
  goto __temp_failure;
  }
  memcpy(__temp1543v__+8,&k__dat__pos,8);
  if(!__temp1543v__){
  goto __temp_failure;
  }
  memcpy(__temp1543v__+16,&k__dat__length,8);
  if(!__temp1543v__){
  goto __temp_failure;
  }
  memcpy(__temp1543v__+24,&k__dat__first,1);
  if(!__temp1543v__){
  goto __temp_failure;
  }
  memcpy(__temp1543v__+25,&i,8);
  __temp1521v=idx;
  goto __temp_return;
  }
  raw__temp1269v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1544v__unsafe_ptr,&__temp1544v__dat__pos,&__temp1544v__dat__length,&__temp1544v__dat__first);
  eq__temp757v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1544v__unsafe_ptr,__temp1544v__dat__pos,__temp1544v__dat__length,__temp1544v__dat__first,&__temp1545v__);
  if(__temp1545v__){
  __temp1521v=idx;
  goto __temp_return;
  }
  gt__temp271v(i,entry__cost,&__temp1546v__);
  if(__temp1546v__){
  tmp__unsafe_ptr=k__unsafe_ptr;
  tmp__dat__pos=k__dat__pos;
  tmp__dat__length=k__dat__length;
  tmp__dat__first=k__dat__first;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1547v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1547v__){
  goto __temp_failure;
  }
  memcpy(&__temp1548v__s__unsafe_ptr,__temp1547v__,8);
  if(!__temp1547v__){
  goto __temp_failure;
  }
  memcpy(&__temp1548v__s__dat__pos,__temp1547v__+8,8);
  if(!__temp1547v__){
  goto __temp_failure;
  }
  memcpy(&__temp1548v__s__dat__length,__temp1547v__+16,8);
  if(!__temp1547v__){
  goto __temp_failure;
  }
  memcpy(&__temp1548v__s__dat__first,__temp1547v__+24,1);
  if(!__temp1547v__){
  goto __temp_failure;
  }
  memcpy(&__temp1548v__cost,__temp1547v__+25,8);
  raw__temp1269v(__temp1548v__s__unsafe_ptr,__temp1548v__s__dat__pos,__temp1548v__s__dat__length,__temp1548v__s__dat__first,__temp1548v__cost,&__temp1549v__unsafe_ptr,&__temp1549v__dat__pos,&__temp1549v__dat__length,&__temp1549v__dat__first);
  k__unsafe_ptr=__temp1549v__unsafe_ptr;
  k__dat__pos=__temp1549v__dat__pos;
  k__dat__length=__temp1549v__dat__length;
  k__dat__first=__temp1549v__dat__first;
  __temp_errcode=mutget__temp529v(&data__unsafe_ptr,&data__unsafe_size,&data__unsafe_align,idx,&__temp1550v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1550v__){
  goto __temp_failure;
  }
  memcpy(__temp1550v__,&tmp__unsafe_ptr,8);
  if(!__temp1550v__){
  goto __temp_failure;
  }
  memcpy(__temp1550v__+8,&tmp__dat__pos,8);
  if(!__temp1550v__){
  goto __temp_failure;
  }
  memcpy(__temp1550v__+16,&tmp__dat__length,8);
  if(!__temp1550v__){
  goto __temp_failure;
  }
  memcpy(__temp1550v__+24,&tmp__dat__first,1);
  if(!__temp1550v__){
  goto __temp_failure;
  }
  memcpy(__temp1550v__+25,&i,8);
  }
  }
  __temp_errcode=30;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1850v=data__unsafe_ptr;
  *__temp1851v=data__unsafe_size;
  *__temp1852v=data__unsafe_align;
  *__temp1853v=__temp1521v;
  
  return __temp_errcode;
}

int mutget__temp1680v(char** __temp1854v, uint64_t* __temp1855v, uint64_t* __temp1856v, char** __temp1857v, uint64_t* __temp1858v, uint64_t* __temp1859v, const char* key, char** __temp1860v) {
  char* keys__unsafe_ptr=*__temp1854v;
  uint64_t keys__unsafe_size=*__temp1855v;
  uint64_t keys__unsafe_align=*__temp1856v;
  char* values__unsafe_ptr=*__temp1857v;
  uint64_t values__unsafe_size=*__temp1858v;
  uint64_t values__unsafe_align=*__temp1859v;
  char* __temp1681v__unsafe_ptr=0;
  uint64_t __temp1681v__dat__pos=0;
  uint64_t __temp1681v__dat__length=0;
  char __temp1681v__dat__first=0;
  uint64_t __temp1682v__=0;
  char* __temp1683v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(key,&__temp1681v__unsafe_ptr,&__temp1681v__dat__pos,&__temp1681v__dat__length,&__temp1681v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=at__temp1518v(&keys__unsafe_ptr,&keys__unsafe_size,&keys__unsafe_align,__temp1681v__unsafe_ptr,__temp1681v__dat__pos,__temp1681v__dat__length,__temp1681v__dat__first,&__temp1682v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=mutget__temp529v(&values__unsafe_ptr,&values__unsafe_size,&values__unsafe_align,__temp1682v__,&__temp1683v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1854v=keys__unsafe_ptr;
  *__temp1855v=keys__unsafe_size;
  *__temp1856v=keys__unsafe_align;
  *__temp1857v=values__unsafe_ptr;
  *__temp1858v=values__unsafe_size;
  *__temp1859v=values__unsafe_align;
  *__temp1860v=__temp1683v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int raw__temp1273v(const char* r, char** __temp1861v, uint64_t* __temp1862v, uint64_t* __temp1863v, char* __temp1864v) {
  char* __temp1274v__unsafe_ptr=0;
  uint64_t __temp1274v__dat__pos=0;
  uint64_t __temp1274v__dat__length=0;
  char __temp1274v__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=str__temp611v(r,&__temp1274v__unsafe_ptr,&__temp1274v__dat__pos,&__temp1274v__dat__length,&__temp1274v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1861v=__temp1274v__unsafe_ptr;
  *__temp1862v=__temp1274v__dat__pos;
  *__temp1863v=__temp1274v__dat__length;
  *__temp1864v=__temp1274v__dat__first;
  
  return __temp_errcode;
}

int find__temp1453v(char* data__unsafe_ptr, uint64_t data__unsafe_size, uint64_t data__unsafe_align, char* _k__unsafe_ptr, uint64_t _k__dat__pos, uint64_t _k__dat__length, char _k__dat__first, uint64_t* __temp1865v) {
  char* __temp1454v__unsafe_ptr=0;
  uint64_t __temp1454v__dat__pos=0;
  uint64_t __temp1454v__dat__length=0;
  char __temp1454v__dat__first=0;
  char* k__unsafe_ptr=0;
  uint64_t k__dat__pos=0;
  uint64_t k__dat__length=0;
  char k__dat__first=0;
  char __temp1455v__=0;
  uint64_t __temp1456v=0;
  uint64_t __temp1457v=0;
  char* __temp1458v__=0;
  char* __temp1459v__s__unsafe_ptr=0;
  uint64_t __temp1459v__s__dat__pos=0;
  uint64_t __temp1459v__s__dat__length=0;
  char __temp1459v__s__dat__first=0;
  uint64_t __temp1459v__cost=0;
  char* __temp1460v__unsafe_ptr=0;
  uint64_t __temp1460v__dat__pos=0;
  uint64_t __temp1460v__dat__length=0;
  char __temp1460v__dat__first=0;
  int __temp1461v=0;
  int __temp1462v__=0;
  uint64_t __temp1463v__=0;
  uint64_t n=0;
  uint64_t __temp1464v__=0;
  uint64_t pos=0;
  uint64_t __temp1465v__from=0;
  uint64_t __temp1465v__to=0;
  uint64_t iter__from=0;
  uint64_t iter__to=0;
  char __temp1466v=0;
  uint64_t __temp1467v__=0;
  uint64_t i=0;
  uint64_t __temp1468v__=0;
  uint64_t __temp1469v=0;
  uint64_t idx=0;
  char __temp1470v__=0;
  uint64_t __temp1471v__=0;
  uint64_t __temp1472v=0;
  char __temp1473v__=0;
  char* __temp1474v__=0;
  char* __temp1475v__s__unsafe_ptr=0;
  uint64_t __temp1475v__s__dat__pos=0;
  uint64_t __temp1475v__s__dat__length=0;
  char __temp1475v__s__dat__first=0;
  uint64_t __temp1475v__cost=0;
  char* entry__s__unsafe_ptr=0;
  uint64_t entry__s__dat__pos=0;
  uint64_t entry__s__dat__length=0;
  char entry__s__dat__first=0;
  uint64_t entry__cost=0;
  char* __temp1476v__unsafe_ptr=0;
  uint64_t __temp1476v__dat__pos=0;
  uint64_t __temp1476v__dat__length=0;
  char __temp1476v__dat__first=0;
  char __temp1477v__=0;
  char* __temp1478v__unsafe_ptr=0;
  uint64_t __temp1478v__dat__pos=0;
  uint64_t __temp1478v__dat__length=0;
  char __temp1478v__dat__first=0;
  char __temp1479v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  raw__temp1271v(_k__unsafe_ptr,_k__dat__pos,_k__dat__length,_k__dat__first,&__temp1454v__unsafe_ptr,&__temp1454v__dat__pos,&__temp1454v__dat__length,&__temp1454v__dat__first);
  k__unsafe_ptr=__temp1454v__unsafe_ptr;
  k__dat__pos=__temp1454v__dat__pos;
  k__dat__length=__temp1454v__dat__length;
  k__dat__first=__temp1454v__dat__first;
  is_zero__temp1275v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,&__temp1455v__);
  if(__temp1455v__){
  __temp1456v=0;
  goto __temp_return;
  }
  __temp1457v=0;
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,__temp1457v,&__temp1458v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1458v__){
  goto __temp_failure;
  }
  memcpy(&__temp1459v__s__unsafe_ptr,__temp1458v__,8);
  if(!__temp1458v__){
  goto __temp_failure;
  }
  memcpy(&__temp1459v__s__dat__pos,__temp1458v__+8,8);
  if(!__temp1458v__){
  goto __temp_failure;
  }
  memcpy(&__temp1459v__s__dat__length,__temp1458v__+16,8);
  if(!__temp1458v__){
  goto __temp_failure;
  }
  memcpy(&__temp1459v__s__dat__first,__temp1458v__+24,1);
  if(!__temp1458v__){
  goto __temp_failure;
  }
  memcpy(&__temp1459v__cost,__temp1458v__+25,8);
  raw__temp1269v(__temp1459v__s__unsafe_ptr,__temp1459v__s__dat__pos,__temp1459v__s__dat__length,__temp1459v__s__dat__first,__temp1459v__cost,&__temp1460v__unsafe_ptr,&__temp1460v__dat__pos,&__temp1460v__dat__length,&__temp1460v__dat__first);
  not__temp35v(__temp1461v,&__temp1462v__);
  len__temp537v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,&__temp1463v__);
  n=__temp1463v__;
  __temp_errcode=hash__temp1220v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,n,&__temp1464v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  pos=__temp1464v__;
  range__temp435v(n,&__temp1465v__from,&__temp1465v__to);
  iter__from=__temp1465v__from;
  iter__to=__temp1465v__to;
  while(1){
  __temp_complain=next__temp439v(&iter__from,iter__to,&__temp1467v__);
  __temp1466v=__temp_complain;
  i=__temp1467v__;
  __temp1466v=__temp1466v==0;
  if(!__temp1466v){
  break;
  }
  add__temp170v(pos,i,&__temp1468v__);
  __temp1469v=__temp1468v__;
  idx=__temp1469v;
  ge__temp319v(idx,n,&__temp1470v__);
  if(__temp1470v__){
  __temp_errcode=sub__temp347v(idx,n,&__temp1471v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  idx=__temp1471v__;
  }
  __temp1472v=0;
  eq__temp118v(idx,__temp1472v,&__temp1473v__);
  if(__temp1473v__){
  continue;
  }
  __temp_errcode=get__temp533v(data__unsafe_ptr,data__unsafe_size,data__unsafe_align,idx,&__temp1474v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1474v__){
  goto __temp_failure;
  }
  memcpy(&__temp1475v__s__unsafe_ptr,__temp1474v__,8);
  if(!__temp1474v__){
  goto __temp_failure;
  }
  memcpy(&__temp1475v__s__dat__pos,__temp1474v__+8,8);
  if(!__temp1474v__){
  goto __temp_failure;
  }
  memcpy(&__temp1475v__s__dat__length,__temp1474v__+16,8);
  if(!__temp1474v__){
  goto __temp_failure;
  }
  memcpy(&__temp1475v__s__dat__first,__temp1474v__+24,1);
  if(!__temp1474v__){
  goto __temp_failure;
  }
  memcpy(&__temp1475v__cost,__temp1474v__+25,8);
  entry__s__unsafe_ptr=__temp1475v__s__unsafe_ptr;
  entry__s__dat__pos=__temp1475v__s__dat__pos;
  entry__s__dat__length=__temp1475v__s__dat__length;
  entry__s__dat__first=__temp1475v__s__dat__first;
  entry__cost=__temp1475v__cost;
  raw__temp1269v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1476v__unsafe_ptr,&__temp1476v__dat__pos,&__temp1476v__dat__length,&__temp1476v__dat__first);
  is_zero__temp1275v(__temp1476v__unsafe_ptr,__temp1476v__dat__pos,__temp1476v__dat__length,__temp1476v__dat__first,&__temp1477v__);
  if(__temp1477v__){
  continue;
  }
  raw__temp1269v(entry__s__unsafe_ptr,entry__s__dat__pos,entry__s__dat__length,entry__s__dat__first,entry__cost,&__temp1478v__unsafe_ptr,&__temp1478v__dat__pos,&__temp1478v__dat__length,&__temp1478v__dat__first);
  eq__temp757v(k__unsafe_ptr,k__dat__pos,k__dat__length,k__dat__first,__temp1478v__unsafe_ptr,__temp1478v__dat__pos,__temp1478v__dat__length,__temp1478v__dat__first,&__temp1479v__);
  if(__temp1479v__){
  __temp1456v=idx;
  goto __temp_return;
  }
  }
  __temp_errcode=29;
  goto __temp_failure;
  
  __temp_failure:__temp_return:
  *__temp1865v=__temp1456v;
  
  return __temp_errcode;
}

int get__temp1672v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, char** __temp1866v, uint64_t* __temp1867v, uint64_t* __temp1868v, const char* key, char** __temp1869v) {
  char* values__unsafe_ptr=*__temp1866v;
  uint64_t values__unsafe_size=*__temp1867v;
  uint64_t values__unsafe_align=*__temp1868v;
  char* __temp1673v__unsafe_ptr=0;
  uint64_t __temp1673v__dat__pos=0;
  uint64_t __temp1673v__dat__length=0;
  char __temp1673v__dat__first=0;
  uint64_t __temp1674v__=0;
  char* __temp1675v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=raw__temp1273v(key,&__temp1673v__unsafe_ptr,&__temp1673v__dat__pos,&__temp1673v__dat__length,&__temp1673v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=find__temp1453v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1673v__unsafe_ptr,__temp1673v__dat__pos,__temp1673v__dat__length,__temp1673v__dat__first,&__temp1674v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=get__temp533v(values__unsafe_ptr,values__unsafe_size,values__unsafe_align,__temp1674v__,&__temp1675v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1866v=values__unsafe_ptr;
  *__temp1867v=values__unsafe_size;
  *__temp1868v=values__unsafe_align;
  *__temp1869v=__temp1675v__;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp714v(char* s__unsafe_ptr, uint64_t s__dat__pos, uint64_t s__dat__length, char s__dat__first) {
  int __temp715v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.*s%s",s__dat__length,s__dat__pos+s__unsafe_ptr,endl);
}

static inline __attribute__((always_inline)) void bufpos__temp652v(char** __temp1870v, uint64_t* __temp1871v, uint64_t* __temp1872v, char** __temp1873v, uint64_t* __temp1874v, uint64_t* __temp1875v, uint64_t* __temp1876v) {
  char* buf__unsafe_ptr=*__temp1870v;
  uint64_t buf__unsafe_size=*__temp1871v;
  uint64_t buf__unsafe_align=*__temp1872v;
  uint64_t __temp653v=0;
  uint64_t __temp654v=0;
  uint64_t pos=0;
  __temp653v=0;
  __temp654v=__temp653v;
  pos=__temp654v;
  goto __temp_return;
  __temp_return:
  *__temp1870v=buf__unsafe_ptr;
  *__temp1871v=buf__unsafe_size;
  *__temp1872v=buf__unsafe_align;
  *__temp1873v=buf__unsafe_ptr;
  *__temp1874v=buf__unsafe_size;
  *__temp1875v=buf__unsafe_align;
  *__temp1876v=pos;
}

static inline __attribute__((always_inline)) int next__temp1694v(char* keys__unsafe_ptr, uint64_t keys__unsafe_size, uint64_t keys__unsafe_align, uint64_t* __temp1877v, char** __temp1878v, uint64_t* __temp1879v, uint64_t* __temp1880v, char* __temp1881v) {
  uint64_t pos=*__temp1877v;
  uint64_t __temp1695v=0;
  char __temp1696v__=0;
  uint64_t __temp1697v=0;
  uint64_t __temp1698v__=0;
  uint64_t __temp1699v=0;
  char* __temp1700v__=0;
  char* __temp1701v__s__unsafe_ptr=0;
  uint64_t __temp1701v__s__dat__pos=0;
  uint64_t __temp1701v__s__dat__length=0;
  char __temp1701v__s__dat__first=0;
  uint64_t __temp1701v__cost=0;
  char* __temp1702v__unsafe_ptr=0;
  uint64_t __temp1702v__dat__pos=0;
  uint64_t __temp1702v__dat__length=0;
  char __temp1702v__dat__first=0;
  char* __temp1703v__=0;
  char* __temp1704v__s__unsafe_ptr=0;
  uint64_t __temp1704v__s__dat__pos=0;
  uint64_t __temp1704v__s__dat__length=0;
  char __temp1704v__s__dat__first=0;
  uint64_t __temp1704v__cost=0;
  char* __temp1705v__unsafe_ptr=0;
  uint64_t __temp1705v__dat__pos=0;
  uint64_t __temp1705v__dat__length=0;
  char __temp1705v__dat__first=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__dat__pos=0;
  uint64_t ret__dat__length=0;
  char ret__dat__first=0;
  uint64_t __temp1706v=0;
  uint64_t __temp1707v__=0;
  char* __temp1708v__unsafe_ptr=0;
  uint64_t __temp1708v__dat__pos=0;
  uint64_t __temp1708v__dat__length=0;
  char __temp1708v__dat__first=0;
  char __temp1709v__=0;
  char* __temp1710v__=0;
  char* __temp1711v__s__unsafe_ptr=0;
  uint64_t __temp1711v__s__dat__pos=0;
  uint64_t __temp1711v__s__dat__length=0;
  char __temp1711v__s__dat__first=0;
  uint64_t __temp1711v__cost=0;
  char* __temp1712v__unsafe_ptr=0;
  uint64_t __temp1712v__dat__pos=0;
  uint64_t __temp1712v__dat__length=0;
  char __temp1712v__dat__first=0;
  uint64_t __temp1713v=0;
  uint64_t __temp1714v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1695v=0;
  eq__temp118v(pos,__temp1695v,&__temp1696v__);
  if(__temp1696v__){
  __temp1697v=1;
  add__temp170v(pos,__temp1697v,&__temp1698v__);
  pos=__temp1698v__;
  __temp1699v=0;
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,__temp1699v,&__temp1700v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1700v__){
  goto __temp_failure;
  }
  memcpy(&__temp1701v__s__unsafe_ptr,__temp1700v__,8);
  if(!__temp1700v__){
  goto __temp_failure;
  }
  memcpy(&__temp1701v__s__dat__pos,__temp1700v__+8,8);
  if(!__temp1700v__){
  goto __temp_failure;
  }
  memcpy(&__temp1701v__s__dat__length,__temp1700v__+16,8);
  if(!__temp1700v__){
  goto __temp_failure;
  }
  memcpy(&__temp1701v__s__dat__first,__temp1700v__+24,1);
  if(!__temp1700v__){
  goto __temp_failure;
  }
  memcpy(&__temp1701v__cost,__temp1700v__+25,8);
  raw__temp1269v(__temp1701v__s__unsafe_ptr,__temp1701v__s__dat__pos,__temp1701v__s__dat__length,__temp1701v__s__dat__first,__temp1701v__cost,&__temp1702v__unsafe_ptr,&__temp1702v__dat__pos,&__temp1702v__dat__length,&__temp1702v__dat__first);
  goto __temp_return;
  }
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1703v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1703v__){
  goto __temp_failure;
  }
  memcpy(&__temp1704v__s__unsafe_ptr,__temp1703v__,8);
  if(!__temp1703v__){
  goto __temp_failure;
  }
  memcpy(&__temp1704v__s__dat__pos,__temp1703v__+8,8);
  if(!__temp1703v__){
  goto __temp_failure;
  }
  memcpy(&__temp1704v__s__dat__length,__temp1703v__+16,8);
  if(!__temp1703v__){
  goto __temp_failure;
  }
  memcpy(&__temp1704v__s__dat__first,__temp1703v__+24,1);
  if(!__temp1703v__){
  goto __temp_failure;
  }
  memcpy(&__temp1704v__cost,__temp1703v__+25,8);
  raw__temp1269v(__temp1704v__s__unsafe_ptr,__temp1704v__s__dat__pos,__temp1704v__s__dat__length,__temp1704v__s__dat__first,__temp1704v__cost,&__temp1705v__unsafe_ptr,&__temp1705v__dat__pos,&__temp1705v__dat__length,&__temp1705v__dat__first);
  ret__unsafe_ptr=__temp1705v__unsafe_ptr;
  ret__dat__pos=__temp1705v__dat__pos;
  ret__dat__length=__temp1705v__dat__length;
  ret__dat__first=__temp1705v__dat__first;
  __temp1706v=1;
  add__temp170v(pos,__temp1706v,&__temp1707v__);
  pos=__temp1707v__;
  while(1){
  raw__temp1271v(ret__unsafe_ptr,ret__dat__pos,ret__dat__length,ret__dat__first,&__temp1708v__unsafe_ptr,&__temp1708v__dat__pos,&__temp1708v__dat__length,&__temp1708v__dat__first);
  is_zero__temp1275v(__temp1708v__unsafe_ptr,__temp1708v__dat__pos,__temp1708v__dat__length,__temp1708v__dat__first,&__temp1709v__);
  if(!__temp1709v__){
  break;
  }
  __temp_errcode=get__temp533v(keys__unsafe_ptr,keys__unsafe_size,keys__unsafe_align,pos,&__temp1710v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1710v__){
  goto __temp_failure;
  }
  memcpy(&__temp1711v__s__unsafe_ptr,__temp1710v__,8);
  if(!__temp1710v__){
  goto __temp_failure;
  }
  memcpy(&__temp1711v__s__dat__pos,__temp1710v__+8,8);
  if(!__temp1710v__){
  goto __temp_failure;
  }
  memcpy(&__temp1711v__s__dat__length,__temp1710v__+16,8);
  if(!__temp1710v__){
  goto __temp_failure;
  }
  memcpy(&__temp1711v__s__dat__first,__temp1710v__+24,1);
  if(!__temp1710v__){
  goto __temp_failure;
  }
  memcpy(&__temp1711v__cost,__temp1710v__+25,8);
  raw__temp1269v(__temp1711v__s__unsafe_ptr,__temp1711v__s__dat__pos,__temp1711v__s__dat__length,__temp1711v__s__dat__first,__temp1711v__cost,&__temp1712v__unsafe_ptr,&__temp1712v__dat__pos,&__temp1712v__dat__length,&__temp1712v__dat__first);
  ret__unsafe_ptr=__temp1712v__unsafe_ptr;
  ret__dat__pos=__temp1712v__dat__pos;
  ret__dat__length=__temp1712v__dat__length;
  ret__dat__first=__temp1712v__dat__first;
  __temp1713v=1;
  add__temp170v(pos,__temp1713v,&__temp1714v__);
  pos=__temp1714v__;
  }
  __temp1702v__unsafe_ptr=ret__unsafe_ptr;
  __temp1702v__dat__pos=ret__dat__pos;
  __temp1702v__dat__length=ret__dat__length;
  __temp1702v__dat__first=ret__dat__first;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1877v=pos;
  *__temp1878v=__temp1702v__unsafe_ptr;
  *__temp1879v=__temp1702v__dat__pos;
  *__temp1880v=__temp1702v__dat__length;
  *__temp1881v=__temp1702v__dat__first;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) int main__temp1736v() {
  char* __temp1739v__unsafe_ptr=0;
  uint64_t __temp1739v__unsafe_size=0;
  uint64_t __temp1739v__unsafe_align=0;
  char* __temp1740v__unsafe_ptr=0;
  uint64_t __temp1740v__unsafe_size=0;
  uint64_t __temp1740v__unsafe_align=0;
  uint64_t __temp1741v=0;
  char* __temp1742v__unsafe_ptr=0;
  uint64_t __temp1742v__unsafe_size=0;
  uint64_t __temp1742v__unsafe_align=0;
  char __temp1743v____temp469v__=0;
  char* __temp1744v__keys__unsafe_ptr=0;
  uint64_t __temp1744v__keys__unsafe_size=0;
  uint64_t __temp1744v__keys__unsafe_align=0;
  char* __temp1744v__values__unsafe_ptr=0;
  uint64_t __temp1744v__values__unsafe_size=0;
  uint64_t __temp1744v__values__unsafe_align=0;
  char __temp1745v____temp1659v____temp469v__=0;
  char* map__keys__unsafe_ptr=0;
  uint64_t map__keys__unsafe_size=0;
  uint64_t map__keys__unsafe_align=0;
  char* map__values__unsafe_ptr=0;
  uint64_t map__values__unsafe_size=0;
  uint64_t map__values__unsafe_align=0;
  char* __temp1747v__=0;
  char* __temp1749v__unsafe_ptr=0;
  uint64_t __temp1749v__dat__pos=0;
  uint64_t __temp1749v__dat__length=0;
  char __temp1749v__dat__first=0;
  char* __temp1751v__=0;
  char* __temp1753v__unsafe_ptr=0;
  uint64_t __temp1753v__dat__pos=0;
  uint64_t __temp1753v__dat__length=0;
  char __temp1753v__dat__first=0;
  char* __temp1754v__=0;
  char* __temp1755v__unsafe_ptr=0;
  uint64_t __temp1755v__dat__pos=0;
  uint64_t __temp1755v__dat__length=0;
  char __temp1755v__dat__first=0;
  char* __temp1757v__=0;
  char* __temp1758v__unsafe_ptr=0;
  uint64_t __temp1758v__dat__pos=0;
  uint64_t __temp1758v__dat__length=0;
  char __temp1758v__dat__first=0;
  char* __temp1760v__buf__unsafe_ptr=0;
  uint64_t __temp1760v__buf__unsafe_size=0;
  uint64_t __temp1760v__buf__unsafe_align=0;
  uint64_t __temp1760v__pos=0;
  char* it__buf__unsafe_ptr=0;
  uint64_t it__buf__unsafe_size=0;
  uint64_t it__buf__unsafe_align=0;
  uint64_t it__pos=0;
  char __temp1761v=0;
  char* __temp1762v__unsafe_ptr=0;
  uint64_t __temp1762v__dat__pos=0;
  uint64_t __temp1762v__dat__length=0;
  char __temp1762v__dat__first=0;
  char* key__unsafe_ptr=0;
  uint64_t key__dat__pos=0;
  uint64_t key__dat__length=0;
  char key__dat__first=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  str__temp_buffer__buffer__temp1737v(&__temp1739v__unsafe_ptr,&__temp1739v__unsafe_size,&__temp1739v__unsafe_align);
  __temp1740v__unsafe_ptr=__temp1739v__unsafe_ptr;
  __temp1740v__unsafe_size=__temp1739v__unsafe_size;
  __temp1740v__unsafe_align=__temp1739v__unsafe_align;
  __temp1741v=128;
  __temp_errcode=alloc__temp467v(&__temp1740v__unsafe_ptr,&__temp1740v__unsafe_size,&__temp1740v__unsafe_align,__temp1741v,&__temp1742v__unsafe_ptr,&__temp1742v__unsafe_size,&__temp1742v__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=strmap__temp1652v(&__temp1742v__unsafe_ptr,&__temp1742v__unsafe_size,&__temp1742v__unsafe_align,&__temp1744v__keys__unsafe_ptr,&__temp1744v__keys__unsafe_size,&__temp1744v__keys__unsafe_align,&__temp1744v__values__unsafe_ptr,&__temp1744v__values__unsafe_size,&__temp1744v__values__unsafe_align);
  if(__temp_errcode){
  goto __temp_failure;
  }
  map__keys__unsafe_ptr=__temp1744v__keys__unsafe_ptr;
  map__keys__unsafe_size=__temp1744v__keys__unsafe_size;
  map__keys__unsafe_align=__temp1744v__keys__unsafe_align;
  map__values__unsafe_ptr=__temp1744v__values__unsafe_ptr;
  map__values__unsafe_size=__temp1744v__values__unsafe_size;
  map__values__unsafe_align=__temp1744v__values__unsafe_align;
  __temp_errcode=mutget__temp1680v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1746v,&__temp1747v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp611v(__temp1748v,&__temp1749v__unsafe_ptr,&__temp1749v__dat__pos,&__temp1749v__dat__length,&__temp1749v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1747v__){
  goto __temp_failure;
  }
  memcpy(__temp1747v__,&__temp1749v__unsafe_ptr,8);
  if(!__temp1747v__){
  goto __temp_failure;
  }
  memcpy(__temp1747v__+8,&__temp1749v__dat__pos,8);
  if(!__temp1747v__){
  goto __temp_failure;
  }
  memcpy(__temp1747v__+16,&__temp1749v__dat__length,8);
  if(!__temp1747v__){
  goto __temp_failure;
  }
  memcpy(__temp1747v__+24,&__temp1749v__dat__first,1);
  __temp_errcode=mutget__temp1680v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1750v,&__temp1751v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp_errcode=str__temp611v(__temp1752v,&__temp1753v__unsafe_ptr,&__temp1753v__dat__pos,&__temp1753v__dat__length,&__temp1753v__dat__first);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1751v__){
  goto __temp_failure;
  }
  memcpy(__temp1751v__,&__temp1753v__unsafe_ptr,8);
  if(!__temp1751v__){
  goto __temp_failure;
  }
  memcpy(__temp1751v__+8,&__temp1753v__dat__pos,8);
  if(!__temp1751v__){
  goto __temp_failure;
  }
  memcpy(__temp1751v__+16,&__temp1753v__dat__length,8);
  if(!__temp1751v__){
  goto __temp_failure;
  }
  memcpy(__temp1751v__+24,&__temp1753v__dat__first,1);
  __temp_errcode=get__temp1672v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1746v,&__temp1754v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1754v__){
  goto __temp_failure;
  }
  memcpy(&__temp1755v__unsafe_ptr,__temp1754v__,8);
  if(!__temp1754v__){
  goto __temp_failure;
  }
  memcpy(&__temp1755v__dat__pos,__temp1754v__+8,8);
  if(!__temp1754v__){
  goto __temp_failure;
  }
  memcpy(&__temp1755v__dat__length,__temp1754v__+16,8);
  if(!__temp1754v__){
  goto __temp_failure;
  }
  memcpy(&__temp1755v__dat__first,__temp1754v__+24,1);
  print__temp714v(__temp1755v__unsafe_ptr,__temp1755v__dat__pos,__temp1755v__dat__length,__temp1755v__dat__first);
  __temp_errcode=get__temp1672v(map__keys__unsafe_ptr,map__keys__unsafe_size,map__keys__unsafe_align,&map__values__unsafe_ptr,&map__values__unsafe_size,&map__values__unsafe_align,__temp1750v,&__temp1757v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  if(!__temp1757v__){
  goto __temp_failure;
  }
  memcpy(&__temp1758v__unsafe_ptr,__temp1757v__,8);
  if(!__temp1757v__){
  goto __temp_failure;
  }
  memcpy(&__temp1758v__dat__pos,__temp1757v__+8,8);
  if(!__temp1757v__){
  goto __temp_failure;
  }
  memcpy(&__temp1758v__dat__length,__temp1757v__+16,8);
  if(!__temp1757v__){
  goto __temp_failure;
  }
  memcpy(&__temp1758v__dat__first,__temp1757v__+24,1);
  print__temp714v(__temp1758v__unsafe_ptr,__temp1758v__dat__pos,__temp1758v__dat__length,__temp1758v__dat__first);
  bufpos__temp652v(&map__keys__unsafe_ptr,&map__keys__unsafe_size,&map__keys__unsafe_align,&__temp1760v__buf__unsafe_ptr,&__temp1760v__buf__unsafe_size,&__temp1760v__buf__unsafe_align,&__temp1760v__pos);
  it__buf__unsafe_ptr=__temp1760v__buf__unsafe_ptr;
  it__buf__unsafe_size=__temp1760v__buf__unsafe_size;
  it__buf__unsafe_align=__temp1760v__buf__unsafe_align;
  it__pos=__temp1760v__pos;
  while(1){
  __temp_complain=next__temp1694v(it__buf__unsafe_ptr,it__buf__unsafe_size,it__buf__unsafe_align,&it__pos,&__temp1762v__unsafe_ptr,&__temp1762v__dat__pos,&__temp1762v__dat__length,&__temp1762v__dat__first);
  __temp1761v=__temp_complain;
  key__unsafe_ptr=__temp1762v__unsafe_ptr;
  key__dat__pos=__temp1762v__dat__pos;
  key__dat__length=__temp1762v__dat__length;
  key__dat__first=__temp1762v__dat__first;
  __temp1761v=__temp1761v==0;
  if(!__temp1761v){
  break;
  }
  print__temp714v(key__unsafe_ptr,key__dat__pos,key__dat__length,key__dat__first);
  }
  
  __temp_failure:exists__temp412v(__temp1744v__keys__unsafe_ptr,&__temp1745v____temp1659v____temp469v__);
  if(__temp1745v____temp1659v____temp469v__){
  __temp1744v__keys__unsafe_size=0;
  __temp1744v__keys__unsafe_size=__temp1744v__keys__unsafe_size;
  free__temp461v(&__temp1744v__keys__unsafe_ptr);
  }
  exists__temp412v(__temp1742v__unsafe_ptr,&__temp1743v____temp469v__);
  if(__temp1743v____temp469v__){
  __temp1742v__unsafe_size=0;
  __temp1742v__unsafe_size=__temp1742v__unsafe_size;
  free__temp461v(&__temp1742v__unsafe_ptr);
  }
  
  return __temp_errcode;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1736v();return 0;}