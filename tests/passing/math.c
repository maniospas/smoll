#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5338t=", ";
const char* const __t5616t="(sum, mean, std) = (";
const char* const __t374t="";
const char* const __t5623t=")\n";
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5603t(char** __t5625t, uint64_t* __t5626t, uint16_t* __t5627t, uint16_t* __t5628t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5625t=unsafe_ptr;
  *__t5626t=unsafe_size;
  *__t5627t=unsafe_offset;
  *__t5628t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5629t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5629t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5630t) {
  char* allocated=*__t5630t;
  if(allocated){
  free(allocated);
  }
  *__t5630t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5631t) {
  int value=0;
  *__t5631t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5632t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5632t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5633t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5633t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5634t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5634t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5635t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5635t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5636t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5636t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5637t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5637t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5638t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5638t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5639t) {
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
  *__t5639t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5640t, uint64_t* __t5641t, uint16_t* __t5642t, uint16_t* __t5643t, uint64_t size, char** __t5644t, uint64_t* __t5645t, uint16_t* __t5646t, uint16_t* __t5647t) {
  char* buffer__unsafe_ptr=*__t5640t;
  uint64_t buffer__unsafe_size=*__t5641t;
  uint16_t buffer__unsafe_offset=*__t5642t;
  uint16_t buffer__unsafe_align=*__t5643t;
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
  *__t5640t=buffer__unsafe_ptr;
  *__t5641t=buffer__unsafe_size;
  *__t5642t=buffer__unsafe_offset;
  *__t5643t=buffer__unsafe_align;
  *__t5644t=buffer__unsafe_ptr;
  *__t5645t=buffer__unsafe_size;
  *__t5646t=buffer__unsafe_offset;
  *__t5647t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5648t) {
  goto __t_return;
  __t_return:
  *__t5648t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1583t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5649t, uint64_t* __t5650t, uint64_t* __t5651t) {
  char* __t1585t__unsafe_ptr=0;
  uint64_t __t1585t__pos=0;
  uint64_t __t1585t__length=0;
  __t1585t__unsafe_ptr=unsafe_ptr;
  __t1585t__pos=pos;
  __t1585t__length=length;
  goto __t_return;
  __t_return:
  *__t5649t=__t1585t__unsafe_ptr;
  *__t5650t=__t1585t__pos;
  *__t5651t=__t1585t__length;
}

