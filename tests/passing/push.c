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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1557t(char** __t1580t, uint64_t* __t1581t, uint16_t* __t1582t, uint16_t* __t1583t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t1580t=unsafe_ptr;
  *__t1581t=unsafe_size;
  *__t1582t=unsafe_offset;
  *__t1583t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t1584t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t1584t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t1585t) {
  char* allocated=*__t1585t;
  if(allocated){
  free(allocated);
  }
  *__t1585t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1586t) {
  int value=0;
  *__t1586t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1587t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1587t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t1588t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t1588t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t1589t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t1589t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t1590t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t1590t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t1591t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t1591t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t1592t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t1592t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t1593t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t1593t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t1594t) {
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
  *__t1594t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t1595t, uint64_t* __t1596t, uint16_t* __t1597t, uint16_t* __t1598t, uint64_t size, char** __t1599t, uint64_t* __t1600t, uint16_t* __t1601t, uint16_t* __t1602t) {
  char* buffer__unsafe_ptr=*__t1595t;
  uint64_t buffer__unsafe_size=*__t1596t;
  uint16_t buffer__unsafe_offset=*__t1597t;
  uint16_t buffer__unsafe_align=*__t1598t;
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
  *__t1595t=buffer__unsafe_ptr;
  *__t1596t=buffer__unsafe_size;
  *__t1597t=buffer__unsafe_offset;
  *__t1598t=buffer__unsafe_align;
  *__t1599t=buffer__unsafe_ptr;
  *__t1600t=buffer__unsafe_size;
  *__t1601t=buffer__unsafe_offset;
  *__t1602t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1603t) {
  goto __t_return;
  __t_return:
  *__t1603t=buffer__unsafe_size;
}

