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

static inline __attribute__((always_inline)) void float____buffer__t1564t(char** __t1576t, uint64_t* __t1577t, uint16_t* __t1578t, uint16_t* __t1579t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1576t=unsafe_ptr;
  *__t1577t=unsafe_size;
  *__t1578t=unsafe_offset;
  *__t1579t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1580t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1580t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1581t) {
  char* allocated=*__t1581t;
  if(allocated){
  free(allocated);
  }
  *__t1581t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1582t) {
  int value=0;
  *__t1582t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1583t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1583t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1584t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1584t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1585t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1585t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1586t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1586t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1587t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1587t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1588t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1588t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1589t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1590t) {
  char* allocated=0;
  char __t497t__=0;
  char __t498t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t447t(allocated,&__t497t__);
  not__t28t(__t497t__,&__t498t__);
  if(__t498t__){
  printf("%s","\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 25 column 34\n");
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1590t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1591t, uint64_t* __t1592t, uint16_t* __t1593t, uint16_t* __t1594t, uint64_t size, char** __t1595t, uint64_t* __t1596t, uint16_t* __t1597t, uint16_t* __t1598t) {
  char* buffer__unsafe_ptr=*__t1591t;
  uint64_t buffer__unsafe_size=*__t1592t;
  uint16_t buffer__unsafe_offset=*__t1593t;
  uint16_t buffer__unsafe_align=*__t1594t;
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
  printf("%s","\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 43 column 35\n");
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t545t__);
  mul__t199t(__t545t__,size,&__t546t__);
  bytes=__t546t__;
  __t547t=0;
  eq__t120t(bytes,__t547t,&__t548t__);
  if(__t548t__){
  printf("%s","\033[31mfail\033[0m cannot allocate a buffer of unsized type\n\033[31mat\033[0m std/core/array.s line 45 column 22\n");
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t549t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 47 column 36\n   unhandled error from alloc(nat ) -> (any ptr )\n");
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
  *__t1591t=buffer__unsafe_ptr;
  *__t1592t=buffer__unsafe_size;
  *__t1593t=buffer__unsafe_offset;
  *__t1594t=buffer__unsafe_align;
  *__t1595t=buffer__unsafe_ptr;
  *__t1596t=buffer__unsafe_size;
  *__t1597t=buffer__unsafe_offset;
  *__t1598t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1599t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1599t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1600t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1600t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t1601t) {
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
  *__t1601t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1602t) {
  *__t1602t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1603t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1603t=__t506t__;
}

static inline __attribute__((always_inline)) int mutlast__t623t(char** __t1604t, uint64_t* __t1605t, uint16_t* __t1606t, uint16_t* __t1607t, char** __t1608t) {
  char* buffer__unsafe_ptr=*__t1604t;
  uint64_t buffer__unsafe_size=*__t1605t;
  uint16_t buffer__unsafe_offset=*__t1606t;
  uint16_t buffer__unsafe_align=*__t1607t;
  uint64_t __t624t=0;
  char __t625t__=0;
  uint64_t __t626t=0;
  uint64_t __t627t__=0;
  uint64_t __t628t__=0;
  uint64_t __t629t__=0;
  uint64_t __t630t__=0;
  uint64_t __t631t__=0;
  char* __t632t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t624t=0;
  eq__t120t(__t624t,buffer__unsafe_size,&__t625t__);
  if(__t625t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 80 column 35\n");
  __t_errcode=15;
  goto __t_failure;
  }
  __t626t=1;
  nat__t507t(buffer__unsafe_offset,&__t627t__);
  add__t175t(__t626t,__t627t__,&__t628t__);
  __t_errcode=sub__t352t(buffer__unsafe_size,__t628t__,&__t629t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 81 column 71\n   unhandled error from sub(nat x, nat y) -> (nat )\n");
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t630t__);
  mul__t199t(__t629t__,__t630t__,&__t631t__);
  add__t505t(buffer__unsafe_ptr,__t631t__,&__t632t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1604t=buffer__unsafe_ptr;
  *__t1605t=buffer__unsafe_size;
  *__t1606t=buffer__unsafe_offset;
  *__t1607t=buffer__unsafe_align;
  *__t1608t=__t632t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t1609t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t1609t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t1610t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1610t=z;
}

static inline __attribute__((always_inline)) int inc__t1555t(char** __t1611t) {
  char* element=*__t1611t;
  double __t1556t__value=0;
  double __t1557t=0;
  double __t1558t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!element){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 5 column 22\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1556t__value,element,8);
  __t1557t=1.0;
  add__t153t(__t1556t__value,__t1557t,&__t1558t__);
  if(!element){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 5 column 5\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(element,&__t1558t__,8);
  
  __t_failure:
  goto __t_skip_returns;*__t1611t=element;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t1559t() {
  double __t1561t=0;
  char* __t1566t__unsafe_ptr=0;
  uint64_t __t1566t__unsafe_size=0;
  uint16_t __t1566t__unsafe_offset=0;
  uint16_t __t1566t__unsafe_align=0;
  uint64_t __t1567t=0;
  char* __t1568t__unsafe_ptr=0;
  uint64_t __t1568t__unsafe_size=0;
  uint16_t __t1568t__unsafe_offset=0;
  uint16_t __t1568t__unsafe_align=0;
  char __t1569t____t534t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  char* __t1570t__=0;
  char* element=0;
  double __t1571t____0=0;
  double __t1574t____0=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t1561t=0.0;
  float____buffer__t1564t(&__t1566t__unsafe_ptr,&__t1566t__unsafe_size,&__t1566t__unsafe_offset,&__t1566t__unsafe_align);
  __t1567t=1;
  __t_errcode=alloc__t532t(&__t1566t__unsafe_ptr,&__t1566t__unsafe_size,&__t1566t__unsafe_offset,&__t1566t__unsafe_align,__t1567t,&__t1568t__unsafe_ptr,&__t1568t__unsafe_size,&__t1568t__unsafe_offset,&__t1568t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 10 column 11\n   unhandled error from alloc(edit any[], nat size) -> (edit any[])\n");
  goto __t_failure;
  }
  memcpy(__t1566t__unsafe_ptr,&__t1561t,8);
  buf__unsafe_ptr=__t1566t__unsafe_ptr;
  buf__unsafe_size=__t1566t__unsafe_size;
  buf__unsafe_offset=__t1566t__unsafe_offset;
  buf__unsafe_align=__t1566t__unsafe_align;
  __t_errcode=mutlast__t623t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t1570t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 11 column 15\n   unhandled error from mutlast(edit any[]) -> (mut any ptr  {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  element=__t1570t__;
  if(!element){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 12 column 18\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1571t____0,element,8);
  print__t385t(__t1571t____0);
  __t_errcode=inc__t1555t(&element);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 13 column 5\n   unhandled error from inc(mut float ptr  {float }) -> ()\n");
  goto __t_failure;
  }
  exists__t447t(__t1568t__unsafe_ptr,&__t1569t____t534t__);
  if(__t1569t____t534t__){
  free__t503t(&__t1568t__unsafe_ptr);
  }
  if(!element){
  printf("%s","\033[31mmemory error\033[0m unallocated pointer\n\033[31mat\033[0m tests/test.s line 15 column 18\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1574t____0,element,8);
  print__t385t(__t1574t____0);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1559t();return 0;}