static inline __attribute__((always_inline)) int vec__t1635t(char** __t5652t, uint64_t* __t5653t, uint16_t* __t5654t, uint16_t* __t5655t, char** __t5656t, uint64_t* __t5657t, uint64_t* __t5658t) {
  char* buf__unsafe_ptr=*__t5652t;
  uint64_t buf__unsafe_size=*__t5653t;
  uint16_t buf__unsafe_offset=*__t5654t;
  uint16_t buf__unsafe_align=*__t5655t;
  uint64_t __t1636t__=0;
  uint64_t __t1637t=0;
  char __t1638t__=0;
  uint64_t __t1639t__=0;
  uint64_t __t1640t=0;
  char __t1641t__=0;
  uint64_t __t1642t=0;
  uint64_t __t1643t__=0;
  char* __t1644t__unsafe_ptr=0;
  uint64_t __t1644t__pos=0;
  uint64_t __t1644t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1636t__);
  __t1637t=8;
  neq__t144t(__t1636t__,__t1637t,&__t1638t__);
  if(__t1638t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1639t__);
  __t1640t=0;
  neq__t144t(__t1639t__,__t1640t,&__t1641t__);
  if(__t1641t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1642t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1643t__);
  vec__t1583t(buf__unsafe_ptr,__t1642t,__t1643t__,&__t1644t__unsafe_ptr,&__t1644t__pos,&__t1644t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5652t=buf__unsafe_ptr;
  *__t5653t=buf__unsafe_size;
  *__t5654t=buf__unsafe_offset;
  *__t5655t=buf__unsafe_align;
  *__t5656t=__t1644t__unsafe_ptr;
  *__t5657t=__t1644t__pos;
  *__t5658t=__t1644t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5659t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5659t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5660t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5660t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5661t) {
  *__t5661t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5662t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5662t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1728t(char** __t5663t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5664t) {
  char* v__unsafe_ptr=*__t5663t;
  char __t1729t__=0;
  uint64_t __t1730t=0;
  uint64_t __t1731t__=0;
  uint64_t __t1732t__=0;
  char* __t1733t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1729t__);
  if(__t1729t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1730t=8;
  add__t175t(i,v__pos,&__t1731t__);
  mul__t199t(__t1730t,__t1731t__,&__t1732t__);
  add__t505t(v__unsafe_ptr,__t1732t__,&__t1733t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5663t=v__unsafe_ptr;
  *__t5664t=__t1733t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1727t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5665t) {
  goto __t_return;
  __t_return:
  *__t5665t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5666t, uint64_t* __t5667t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5666t=from;
  *__t5667t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5668t, uint64_t* __t5669t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5668t=__t473t__from;
  *__t5669t=__t473t__to;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5670t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5670t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5671t) {
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
  *__t5671t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1734t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5672t) {
  char __t1735t__=0;
  uint64_t __t1736t=0;
  uint64_t __t1737t__=0;
  uint64_t __t1738t__=0;
  char* __t1739t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1735t__);
  if(__t1735t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1736t=8;
  add__t175t(i,v__pos,&__t1737t__);
  mul__t199t(__t1736t,__t1737t__,&__t1738t__);
  add__t505t(v__unsafe_ptr,__t1738t__,&__t1739t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5672t=__t1739t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5673t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5673t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5674t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5674t=z;
}

static inline __attribute__((always_inline)) int reduce__t2405t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5675t) {
  char __t2406t=0;
  char __t2407t=0;
  double __t2408t=0;
  double __t2409t=0;
  double ret=0;
  int __t2410t=0;
  int __t2411t=0;
  int __t2412t=0;
  int __t2413t__=0;
  uint64_t __t2414t=0;
  uint64_t __t2415t__=0;
  uint64_t __t2416t__from=0;
  uint64_t __t2416t__to=0;
  char __t2417t=0;
  uint64_t __t2418t__=0;
  uint64_t i=0;
  char* __t2419t__=0;
  double __t2420t__value=0;
  double __t2421t=0;
  double value=0;
  int __t2422t=0;
  int __t2423t=0;
  int __t2424t=0;
  int __t2425t=0;
  int __t2426t=0;
  char __t2427t=0;
  char __t2428t=0;
  double __t2429t__=0;
  int __t2430t=0;
  int __t2431t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2407t=1;
  if(__t2407t){
  __t2406t=1;
  }
  if(__t2406t){
  __t2408t=0.0;
  __t2409t=__t2408t;
  ret=__t2409t;
  }
  not__t37t(__t2412t,&__t2413t__);
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t2415t__);
  range__t471t(__t2415t__,&__t2416t__from,&__t2416t__to);
  __t2414t=0;
  while(1){
  __t_complain=get__t478t(__t2416t__from,__t2416t__to,__t2414t,&__t2418t__);
  __t2417t=__t_complain;
  i=__t2418t__;
  __t2417t=__t2417t==0;
  __t2414t=__t2414t+1;
  if(!__t2417t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t2419t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2419t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2420t__value,__t2419t__,8);
  __t2421t=__t2420t__value;
  value=__t2421t;
  __t2428t=1;
  if(__t2428t){
  __t2427t=1;
  }
  if(__t2427t){
  add__t153t(ret,value,&__t2429t__);
  ret=__t2429t__;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5675t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t4503t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5676t) {
  double __t4505t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2405t(v__unsafe_ptr,v__pos,v__length,&__t4505t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5676t=__t4505t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5677t) {
  int value=0;
  *__t5677t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5678t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5678t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5679t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5679t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5680t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5680t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5681t) {
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
  *__t5681t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t4506t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5682t) {
  double __t4508t__=0;
  uint64_t __t4509t__=0;
  double __t4510t__=0;
  double __t4511t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2405t(v__unsafe_ptr,v__pos,v__length,&__t4508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t4509t__);
  float__t415t(__t4509t__,&__t4510t__);
  __t_errcode=div__t201t(__t4508t__,__t4510t__,&__t4511t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5682t=__t4511t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5683t, uint64_t r__to, uint64_t* __t5684t) {
  uint64_t r__from=*__t5683t;
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
  *__t5683t=r__from;
  *__t5684t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5685t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5685t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5686t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5686t=z;
}

static inline __attribute__((always_inline)) int var__t4512t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5687t) {
  double __t4513t=0;
  double __t4514t=0;
  double sumsqr=0;
  double __t4515t=0;
  double __t4516t=0;
  double sum=0;
  uint64_t __t4517t__=0;
  uint64_t __t4518t__from=0;
  uint64_t __t4518t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t4519t=0;
  uint64_t __t4520t__=0;
  uint64_t i=0;
  char* __t4521t__=0;
  double __t4522t__value=0;
  double value=0;
  double __t4523t__=0;
  double __t4524t__=0;
  double __t4525t__=0;
  uint64_t __t4526t__=0;
  double __t4527t__=0;
  double n=0;
  double __t4528t__=0;
  double __t4529t__=0;
  double __t4530t__=0;
  double __t4531t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4513t=0.0;
  __t4514t=__t4513t;
  sumsqr=__t4514t;
  __t4515t=0.0;
  __t4516t=__t4515t;
  sum=__t4516t;
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t4517t__);
  range__t471t(__t4517t__,&__t4518t__from,&__t4518t__to);
  it__from=__t4518t__from;
  it__to=__t4518t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t4520t__);
  __t4519t=__t_complain;
  i=__t4520t__;
  __t4519t=__t4519t==0;
  if(!__t4519t){
  break;
  }
  __t_errcode=get__t1734t(v__unsafe_ptr,v__pos,v__length,i,&__t4521t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4521t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4522t__value,__t4521t__,8);
  value=__t4522t__value;
  add__t153t(sum,value,&__t4523t__);
  sum=__t4523t__;
  mul__t177t(value,value,&__t4524t__);
  add__t153t(sumsqr,__t4524t__,&__t4525t__);
  sumsqr=__t4525t__;
  }
  len__t1727t(v__unsafe_ptr,v__pos,v__length,&__t4526t__);
  float__t415t(__t4526t__,&__t4527t__);
  n=__t4527t__;
  __t_errcode=div__t201t(sum,n,&__t4528t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t4528t__;
  __t_errcode=div__t201t(sumsqr,n,&__t4529t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t4530t__);
  sub__t326t(__t4529t__,__t4530t__,&__t4531t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5687t=__t4531t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1569t(double x, double* __t5688t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t5688t=z;
}

static inline __attribute__((always_inline)) int std__t4532t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5689t) {
  double __t4533t__=0;
  double __t4534t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t4512t(v__unsafe_ptr,v__pos,v__length,&__t4533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1569t(__t4533t__,&__t4534t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5689t=__t4534t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5601t() {
  char* __t5605t__unsafe_ptr=0;
  uint64_t __t5605t__unsafe_size=0;
  uint16_t __t5605t__unsafe_offset=0;
  uint16_t __t5605t__unsafe_align=0;
  uint64_t __t5606t=0;
  char* __t5607t__unsafe_ptr=0;
  uint64_t __t5607t__unsafe_size=0;
  uint16_t __t5607t__unsafe_offset=0;
  uint16_t __t5607t__unsafe_align=0;
  char __t5608t____t534t__=0;
  char* __t5609t__unsafe_ptr=0;
  uint64_t __t5609t__pos=0;
  uint64_t __t5609t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t5610t=0;
  char* __t5611t__=0;
  double __t5612t=0;
  uint64_t __t5613t=0;
  char* __t5614t__=0;
  double __t5615t=0;
  double __t5618t__=0;
  double __t5620t__=0;
  double __t5622t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t5603t(&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align);
  __t5606t=5;
  __t_errcode=alloc__t532t(&__t5605t__unsafe_ptr,&__t5605t__unsafe_size,&__t5605t__unsafe_offset,&__t5605t__unsafe_align,__t5606t,&__t5607t__unsafe_ptr,&__t5607t__unsafe_size,&__t5607t__unsafe_offset,&__t5607t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1635t(&__t5607t__unsafe_ptr,&__t5607t__unsafe_size,&__t5607t__unsafe_offset,&__t5607t__unsafe_align,&__t5609t__unsafe_ptr,&__t5609t__pos,&__t5609t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t5609t__unsafe_ptr;
  v__pos=__t5609t__pos;
  v__length=__t5609t__length;
  __t5610t=0;
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,__t5610t,&__t5611t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5612t=1.0;
  if(!__t5611t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5611t__,&__t5612t,8);
  __t5613t=1;
  __t_errcode=mutget__t1728t(&v__unsafe_ptr,v__pos,v__length,__t5613t,&__t5614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5615t=2.0;
  if(!__t5614t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5614t__,&__t5615t,8);
  print__t378t(__t5616t,__t374t);
  __t_errcode=sum__t4503t(v__unsafe_ptr,v__pos,v__length,&__t5618t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5618t__,__t5338t);
  __t_errcode=mean__t4506t(v__unsafe_ptr,v__pos,v__length,&__t5620t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5620t__,__t5338t);
  __t_errcode=std__t4532t(v__unsafe_ptr,v__pos,v__length,&__t5622t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5622t__,__t5623t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5607t__unsafe_ptr,&__t5608t____t534t__);
  if(__t5608t____t534t__){
  free__t503t(&__t5607t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5601t();return 0;}