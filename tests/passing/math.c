#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5619t=")\n";
const char* const __t5612t="(sum, mean, std) = (";
const char* const __t5334t=", ";
const char* const __t374t="";
static const char* __t_all_errcodes[48] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"vector exceeeds buffer limits",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"matrix exceeds buffer limits",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5599t(char** __t5621t, uint64_t* __t5622t, uint16_t* __t5623t, uint16_t* __t5624t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5621t=unsafe_ptr;
  *__t5622t=unsafe_size;
  *__t5623t=unsafe_offset;
  *__t5624t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5625t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5625t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5626t) {
  char* allocated=*__t5626t;
  if(allocated){
  free(allocated);
  }
  *__t5626t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5627t) {
  int value=0;
  *__t5627t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5628t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5628t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5629t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5629t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5630t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5630t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5631t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5631t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5632t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5632t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5633t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5633t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5634t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5634t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5635t) {
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
  *__t5635t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5636t, uint64_t* __t5637t, uint16_t* __t5638t, uint16_t* __t5639t, uint64_t size, char** __t5640t, uint64_t* __t5641t, uint16_t* __t5642t, uint16_t* __t5643t) {
  char* buffer__unsafe_ptr=*__t5636t;
  uint64_t buffer__unsafe_size=*__t5637t;
  uint16_t buffer__unsafe_offset=*__t5638t;
  uint16_t buffer__unsafe_align=*__t5639t;
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
  *__t5636t=buffer__unsafe_ptr;
  *__t5637t=buffer__unsafe_size;
  *__t5638t=buffer__unsafe_offset;
  *__t5639t=buffer__unsafe_align;
  *__t5640t=buffer__unsafe_ptr;
  *__t5641t=buffer__unsafe_size;
  *__t5642t=buffer__unsafe_offset;
  *__t5643t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t643t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5644t) {
  goto __t_return;
  __t_return:
  *__t5644t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1579t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5645t, uint64_t* __t5646t, uint64_t* __t5647t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__pos=0;
  uint64_t __t1581t__length=0;
  __t1581t__unsafe_ptr=unsafe_ptr;
  __t1581t__pos=pos;
  __t1581t__length=length;
  goto __t_return;
  __t_return:
  *__t5645t=__t1581t__unsafe_ptr;
  *__t5646t=__t1581t__pos;
  *__t5647t=__t1581t__length;
}

