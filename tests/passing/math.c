#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t5810t="(sum, mean, std) = (";
const char* const __t374t="";
const char* const __t5817t=")\n";
const char* const __t5532t=", ";
static const char* __t_all_errcodes[46] = {"noerr",
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
"invalid float conversion from string without a value after the dot",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
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

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5797t(char** __t5819t, uint64_t* __t5820t, uint16_t* __t5821t, uint16_t* __t5822t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5819t=unsafe_ptr;
  *__t5820t=unsafe_size;
  *__t5821t=unsafe_offset;
  *__t5822t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5823t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5823t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5824t) {
  char* allocated=*__t5824t;
  if(allocated){
  free(allocated);
  }
  *__t5824t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5825t) {
  int value=0;
  *__t5825t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5826t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5826t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5827t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5827t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5828t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5828t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5829t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5829t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5830t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5830t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5831t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5831t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5832t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5832t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5833t) {
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
  *__t5833t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5834t, uint64_t* __t5835t, uint16_t* __t5836t, uint16_t* __t5837t, uint64_t size, char** __t5838t, uint64_t* __t5839t, uint16_t* __t5840t, uint16_t* __t5841t) {
  char* buffer__unsafe_ptr=*__t5834t;
  uint64_t buffer__unsafe_size=*__t5835t;
  uint16_t buffer__unsafe_offset=*__t5836t;
  uint16_t buffer__unsafe_align=*__t5837t;
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
  *__t5834t=buffer__unsafe_ptr;
  *__t5835t=buffer__unsafe_size;
  *__t5836t=buffer__unsafe_offset;
  *__t5837t=buffer__unsafe_align;
  *__t5838t=buffer__unsafe_ptr;
  *__t5839t=buffer__unsafe_size;
  *__t5840t=buffer__unsafe_offset;
  *__t5841t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5842t) {
  goto __t_return;
  __t_return:
  *__t5842t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1872t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5843t, uint64_t* __t5844t, uint64_t* __t5845t) {
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__pos=0;
  uint64_t __t1874t__length=0;
  __t1874t__unsafe_ptr=unsafe_ptr;
  __t1874t__pos=pos;
  __t1874t__length=length;
  goto __t_return;
  __t_return:
  *__t5843t=__t1874t__unsafe_ptr;
  *__t5844t=__t1874t__pos;
  *__t5845t=__t1874t__length;
}

static inline __attribute__((always_inline)) int vec__t1915t(char** __t5846t, uint64_t* __t5847t, uint16_t* __t5848t, uint16_t* __t5849t, char** __t5850t, uint64_t* __t5851t, uint64_t* __t5852t) {
  char* buf__unsafe_ptr=*__t5846t;
  uint64_t buf__unsafe_size=*__t5847t;
  uint16_t buf__unsafe_offset=*__t5848t;
  uint16_t buf__unsafe_align=*__t5849t;
  uint64_t __t1916t__=0;
  uint64_t __t1917t=0;
  char __t1918t__=0;
  uint64_t __t1919t__=0;
  uint64_t __t1920t=0;
  char __t1921t__=0;
  uint64_t __t1922t=0;
  uint64_t __t1923t__=0;
  char* __t1924t__unsafe_ptr=0;
  uint64_t __t1924t__pos=0;
  uint64_t __t1924t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1916t__);
  __t1917t=8;
  neq__t144t(__t1916t__,__t1917t,&__t1918t__);
  if(__t1918t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1919t__);
  __t1920t=0;
  neq__t144t(__t1919t__,__t1920t,&__t1921t__);
  if(__t1921t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1922t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1923t__);
  vec__t1872t(buf__unsafe_ptr,__t1922t,__t1923t__,&__t1924t__unsafe_ptr,&__t1924t__pos,&__t1924t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5846t=buf__unsafe_ptr;
  *__t5847t=buf__unsafe_size;
  *__t5848t=buf__unsafe_offset;
  *__t5849t=buf__unsafe_align;
  *__t5850t=__t1924t__unsafe_ptr;
  *__t5851t=__t1924t__pos;
  *__t5852t=__t1924t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5853t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5853t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5854t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5854t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5855t) {
  *__t5855t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5856t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5856t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t1992t(char** __t5857t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5858t) {
  char* v__unsafe_ptr=*__t5857t;
  char __t1993t__=0;
  uint64_t __t1994t=0;
  uint64_t __t1995t__=0;
  uint64_t __t1996t__=0;
  char* __t1997t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1993t__);
  if(__t1993t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1994t=8;
  add__t175t(i,v__pos,&__t1995t__);
  mul__t199t(__t1994t,__t1995t__,&__t1996t__);
  add__t505t(v__unsafe_ptr,__t1996t__,&__t1997t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5857t=v__unsafe_ptr;
  *__t5858t=__t1997t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void len__t1991t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5859t) {
  goto __t_return;
  __t_return:
  *__t5859t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5860t, uint64_t* __t5861t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5860t=from;
  *__t5861t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5862t, uint64_t* __t5863t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5862t=__t473t__from;
  *__t5863t=__t473t__to;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5864t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5864t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5865t) {
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
  *__t5865t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1998t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5866t) {
  char __t1999t__=0;
  uint64_t __t2000t=0;
  uint64_t __t2001t__=0;
  uint64_t __t2002t__=0;
  char* __t2003t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1999t__);
  if(__t1999t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2000t=8;
  add__t175t(i,v__pos,&__t2001t__);
  mul__t199t(__t2000t,__t2001t__,&__t2002t__);
  add__t505t(v__unsafe_ptr,__t2002t__,&__t2003t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5866t=__t2003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5867t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5867t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5868t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5868t=z;
}

static inline __attribute__((always_inline)) int reduce__t2669t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5869t) {
  char __t2670t=0;
  char __t2671t=0;
  double __t2672t=0;
  double __t2673t=0;
  double ret=0;
  int __t2674t=0;
  int __t2675t=0;
  int __t2676t=0;
  int __t2677t__=0;
  uint64_t __t2678t=0;
  uint64_t __t2679t__=0;
  uint64_t __t2680t__from=0;
  uint64_t __t2680t__to=0;
  char __t2681t=0;
  uint64_t __t2682t__=0;
  uint64_t i=0;
  char* __t2683t__=0;
  double __t2684t__value=0;
  double __t2685t=0;
  double value=0;
  int __t2686t=0;
  int __t2687t=0;
  int __t2688t=0;
  int __t2689t=0;
  int __t2690t=0;
  char __t2691t=0;
  char __t2692t=0;
  double __t2693t__=0;
  int __t2694t=0;
  int __t2695t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2671t=1;
  if(__t2671t){
  __t2670t=1;
  }
  if(__t2670t){
  __t2672t=0.0;
  __t2673t=__t2672t;
  ret=__t2673t;
  }
  not__t37t(__t2676t,&__t2677t__);
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t2679t__);
  range__t471t(__t2679t__,&__t2680t__from,&__t2680t__to);
  __t2678t=0;
  while(1){
  __t_complain=get__t478t(__t2680t__from,__t2680t__to,__t2678t,&__t2682t__);
  __t2681t=__t_complain;
  i=__t2682t__;
  __t2681t=__t2681t==0;
  __t2678t=__t2678t+1;
  if(!__t2681t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t2683t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2683t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2684t__value,__t2683t__,8);
  __t2685t=__t2684t__value;
  value=__t2685t;
  __t2692t=1;
  if(__t2692t){
  __t2691t=1;
  }
  if(__t2691t){
  add__t153t(ret,value,&__t2693t__);
  ret=__t2693t__;
  }
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5869t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int sum__t4767t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5870t) {
  double __t4769t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2669t(v__unsafe_ptr,v__pos,v__length,&__t4769t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5870t=__t4769t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void true__t11t(int* __t5871t) {
  int value=0;
  *__t5871t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t5872t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t5872t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t5873t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t5873t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5874t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5874t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5875t) {
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
  *__t5875t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mean__t4770t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5876t) {
  double __t4772t__=0;
  uint64_t __t4773t__=0;
  double __t4774t__=0;
  double __t4775t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2669t(v__unsafe_ptr,v__pos,v__length,&__t4772t__);
  if(__t_errcode){
  goto __t_failure;
  }
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t4773t__);
  float__t415t(__t4773t__,&__t4774t__);
  __t_errcode=div__t201t(__t4772t__,__t4774t__,&__t4775t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5876t=__t4775t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5877t, uint64_t r__to, uint64_t* __t5878t) {
  uint64_t r__from=*__t5877t;
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
  *__t5877t=r__from;
  *__t5878t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5879t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5879t=z;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5880t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5880t=z;
}

static inline __attribute__((always_inline)) int var__t4776t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5881t) {
  double __t4777t=0;
  double __t4778t=0;
  double sumsqr=0;
  double __t4779t=0;
  double __t4780t=0;
  double sum=0;
  uint64_t __t4781t__=0;
  uint64_t __t4782t__from=0;
  uint64_t __t4782t__to=0;
  uint64_t it__from=0;
  uint64_t it__to=0;
  char __t4783t=0;
  uint64_t __t4784t__=0;
  uint64_t i=0;
  char* __t4785t__=0;
  double __t4786t__value=0;
  double value=0;
  double __t4787t__=0;
  double __t4788t__=0;
  double __t4789t__=0;
  uint64_t __t4790t__=0;
  double __t4791t__=0;
  double n=0;
  double __t4792t__=0;
  double __t4793t__=0;
  double __t4794t__=0;
  double __t4795t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t4777t=0.0;
  __t4778t=__t4777t;
  sumsqr=__t4778t;
  __t4779t=0.0;
  __t4780t=__t4779t;
  sum=__t4780t;
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t4781t__);
  range__t471t(__t4781t__,&__t4782t__from,&__t4782t__to);
  it__from=__t4782t__from;
  it__to=__t4782t__to;
  while(1){
  __t_complain=next__t474t(&it__from,it__to,&__t4784t__);
  __t4783t=__t_complain;
  i=__t4784t__;
  __t4783t=__t4783t==0;
  if(!__t4783t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t4785t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4785t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4786t__value,__t4785t__,8);
  value=__t4786t__value;
  add__t153t(sum,value,&__t4787t__);
  sum=__t4787t__;
  mul__t177t(value,value,&__t4788t__);
  add__t153t(sumsqr,__t4788t__,&__t4789t__);
  sumsqr=__t4789t__;
  }
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t4790t__);
  float__t415t(__t4790t__,&__t4791t__);
  n=__t4791t__;
  __t_errcode=div__t201t(sum,n,&__t4792t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sum=__t4792t__;
  __t_errcode=div__t201t(sumsqr,n,&__t4793t__);
  if(__t_errcode){
  goto __t_failure;
  }
  mul__t177t(sum,sum,&__t4794t__);
  sub__t326t(__t4793t__,__t4794t__,&__t4795t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5881t=__t4795t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sqrt__t1858t(double x, double* __t5882t) {
  double z=0;
  z=sqrt(x);
  goto __t_return;
  __t_return:
  *__t5882t=z;
}

static inline __attribute__((always_inline)) int std__t4796t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5883t) {
  double __t4797t__=0;
  double __t4798t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=var__t4776t(v__unsafe_ptr,v__pos,v__length,&__t4797t__);
  if(__t_errcode){
  goto __t_failure;
  }
  sqrt__t1858t(__t4797t__,&__t4798t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5883t=__t4798t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5795t() {
  char* __t5799t__unsafe_ptr=0;
  uint64_t __t5799t__unsafe_size=0;
  uint16_t __t5799t__unsafe_offset=0;
  uint16_t __t5799t__unsafe_align=0;
  uint64_t __t5800t=0;
  char* __t5801t__unsafe_ptr=0;
  uint64_t __t5801t__unsafe_size=0;
  uint16_t __t5801t__unsafe_offset=0;
  uint16_t __t5801t__unsafe_align=0;
  char __t5802t____t534t__=0;
  char* __t5803t__unsafe_ptr=0;
  uint64_t __t5803t__pos=0;
  uint64_t __t5803t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t5804t=0;
  char* __t5805t__=0;
  double __t5806t=0;
  uint64_t __t5807t=0;
  char* __t5808t__=0;
  double __t5809t=0;
  double __t5812t__=0;
  double __t5814t__=0;
  double __t5816t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  float____t_buffer____buffer__t5797t(&__t5799t__unsafe_ptr,&__t5799t__unsafe_size,&__t5799t__unsafe_offset,&__t5799t__unsafe_align);
  __t5800t=5;
  __t_errcode=alloc__t532t(&__t5799t__unsafe_ptr,&__t5799t__unsafe_size,&__t5799t__unsafe_offset,&__t5799t__unsafe_align,__t5800t,&__t5801t__unsafe_ptr,&__t5801t__unsafe_size,&__t5801t__unsafe_offset,&__t5801t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=vec__t1915t(&__t5801t__unsafe_ptr,&__t5801t__unsafe_size,&__t5801t__unsafe_offset,&__t5801t__unsafe_align,&__t5803t__unsafe_ptr,&__t5803t__pos,&__t5803t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t5803t__unsafe_ptr;
  v__pos=__t5803t__pos;
  v__length=__t5803t__length;
  __t5804t=0;
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,__t5804t,&__t5805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5806t=1.0;
  if(!__t5805t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5805t__,&__t5806t,8);
  __t5807t=1;
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,__t5807t,&__t5808t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5809t=2.0;
  if(!__t5808t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5808t__,&__t5809t,8);
  print__t378t(__t5810t,__t374t);
  __t_errcode=sum__t4767t(v__unsafe_ptr,v__pos,v__length,&__t5812t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5812t__,__t5532t);
  __t_errcode=mean__t4770t(v__unsafe_ptr,v__pos,v__length,&__t5814t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5814t__,__t5532t);
  __t_errcode=std__t4796t(v__unsafe_ptr,v__pos,v__length,&__t5816t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t383t(__t5816t__,__t5817t);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5801t__unsafe_ptr,&__t5802t____t534t__);
  if(__t5802t____t534t__){
  free__t503t(&__t5801t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5795t();return 0;}