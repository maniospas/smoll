#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t1633t="... and goodbye for now.";
const char* const __t382t="\n";
const char* const __t1628t="hello world!";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
"user input was not a float",
"read string does not fit on buffer",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t1639t, uint64_t* __t1640t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t1639t=from;
  *__t1640t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t1641t, uint64_t* __t1642t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t1641t=__t473t__from;
  *__t1642t=__t473t__to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1643t) {
  int value=0;
  *__t1643t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1644t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1644t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1645t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1645t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1646t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1646t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1647t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1647t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t1648t) {
  char __t479t__=0;
  char __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t479t__);
  if(__t479t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t480t__);
  if(__t480t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1648t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____buffer__t1631t(char** __t1649t, uint64_t* __t1650t, uint16_t* __t1651t, uint16_t* __t1652t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1649t=unsafe_ptr;
  *__t1650t=unsafe_size;
  *__t1651t=unsafe_offset;
  *__t1652t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1653t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1653t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1654t) {
  char* allocated=*__t1654t;
  if(allocated){
  free(allocated);
  }
  *__t1654t=allocated;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1655t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1655t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1656t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1656t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1657t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1657t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1658t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1658t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1659t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1659t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1660t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1660t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1661t, uint64_t* __t1662t, uint16_t* __t1663t, uint16_t* __t1664t, uint64_t size, char** __t1665t, uint64_t* __t1666t, uint16_t* __t1667t, uint16_t* __t1668t) {
  char* buffer__unsafe_ptr=*__t1661t;
  uint64_t buffer__unsafe_size=*__t1662t;
  uint16_t buffer__unsafe_offset=*__t1663t;
  uint16_t buffer__unsafe_align=*__t1664t;
  int __t533t=0;
  char __t534t__=0;
  char __t536t__=0;
  uint64_t __t537t=0;
  char __t538t__=0;
  uint64_t __t539t=0;
  uint64_t __t540t__=0;
  uint64_t __t541t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t__=0;
  uint64_t __t546t__=0;
  uint64_t bytes=0;
  uint64_t __t547t=0;
  char __t548t__=0;
  char* __t549t__=0;
  int __t550t=0;
  uint64_t __t551t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t536t__);
  if(__t536t__){
  __t537t=0;
  neq__t144t(size,__t537t,&__t538t__);
  if(__t538t__){
  __t539t=0;
  nat__t507t(buffer__unsafe_align,&__t540t__);
  mul__t199t(__t540t__,size,&__t541t__);
  zero__t504t(buffer__unsafe_ptr,__t539t,__t541t__);
  }
  goto __t_return;
  }
  __t543t=0;
  neq__t144t(buffer__unsafe_size,__t543t,&__t544t__);
  if(__t544t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t549t__;
  __t551t=0;
  zero__t504t(buffer__unsafe_ptr,__t551t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t534t__);
  if(__t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1661t=buffer__unsafe_ptr;
  *__t1662t=buffer__unsafe_size;
  *__t1663t=buffer__unsafe_offset;
  *__t1664t=buffer__unsafe_align;
  *__t1665t=buffer__unsafe_ptr;
  *__t1666t=buffer__unsafe_size;
  *__t1667t=buffer__unsafe_offset;
  *__t1668t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1669t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1669t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1670t) {
  *__t1670t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1671t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1671t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1672t) {
  char __t641t__=0;
  uint64_t __t642t__=0;
  uint64_t __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  char* __t646t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t641t__);
  if(__t641t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t642t__);
  mul__t199t(i,__t642t__,&__t643t__);
  nat__t507t(buffer__unsafe_offset,&__t644t__);
  add__t175t(__t643t__,__t644t__,&__t645t__);
  add__t505t(buffer__unsafe_ptr,__t645t__,&__t646t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1672t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t1614t(char* sentences__unsafe_ptr, uint64_t sentences__unsafe_size, uint16_t sentences__unsafe_offset, uint16_t sentences__unsafe_align) {
  uint64_t __t1615t=0;
  char __t1616t=0;
  char* __t1617t__=0;
  const char* __t1618t__value=0;
  const char* sentence=0;
  int __t_complain=0;
  __t1615t=0;
  while(1){
  __t_complain=get__t640t(sentences__unsafe_ptr,sentences__unsafe_size,sentences__unsafe_offset,sentences__unsafe_align,__t1615t,&__t1617t__);
  __t1616t=__t_complain;
  if(!__t1617t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t1618t__value,__t1617t__,8);
  }
  sentence=__t1618t__value;
  __t1616t=__t1616t==0;
  __t1615t=__t1615t+1;
  if(!__t1616t){
  break;
  }
  print__t380t(sentence);
  }
}

static inline __attribute__((always_inline)) int main__t1620t() {
  uint64_t __t1622t=0;
  uint64_t __t1623t=0;
  uint64_t __t1624t__from=0;
  uint64_t __t1624t__to=0;
  char __t1625t=0;
  uint64_t __t1626t__=0;
  uint64_t i=0;
  char* __t1634t__unsafe_ptr=0;
  uint64_t __t1634t__unsafe_size=0;
  uint16_t __t1634t__unsafe_offset=0;
  uint16_t __t1634t__unsafe_align=0;
  uint64_t __t1635t=0;
  char* __t1636t__unsafe_ptr=0;
  uint64_t __t1636t__unsafe_size=0;
  uint16_t __t1636t__unsafe_offset=0;
  uint16_t __t1636t__unsafe_align=0;
  char __t1637t____t534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1623t=10;
  range__t471t(__t1623t,&__t1624t__from,&__t1624t__to);
  __t1622t=0;
  while(1){
  __t_complain=get__t478t(__t1624t__from,__t1624t__to,__t1622t,&__t1626t__);
  __t1625t=__t_complain;
  i=__t1626t__;
  __t1625t=__t1625t==0;
  __t1622t=__t1622t+1;
  if(!__t1625t){
  break;
  }
  print__t393t(i);
  }
  cstr____buffer__t1631t(&__t1634t__unsafe_ptr,&__t1634t__unsafe_size,&__t1634t__unsafe_offset,&__t1634t__unsafe_align);
  __t1635t=2;
  __t_errcode=alloc__t532t(&__t1634t__unsafe_ptr,&__t1634t__unsafe_size,&__t1634t__unsafe_offset,&__t1634t__unsafe_align,__t1635t,&__t1636t__unsafe_ptr,&__t1636t__unsafe_size,&__t1636t__unsafe_offset,&__t1636t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1634t__unsafe_ptr,&__t1628t,8);
  memcpy(__t1634t__unsafe_ptr+8,&__t1633t,8);
  print__t1614t(__t1634t__unsafe_ptr,__t1634t__unsafe_size,__t1634t__unsafe_offset,__t1634t__unsafe_align);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1636t__unsafe_ptr,&__t1637t____t534t__);
  if(__t1637t____t534t__){
  free__t503t(&__t1636t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1620t();return 0;}