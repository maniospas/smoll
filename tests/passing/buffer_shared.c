#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1557t(char** __t1577t, uint64_t* __t1578t, uint16_t* __t1579t, uint16_t* __t1580t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1577t=unsafe_ptr;
  *__t1578t=unsafe_size;
  *__t1579t=unsafe_offset;
  *__t1580t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1581t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1581t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1582t) {
  char* allocated=*__t1582t;
  if(allocated){
  free(allocated);
  }
  *__t1582t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1583t) {
  int value=0;
  *__t1583t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1584t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1584t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1585t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1585t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1586t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1586t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1587t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1587t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1588t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1588t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1589t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1590t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1590t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1591t) {
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
  *__t1591t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1592t, uint64_t* __t1593t, uint16_t* __t1594t, uint16_t* __t1595t, uint64_t size, char** __t1596t, uint64_t* __t1597t, uint16_t* __t1598t, uint16_t* __t1599t) {
  char* buffer__unsafe_ptr=*__t1592t;
  uint64_t buffer__unsafe_size=*__t1593t;
  uint16_t buffer__unsafe_offset=*__t1594t;
  uint16_t buffer__unsafe_align=*__t1595t;
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
  *__t1592t=buffer__unsafe_ptr;
  *__t1593t=buffer__unsafe_size;
  *__t1594t=buffer__unsafe_offset;
  *__t1595t=buffer__unsafe_align;
  *__t1596t=buffer__unsafe_ptr;
  *__t1597t=buffer__unsafe_size;
  *__t1598t=buffer__unsafe_offset;
  *__t1599t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1600t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1600t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1601t) {
  *__t1601t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1602t) {
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
  *__t1602t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1603t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1603t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1604t, uint64_t* __t1605t, uint16_t* __t1606t, uint16_t* __t1607t, uint64_t size, char** __t1608t, uint64_t* __t1609t, uint16_t* __t1610t, uint16_t* __t1611t) {
  char* buffer__unsafe_ptr=*__t1604t;
  uint64_t buffer__unsafe_size=*__t1605t;
  uint16_t buffer__unsafe_offset=*__t1606t;
  uint16_t buffer__unsafe_align=*__t1607t;
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
  *__t1604t=buffer__unsafe_ptr;
  *__t1605t=buffer__unsafe_size;
  *__t1606t=buffer__unsafe_offset;
  *__t1607t=buffer__unsafe_align;
  *__t1608t=buffer__unsafe_ptr;
  *__t1609t=buffer__unsafe_size;
  *__t1610t=buffer__unsafe_offset;
  *__t1611t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1612t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1612t=z;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1613t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1613t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1614t, uint64_t* __t1615t, uint16_t* __t1616t, uint16_t* __t1617t, uint64_t i, char** __t1618t) {
  char* buffer__unsafe_ptr=*__t1614t;
  uint64_t buffer__unsafe_size=*__t1615t;
  uint16_t buffer__unsafe_offset=*__t1616t;
  uint16_t buffer__unsafe_align=*__t1617t;
  char __t634t__=0;
  uint64_t __t635t__=0;
  uint64_t __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t__=0;
  char* __t639t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t634t__);
  if(__t634t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t635t__);
  mul__t199t(i,__t635t__,&__t636t__);
  nat__t507t(buffer__unsafe_offset,&__t637t__);
  add__t175t(__t636t__,__t637t__,&__t638t__);
  add__t505t(buffer__unsafe_ptr,__t638t__,&__t639t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1614t=buffer__unsafe_ptr;
  *__t1615t=buffer__unsafe_size;
  *__t1616t=buffer__unsafe_offset;
  *__t1617t=buffer__unsafe_align;
  *__t1618t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1619t) {
  goto __t_return;
  __t_return:
  *__t1619t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1620t) {
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
  *__t1620t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1555t() {
  char* __t1559t__unsafe_ptr=0;
  uint64_t __t1559t__unsafe_size=0;
  uint16_t __t1559t__unsafe_offset=0;
  uint16_t __t1559t__unsafe_align=0;
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__unsafe_size=0;
  uint16_t __t1560t__unsafe_offset=0;
  uint16_t __t1560t__unsafe_align=0;
  char* buf1__unsafe_ptr=0;
  uint64_t buf1__unsafe_size=0;
  uint16_t buf1__unsafe_offset=0;
  uint16_t buf1__unsafe_align=0;
  uint64_t __t1561t=0;
  char* __t1562t__unsafe_ptr=0;
  uint64_t __t1562t__unsafe_size=0;
  uint16_t __t1562t__unsafe_offset=0;
  uint16_t __t1562t__unsafe_align=0;
  char __t1563t____t534t__=0;
  uint64_t __t1564t=0;
  char* __t1565t__unsafe_ptr=0;
  uint64_t __t1565t__unsafe_size=0;
  uint16_t __t1565t__unsafe_offset=0;
  uint16_t __t1565t__unsafe_align=0;
  char* buf2__unsafe_ptr=0;
  uint64_t buf2__unsafe_size=0;
  uint16_t buf2__unsafe_offset=0;
  uint16_t buf2__unsafe_align=0;
  uint64_t __t1566t=0;
  char* __t1567t__=0;
  double __t1568t=0;
  uint64_t __t1569t__=0;
  uint64_t __t1571t__=0;
  uint64_t __t1573t=0;
  char* __t1574t__=0;
  double __t1575t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1557t(&__t1559t__unsafe_ptr,&__t1559t__unsafe_size,&__t1559t__unsafe_offset,&__t1559t__unsafe_align);
  __t1560t__unsafe_ptr=__t1559t__unsafe_ptr;
  __t1560t__unsafe_size=__t1559t__unsafe_size;
  __t1560t__unsafe_offset=__t1559t__unsafe_offset;
  __t1560t__unsafe_align=__t1559t__unsafe_align;
  __t1561t=20;
  __t_errcode=alloc__t532t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,__t1561t,&__t1562t__unsafe_ptr,&__t1562t__unsafe_size,&__t1562t__unsafe_offset,&__t1562t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1564t=10;
  __t_errcode=resize__t602t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,__t1564t,&__t1565t__unsafe_ptr,&__t1565t__unsafe_size,&__t1565t__unsafe_offset,&__t1565t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1566t=0;
  __t_errcode=mutget__t633t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,__t1566t,&__t1567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1568t=1.0;
  if(!__t1567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1567t__,&__t1568t,8);
  len__t647t(__t1560t__unsafe_ptr,__t1560t__unsafe_size,__t1560t__unsafe_offset,__t1560t__unsafe_align,&__t1569t__);
  print__t393t(__t1560t__unsafe_size);
  len__t647t(__t1560t__unsafe_ptr,__t1560t__unsafe_size,__t1560t__unsafe_offset,__t1560t__unsafe_align,&__t1571t__);
  print__t393t(__t1560t__unsafe_size);
  __t1573t=0;
  __t_errcode=get__t640t(__t1560t__unsafe_ptr,__t1560t__unsafe_size,__t1560t__unsafe_offset,__t1560t__unsafe_align,__t1573t,&__t1574t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1574t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1575t__value,__t1574t__,8);
  print__t385t(__t1575t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1562t__unsafe_ptr,&__t1563t____t534t__);
  if(__t1563t____t534t__){
  free__t503t(&__t1562t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}