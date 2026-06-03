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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1553t(char** __t1576t, uint64_t* __t1577t, uint16_t* __t1578t, uint16_t* __t1579t) {
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

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t1599t) {
  goto __t_return;
  __t_return:
  *__t1599t=buffer__unsafe_size;
}

int list__t644t(char** __t1600t, uint64_t* __t1601t, uint16_t* __t1602t, uint16_t* __t1603t, char** __t1604t, uint64_t* __t1605t, uint16_t* __t1606t, uint16_t* __t1607t, uint64_t* __t1608t) {
  char* _buffer__unsafe_ptr=*__t1600t;
  uint64_t _buffer__unsafe_size=*__t1601t;
  uint16_t _buffer__unsafe_offset=*__t1602t;
  uint16_t _buffer__unsafe_align=*__t1603t;
  uint64_t __t645t=0;
  char* __t646t__unsafe_ptr=0;
  uint64_t __t646t__unsafe_size=0;
  uint16_t __t646t__unsafe_offset=0;
  uint16_t __t646t__unsafe_align=0;
  char __t647t____t534t__=0;
  char* buffer__unsafe_ptr=0;
  uint64_t buffer__unsafe_size=0;
  uint16_t buffer__unsafe_offset=0;
  uint16_t buffer__unsafe_align=0;
  uint64_t __t648t__=0;
  uint64_t __t649t=0;
  uint64_t length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t645t=1;
  __t_errcode=alloc__t532t(&_buffer__unsafe_ptr,&_buffer__unsafe_size,&_buffer__unsafe_offset,&_buffer__unsafe_align,__t645t,&__t646t__unsafe_ptr,&__t646t__unsafe_size,&__t646t__unsafe_offset,&__t646t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t646t__unsafe_ptr;
  buffer__unsafe_size=__t646t__unsafe_size;
  buffer__unsafe_offset=__t646t__unsafe_offset;
  buffer__unsafe_align=__t646t__unsafe_align;
  len__t643t(buffer__unsafe_ptr,buffer__unsafe_size,buffer__unsafe_offset,buffer__unsafe_align,&__t648t__);
  __t649t=__t648t__;
  length=__t649t;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t647t____t534t__);
  if(__t647t____t534t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t1600t=_buffer__unsafe_ptr;
  *__t1601t=_buffer__unsafe_size;
  *__t1602t=_buffer__unsafe_offset;
  *__t1603t=_buffer__unsafe_align;
  *__t1604t=buffer__unsafe_ptr;
  *__t1605t=buffer__unsafe_size;
  *__t1606t=buffer__unsafe_offset;
  *__t1607t=buffer__unsafe_align;
  *__t1608t=length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t1609t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1609t=z;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t1610t) {
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
  *__t1610t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t1611t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1611t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t1612t) {
  *__t1612t=to;
}

static inline __attribute__((always_inline)) int realloc__t499t(char* allocated, uint64_t bytes, char** __t1613t) {
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
  *__t1613t=__t502t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t1614t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1614t=z;
}

static inline __attribute__((always_inline)) int resize__t602t(char** __t1615t, uint64_t* __t1616t, uint16_t* __t1617t, uint16_t* __t1618t, uint64_t size, char** __t1619t, uint64_t* __t1620t, uint16_t* __t1621t, uint16_t* __t1622t) {
  char* buffer__unsafe_ptr=*__t1615t;
  uint64_t buffer__unsafe_size=*__t1616t;
  uint16_t buffer__unsafe_offset=*__t1617t;
  uint16_t buffer__unsafe_align=*__t1618t;
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
  *__t1615t=buffer__unsafe_ptr;
  *__t1616t=buffer__unsafe_size;
  *__t1617t=buffer__unsafe_offset;
  *__t1618t=buffer__unsafe_align;
  *__t1619t=buffer__unsafe_ptr;
  *__t1620t=buffer__unsafe_size;
  *__t1621t=buffer__unsafe_offset;
  *__t1622t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t1623t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t1623t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t629t(char** __t1624t, uint64_t* __t1625t, uint16_t* __t1626t, uint16_t* __t1627t, uint64_t i, char** __t1628t) {
  char* buffer__unsafe_ptr=*__t1624t;
  uint64_t buffer__unsafe_size=*__t1625t;
  uint16_t buffer__unsafe_offset=*__t1626t;
  uint16_t buffer__unsafe_align=*__t1627t;
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
  *__t1624t=buffer__unsafe_ptr;
  *__t1625t=buffer__unsafe_size;
  *__t1626t=buffer__unsafe_offset;
  *__t1627t=buffer__unsafe_align;
  *__t1628t=__t635t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int push__t657t(char** __t1629t, uint64_t* __t1630t, uint16_t* __t1631t, uint16_t* __t1632t, uint64_t* __t1633t, char** __t1634t) {
  char* l__buffer__unsafe_ptr=*__t1629t;
  uint64_t l__buffer__unsafe_size=*__t1630t;
  uint16_t l__buffer__unsafe_offset=*__t1631t;
  uint16_t l__buffer__unsafe_align=*__t1632t;
  uint64_t l__length=*__t1633t;
  uint64_t prev_length=0;
  uint64_t __t658t__=0;
  char __t659t__=0;
  uint64_t __t660t=0;
  uint64_t __t661t__=0;
  uint64_t __t662t=0;
  uint64_t __t663t__=0;
  uint64_t __t664t__=0;
  char* __t665t__unsafe_ptr=0;
  uint64_t __t665t__unsafe_size=0;
  uint16_t __t665t__unsafe_offset=0;
  uint16_t __t665t__unsafe_align=0;
  uint64_t __t666t=0;
  uint64_t __t667t__=0;
  char* __t668t__=0;
  char* val=0;
  int __t_errcode=0;
  int __t_complain=0;
  prev_length=l__length;
  len__t643t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,&__t658t__);
  ge__t324t(prev_length,__t658t__,&__t659t__);
  if(__t659t__){
  __t660t=2;
  __t_errcode=div__t225t(prev_length,__t660t,&__t661t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t662t=1;
  add__t175t(__t661t__,__t662t,&__t663t__);
  add__t175t(prev_length,__t663t__,&__t664t__);
  __t_errcode=resize__t602t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,__t664t__,&__t665t__unsafe_ptr,&__t665t__unsafe_size,&__t665t__unsafe_offset,&__t665t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  l__buffer__unsafe_ptr=__t665t__unsafe_ptr;
  l__buffer__unsafe_size=__t665t__unsafe_size;
  l__buffer__unsafe_offset=__t665t__unsafe_offset;
  l__buffer__unsafe_align=__t665t__unsafe_align;
  }
  __t666t=1;
  add__t175t(prev_length,__t666t,&__t667t__);
  l__length=__t667t__;
  __t_errcode=mutget__t629t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,prev_length,&__t668t__);
  if(__t_errcode){
  goto __t_failure;
  }
  val=__t668t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1629t=l__buffer__unsafe_ptr;
  *__t1630t=l__buffer__unsafe_size;
  *__t1631t=l__buffer__unsafe_offset;
  *__t1632t=l__buffer__unsafe_align;
  *__t1633t=l__length;
  *__t1634t=val;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t654t(char** __t1635t, uint64_t* __t1636t, uint16_t* __t1637t, uint16_t* __t1638t, uint64_t* __t1639t, uint64_t pos, char** __t1640t) {
  char* l__buffer__unsafe_ptr=*__t1635t;
  uint64_t l__buffer__unsafe_size=*__t1636t;
  uint16_t l__buffer__unsafe_offset=*__t1637t;
  uint16_t l__buffer__unsafe_align=*__t1638t;
  uint64_t l__length=*__t1639t;
  char __t655t__=0;
  char* __t656t__=0;
  char* ret=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,l__length,&__t655t__);
  if(__t655t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=mutget__t629t(&l__buffer__unsafe_ptr,&l__buffer__unsafe_size,&l__buffer__unsafe_offset,&l__buffer__unsafe_align,pos,&__t656t__);
  if(__t_errcode){
  goto __t_failure;
  }
  ret=__t656t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1635t=l__buffer__unsafe_ptr;
  *__t1636t=l__buffer__unsafe_size;
  *__t1637t=l__buffer__unsafe_offset;
  *__t1638t=l__buffer__unsafe_align;
  *__t1639t=l__length;
  *__t1640t=ret;
  
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

static inline __attribute__((always_inline)) int get__t651t(char* l__buffer__unsafe_ptr, uint64_t l__buffer__unsafe_size, uint16_t l__buffer__unsafe_offset, uint16_t l__buffer__unsafe_align, uint64_t l__length, uint64_t pos, char** __t1642t) {
  char __t652t__=0;
  char* __t653t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,l__length,&__t652t__);
  if(__t652t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t_errcode=get__t636t(l__buffer__unsafe_ptr,l__buffer__unsafe_size,l__buffer__unsafe_offset,l__buffer__unsafe_align,pos,&__t653t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t1642t=__t653t__;
  
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
  char* __t1555t__unsafe_ptr=0;
  uint64_t __t1555t__unsafe_size=0;
  uint16_t __t1555t__unsafe_offset=0;
  uint16_t __t1555t__unsafe_align=0;
  char* __t1556t__unsafe_ptr=0;
  uint64_t __t1556t__unsafe_size=0;
  uint16_t __t1556t__unsafe_offset=0;
  uint16_t __t1556t__unsafe_align=0;
  char* __t1557t__buffer__unsafe_ptr=0;
  uint64_t __t1557t__buffer__unsafe_size=0;
  uint16_t __t1557t__buffer__unsafe_offset=0;
  uint16_t __t1557t__buffer__unsafe_align=0;
  uint64_t __t1557t__length=0;
  char __t1558t____t647t____t534t__=0;
  char* li__buffer__unsafe_ptr=0;
  uint64_t li__buffer__unsafe_size=0;
  uint16_t li__buffer__unsafe_offset=0;
  uint16_t li__buffer__unsafe_align=0;
  uint64_t li__length=0;
  char* __t1559t__=0;
  double __t1560t=0;
  char* __t1561t__=0;
  double __t1562t=0;
  char* __t1563t__=0;
  double __t1564t=0;
  uint64_t __t1565t=0;
  char* __t1566t__=0;
  double __t1567t=0;
  uint64_t __t1568t=0;
  char* __t1569t__=0;
  double __t1570t__value=0;
  uint64_t __t1572t=0;
  char* __t1573t__=0;
  double __t1574t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t1553t(&__t1555t__unsafe_ptr,&__t1555t__unsafe_size,&__t1555t__unsafe_offset,&__t1555t__unsafe_align);
  __t1556t__unsafe_ptr=__t1555t__unsafe_ptr;
  __t1556t__unsafe_size=__t1555t__unsafe_size;
  __t1556t__unsafe_offset=__t1555t__unsafe_offset;
  __t1556t__unsafe_align=__t1555t__unsafe_align;
  __t_errcode=list__t644t(&__t1556t__unsafe_ptr,&__t1556t__unsafe_size,&__t1556t__unsafe_offset,&__t1556t__unsafe_align,&__t1557t__buffer__unsafe_ptr,&__t1557t__buffer__unsafe_size,&__t1557t__buffer__unsafe_offset,&__t1557t__buffer__unsafe_align,&__t1557t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=push__t657t(&__t1556t__unsafe_ptr,&__t1556t__unsafe_size,&__t1556t__unsafe_offset,&__t1556t__unsafe_align,&__t1556t__unsafe_size,&__t1559t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1560t=0.1;
  if(!__t1559t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1559t__,&__t1560t,8);
  __t_errcode=push__t657t(&__t1556t__unsafe_ptr,&__t1556t__unsafe_size,&__t1556t__unsafe_offset,&__t1556t__unsafe_align,&__t1556t__unsafe_size,&__t1561t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1562t=0.1;
  if(!__t1561t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1561t__,&__t1562t,8);
  __t_errcode=push__t657t(&__t1556t__unsafe_ptr,&__t1556t__unsafe_size,&__t1556t__unsafe_offset,&__t1556t__unsafe_align,&__t1556t__unsafe_size,&__t1563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1564t=0.1;
  if(!__t1563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1563t__,&__t1564t,8);
  __t1565t=1;
  __t_errcode=mutget__t654t(&__t1556t__unsafe_ptr,&__t1556t__unsafe_size,&__t1556t__unsafe_offset,&__t1556t__unsafe_align,&__t1556t__unsafe_size,__t1565t,&__t1566t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1567t=0.2;
  if(!__t1566t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1566t__,&__t1567t,8);
  __t1568t=0;
  __t_errcode=get__t651t(__t1556t__unsafe_ptr,__t1556t__unsafe_size,__t1556t__unsafe_offset,__t1556t__unsafe_align,__t1556t__unsafe_size,__t1568t,&__t1569t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1569t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1570t__value,__t1569t__,8);
  print__t385t(__t1570t__value);
  __t1572t=1;
  __t_errcode=get__t651t(__t1556t__unsafe_ptr,__t1556t__unsafe_size,__t1556t__unsafe_offset,__t1556t__unsafe_align,__t1556t__unsafe_size,__t1572t,&__t1573t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1573t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1574t__value,__t1573t__,8);
  print__t385t(__t1574t__value);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t1557t__buffer__unsafe_ptr,&__t1558t____t647t____t534t__);
  if(__t1558t____t647t____t534t__){
  free__t503t(&__t1557t__buffer__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1551t();return 0;}