int list__t648t(char** __t1604t, uint64_t* __t1605t, uint16_t* __t1606t, uint16_t* __t1607t, char** __t1608t, uint64_t* __t1609t, uint16_t* __t1610t, uint16_t* __t1611t, uint64_t* __t1612t) {
  char* _buffer__unsafe_ptr=*__t1604t;
  uint64_t _buffer__unsafe_size=*__t1605t;
  uint16_t _buffer__unsafe_offset=*__t1606t;
  uint16_t _buffer__unsafe_align=*__t1607t;
  uint64_t __t649t=0;
  char* __t650t__unsafe_ptr=0;
  uint64_t __t650t__unsafe_size=0;
  uint16_t __t650t__unsafe_offset=0;
  uint16_t __t650t__unsafe_align=0;
  char __t651t____t534t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t652t__=0;
  uint64_t __t653t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t649t=1;
  __t_errcode=alloc__t532t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t649t,&__t650t__unsafe_ptr,&__t650t__unsafe_size,&__t650t__unsafe_offset,&__t650t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t650t__unsafe_ptr;
  buffer__unsafe_size=__t650t__unsafe_size;
  buffer__unsafe_offset=__t650t__unsafe_offset;
  buffer__unsafe_align=__t650t__unsafe_align;
  len__t647t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t652t__);
  __t653t=__t652t__;
  length=__t653t;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t651t____t534t__);
  if(__t651t____t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1604t=_buffer__unsafe_ptr;
  *__t1605t=_buffer__unsafe_size;
  *__t1606t=_buffer__unsafe_offset;
  *__t1607t=_buffer__unsafe_align;
  *__t1608t=buffer__unsafe_ptr;
  *__t1609t=buffer__unsafe_size;
  *__t1610t=buffer__unsafe_offset;
  *__t1611t=buffer__unsafe_align;
  *__t1612t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1613t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1613t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1614t) {
  int __t226t__=0;
  uint64_t zero=0;
  char __t227t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t226t__);
  zero=0;
  eq__t120t(y,zero,&__t227t__);
  if(__t227t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1614t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1615t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1615t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1616t) {
  *__t1616t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1617t) {
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
  *__t1617t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1618t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1618t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1619t, uint64_t* __t1620t, uint16_t* __t1621t, uint16_t* __t1622t, uint64_t size, char** __t1623t, uint64_t* __t1624t, uint16_t* __t1625t, uint16_t* __t1626t) {
  char* buffer__unsafe_ptr=*__t1619t;
  uint64_t buffer__unsafe_size=*__t1620t;
  uint16_t buffer__unsafe_offset=*__t1621t;
  uint16_t buffer__unsafe_align=*__t1622t;
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
  *__t1619t=buffer__unsafe_ptr;
  *__t1620t=buffer__unsafe_size;
  *__t1621t=buffer__unsafe_offset;
  *__t1622t=buffer__unsafe_align;
  *__t1623t=buffer__unsafe_ptr;
  *__t1624t=buffer__unsafe_size;
  *__t1625t=buffer__unsafe_offset;
  *__t1626t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1627t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1627t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t633t(char** __t1628t, uint64_t* __t1629t, uint16_t* __t1630t, uint16_t* __t1631t, uint64_t i, char** __t1632t) {
  char* buffer__unsafe_ptr=*__t1628t;
  uint64_t buffer__unsafe_size=*__t1629t;
  uint16_t buffer__unsafe_offset=*__t1630t;
  uint16_t buffer__unsafe_align=*__t1631t;
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
  *__t1628t=buffer__unsafe_ptr;
  *__t1629t=buffer__unsafe_size;
  *__t1630t=buffer__unsafe_offset;
  *__t1631t=buffer__unsafe_align;
  *__t1632t=__t639t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int push__t661t(char** __t1633t, uint64_t* __t1634t, uint16_t* __t1635t, uint16_t* __t1636t, uint64_t* __t1637t, char** __t1638t) {
  char* l__buffer__unsafe_ptr=*__t1633t;
  uint64_t l__buffer__unsafe_size=*__t1634t;
  uint16_t l__buffer__unsafe_offset=*__t1635t;
  uint16_t l__buffer__unsafe_align=*__t1636t;
  uint64_t l__length=*__t1637t;
  uint64_t prev_length=0;
  uint64_t __t662t__=0;
  char __t663t__=0;
  uint64_t __t664t=0;
  uint64_t __t665t__=0;
  uint64_t __t666t=0;
  uint64_t __t667t__=0;
  uint64_t __t668t__=0;
  char* __t669t__unsafe_ptr=0;
  uint64_t __t669t__unsafe_size=0;
  uint16_t __t669t__unsafe_offset=0;
  uint16_t __t669t__unsafe_align=0;
  uint64_t __t670t=0;
  uint64_t __t671t__=0;
  char* __t672t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t647t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t662t__);
  ge__t324t(prev_length,__t662t__,&__t663t__);
  if(__t663t__){
  __t664t=2;
  __t_errcode=div__t225t(prev_length,__t664t,&__t665t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t666t=1;
  add__t175t(__t665t__,__t666t,&__t667t__);
  add__t175t(prev_length,__t667t__,&__t668t__);
  __t_errcode=resize__t602t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t668t__,&__t669t__unsafe_ptr,&__t669t__unsafe_size,&__t669t__unsafe_offset,&__t669t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t669t__unsafe_ptr;
  l__buffer__unsafe_size=__t669t__unsafe_size;
  l__buffer__unsafe_offset=__t669t__unsafe_offset;
  l__buffer__unsafe_align=__t669t__unsafe_align;
  }
  __t670t=1;
  add__t175t(prev_length,__t670t,&__t671t__);
  l__length=__t671t__;
  __t_errcode=mutget__t633t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t672t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t672t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1633t=l__buffer__unsafe_ptr;
  *__t1634t=l__buffer__unsafe_size;
  *__t1635t=l__buffer__unsafe_offset;
  *__t1636t=l__buffer__unsafe_align;
  *__t1637t=l__length;
  *__t1638t=val;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t658t(char** __t1639t, uint64_t* __t1640t, uint16_t* __t1641t, uint16_t* __t1642t, uint64_t* __t1643t, uint64_t pos, char** __t1644t) {
  char* l__buffer__unsafe_ptr=*__t1639t;
  uint64_t l__buffer__unsafe_size=*__t1640t;
  uint16_t l__buffer__unsafe_offset=*__t1641t;
  uint16_t l__buffer__unsafe_align=*__t1642t;
  uint64_t l__length=*__t1643t;
  char __t659t__=0;
  char* __t660t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,l__length,&__t659t__);
  if(__t659t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t633t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t660t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t660t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1639t=l__buffer__unsafe_ptr;
  *__t1640t=l__buffer__unsafe_size;
  *__t1641t=l__buffer__unsafe_offset;
  *__t1642t=l__buffer__unsafe_align;
  *__t1643t=l__length;
  *__t1644t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t640t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t1645t) {
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
  *__t1645t=__t646t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t655t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1646t) {
  char __t656t__=0;
  char* __t657t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,l__length,&__t656t__);
  if(__t656t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t640t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t657t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1646t=__t657t__;
  
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
  char* __t1561t__buffer__unsafe_ptr=0;
  uint64_t __t1561t__buffer__unsafe_size=0;
  uint16_t __t1561t__buffer__unsafe_offset=0;
  uint16_t __t1561t__buffer__unsafe_align=0;
  uint64_t __t1561t__length=0;
  char __t1562t____t651t____t534t__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1563t__=0;
  double __t1564t=0;
  char* __t1565t__=0;
  double __t1566t=0;
  char* __t1567t__=0;
  double __t1568t=0;
  uint64_t __t1569t=0;
  char* __t1570t__=0;
  double __t1571t=0;
  uint64_t __t1572t=0;
  char* __t1573t__=0;
  double __t1574t__value=0;
  uint64_t __t1576t=0;
  char* __t1577t__=0;
  double __t1578t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1557t(&__t1559t__unsafe_ptr,&__t1559t__unsafe_size,&__t1559t__unsafe_offset,&__t1559t__unsafe_align);
  __t1560t__unsafe_ptr=__t1559t__unsafe_ptr;
  __t1560t__unsafe_size=__t1559t__unsafe_size;
  __t1560t__unsafe_offset=__t1559t__unsafe_offset;
  __t1560t__unsafe_align=__t1559t__unsafe_align;
  __t_errcode=list__t648t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,&__t1561t__buffer__unsafe_ptr,&__t1561t__buffer__unsafe_size,&__t1561t__buffer__unsafe_offset,&__t1561t__buffer__unsafe_align,&__t1561t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t661t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,&__t1560t__unsafe_size,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1564t=0.1;
  if(!__t1563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1563t__,&__t1564t,8);
  __t_errcode=push__t661t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,&__t1560t__unsafe_size,&__t1565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1566t=0.1;
  if(!__t1565t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1565t__,&__t1566t,8);
  __t_errcode=push__t661t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,&__t1560t__unsafe_size,&__t1567t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1568t=0.1;
  if(!__t1567t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1567t__,&__t1568t,8);
  __t1569t=1;
  __t_errcode=mutget__t658t(&__t1560t__unsafe_ptr,&__t1560t__unsafe_size,&__t1560t__unsafe_offset,&__t1560t__unsafe_align,&__t1560t__unsafe_size,__t1569t,&__t1570t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1571t=0.2;
  if(!__t1570t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1570t__,&__t1571t,8);
  __t1572t=0;
  __t_errcode=get__t655t(__t1560t__unsafe_ptr,__t1560t__unsafe_size,__t1560t__unsafe_offset,__t1560t__unsafe_align,__t1560t__unsafe_size,__t1572t,&__t1573t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1573t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1574t__value,__t1573t__,8);
  print__t385t(__t1574t__value);
  __t1576t=1;
  __t_errcode=get__t655t(__t1560t__unsafe_ptr,__t1560t__unsafe_size,__t1560t__unsafe_offset,__t1560t__unsafe_align,__t1560t__unsafe_size,__t1576t,&__t1577t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1577t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1578t__value,__t1577t__,8);
  print__t385t(__t1578t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1561t__buffer__unsafe_ptr,&__t1562t____t651t____t534t__);
  if(__t1562t____t651t____t534t__){
  free__t503t(&__t1561t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1555t();return 0;}