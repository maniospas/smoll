#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1558t(char** __t1588t, uint64_t* __t1589t, uint16_t* __t1590t, uint16_t* __t1591t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1588t=unsafe_ptr;
  *__t1589t=unsafe_size;
  *__t1590t=unsafe_offset;
  *__t1591t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t1592t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t1593t) {
  char* allocated=*__t1593t;
  if(allocated){
  free(allocated);
  }
  *__t1593t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1594t) {
  int value=0;
  *__t1594t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1595t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1595t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1596t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1596t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1597t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1597t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1598t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1598t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t1599t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1599t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1600t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1600t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1601t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1601t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t1602t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  printf("%s","\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 25 column 34\n");
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1602t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t538t(char** __t1603t, uint64_t* __t1604t, uint16_t* __t1605t, uint16_t* __t1606t, uint64_t size, char** __t1607t, uint64_t* __t1608t, uint16_t* __t1609t, uint16_t* __t1610t) {
  char* buffer__unsafe_ptr=*__t1603t;
  uint64_t buffer__unsafe_size=*__t1604t;
  uint16_t buffer__unsafe_offset=*__t1605t;
  uint16_t buffer__unsafe_align=*__t1606t;
  int __t539t=0;
  char __t540t__=0;
  char __t542t__=0;
  uint64_t __t543t=0;
  char __t544t__=0;
  uint64_t __t545t=0;
  uint64_t __t546t__=0;
  uint64_t __t547t__=0;
  uint64_t __t549t=0;
  char __t550t__=0;
  uint64_t __t551t__=0;
  uint64_t __t552t__=0;
  uint64_t bytes=0;
  uint64_t __t553t=0;
  char __t554t__=0;
  char* __t555t__=0;
  int __t556t=0;
  uint64_t __t557t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t542t__);
  if(__t542t__){
  __t543t=0;
  neq__t144t(size,__t543t,&__t544t__);
  if(__t544t__){
  __t545t=0;
  nat__t513t(buffer__unsafe_align,&__t546t__);
  mul__t199t(__t546t__,size,&__t547t__);
  zero__t510t(buffer__unsafe_ptr,__t545t,__t547t__);
  }
  goto __t_return;
  }
  __t549t=0;
  neq__t144t(buffer__unsafe_size,__t549t,&__t550t__);
  if(__t550t__){
  printf("%s","\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 43 column 35\n");
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t551t__);
  mul__t199t(__t551t__,size,&__t552t__);
  bytes=__t552t__;
  __t553t=0;
  eq__t120t(bytes,__t553t,&__t554t__);
  if(__t554t__){
  printf("%s","\033[31mfail\033[0m cannot allocate a buffer of unsized type\n\033[31mat\033[0m std/core/array.s line 45 column 22\n");
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t555t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 47 column 36\n   unhandled error from alloc(nat bytes) -> (any ptr allocated)\n");
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t555t__;
  __t557t=0;
  zero__t510t(buffer__unsafe_ptr,__t557t,bytes);
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(buffer__unsafe_ptr,&__t540t__);
  if(__t540t__){
  free__t509t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1603t=buffer__unsafe_ptr;
  *__t1604t=buffer__unsafe_size;
  *__t1605t=buffer__unsafe_offset;
  *__t1606t=buffer__unsafe_align;
  *__t1607t=buffer__unsafe_ptr;
  *__t1608t=buffer__unsafe_size;
  *__t1609t=buffer__unsafe_offset;
  *__t1610t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1611t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1611t=z;
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

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1613t) {
  *__t1613t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t1614t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t1614t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t635t(char** __t1615t, uint64_t* __t1616t, uint16_t* __t1617t, uint16_t* __t1618t, uint64_t i, char** __t1619t) {
  char* buffer__unsafe_ptr=*__t1615t;
  uint64_t buffer__unsafe_size=*__t1616t;
  uint16_t buffer__unsafe_offset=*__t1617t;
  uint16_t buffer__unsafe_align=*__t1618t;
  char __t636t__=0;
  uint64_t __t637t__=0;
  uint64_t __t638t__=0;
  uint64_t __t639t__=0;
  uint64_t __t640t__=0;
  char* __t641t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t636t__);
  if(__t636t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 85 column 35\n");
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t637t__);
  mul__t199t(i,__t637t__,&__t638t__);
  nat__t513t(buffer__unsafe_offset,&__t639t__);
  add__t175t(__t638t__,__t639t__,&__t640t__);
  add__t511t(buffer__unsafe_ptr,__t640t__,&__t641t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1615t=buffer__unsafe_ptr;
  *__t1616t=buffer__unsafe_size;
  *__t1617t=buffer__unsafe_offset;
  *__t1618t=buffer__unsafe_align;
  *__t1619t=__t641t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test1__t1557t(char** __t1620t, uint64_t* __t1621t, uint16_t* __t1622t, uint16_t* __t1623t) {
  char* __t1560t__unsafe_ptr=0;
  uint64_t __t1560t__unsafe_size=0;
  uint16_t __t1560t__unsafe_offset=0;
  uint16_t __t1560t__unsafe_align=0;
  uint64_t __t1561t=0;
  char* __t1562t__unsafe_ptr=0;
  uint64_t __t1562t__unsafe_size=0;
  uint16_t __t1562t__unsafe_offset=0;
  uint16_t __t1562t__unsafe_align=0;
  char __t1563t____t540t__=0;
  char* __t1564t__unsafe_ptr=0;
  uint64_t __t1564t__unsafe_size=0;
  uint16_t __t1564t__unsafe_offset=0;
  uint16_t __t1564t__unsafe_align=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1565t=0;
  char* __t1566t__=0;
  double __t1567t=0;
  char* __t1568t__unsafe_ptr=0;
  uint64_t __t1568t__unsafe_size=0;
  uint16_t __t1568t__unsafe_offset=0;
  uint16_t __t1568t__unsafe_align=0;
  char* y__unsafe_ptr=0;
  uint64_t y__unsafe_size=0;
  uint16_t y__unsafe_offset=0;
  uint16_t y__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1558t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align);
  __t1561t=1;
  __t_errcode=alloc__t538t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,__t1561t,&__t1562t__unsafe_ptr,&__t1562t__unsafe_size,&__t1562t__unsafe_offset,&__t1562t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 4 column 21\n   unhandled error from alloc(edit any[] {element size ?}, nat size) -> (edit any[] {element size ?})\n");
  goto __t_failure;
  }
  __t1564t__unsafe_ptr=__t1562t__unsafe_ptr;
  __t1564t__unsafe_size=__t1562t__unsafe_size;
  __t1564t__unsafe_offset=__t1562t__unsafe_offset;
  __t1564t__unsafe_align=__t1562t__unsafe_align;
  x__unsafe_ptr=__t1564t__unsafe_ptr;
  x__unsafe_size=__t1564t__unsafe_size;
  x__unsafe_offset=__t1564t__unsafe_offset;
  x__unsafe_align=__t1564t__unsafe_align;
  __t1565t=0;
  __t_errcode=mutget__t635t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1565t,&__t1566t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 5 column 6\n   unhandled error from mutget(edit any[] {element size ?}, nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  __t1567t=1.0;
  if(!__t1566t__){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/passing/buffer.s line 5 column 10\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1566t__,&__t1567t,8);
  float____t_buffer____buffer__t1558t(&__t1568t__unsafe_ptr,&__t1568t__unsafe_size,&__t1568t__unsafe_offset,&__t1568t__unsafe_align);
  y__unsafe_ptr=__t1568t__unsafe_ptr;
  y__unsafe_size=__t1568t__unsafe_size;
  y__unsafe_offset=__t1568t__unsafe_offset;
  y__unsafe_align=__t1568t__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t443t(x__unsafe_ptr,&__t1563t____t540t__);
  if(__t1563t____t540t__){
  free__t509t(&x__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1620t=x__unsafe_ptr;
  *__t1621t=x__unsafe_size;
  *__t1622t=x__unsafe_offset;
  *__t1623t=x__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int realloc__t505t(char* allocated, uint64_t bytes, char** __t1624t) {
  char* new_allocated=0;
  char __t506t__=0;
  char __t507t__=0;
  char* __t508t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(allocated){
  new_allocated=realloc(allocated,bytes);
  }
  else{
  new_allocated=malloc(bytes);
  }
  exists__t443t(new_allocated,&__t506t__);
  not__t28t(__t506t__,&__t507t__);
  if(__t507t__){
  printf("%s","\033[31mfail\033[0m reallocation failed\n\033[31mat\033[0m std/unsafe.s line 36 column 38\n");
  __t_errcode=11;
  goto __t_failure;
  }
  allocated=new_allocated;
  attach_type__t22t(new_allocated,allocated,&__t508t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1624t=__t508t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1625t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1625t=z;
}

static inline __attribute__((always_inline)) int resize__t608t(char** __t1626t, uint64_t* __t1627t, uint16_t* __t1628t, uint16_t* __t1629t, uint64_t size, char** __t1630t, uint64_t* __t1631t, uint16_t* __t1632t, uint16_t* __t1633t) {
  char* buffer__unsafe_ptr=*__t1626t;
  uint64_t buffer__unsafe_size=*__t1627t;
  uint16_t buffer__unsafe_offset=*__t1628t;
  uint16_t buffer__unsafe_align=*__t1629t;
  char __t609t__=0;
  uint64_t __t610t=0;
  char __t611t__=0;
  uint64_t __t612t__=0;
  uint64_t __t613t__=0;
  uint64_t prev_bytes=0;
  uint64_t __t614t__=0;
  uint64_t __t615t__=0;
  uint64_t bytes=0;
  char* __t616t__=0;
  char __t617t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(buffer__unsafe_size,size,&__t609t__);
  if(__t609t__){
  goto __t_return;
  }
  __t610t=0;
  eq__t120t(buffer__unsafe_size,__t610t,&__t611t__);
  if(__t611t__){
  printf("%s","\033[31mfail\033[0m cannot resize an unallocated or freed buffer\n\033[31mat\033[0m std/core/array.s line 63 column 35\n");
  __t_errcode=14;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t612t__);
  mul__t199t(buffer__unsafe_size,__t612t__,&__t613t__);
  prev_bytes=__t613t__;
  buffer__unsafe_size=size;
  nat__t513t(buffer__unsafe_align,&__t614t__);
  mul__t199t(__t614t__,size,&__t615t__);
  bytes=__t615t__;
  __t_errcode=realloc__t505t(buffer__unsafe_ptr,bytes,&__t616t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 68 column 54\n   unhandled error from realloc(any ptr allocated, nat bytes) -> (any ptr {follows any ptr allocated})\n");
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t616t__;
  lt__t252t(prev_bytes,bytes,&__t617t__);
  if(__t617t__){
  zero__t510t(buffer__unsafe_ptr,prev_bytes,bytes);
  }
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1626t=buffer__unsafe_ptr;
  *__t1627t=buffer__unsafe_size;
  *__t1628t=buffer__unsafe_offset;
  *__t1629t=buffer__unsafe_align;
  *__t1630t=buffer__unsafe_ptr;
  *__t1631t=buffer__unsafe_size;
  *__t1632t=buffer__unsafe_offset;
  *__t1633t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1634t) {
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
  printf("%s","\033[31mfail\033[0m nat subtraction would yield a negative\n\033[31mat\033[0m std/core/numbers.s line 150 column 14\n");
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1634t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutlast__t627t(char** __t1635t, uint64_t* __t1636t, uint16_t* __t1637t, uint16_t* __t1638t, char** __t1639t) {
  char* buffer__unsafe_ptr=*__t1635t;
  uint64_t buffer__unsafe_size=*__t1636t;
  uint16_t buffer__unsafe_offset=*__t1637t;
  uint16_t buffer__unsafe_align=*__t1638t;
  uint64_t __t628t=0;
  char __t629t__=0;
  uint64_t __t630t=0;
  uint64_t __t631t__=0;
  uint64_t __t632t__=0;
  uint64_t __t633t__=0;
  char* __t634t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t628t=0;
  eq__t120t(__t628t,buffer__unsafe_size,&__t629t__);
  if(__t629t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 80 column 35\n");
  __t_errcode=15;
  goto __t_failure;
  }
  __t630t=1;
  __t_errcode=sub__t352t(buffer__unsafe_size,__t630t,&__t631t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 81 column 71\n   unhandled error from sub(nat x, nat y) -> (nat z)\n");
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t632t__);
  mul__t199t(__t631t__,__t632t__,&__t633t__);
  add__t511t(buffer__unsafe_ptr,__t633t__,&__t634t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1635t=buffer__unsafe_ptr;
  *__t1636t=buffer__unsafe_size;
  *__t1637t=buffer__unsafe_offset;
  *__t1638t=buffer__unsafe_align;
  *__t1639t=__t634t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test2__t1569t(char** __t1640t, uint64_t* __t1641t, uint16_t* __t1642t, uint16_t* __t1643t) {
  char* x__unsafe_ptr=*__t1640t;
  uint64_t x__unsafe_size=*__t1641t;
  uint16_t x__unsafe_offset=*__t1642t;
  uint16_t x__unsafe_align=*__t1643t;
  uint64_t __t1570t=0;
  char* __t1571t__unsafe_ptr=0;
  uint64_t __t1571t__unsafe_size=0;
  uint16_t __t1571t__unsafe_offset=0;
  uint16_t __t1571t__unsafe_align=0;
  char* __t1572t__=0;
  double __t1573t=0;
  char* __t1574t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1570t=2;
  __t_errcode=resize__t608t(&x__unsafe_ptr,&x__unsafe_size,&x__unsafe_offset,&x__unsafe_align,__t1570t,&__t1571t__unsafe_ptr,&__t1571t__unsafe_size,&__t1571t__unsafe_offset,&__t1571t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 10 column 11\n   unhandled error from resize(edit any[] {element size ?}, nat size) -> (edit any[] {element size ?})\n");
  goto __t_failure;
  }
  __t_errcode=mutlast__t627t(&__t1571t__unsafe_ptr,&__t1571t__unsafe_size,&__t1571t__unsafe_offset,&__t1571t__unsafe_align,&__t1572t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 10 column 21\n   unhandled error from mutlast(edit any[] {element size ?}) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  __t1573t=2.0;
  if(!__t1572t__){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/passing/buffer.s line 10 column 31\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1572t__,&__t1573t,8);
  __t1574t=__t1572t__;
  
  __t_failure:
  goto __t_skip_returns;*__t1640t=x__unsafe_ptr;
  *__t1641t=x__unsafe_size;
  *__t1642t=x__unsafe_offset;
  *__t1643t=x__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t642t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1644t) {
  char __t643t__=0;
  uint64_t __t644t__=0;
  uint64_t __t645t__=0;
  uint64_t __t646t__=0;
  uint64_t __t647t__=0;
  char* __t648t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t643t__);
  if(__t643t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 90 column 35\n");
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t644t__);
  mul__t199t(i,__t644t__,&__t645t__);
  nat__t513t(buffer__unsafe_offset,&__t646t__);
  add__t175t(__t645t__,__t646t__,&__t647t__);
  add__t511t(buffer__unsafe_ptr,__t647t__,&__t648t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1644t=__t648t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1645t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1645t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1646t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1646t=z;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1575t() {
  char* __t1577t__unsafe_ptr=0;
  uint64_t __t1577t__unsafe_size=0;
  uint16_t __t1577t__unsafe_offset=0;
  uint16_t __t1577t__unsafe_align=0;
  char __t1578t____t1563t____t540t__=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint16_t x__unsafe_offset=0;
  uint16_t x__unsafe_align=0;
  uint64_t __t1580t=0;
  char* __t1581t__=0;
  double __t1582t__z=0;
  uint64_t __t1583t=0;
  char* __t1584t__=0;
  double __t1585t__z=0;
  double __t1586t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test1__t1557t(&__t1577t__unsafe_ptr,&__t1577t__unsafe_size,&__t1577t__unsafe_offset,&__t1577t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 14 column 13\n   unhandled error from test1() -> (mut float[] {element size 8} {follows float ptr ..unsafe_ptr})\n");
  goto __t_failure;
  }
  __t_errcode=test2__t1569t(&__t1577t__unsafe_ptr,&__t1577t__unsafe_size,&__t1577t__unsafe_offset,&__t1577t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 15 column 5\n   unhandled error from test2(edit float[] {element size 8}) -> ()\n");
  goto __t_failure;
  }
  __t1580t=0;
  __t_errcode=get__t642t(__t1577t__unsafe_ptr,__t1577t__unsafe_size,__t1577t__unsafe_offset,__t1577t__unsafe_align,__t1580t,&__t1581t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 16 column 12\n   unhandled error from get(any[] {element size ?}, nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t1581t__){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/passing/buffer.s line 16 column 12\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1582t__z,__t1581t__,8);
  __t1583t=1;
  __t_errcode=get__t642t(__t1577t__unsafe_ptr,__t1577t__unsafe_size,__t1577t__unsafe_offset,__t1577t__unsafe_align,__t1583t,&__t1584t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/passing/buffer.s line 16 column 17\n   unhandled error from get(any[] {element size ?}, nat i) -> (any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t1584t__){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/passing/buffer.s line 16 column 17\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1585t__z,__t1584t__,8);
  add__t153t(__t1582t__z,__t1585t__z,&__t1586t__);
  print__t381t(__t1586t__);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t443t(__t1577t__unsafe_ptr,&__t1578t____t1563t____t540t__);
  if(__t1578t____t1563t____t540t__){
  free__t509t(&__t1577t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1575t();return 0;}