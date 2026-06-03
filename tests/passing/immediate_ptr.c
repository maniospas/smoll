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

static inline __attribute__((always_inline)) void float____buffer__t1556t(char** __t1569t, uint64_t* __t1570t, uint16_t* __t1571t, uint16_t* __t1572t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1569t=unsafe_ptr;
  *__t1570t=unsafe_size;
  *__t1571t=unsafe_offset;
  *__t1572t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1573t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1573t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1574t) {
  char* allocated=*__t1574t;
  if(allocated){
  free(allocated);
  }
  *__t1574t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1575t) {
  int value=0;
  *__t1575t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1576t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1576t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1577t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1577t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1578t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1578t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1579t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1579t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1580t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1580t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1581t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1581t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1582t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1582t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1583t) {
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
  *__t1583t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1584t, uint64_t* __t1585t, uint16_t* __t1586t, uint16_t* __t1587t, uint64_t size, char** __t1588t, uint64_t* __t1589t, uint16_t* __t1590t, uint16_t* __t1591t) {
  char* buffer__unsafe_ptr=*__t1584t;
  uint64_t buffer__unsafe_size=*__t1585t;
  uint16_t buffer__unsafe_offset=*__t1586t;
  uint16_t buffer__unsafe_align=*__t1587t;
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
  *__t1584t=buffer__unsafe_ptr;
  *__t1585t=buffer__unsafe_size;
  *__t1586t=buffer__unsafe_offset;
  *__t1587t=buffer__unsafe_align;
  *__t1588t=buffer__unsafe_ptr;
  *__t1589t=buffer__unsafe_size;
  *__t1590t=buffer__unsafe_offset;
  *__t1591t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1592t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1593t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1594t) {
  *__t1594t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1595t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1595t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1596t, uint64_t* __t1597t, uint16_t* __t1598t, uint16_t* __t1599t, uint64_t i, char** __t1600t) {
  char* buffer__unsafe_ptr=*__t1596t;
  uint64_t buffer__unsafe_size=*__t1597t;
  uint16_t buffer__unsafe_offset=*__t1598t;
  uint16_t buffer__unsafe_align=*__t1599t;
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
  *__t1596t=buffer__unsafe_ptr;
  *__t1597t=buffer__unsafe_size;
  *__t1598t=buffer__unsafe_offset;
  *__t1599t=buffer__unsafe_align;
  *__t1600t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1551t() {
  double __t1553t=0;
  char* __t1558t__unsafe_ptr=0;
  uint64_t __t1558t__unsafe_size=0;
  uint16_t __t1558t__unsafe_offset=0;
  uint16_t __t1558t__unsafe_align=0;
  uint64_t __t1559t=0;
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__unsafe_size=0;
  uint16_t __t1560t__unsafe_offset=0;
  uint16_t __t1560t__unsafe_align=0;
  char __t1561t____t534t__=0;
  uint64_t __t1562t=0;
  char* __t1563t__=0;
  char* element=0;
  double __t1564t____0=0;
  double __t1566t=0;
  double __t1567t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1553t=1.0;
  float____buffer__t1556t(&__t1558t__unsafe_ptr,&__t1558t__unsafe_size,&__t1558t__unsafe_offset,&__t1558t__unsafe_align);
  __t1559t=1;
  __t_errcode=alloc__t532t(&__t1558t__unsafe_ptr,&__t1558t__unsafe_size,&__t1558t__unsafe_offset,&__t1558t__unsafe_align,__t1559t,&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t1558t__unsafe_ptr,&__t1553t,8);
  __t1562t=0;
  __t_errcode=mutget__t629t(&__t1558t__unsafe_ptr,&__t1558t__unsafe_size,&__t1558t__unsafe_offset,&__t1558t__unsafe_align,__t1562t,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  element=__t1563t__;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1564t____0,element,8);
  print__t385t(__t1564t____0);
  __t1566t=2.0;
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(element,&__t1566t,8);
  if(!element){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1567t____0,element,8);
  print__t385t(__t1567t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1560t__unsafe_ptr,&__t1561t____t534t__);
  if(__t1561t____t534t__){
  free__t503t(&__t1560t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1551t();return 0;}