static inline __attribute__((always_inline)) int vec__t1631t(char** __t5648t, uint64_t* __t5649t, uint16_t* __t5650t, uint16_t* __t5651t, char** __t5652t, uint64_t* __t5653t, uint64_t* __t5654t) {
  char* buf__unsafe_ptr=*__t5648t;
  uint64_t buf__unsafe_size=*__t5649t;
  uint16_t buf__unsafe_offset=*__t5650t;
  uint16_t buf__unsafe_align=*__t5651t;
  uint64_t __t1632t__=0;
  uint64_t __t1633t=0;
  char __t1634t__=0;
  uint64_t __t1635t__=0;
  uint64_t __t1636t=0;
  char __t1637t__=0;
  uint64_t __t1638t=0;
  uint64_t __t1639t__=0;
  char* __t1640t__unsafe_ptr=0;
  uint64_t __t1640t__pos=0;
  uint64_t __t1640t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1632t__);
  __t1633t=8;
  neq__t144t(__t1632t__,__t1633t,&__t1634t__);
  if(__t1634t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1635t__);
  __t1636t=0;
  neq__t144t(__t1635t__,__t1636t,&__t1637t__);
  if(__t1637t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1638t=0;
  len__t643t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1639t__);
  vec__t1579t(buf__unsafe_ptr,__t1638t,__t1639t__,&__t1640t__unsafe_ptr,&__t1640t__pos,&__t1640t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5648t=buf__unsafe_ptr;
  *__t5649t=buf__unsafe_size;
  *__t5650t=buf__unsafe_offset;
  *__t5651t=buf__unsafe_align;
  *__t5652t=__t1640t__unsafe_ptr;
  *__t5653t=__t1640t__pos;
  *__t5654t=__t1640t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5655t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5655t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5656t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5656t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5657t) {
  *__t5657t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5658t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5658t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1724t(char** __t5659t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5660t) {
  char* v__unsafe_ptr=*__t5659t;
  char __t1725t__=0;
  uint64_t __t1726t=0;
  uint64_t __t1727t__=0;
  uint64_t __t1728t__=0;
  char* __t1729t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1725t__);
  if(__t1725t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1726t=8;
  add__t175t(i,v__pos,&__t1727t__);
  mul__t199t(__t1726t,__t1727t__,&__t1728t__);
  add__t505t(v__unsafe_ptr,__t1728t__,&__t1729t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5659t=v__unsafe_ptr;
  *__t5660t=__t1729t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1723t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5661t) {
  goto __t_return;
  __t_return:
  *__t5661t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5662t, uint64_t* __t5663t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5662t=from;
  *__t5663t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5664t, uint64_t* __t5665t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5664t=__t473t__from;
  *__t5665t=__t473t__to;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5666t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5666t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5667t) {
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
  *__t5667t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1730t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5668t) {
  char __t1731t__=0;
  uint64_t __t1732t=0;
  uint64_t __t1733t__=0;
  uint64_t __t1734t__=0;
  char* __t1735t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1731t__);
  if(__t1731t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1732t=8;
  add__t175t(i,v__pos,&__t1733t__);
  mul__t199t(__t1732t,__t1733t__,&__t1734t__);
  add__t505t(v__unsafe_ptr,__t1734t__,&__t1735t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5668t=__t1735t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5669t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5669t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5670t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5670t=z;
}

static inline __attribute__((always_inline)) int reduce__t2401t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5671t) {
  char __t2402t=0;
  char __t2403t=0;
  double __t2404t=0;
  double __t2405t=0;
  double ret=0;
  int __t2406t=0;
  int __t2407t=0;
  int __t2408t=0;
  int __t2409t__=0;
  uint64_t __t2410t=0;
  uint64_t __t2411t__=0;
  uint64_t __t2412t__from=0;
  uint64_t __t2412t__to=0;
  char __t2413t=0;
  uint64_t __t2414t__=0;
  uint64_t i=0;
  char* __t2415t__=0;
  double __t2416t__value=0;
  double __t2417t=0;
  double value=0;
  int __t2418t=0;
  int __t2419t=0;
  int __t2420t=0;
  int __t2421t=0;
  int __t2422t=0;
  char __t2423t=0;
  char __t2424t=0;
  double __t2425t__=0;
  int __t2426t=0;
  int __t2427t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2403t=1;
  if(__t2403t){
  __t2402t=1;
  }
  if(__t2402t){
  __t2404t=0.0;
  __t2405t=__t2404t;
  ret=__t2405t;
  }
  not__t37t(__t2408t,&__t2409t__);
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t2411t__);
  range__t471t(__t2411t__,&__t2412t__from,&__t2412t__to);
  __t2410t=0;
  while(1){
  __t_complain=get__t478t(__t2412t__from,__t2412t__to,__t2410t,&__t2414t__);
  __t2413t=__t_complain;
  i=__t2414t__;
  __t2413t=__t2413t==0;
  __t2410t=__t2410t+1;
  if(!__t2413t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t2415t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2415t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2416t__value,__t2415t__,8);
  __t2417t=__t2416t__value;
  value=__t2417t;
  __t2424t=1;
  if(__t2424t){
  __t2423t=1;
  }
  if(__t2423t){
  add__t153t(ret,value,&__t2425t__);
  ret=__t2425t__;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5671t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t4499t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5672t) {
  double __t4501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2401t(v__unsafe_ptr,v__pos,v__length,&__t4501t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5672t=__t4501t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5673t) {
  int value=0;
  *__t5673t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5674t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5674t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5675t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5675t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5676t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5676t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5677t) {
  int __t202t__=0;
  double zero=0;
  char __t203t__=0;
  double z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t71t(x,y,&__t202t__);
  zero=0;
  eq__t98t(y,zero,&__t203t__);
  if(__t203t__){
  __t_errcode=3;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5677t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t4502t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5678t) {
  double __t4504t__=0;
  uint64_t __t4505t__=0;
  double __t4506t__=0;
  double __t4507t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2401t(v__unsafe_ptr,v__pos,v__length,&__t4504t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t4505t__);
  float__t415t(__t4505t__,&__t4506t__);
  __t_errcode=div__t201t(__t4504t__,__t4506t__,&__t4507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5678t=__t4507t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5679t, uint64_t r__to, uint64_t* __t5680t) {
  uint64_t r__from=*__t5679t;
  char __t475t__=0;
  uint64_t ret=0;
  uint64_t __t476t=0;
  uint64_t __t477t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t475t__);
  if(__t475t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t476t=1;
  add__t175t(ret,__t476t,&__t477t__);
  r__from=__t477t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5679t=r__from;
  *__t5680t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5681t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5681t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5682t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5682t=z;
}

static inline __attribute__((always_inline)) int var__t4508t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5683t) {
  double __t4509t=0;
  double __t4510t=0;
  double sumsqr=0;
  double __t4511t=0;
  double __t4512t=0;
  double sum=0;
  uint64_t __t4513t__=0;
  uint64_t __t4514t__from=0;
  uint64_t __t4514t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t4515t=0;
  uint64_t __t4516t__=0;
  uint64_t i=0;
  char* __t4517t__=0;
  double __t4518t__value=0;
  double value=0;
  double __t4519t__=0;
  double __t4520t__=0;
  double __t4521t__=0;
  uint64_t __t4522t__=0;
  double __t4523t__=0;
  double n=0;
  double __t4524t__=0;
  double __t4525t__=0;
  double __t4526t__=0;
  double __t4527t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4509t=0.0;
  __t4510t=__t4509t;
  sumsqr=__t4510t;
  __t4511t=0.0;
  __t4512t=__t4511t;
  sum=__t4512t;
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t4513t__);
  range__t471t(__t4513t__,&__t4514t__from,&__t4514t__to);
  it__from=__t4514t__from;
  it__to=__t4514t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t4516t__);
  __t4515t=__t_complain;
  i=__t4516t__;
  __t4515t=__t4515t==0;
  if(!__t4515t){
  break;
  }
  __t_errcode=get__t1730t(v__unsafe_ptr,v__pos,v__length,i,&__t4517t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4517t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4518t__value,__t4517t__,8);
  value=__t4518t__value;
  add__t153t(sum,value,&__t4519t__);
  sum=__t4519t__;
  mul__t177t(value,value,&__t4520t__);
  add__t153t(sumsqr,__t4520t__,&__t4521t__);
  sumsqr=__t4521t__;
  }
  len__t1723t(v__unsafe_ptr,v__pos,v__length,&__t4522t__);
  float__t415t(__t4522t__,&__t4523t__);
  n=__t4523t__;
  __t_errcode=div__t201t(sum,n,&__t4524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t4524t__;
  __t_errcode=div__t201t(sumsqr,n,&__t4525t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t4526t__);
  sub__t326t(__t4525t__,__t4526t__,&__t4527t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5683t=__t4527t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1565t(double x, double* __t5684t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t5684t=z;
}

static inline __attribute__((always_inline)) int std__t4528t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5685t) {
  double __t4529t__=0;
  double __t4530t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t4508t(v__unsafe_ptr,v__pos,v__length,&__t4529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1565t(__t4529t__,&__t4530t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5685t=__t4530t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5597t() {
  char* __t5601t__unsafe_ptr=0;
  uint64_t __t5601t__unsafe_size=0;
  uint16_t __t5601t__unsafe_offset=0;
  uint16_t __t5601t__unsafe_align=0;
  uint64_t __t5602t=0;
  char* __t5603t__unsafe_ptr=0;
  uint64_t __t5603t__unsafe_size=0;
  uint16_t __t5603t__unsafe_offset=0;
  uint16_t __t5603t__unsafe_align=0;
  char __t5604t____t534t__=0;
  char* __t5605t__unsafe_ptr=0;
  uint64_t __t5605t__pos=0;
  uint64_t __t5605t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t5606t=0;
  char* __t5607t__=0;
  double __t5608t=0;
  uint64_t __t5609t=0;
  char* __t5610t__=0;
  double __t5611t=0;
  double __t5614t__=0;
  double __t5616t__=0;
  double __t5618t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t5599t(&__t5601t__unsafe_ptr,&__t5601t__unsafe_size,&__t5601t__unsafe_offset,&__t5601t__unsafe_align);
  __t5602t=5;
  __t_errcode=alloc__t532t(&__t5601t__unsafe_ptr,&__t5601t__unsafe_size,&__t5601t__unsafe_offset,&__t5601t__unsafe_align,__t5602t,&__t5603t__unsafe_ptr,&__t5603t__unsafe_size,&__t5603t__unsafe_offset,&__t5603t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1631t(&__t5603t__unsafe_ptr,&__t5603t__unsafe_size,&__t5603t__unsafe_offset,&__t5603t__unsafe_align,&__t5605t__unsafe_ptr,&__t5605t__pos,&__t5605t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t5605t__unsafe_ptr;
  v__pos=__t5605t__pos;
  v__length=__t5605t__length;
  __t5606t=0;
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,__t5606t,&__t5607t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5608t=1.0;
  if(!__t5607t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5607t__,&__t5608t,8);
  __t5609t=1;
  __t_errcode=mutget__t1724t(&v__unsafe_ptr,v__pos,v__length,__t5609t,&__t5610t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5611t=2.0;
  if(!__t5610t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5610t__,&__t5611t,8);
  print__t378t(__t5612t,__t374t);
  __t_errcode=sum__t4499t(v__unsafe_ptr,v__pos,v__length,&__t5614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5614t__,__t5334t);
  __t_errcode=mean__t4502t(v__unsafe_ptr,v__pos,v__length,&__t5616t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5616t__,__t5334t);
  __t_errcode=std__t4528t(v__unsafe_ptr,v__pos,v__length,&__t5618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5618t__,__t5619t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5603t__unsafe_ptr,&__t5604t____t534t__);
  if(__t5604t____t534t__){
  free__t503t(&__t5603t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5597t();return 0;}