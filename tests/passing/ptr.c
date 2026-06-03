#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
const char* const __t1555t=",";
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1565t(char** __t1609t, uint64_t* __t1610t, uint16_t* __t1611t, uint16_t* __t1612t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1609t=unsafe_ptr;
  *__t1610t=unsafe_size;
  *__t1611t=unsafe_offset;
  *__t1612t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1613t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1613t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1614t) {
  char* allocated=*__t1614t;
  if(allocated){
  free(allocated);
  }
  *__t1614t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1615t) {
  int value=0;
  *__t1615t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1616t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1616t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1617t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1617t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1618t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1618t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1619t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1619t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1620t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1620t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1621t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1621t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1622t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1622t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1623t) {
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
  *__t1623t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1624t, uint64_t* __t1625t, uint16_t* __t1626t, uint16_t* __t1627t, uint64_t size, char** __t1628t, uint64_t* __t1629t, uint16_t* __t1630t, uint16_t* __t1631t) {
  char* buffer__unsafe_ptr=*__t1624t;
  uint64_t buffer__unsafe_size=*__t1625t;
  uint16_t buffer__unsafe_offset=*__t1626t;
  uint16_t buffer__unsafe_align=*__t1627t;
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
  *__t1624t=buffer__unsafe_ptr;
  *__t1625t=buffer__unsafe_size;
  *__t1626t=buffer__unsafe_offset;
  *__t1627t=buffer__unsafe_align;
  *__t1628t=buffer__unsafe_ptr;
  *__t1629t=buffer__unsafe_size;
  *__t1630t=buffer__unsafe_offset;
  *__t1631t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1632t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1632t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1633t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1633t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1634t) {
  *__t1634t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1635t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1635t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1636t, uint64_t* __t1637t, uint16_t* __t1638t, uint16_t* __t1639t, uint64_t i, char** __t1640t) {
  char* buffer__unsafe_ptr=*__t1636t;
  uint64_t buffer__unsafe_size=*__t1637t;
  uint16_t buffer__unsafe_offset=*__t1638t;
  uint16_t buffer__unsafe_align=*__t1639t;
  char __t630t__=0;
  uint64_t __t631t__=0;
  uint64_t __t632t__=0;
  uint64_t __t633t__=0;
  uint64_t __t634t__=0;
  char* __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t630t__);
  if(__t630t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t631t__);
  mul__t199t(i,__t631t__,&__t632t__);
  nat__t507t(buffer__unsafe_offset,&__t633t__);
  add__t175t(__t632t__,__t633t__,&__t634t__);
  add__t505t(buffer__unsafe_ptr,__t634t__,&__t635t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1636t=buffer__unsafe_ptr;
  *__t1637t=buffer__unsafe_size;
  *__t1638t=buffer__unsafe_offset;
  *__t1639t=buffer__unsafe_align;
  *__t1640t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t636t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1641t) {
  char __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  uint64_t __t641t__=0;
  char* __t642t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t637t__);
  if(__t637t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t638t__);
  mul__t199t(i,__t638t__,&__t639t__);
  nat__t507t(buffer__unsafe_offset,&__t640t__);
  add__t175t(__t639t__,__t640t__,&__t641t__);
  add__t505t(buffer__unsafe_ptr,__t641t__,&__t642t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1641t=__t642t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1642t) {
  char* new_allocated=0;
  char __t500t__=0;
  char __t501t__=0;
  char* __t502t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t447t(new_allocated,&__t500t__);
  not__t28t(__t500t__,&__t501t__);
  if(__t501t__){
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t502t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1642t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1643t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1643t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1644t, uint64_t* __t1645t, uint16_t* __t1646t, uint16_t* __t1647t, uint64_t size, char** __t1648t, uint64_t* __t1649t, uint16_t* __t1650t, uint16_t* __t1651t) {
  char* buffer__unsafe_ptr=*__t1644t;
  uint64_t buffer__unsafe_size=*__t1645t;
  uint16_t buffer__unsafe_offset=*__t1646t;
  uint16_t buffer__unsafe_align=*__t1647t;
  char __t603t__=0;
  uint64_t __t604t=0;
  char __t605t__=0;
  uint64_t __t606t__=0;
  uint64_t __t607t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t608t__=0;
  uint64_t __t609t__=0;
  uint64_t bytes=0;
  char* __t610t__=0;
  char __t611t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t603t__);
  if(__t603t__){
  goto __t_return;
  }
  __t604t=0;
  eq__t120t(buffer__unsafe_size,__t604t,&__t605t__);
  if(__t605t__){
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t606t__);
  mul__t199t(buffer__unsafe_size,__t606t__,&__t607t__);
  prev_bytes=__t607t__;
  buffer__unsafe_size=size;
  nat__t507t(buffer__unsafe_align,&__t608t__);
  mul__t199t(__t608t__,size,&__t609t__);
  bytes=__t609t__;
  __t_errcode=realloc__t499t(buffer__unsafe_ptr,bytes,&__t610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t610t__;
  lt__t252t(prev_bytes,bytes,&__t611t__);
  if(__t611t__){
  zero__t504t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1644t=buffer__unsafe_ptr;
  *__t1645t=buffer__unsafe_size;
  *__t1646t=buffer__unsafe_offset;
  *__t1647t=buffer__unsafe_align;
  *__t1648t=buffer__unsafe_ptr;
  *__t1649t=buffer__unsafe_size;
  *__t1650t=buffer__unsafe_offset;
  *__t1651t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1652t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1652t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t621t(char** __t1653t, uint64_t* __t1654t, uint16_t* __t1655t, uint16_t* __t1656t, char** __t1657t) {
  char* buffer__unsafe_ptr=*__t1653t;
  uint64_t buffer__unsafe_size=*__t1654t;
  uint16_t buffer__unsafe_offset=*__t1655t;
  uint16_t buffer__unsafe_align=*__t1656t;
  uint64_t __t622t=0;
  char __t623t__=0;
  uint64_t __t624t=0;
  uint64_t __t625t__=0;
  uint64_t __t626t__=0;
  uint64_t __t627t__=0;
  char* __t628t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t622t=0;
  eq__t120t(__t622t,buffer__unsafe_size,&__t623t__);
  if(__t623t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t624t=1;
  __t_errcode=sub__t352t(buffer__unsafe_size,__t624t,&__t625t__);
  if(__t_errcode){
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t626t__);
  mul__t199t(__t625t__,__t626t__,&__t627t__);
  add__t505t(buffer__unsafe_ptr,__t627t__,&__t628t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1653t=buffer__unsafe_ptr;
  *__t1654t=buffer__unsafe_size;
  *__t1655t=buffer__unsafe_offset;
  *__t1656t=buffer__unsafe_align;
  *__t1657t=__t628t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void Field____t_buffer____buffer__t1584t(char** __t1658t, uint64_t* __t1659t, uint16_t* __t1660t, uint16_t* __t1661t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=32;
  *__t1658t=unsafe_ptr;
  *__t1659t=unsafe_size;
  *__t1660t=unsafe_offset;
  *__t1661t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t1553t(char* f) {
  double __t1554t__a__x=0;
  double __t1554t__a__y=0;
  double __t1554t__b__x=0;
  double __t1554t__b__y=0;
  double __t1557t__a__x=0;
  double __t1557t__a__y=0;
  double __t1557t__b__x=0;
  double __t1557t__b__y=0;
  double __t1559t__a__x=0;
  double __t1559t__a__y=0;
  double __t1559t__b__x=0;
  double __t1559t__b__y=0;
  double __t1561t__a__x=0;
  double __t1561t__a__y=0;
  double __t1561t__b__x=0;
  double __t1561t__b__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1554t__a__x,f,8);
  memcpy(&__t1554t__a__y,f+8,8);
  memcpy(&__t1554t__b__x,f+16,8);
  memcpy(&__t1554t__b__y,f+24,8);
  print__t383t(__t1554t__a__x,__t1555t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1557t__a__x,f,8);
  memcpy(&__t1557t__a__y,f+8,8);
  memcpy(&__t1557t__b__x,f+16,8);
  memcpy(&__t1557t__b__y,f+24,8);
  print__t383t(__t1557t__a__y,__t1555t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1559t__a__x,f,8);
  memcpy(&__t1559t__a__y,f+8,8);
  memcpy(&__t1559t__b__x,f+16,8);
  memcpy(&__t1559t__b__y,f+24,8);
  print__t383t(__t1559t__b__x,__t1555t);
  if(!f){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1561t__a__x,f,8);
  memcpy(&__t1561t__a__y,f+8,8);
  memcpy(&__t1561t__b__x,f+16,8);
  memcpy(&__t1561t__b__y,f+24,8);
  print__t385t(__t1561t__b__y);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1563t() {
  char* __t1567t__unsafe_ptr=0;
  uint64_t __t1567t__unsafe_size=0;
  uint16_t __t1567t__unsafe_offset=0;
  uint16_t __t1567t__unsafe_align=0;
  uint64_t __t1568t=0;
  char* __t1569t__unsafe_ptr=0;
  uint64_t __t1569t__unsafe_size=0;
  uint16_t __t1569t__unsafe_offset=0;
  uint16_t __t1569t__unsafe_align=0;
  char __t1570t____t534t__=0;
  char* f__unsafe_ptr=0;
  uint64_t f__unsafe_size=0;
  uint16_t f__unsafe_offset=0;
  uint16_t f__unsafe_align=0;
  uint64_t __t1571t=0;
  char* __t1572t__=0;
  double __t1573t=0;
  uint64_t __t1574t=0;
  char* __t1575t__=0;
  double __t1576t__value=0;
  uint64_t __t1578t=0;
  char* __t1579t__=0;
  char* f0=0;
  double __t1580t__value=0;
  uint64_t __t1581t=0;
  char* __t1582t__unsafe_ptr=0;
  uint64_t __t1582t__unsafe_size=0;
  uint16_t __t1582t__unsafe_offset=0;
  uint16_t __t1582t__unsafe_align=0;
  char* __t1583t__=0;
  char* __t1586t__unsafe_ptr=0;
  uint64_t __t1586t__unsafe_size=0;
  uint16_t __t1586t__unsafe_offset=0;
  uint16_t __t1586t__unsafe_align=0;
  char* __t1587t__unsafe_ptr=0;
  uint64_t __t1587t__unsafe_size=0;
  uint16_t __t1587t__unsafe_offset=0;
  uint16_t __t1587t__unsafe_align=0;
  uint64_t __t1588t=0;
  char* __t1589t__unsafe_ptr=0;
  uint64_t __t1589t__unsafe_size=0;
  uint16_t __t1589t__unsafe_offset=0;
  uint16_t __t1589t__unsafe_align=0;
  char __t1590t____t534t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint16_t p__unsafe_offset=0;
  uint16_t p__unsafe_align=0;
  uint64_t __t1591t=0;
  char* __t1592t__=0;
  double __t1593t=0;
  double __t1594t=0;
  double __t1595t=0;
  double __t1596t=0;
  uint64_t __t1597t=0;
  char* __t1598t__=0;
  double __t1600t=0;
  char* __t1601t__unsafe_ptr=0;
  uint64_t __t1601t__unsafe_size=0;
  uint16_t __t1601t__unsafe_offset=0;
  uint16_t __t1601t__unsafe_align=0;
  char* __t1602t__unsafe_ptr=0;
  uint64_t __t1602t__unsafe_size=0;
  uint16_t __t1602t__unsafe_offset=0;
  uint16_t __t1602t__unsafe_align=0;
  uint64_t __t1603t=0;
  char* __t1604t__unsafe_ptr=0;
  uint64_t __t1604t__unsafe_size=0;
  uint16_t __t1604t__unsafe_offset=0;
  uint16_t __t1604t__unsafe_align=0;
  char __t1605t____t534t__=0;
  char* __t1606t__=0;
  char* n=0;
  double __t1607t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1565t(&__t1567t__unsafe_ptr,&__t1567t__unsafe_size,&__t1567t__unsafe_offset,&__t1567t__unsafe_align);
  __t1568t=1;
  __t_errcode=alloc__t532t(&__t1567t__unsafe_ptr,&__t1567t__unsafe_size,&__t1567t__unsafe_offset,&__t1567t__unsafe_align,__t1568t,&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1571t=0;
  __t_errcode=mutget__t629t(&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align,__t1571t,&__t1572t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1573t=1.0;
  if(!__t1572t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1572t__,&__t1573t,8);
  __t1574t=0;
  __t_errcode=get__t636t(__t1569t__unsafe_ptr,__t1569t__unsafe_size,__t1569t__unsafe_offset,__t1569t__unsafe_align,__t1574t,&__t1575t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1575t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1576t__value,__t1575t__,8);
  print__t385t(__t1576t__value);
  __t1578t=0;
  __t_errcode=mutget__t629t(&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align,__t1578t,&__t1579t__);
  if(__t_errcode){
  goto __t_failure;
  }
  f0=__t1579t__;
  if(!f0){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1580t__value,f0,8);
  __t1581t=2;
  __t_errcode=resize__t602t(&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align,__t1581t,&__t1582t__unsafe_ptr,&__t1582t__unsafe_size,&__t1582t__unsafe_offset,&__t1582t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t621t(&__t1569t__unsafe_ptr,&__t1569t__unsafe_size,&__t1569t__unsafe_offset,&__t1569t__unsafe_align,&__t1583t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1583t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1583t__,&__t1580t__value,8);
  Field____t_buffer____buffer__t1584t(&__t1586t__unsafe_ptr,&__t1586t__unsafe_size,&__t1586t__unsafe_offset,&__t1586t__unsafe_align);
  __t1587t__unsafe_ptr=__t1586t__unsafe_ptr;
  __t1587t__unsafe_size=__t1586t__unsafe_size;
  __t1587t__unsafe_offset=__t1586t__unsafe_offset;
  __t1587t__unsafe_align=__t1586t__unsafe_align;
  __t1588t=1;
  __t_errcode=alloc__t532t(&__t1587t__unsafe_ptr,&__t1587t__unsafe_size,&__t1587t__unsafe_offset,&__t1587t__unsafe_align,__t1588t,&__t1589t__unsafe_ptr,&__t1589t__unsafe_size,&__t1589t__unsafe_offset,&__t1589t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t1589t__unsafe_ptr;
  p__unsafe_size=__t1589t__unsafe_size;
  p__unsafe_offset=__t1589t__unsafe_offset;
  p__unsafe_align=__t1589t__unsafe_align;
  __t1591t=0;
  __t_errcode=mutget__t629t(&p__unsafe_ptr,&p__unsafe_size,&p__unsafe_offset,&p__unsafe_align,__t1591t,&__t1592t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1593t=1.0;
  __t1594t=2.0;
  __t1595t=3.0;
  __t1596t=4.0;
  if(!__t1592t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1592t__,&__t1593t,8);
  memcpy(__t1592t__+8,&__t1594t,8);
  memcpy(__t1592t__+16,&__t1595t,8);
  memcpy(__t1592t__+24,&__t1596t,8);
  __t1597t=0;
  __t_errcode=get__t636t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t1597t,&__t1598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t1553t(__t1598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1600t=1.0;
  float____t_buffer____buffer__t1565t(&__t1601t__unsafe_ptr,&__t1601t__unsafe_size,&__t1601t__unsafe_offset,&__t1601t__unsafe_align);
  __t1602t__unsafe_ptr=__t1601t__unsafe_ptr;
  __t1602t__unsafe_size=__t1601t__unsafe_size;
  __t1602t__unsafe_offset=__t1601t__unsafe_offset;
  __t1602t__unsafe_align=__t1601t__unsafe_align;
  __t1603t=1;
  __t_errcode=alloc__t532t(&__t1602t__unsafe_ptr,&__t1602t__unsafe_size,&__t1602t__unsafe_offset,&__t1602t__unsafe_align,__t1603t,&__t1604t__unsafe_ptr,&__t1604t__unsafe_size,&__t1604t__unsafe_offset,&__t1604t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mutlast__t621t(&__t1604t__unsafe_ptr,&__t1604t__unsafe_size,&__t1604t__unsafe_offset,&__t1604t__unsafe_align,&__t1606t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1606t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1606t__,&__t1600t,8);
  n=__t1606t__;
  if(!n){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1607t__value,n,8);
  print__t385t(__t1607t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1604t__unsafe_ptr,&__t1605t____t534t__);
  if(__t1605t____t534t__){
  free__t503t(&__t1604t__unsafe_ptr);
  }
  exists__t447t(__t1589t__unsafe_ptr,&__t1590t____t534t__);
  if(__t1590t____t534t__){
  free__t503t(&__t1589t__unsafe_ptr);
  }
  exists__t447t(__t1569t__unsafe_ptr,&__t1570t____t534t__);
  if(__t1570t____t534t__){
  free__t503t(&__t1569t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1563t();return 0;}