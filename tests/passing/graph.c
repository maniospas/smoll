#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4802t="[ ";
const char* const __t374t="";
const char* const __t4819t=" ]";
const char* const __t4816t="  ";
const char* const __t5853t="iterations: ";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void new__t648t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t5841t(char** __t5858t, uint64_t* __t5859t, uint16_t* __t5860t, uint16_t* __t5861t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5858t=unsafe_ptr;
  *__t5859t=unsafe_size;
  *__t5860t=unsafe_offset;
  *__t5861t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5862t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5862t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5863t) {
  char* allocated=*__t5863t;
  if(allocated){
  free(allocated);
  }
  *__t5863t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5864t) {
  int value=0;
  *__t5864t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5865t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5865t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5866t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5866t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5867t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5867t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5868t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5868t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5869t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5869t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5870t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5870t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5871t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5871t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5872t) {
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
  *__t5872t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5873t, uint64_t* __t5874t, uint16_t* __t5875t, uint16_t* __t5876t, uint64_t size, char** __t5877t, uint64_t* __t5878t, uint16_t* __t5879t, uint16_t* __t5880t) {
  char* buffer__unsafe_ptr=*__t5873t;
  uint64_t buffer__unsafe_size=*__t5874t;
  uint16_t buffer__unsafe_offset=*__t5875t;
  uint16_t buffer__unsafe_align=*__t5876t;
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
  *__t5873t=buffer__unsafe_ptr;
  *__t5874t=buffer__unsafe_size;
  *__t5875t=buffer__unsafe_offset;
  *__t5876t=buffer__unsafe_align;
  *__t5877t=buffer__unsafe_ptr;
  *__t5878t=buffer__unsafe_size;
  *__t5879t=buffer__unsafe_offset;
  *__t5880t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5881t) {
  goto __t_return;
  __t_return:
  *__t5881t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void vec__t1872t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5882t, uint64_t* __t5883t, uint64_t* __t5884t) {
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__pos=0;
  uint64_t __t1874t__length=0;
  __t1874t__unsafe_ptr=unsafe_ptr;
  __t1874t__pos=pos;
  __t1874t__length=length;
  goto __t_return;
  __t_return:
  *__t5882t=__t1874t__unsafe_ptr;
  *__t5883t=__t1874t__pos;
  *__t5884t=__t1874t__length;
}

static inline __attribute__((always_inline)) int vec__t1915t(char** __t5885t, uint64_t* __t5886t, uint16_t* __t5887t, uint16_t* __t5888t, char** __t5889t, uint64_t* __t5890t, uint64_t* __t5891t) {
  char* buf__unsafe_ptr=*__t5885t;
  uint64_t buf__unsafe_size=*__t5886t;
  uint16_t buf__unsafe_offset=*__t5887t;
  uint16_t buf__unsafe_align=*__t5888t;
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
  *__t5885t=buf__unsafe_ptr;
  *__t5886t=buf__unsafe_size;
  *__t5887t=buf__unsafe_offset;
  *__t5888t=buf__unsafe_align;
  *__t5889t=__t1924t__unsafe_ptr;
  *__t5890t=__t1924t__pos;
  *__t5891t=__t1924t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ppr__t5640t(double alpha, double* __t5892t, uint64_t* __t5893t, double* __t5894t) {
  int __t5641t=0;
  int __t5642t=0;
  double __t5643t=0;
  double tol=0;
  uint64_t __t5644t=0;
  uint64_t max_iters=0;
  int __t5645t=0;
  int __t5646t=0;
  __t5643t=0.00000001;
  tol=__t5643t;
  __t5644t=100;
  max_iters=__t5644t;
  goto __t_return;
  __t_return:
  *__t5892t=alpha;
  *__t5893t=max_iters;
  *__t5894t=tol;
}

static inline __attribute__((always_inline)) void len__t1991t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5895t) {
  goto __t_return;
  __t_return:
  *__t5895t=v__length;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5896t, uint64_t* __t5897t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5896t=from;
  *__t5897t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5898t, uint64_t* __t5899t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5898t=__t473t__from;
  *__t5899t=__t473t__to;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5900t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5900t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5901t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5901t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5902t) {
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
  *__t5902t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5903t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5903t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5904t) {
  *__t5904t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5905t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5905t=__t506t__;
}

static inline __attribute__((always_inline)) int get__t1998t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5906t) {
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
  *__t5906t=__t2003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void bits__t448t(uint64_t value, uint64_t* __t5907t) {
  goto __t_return;
  __t_return:
  *__t5907t=value;
}

static inline __attribute__((always_inline)) void bits__t452t(double x, uint64_t* __t5908t) {
  uint64_t z=0;
  uint64_t __t453t__value=0;
  z=0;
  memcpy(&z,&x,8);
  bits__t448t(z,&__t453t__value);
  goto __t_return;
  __t_return:
  *__t5908t=__t453t__value;
}

static inline __attribute__((always_inline)) void bits__t450t(int64_t x, uint64_t* __t5909t) {
  uint64_t z=0;
  uint64_t __t451t__value=0;
  z=x;
  bits__t448t(z,&__t451t__value);
  goto __t_return;
  __t_return:
  *__t5909t=__t451t__value;
}

static inline __attribute__((always_inline)) void band__t464t(uint64_t x__value, uint64_t y__value, uint64_t* __t5910t) {
  uint64_t z=0;
  uint64_t __t465t__value=0;
  z=(x__value&y__value);
  bits__t448t(z,&__t465t__value);
  goto __t_return;
  __t_return:
  *__t5910t=__t465t__value;
}

static inline __attribute__((always_inline)) void float__t457t(uint64_t x__value, double* __t5911t) {
  double z=0;
  z=0;
  memcpy(&z,&x__value,8);
  goto __t_return;
  __t_return:
  *__t5911t=z;
}

static inline __attribute__((always_inline)) void abs__t1844t(double x, double* __t5912t) {
  int64_t c=0;
  uint64_t __t1845t__value=0;
  uint64_t __t1846t__value=0;
  uint64_t __t1847t__value=0;
  double __t1848t__=0;
  c=0x7FFFFFFFFFFFFFFF;
  bits__t452t(x,&__t1845t__value);
  bits__t450t(c,&__t1846t__value);
  band__t464t(__t1845t__value,__t1846t__value,&__t1847t__value);
  float__t457t(__t1847t__value,&__t1848t__);
  goto __t_return;
  __t_return:
  *__t5912t=__t1848t__;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5913t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5913t=__t73t__;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5914t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5914t=z;
}

int reduce__t2585t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t5915t) {
  int __t2586t=0;
  double __t2587t=0;
  double __t2588t=0;
  double ret=0;
  int __t2589t=0;
  int __t2590t=0;
  int __t2591t=0;
  int __t2592t__=0;
  uint64_t __t2593t=0;
  uint64_t __t2594t__=0;
  uint64_t __t2595t__from=0;
  uint64_t __t2595t__to=0;
  char __t2596t=0;
  uint64_t __t2597t__=0;
  uint64_t i=0;
  char* __t2598t__=0;
  double __t2599t__value=0;
  double __t2600t=0;
  double value=0;
  int __t2601t=0;
  int __t2602t=0;
  int __t2603t=0;
  char __t2604t=0;
  char __t2605t=0;
  double __t2606t__=0;
  int __t2607t=0;
  int __t2608t=0;
  double __t2609t__=0;
  int __t2610t=0;
  int __t2611t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t2587t=0.0;
  __t2588t=__t2587t;
  ret=__t2588t;
  not__t37t(__t2591t,&__t2592t__);
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t2594t__);
  range__t471t(__t2594t__,&__t2595t__from,&__t2595t__to);
  __t2593t=0;
  while(1){
  __t_complain=get__t478t(__t2595t__from,__t2595t__to,__t2593t,&__t2597t__);
  __t2596t=__t_complain;
  i=__t2597t__;
  __t2596t=__t2596t==0;
  __t2593t=__t2593t+1;
  if(!__t2596t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t2598t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2598t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2599t__value,__t2598t__,8);
  __t2600t=__t2599t__value;
  value=__t2600t;
  __t2605t=1;
  if(__t2605t){
  __t2604t=1;
  }
  if(__t2604t){
  abs__t1844t(value,&__t2606t__);
  value=__t2606t__;
  }
  add__t153t(ret,value,&__t2609t__);
  ret=__t2609t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5915t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5655t(char** __t5916t, uint64_t* __t5917t, uint16_t* __t5918t, uint16_t* __t5919t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5916t=unsafe_ptr;
  *__t5917t=unsafe_size;
  *__t5918t=unsafe_offset;
  *__t5919t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t5920t, uint64_t* __t5921t, uint16_t* __t5922t, uint16_t* __t5923t, uint64_t _pos, char** __t5924t, uint64_t* __t5925t, uint16_t* __t5926t, uint16_t* __t5927t, uint64_t* __t5928t) {
  char* buf__unsafe_ptr=*__t5920t;
  uint64_t buf__unsafe_size=*__t5921t;
  uint16_t buf__unsafe_offset=*__t5922t;
  uint16_t buf__unsafe_align=*__t5923t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t5920t=buf__unsafe_ptr;
  *__t5921t=buf__unsafe_size;
  *__t5922t=buf__unsafe_offset;
  *__t5923t=buf__unsafe_align;
  *__t5924t=buf__unsafe_ptr;
  *__t5925t=buf__unsafe_size;
  *__t5926t=buf__unsafe_offset;
  *__t5927t=buf__unsafe_align;
  *__t5928t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t5929t, uint64_t* __t5930t, uint16_t* __t5931t, uint16_t* __t5932t, char** __t5933t, uint64_t* __t5934t, uint16_t* __t5935t, uint16_t* __t5936t, uint64_t* __t5937t) {
  char* buf__unsafe_ptr=*__t5929t;
  uint64_t buf__unsafe_size=*__t5930t;
  uint16_t buf__unsafe_offset=*__t5931t;
  uint16_t buf__unsafe_align=*__t5932t;
  uint64_t __t656t=0;
  char* __t657t__buf__unsafe_ptr=0;
  uint64_t __t657t__buf__unsafe_size=0;
  uint16_t __t657t__buf__unsafe_offset=0;
  uint16_t __t657t__buf__unsafe_align=0;
  uint64_t __t657t__pos=0;
  __t656t=0;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t656t,&__t657t__buf__unsafe_ptr,&__t657t__buf__unsafe_size,&__t657t__buf__unsafe_offset,&__t657t__buf__unsafe_align,&__t657t__pos);
  goto __t_return;
  __t_return:
  *__t5929t=buf__unsafe_ptr;
  *__t5930t=buf__unsafe_size;
  *__t5931t=buf__unsafe_offset;
  *__t5932t=buf__unsafe_align;
  *__t5933t=__t657t__buf__unsafe_ptr;
  *__t5934t=__t657t__buf__unsafe_size;
  *__t5935t=__t657t__buf__unsafe_offset;
  *__t5936t=__t657t__buf__unsafe_align;
  *__t5937t=__t657t__pos;
}

static inline __attribute__((always_inline)) void sub__t326t(double x, double y, double* __t5938t) {
  int __t327t__=0;
  int __t328t=0;
  int __t329t=0;
  double z=0;
  is_different__t71t(x,y,&__t327t__);
  z=x-y;
  goto __t_return;
  __t_return:
  *__t5938t=z;
}

static inline __attribute__((always_inline)) void eq__t98t(double x, double y, char* __t5939t) {
  int __t99t__=0;
  char z=0;
  is_different__t71t(x,y,&__t99t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5939t=z;
}

static inline __attribute__((always_inline)) int div__t201t(double x, double y, double* __t5940t) {
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
  *__t5940t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5941t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5941t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5942t, uint64_t* __t5943t, uint16_t* __t5944t, uint16_t* __t5945t, uint64_t pos, char** __t5946t, uint64_t* __t5947t, uint16_t* __t5948t, uint16_t* __t5949t, uint64_t* __t5950t) {
  char* buf__unsafe_ptr=*__t5942t;
  uint64_t buf__unsafe_size=*__t5943t;
  uint16_t buf__unsafe_offset=*__t5944t;
  uint16_t buf__unsafe_align=*__t5945t;
  goto __t_return;
  __t_return:
  *__t5942t=buf__unsafe_ptr;
  *__t5943t=buf__unsafe_size;
  *__t5944t=buf__unsafe_offset;
  *__t5945t=buf__unsafe_align;
  *__t5946t=buf__unsafe_ptr;
  *__t5947t=buf__unsafe_size;
  *__t5948t=buf__unsafe_offset;
  *__t5949t=buf__unsafe_align;
  *__t5950t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t5951t, uint64_t* __t5952t, uint16_t* __t5953t, uint16_t* __t5954t, uint64_t* __t5955t, uint64_t length, char** __t5956t, uint64_t* __t5957t, uint16_t* __t5958t, uint16_t* __t5959t, uint64_t* __t5960t) {
  char* allocator__buf__unsafe_ptr=*__t5951t;
  uint64_t allocator__buf__unsafe_size=*__t5952t;
  uint16_t allocator__buf__unsafe_offset=*__t5953t;
  uint16_t allocator__buf__unsafe_align=*__t5954t;
  uint64_t allocator__pos=*__t5955t;
  int __t686t=0;
  uint64_t __t687t__=0;
  uint64_t next_pos=0;
  uint64_t __t688t__=0;
  char __t689t__=0;
  uint64_t __t690t=0;
  uint64_t __t691t__=0;
  uint64_t pos=0;
  char* __t692t__buf__unsafe_ptr=0;
  uint64_t __t692t__buf__unsafe_size=0;
  uint16_t __t692t__buf__unsafe_offset=0;
  uint16_t __t692t__buf__unsafe_align=0;
  uint64_t __t692t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t687t__);
  next_pos=__t687t__;
  len__t647t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t688t__);
  gt__t276t(next_pos,__t688t__,&__t689t__);
  if(__t689t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t690t=0;
  add__t175t(allocator__pos,__t690t,&__t691t__);
  pos=__t691t__;
  allocator__pos=next_pos;
  allocated__t658t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t692t__buf__unsafe_ptr,&__t692t__buf__unsafe_size,&__t692t__buf__unsafe_offset,&__t692t__buf__unsafe_align,&__t692t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5951t=allocator__buf__unsafe_ptr;
  *__t5952t=allocator__buf__unsafe_size;
  *__t5953t=allocator__buf__unsafe_offset;
  *__t5954t=allocator__buf__unsafe_align;
  *__t5955t=allocator__pos;
  *__t5956t=__t692t__buf__unsafe_ptr;
  *__t5957t=__t692t__buf__unsafe_size;
  *__t5958t=__t692t__buf__unsafe_offset;
  *__t5959t=__t692t__buf__unsafe_align;
  *__t5960t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1935t(char** __t5961t, uint64_t* __t5962t, uint16_t* __t5963t, uint16_t* __t5964t, uint64_t* __t5965t, uint64_t length, char** __t5966t, uint64_t* __t5967t, uint64_t* __t5968t) {
  char* FLOATS__buf__unsafe_ptr=*__t5961t;
  uint64_t FLOATS__buf__unsafe_size=*__t5962t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5963t;
  uint16_t FLOATS__buf__unsafe_align=*__t5964t;
  uint64_t FLOATS__pos=*__t5965t;
  uint64_t __t1936t__=0;
  uint64_t __t1937t=0;
  char __t1938t__=0;
  uint64_t __t1939t__=0;
  uint64_t __t1940t=0;
  char __t1941t__=0;
  char* __t1942t__buf__unsafe_ptr=0;
  uint64_t __t1942t__buf__unsafe_size=0;
  uint16_t __t1942t__buf__unsafe_offset=0;
  uint16_t __t1942t__buf__unsafe_align=0;
  uint64_t __t1942t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1943t__=0;
  int __t1944t=0;
  char* __t1945t__unsafe_ptr=0;
  uint64_t __t1945t__pos=0;
  uint64_t __t1945t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1936t__);
  __t1937t=8;
  neq__t144t(__t1936t__,__t1937t,&__t1938t__);
  if(__t1938t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1939t__);
  __t1940t=0;
  neq__t144t(__t1939t__,__t1940t,&__t1941t__);
  if(__t1941t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1942t__buf__unsafe_ptr,&__t1942t__buf__unsafe_size,&__t1942t__buf__unsafe_offset,&__t1942t__buf__unsafe_align,&__t1942t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1942t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1942t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1942t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1942t__buf__unsafe_align;
  surface__pos=__t1942t__pos;
  add__t175t(FLOATS__pos,length,&__t1943t__);
  FLOATS__pos=__t1943t__;
  vec__t1872t(surface__buf__unsafe_ptr,surface__pos,length,&__t1945t__unsafe_ptr,&__t1945t__pos,&__t1945t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5961t=FLOATS__buf__unsafe_ptr;
  *__t5962t=FLOATS__buf__unsafe_size;
  *__t5963t=FLOATS__buf__unsafe_offset;
  *__t5964t=FLOATS__buf__unsafe_align;
  *__t5965t=FLOATS__pos;
  *__t5966t=__t1945t__unsafe_ptr;
  *__t5967t=__t1945t__pos;
  *__t5968t=__t1945t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t1992t(char** __t5969t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5970t) {
  char* v__unsafe_ptr=*__t5969t;
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
  *__t5969t=v__unsafe_ptr;
  *__t5970t=__t1997t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2004t(double number, uint64_t i, double* __t5971t) {
  goto __t_return;
  __t_return:
  *__t5971t=number;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5972t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5972t=z;
}

int mul__t2255t(char** __t5973t, uint64_t* __t5974t, uint16_t* __t5975t, uint16_t* __t5976t, uint64_t* __t5977t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5978t, uint64_t* __t5979t, uint64_t* __t5980t) {
  char* FLOATS__buf__unsafe_ptr=*__t5973t;
  uint64_t FLOATS__buf__unsafe_size=*__t5974t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5975t;
  uint16_t FLOATS__buf__unsafe_align=*__t5976t;
  uint64_t FLOATS__pos=*__t5977t;
  int __t2256t=0;
  char* __t2258t__unsafe_ptr=0;
  uint64_t __t2258t__pos=0;
  uint64_t __t2258t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2259t=0;
  uint64_t __t2260t__from=0;
  uint64_t __t2260t__to=0;
  char __t2261t=0;
  uint64_t __t2262t__=0;
  uint64_t i=0;
  char* __t2263t__=0;
  char* __t2264t__=0;
  double __t2265t__value=0;
  double __t2266t__=0;
  double __t2267t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1935t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2258t__unsafe_ptr,&__t2258t__pos,&__t2258t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2258t__unsafe_ptr;
  v__pos=__t2258t__pos;
  v__length=__t2258t__length;
  range__t471t(v__length,&__t2260t__from,&__t2260t__to);
  __t2259t=0;
  while(1){
  __t_complain=get__t478t(__t2260t__from,__t2260t__to,__t2259t,&__t2262t__);
  __t2261t=__t_complain;
  i=__t2262t__;
  __t2261t=__t2261t==0;
  __t2259t=__t2259t+1;
  if(!__t2261t){
  break;
  }
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,i,&__t2263t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2264t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2264t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2265t__value,__t2264t__,8);
  at__t2004t(v2,i,&__t2266t__);
  mul__t177t(__t2265t__value,__t2266t__,&__t2267t__);
  if(!__t2263t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2263t__,&__t2267t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5973t=FLOATS__buf__unsafe_ptr;
  *__t5974t=FLOATS__buf__unsafe_size;
  *__t5975t=FLOATS__buf__unsafe_offset;
  *__t5976t=FLOATS__buf__unsafe_align;
  *__t5977t=FLOATS__pos;
  *__t5978t=v__unsafe_ptr;
  *__t5979t=v__pos;
  *__t5980t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1946t(char** __t5981t, uint64_t* __t5982t, uint16_t* __t5983t, uint16_t* __t5984t, uint64_t* __t5985t, uint64_t length, char** __t5986t, uint64_t* __t5987t, uint64_t* __t5988t) {
  char* FLOATS__buf__unsafe_ptr=*__t5981t;
  uint64_t FLOATS__buf__unsafe_size=*__t5982t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5983t;
  uint16_t FLOATS__buf__unsafe_align=*__t5984t;
  uint64_t FLOATS__pos=*__t5985t;
  uint64_t __t1947t__=0;
  uint64_t __t1948t=0;
  char __t1949t__=0;
  uint64_t __t1950t__=0;
  uint64_t __t1951t=0;
  char __t1952t__=0;
  char* __t1953t__buf__unsafe_ptr=0;
  uint64_t __t1953t__buf__unsafe_size=0;
  uint16_t __t1953t__buf__unsafe_offset=0;
  uint16_t __t1953t__buf__unsafe_align=0;
  uint64_t __t1953t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t1954t__=0;
  int __t1955t=0;
  uint64_t __t1956t=0;
  uint64_t __t1957t__=0;
  uint64_t __t1958t=0;
  uint64_t __t1959t__=0;
  uint64_t __t1960t__=0;
  char* __t1962t__unsafe_ptr=0;
  uint64_t __t1962t__pos=0;
  uint64_t __t1962t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t1947t__);
  __t1948t=8;
  neq__t144t(__t1947t__,__t1948t,&__t1949t__);
  if(__t1949t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t1950t__);
  __t1951t=0;
  neq__t144t(__t1950t__,__t1951t,&__t1952t__);
  if(__t1952t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t1953t__buf__unsafe_ptr,&__t1953t__buf__unsafe_size,&__t1953t__buf__unsafe_offset,&__t1953t__buf__unsafe_align,&__t1953t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t1953t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t1953t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t1953t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t1953t__buf__unsafe_align;
  surface__pos=__t1953t__pos;
  add__t175t(FLOATS__pos,length,&__t1954t__);
  FLOATS__pos=__t1954t__;
  __t1956t=8;
  mul__t199t(__t1956t,surface__pos,&__t1957t__);
  __t1958t=8;
  add__t175t(surface__pos,length,&__t1959t__);
  mul__t199t(__t1958t,__t1959t__,&__t1960t__);
  zero__t504t(FLOATS__buf__unsafe_ptr,__t1957t__,__t1960t__);
  vec__t1872t(surface__buf__unsafe_ptr,surface__pos,length,&__t1962t__unsafe_ptr,&__t1962t__pos,&__t1962t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5981t=FLOATS__buf__unsafe_ptr;
  *__t5982t=FLOATS__buf__unsafe_size;
  *__t5983t=FLOATS__buf__unsafe_offset;
  *__t5984t=FLOATS__buf__unsafe_align;
  *__t5985t=FLOATS__pos;
  *__t5986t=__t1962t__unsafe_ptr;
  *__t5987t=__t1962t__pos;
  *__t5988t=__t1962t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4849t(char** __t5989t, uint64_t* __t5990t, uint16_t* __t5991t, uint16_t* __t5992t, uint64_t* __t5993t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5994t, uint64_t* __t5995t, uint64_t* __t5996t) {
  char* FLOATS__buf__unsafe_ptr=*__t5989t;
  uint64_t FLOATS__buf__unsafe_size=*__t5990t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5991t;
  uint16_t FLOATS__buf__unsafe_align=*__t5992t;
  uint64_t FLOATS__pos=*__t5993t;
  char* __t4850t__unsafe_ptr=0;
  uint64_t __t4850t__pos=0;
  uint64_t __t4850t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4851t=0;
  uint64_t __t4852t__from=0;
  uint64_t __t4852t__to=0;
  char __t4853t=0;
  uint64_t __t4854t__=0;
  uint64_t i=0;
  char* __t4855t__=0;
  char* __t4856t__=0;
  double __t4857t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1946t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4850t__unsafe_ptr,&__t4850t__pos,&__t4850t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4850t__unsafe_ptr;
  result__pos=__t4850t__pos;
  result__length=__t4850t__length;
  range__t471t(v__length,&__t4852t__from,&__t4852t__to);
  __t4851t=0;
  while(1){
  __t_complain=get__t478t(__t4852t__from,__t4852t__to,__t4851t,&__t4854t__);
  __t4853t=__t_complain;
  i=__t4854t__;
  __t4853t=__t4853t==0;
  __t4851t=__t4851t+1;
  if(!__t4853t){
  break;
  }
  __t_errcode=mutget__t1992t(&result__unsafe_ptr,result__pos,result__length,i,&__t4855t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t4856t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4856t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4857t__value,__t4856t__,8);
  if(!__t4855t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4855t__,&__t4857t__value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5989t=FLOATS__buf__unsafe_ptr;
  *__t5990t=FLOATS__buf__unsafe_size;
  *__t5991t=FLOATS__buf__unsafe_offset;
  *__t5992t=FLOATS__buf__unsafe_align;
  *__t5993t=FLOATS__pos;
  *__t5994t=result__unsafe_ptr;
  *__t5995t=result__pos;
  *__t5996t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5650t(double ppr__alpha, uint64_t ppr__max_iters, double ppr__tol, uint64_t i, double* __t5997t) {
  char __t5651t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,ppr__max_iters,&__t5651t__);
  if(__t5651t__){
  __t_errcode=15;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5997t=ppr__alpha;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5352t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t5998t) {
  char __t5353t__=0;
  uint64_t __t5354t=0;
  uint64_t __t5355t__=0;
  char* __t5356t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t5353t__);
  if(__t5353t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t5354t=24;
  mul__t199t(k,__t5354t,&__t5355t__);
  add__t505t(m__unsafe_ptr,__t5355t__,&__t5356t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5998t=__t5356t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5377t(char** __t5999t, uint64_t* __t6000t, uint16_t* __t6001t, uint16_t* __t6002t, uint64_t* __t6003t, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6004t, uint64_t* __t6005t, uint64_t* __t6006t) {
  char* FLOATS__buf__unsafe_ptr=*__t5999t;
  uint64_t FLOATS__buf__unsafe_size=*__t6000t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6001t;
  uint16_t FLOATS__buf__unsafe_align=*__t6002t;
  uint64_t FLOATS__pos=*__t6003t;
  char __t5378t__=0;
  char* __t5379t__unsafe_ptr=0;
  uint64_t __t5379t__pos=0;
  uint64_t __t5379t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5380t=0;
  char __t5381t=0;
  char* __t5382t__=0;
  uint64_t __t5383t__row=0;
  uint64_t __t5383t__col=0;
  double __t5383t__value=0;
  uint64_t entry__row=0;
  uint64_t entry__col=0;
  double entry__value=0;
  char* __t5384t__=0;
  char* __t5385t__=0;
  double __t5386t__value=0;
  char* __t5387t__=0;
  double __t5388t__value=0;
  double __t5389t__=0;
  double __t5390t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5378t__);
  if(__t5378t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t1946t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t5379t__unsafe_ptr,&__t5379t__pos,&__t5379t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5379t__unsafe_ptr;
  result__pos=__t5379t__pos;
  result__length=__t5379t__length;
  __t5380t=0;
  while(1){
  __t_complain=get__t5352t(m__unsafe_ptr,m__rows,m__cols,m__nnz,__t5380t,&__t5382t__);
  __t5381t=__t_complain;
  if(!__t5382t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t5383t__row,__t5382t__,8);
  memcpy(&__t5383t__col,__t5382t__+8,8);
  memcpy(&__t5383t__value,__t5382t__+16,8);
  }
  entry__row=__t5383t__row;
  entry__col=__t5383t__col;
  entry__value=__t5383t__value;
  __t5381t=__t5381t==0;
  __t5380t=__t5380t+1;
  if(!__t5381t){
  break;
  }
  __t_errcode=mutget__t1992t(&result__unsafe_ptr,result__pos,result__length,entry__row,&__t5384t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(result__unsafe_ptr,result__pos,result__length,entry__row,&__t5385t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5385t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5386t__value,__t5385t__,8);
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,entry__col,&__t5387t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5387t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5388t__value,__t5387t__,8);
  mul__t177t(entry__value,__t5388t__value,&__t5389t__);
  add__t153t(__t5386t__value,__t5389t__,&__t5390t__);
  if(!__t5384t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5384t__,&__t5390t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5999t=FLOATS__buf__unsafe_ptr;
  *__t6000t=FLOATS__buf__unsafe_size;
  *__t6001t=FLOATS__buf__unsafe_offset;
  *__t6002t=FLOATS__buf__unsafe_align;
  *__t6003t=FLOATS__pos;
  *__t6004t=result__unsafe_ptr;
  *__t6005t=result__pos;
  *__t6006t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1883t(char** __t6007t, uint64_t* __t6008t, uint16_t* __t6009t, uint16_t* __t6010t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6007t=unsafe_ptr;
  *__t6008t=unsafe_size;
  *__t6009t=unsafe_offset;
  *__t6010t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t4867t(char** __t6011t, uint64_t v__pos, uint64_t v__length, char** __t6012t, uint64_t* __t6013t, uint16_t* __t6014t, uint16_t* __t6015t, uint64_t* __t6016t) {
  char* v__unsafe_ptr=*__t6011t;
  char* __t4868t__unsafe_ptr=0;
  uint64_t __t4868t__unsafe_size=0;
  uint16_t __t4868t__unsafe_offset=0;
  uint16_t __t4868t__unsafe_align=0;
  char* __t4869t__unsafe_ptr=0;
  uint64_t __t4869t__unsafe_size=0;
  uint16_t __t4869t__unsafe_offset=0;
  uint16_t __t4869t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4870t__=0;
  uint64_t __t4871t__=0;
  uint64_t __t4872t=0;
  uint64_t pos=0;
  char* __t4873t__buf__unsafe_ptr=0;
  uint64_t __t4873t__buf__unsafe_size=0;
  uint16_t __t4873t__buf__unsafe_offset=0;
  uint16_t __t4873t__buf__unsafe_align=0;
  uint64_t __t4873t__pos=0;
  float____t_buffer____buffer__t1883t(&__t4868t__unsafe_ptr,&__t4868t__unsafe_size,&__t4868t__unsafe_offset,&__t4868t__unsafe_align);
  __t4869t__unsafe_ptr=__t4868t__unsafe_ptr;
  __t4869t__unsafe_size=__t4868t__unsafe_size;
  __t4869t__unsafe_offset=__t4868t__unsafe_offset;
  __t4869t__unsafe_align=__t4868t__unsafe_align;
  buf__unsafe_ptr=__t4869t__unsafe_ptr;
  buf__unsafe_size=__t4869t__unsafe_size;
  buf__unsafe_offset=__t4869t__unsafe_offset;
  buf__unsafe_align=__t4869t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t4870t__);
  add__t175t(v__pos,__t4870t__,&__t4871t__);
  buf__unsafe_size=__t4871t__;
  __t4872t=v__pos;
  pos=__t4872t;
  arena__t652t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,pos,&__t4873t__buf__unsafe_ptr,&__t4873t__buf__unsafe_size,&__t4873t__buf__unsafe_offset,&__t4873t__buf__unsafe_align,&__t4873t__pos);
  goto __t_return;
  __t_return:
  *__t6011t=v__unsafe_ptr;
  *__t6012t=__t4873t__buf__unsafe_ptr;
  *__t6013t=__t4873t__buf__unsafe_size;
  *__t6014t=__t4873t__buf__unsafe_offset;
  *__t6015t=__t4873t__buf__unsafe_align;
  *__t6016t=__t4873t__pos;
}

static inline __attribute__((always_inline)) void self__t4874t(char** __t6017t, uint64_t v__pos, uint64_t v__length, char** __t6018t, uint64_t* __t6019t, uint16_t* __t6020t, uint16_t* __t6021t, uint64_t* __t6022t, char** __t6023t, uint64_t* __t6024t, uint64_t* __t6025t) {
  char* v__unsafe_ptr=*__t6017t;
  char* __t4875t__buf__unsafe_ptr=0;
  uint64_t __t4875t__buf__unsafe_size=0;
  uint16_t __t4875t__buf__unsafe_offset=0;
  uint16_t __t4875t__buf__unsafe_align=0;
  uint64_t __t4875t__pos=0;
  arena__t4867t(&v__unsafe_ptr,v__pos,v__length,&__t4875t__buf__unsafe_ptr,&__t4875t__buf__unsafe_size,&__t4875t__buf__unsafe_offset,&__t4875t__buf__unsafe_align,&__t4875t__pos);
  goto __t_return;
  __t_return:
  *__t6017t=v__unsafe_ptr;
  *__t6018t=__t4875t__buf__unsafe_ptr;
  *__t6019t=__t4875t__buf__unsafe_size;
  *__t6020t=__t4875t__buf__unsafe_offset;
  *__t6021t=__t4875t__buf__unsafe_align;
  *__t6022t=__t4875t__pos;
  *__t6023t=v__unsafe_ptr;
  *__t6024t=v__pos;
  *__t6025t=v__length;
}

static inline __attribute__((always_inline)) int at__t2005t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t6026t) {
  char* __t2006t__=0;
  double __t2007t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t2006t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2006t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2007t__value,__t2006t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6026t=__t2007t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2037t(char** __t6027t, uint64_t* __t6028t, uint16_t* __t6029t, uint16_t* __t6030t, uint64_t* __t6031t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t6032t, uint64_t* __t6033t, uint64_t* __t6034t) {
  char* FLOATS__buf__unsafe_ptr=*__t6027t;
  uint64_t FLOATS__buf__unsafe_size=*__t6028t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6029t;
  uint16_t FLOATS__buf__unsafe_align=*__t6030t;
  uint64_t FLOATS__pos=*__t6031t;
  int __t2038t=0;
  char __t2039t__=0;
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__pos=0;
  uint64_t __t2041t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2042t=0;
  uint64_t __t2043t__from=0;
  uint64_t __t2043t__to=0;
  char __t2044t=0;
  uint64_t __t2045t__=0;
  uint64_t i=0;
  char* __t2046t__=0;
  char* __t2047t__=0;
  double __t2048t__value=0;
  double __t2049t__=0;
  double __t2050t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t2039t__);
  if(__t2039t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t1935t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2041t__unsafe_ptr,&__t2041t__pos,&__t2041t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2041t__unsafe_ptr;
  v__pos=__t2041t__pos;
  v__length=__t2041t__length;
  range__t471t(v1__length,&__t2043t__from,&__t2043t__to);
  __t2042t=0;
  while(1){
  __t_complain=get__t478t(__t2043t__from,__t2043t__to,__t2042t,&__t2045t__);
  __t2044t=__t_complain;
  i=__t2045t__;
  __t2044t=__t2044t==0;
  __t2042t=__t2042t+1;
  if(!__t2044t){
  break;
  }
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,i,&__t2046t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2047t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2047t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2048t__value,__t2047t__,8);
  __t_errcode=at__t2005t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2049t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t2048t__value,__t2049t__,&__t2050t__);
  if(!__t2046t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2046t__,&__t2050t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6027t=FLOATS__buf__unsafe_ptr;
  *__t6028t=FLOATS__buf__unsafe_size;
  *__t6029t=FLOATS__buf__unsafe_offset;
  *__t6030t=FLOATS__buf__unsafe_align;
  *__t6031t=FLOATS__pos;
  *__t6032t=v__unsafe_ptr;
  *__t6033t=v__pos;
  *__t6034t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

int div__t2462t(char** __t6035t, uint64_t* __t6036t, uint16_t* __t6037t, uint16_t* __t6038t, uint64_t* __t6039t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t6040t, uint64_t* __t6041t, uint64_t* __t6042t) {
  char* FLOATS__buf__unsafe_ptr=*__t6035t;
  uint64_t FLOATS__buf__unsafe_size=*__t6036t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6037t;
  uint16_t FLOATS__buf__unsafe_align=*__t6038t;
  uint64_t FLOATS__pos=*__t6039t;
  int __t2463t=0;
  char* __t2465t__unsafe_ptr=0;
  uint64_t __t2465t__pos=0;
  uint64_t __t2465t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t2466t=0;
  uint64_t __t2467t__from=0;
  uint64_t __t2467t__to=0;
  char __t2468t=0;
  uint64_t __t2469t__=0;
  uint64_t i=0;
  char* __t2470t__=0;
  char* __t2471t__=0;
  double __t2472t__value=0;
  double __t2473t__=0;
  double __t2474t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1935t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2465t__unsafe_ptr,&__t2465t__pos,&__t2465t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2465t__unsafe_ptr;
  v__pos=__t2465t__pos;
  v__length=__t2465t__length;
  p1=v1__unsafe_ptr;
  range__t471t(v__length,&__t2467t__from,&__t2467t__to);
  __t2466t=0;
  while(1){
  __t_complain=get__t478t(__t2467t__from,__t2467t__to,__t2466t,&__t2469t__);
  __t2468t=__t_complain;
  i=__t2469t__;
  __t2468t=__t2468t==0;
  __t2466t=__t2466t+1;
  if(!__t2468t){
  break;
  }
  __t_errcode=mutget__t1992t(&v__unsafe_ptr,v__pos,v__length,i,&__t2470t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1998t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2471t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2471t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2472t__value,__t2471t__,8);
  at__t2004t(v2,i,&__t2473t__);
  __t_errcode=div__t201t(__t2472t__value,__t2473t__,&__t2474t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2470t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2470t__,&__t2474t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6035t=FLOATS__buf__unsafe_ptr;
  *__t6036t=FLOATS__buf__unsafe_size;
  *__t6037t=FLOATS__buf__unsafe_offset;
  *__t6038t=FLOATS__buf__unsafe_align;
  *__t6039t=FLOATS__pos;
  *__t6040t=v__unsafe_ptr;
  *__t6041t=v__pos;
  *__t6042t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void neq__t122t(double x, double y, char* __t6043t) {
  int __t123t__=0;
  char z=0;
  is_different__t71t(x,y,&__t123t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6043t=z;
}

int reduce__t3848t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, double* __t6044t) {
  int __t3849t=0;
  double __t3850t=0;
  double __t3851t=0;
  double ret=0;
  int __t3852t=0;
  int __t3853t=0;
  uint64_t __t3854t=0;
  uint64_t __t3855t__=0;
  uint64_t __t3856t__from=0;
  uint64_t __t3856t__to=0;
  char __t3857t=0;
  uint64_t __t3858t__=0;
  uint64_t i=0;
  char* __t3859t__=0;
  double __t3860t__value=0;
  double __t3861t=0;
  double value=0;
  char __t3862t=0;
  char __t3863t=0;
  char* __t3864t__=0;
  double __t3865t__value=0;
  double __t3866t__=0;
  int __t3867t=0;
  int __t3868t=0;
  char __t3869t=0;
  char __t3870t=0;
  double __t3871t__=0;
  int __t3872t=0;
  int __t3873t=0;
  double __t3874t__=0;
  int __t3875t=0;
  int __t3876t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t3850t=0.0;
  __t3851t=__t3850t;
  ret=__t3851t;
  len__t1991t(v__unsafe_ptr,v__pos,v__length,&__t3855t__);
  range__t471t(__t3855t__,&__t3856t__from,&__t3856t__to);
  __t3854t=0;
  while(1){
  __t_complain=get__t478t(__t3856t__from,__t3856t__to,__t3854t,&__t3858t__);
  __t3857t=__t_complain;
  i=__t3858t__;
  __t3857t=__t3857t==0;
  __t3854t=__t3854t+1;
  if(!__t3857t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t3859t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3859t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3860t__value,__t3859t__,8);
  __t3861t=__t3860t__value;
  value=__t3861t;
  __t3863t=1;
  if(__t3863t){
  __t3862t=1;
  }
  if(__t3862t){
  __t_errcode=get__t1998t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t3864t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t3864t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t3865t__value,__t3864t__,8);
  sub__t326t(value,__t3865t__value,&__t3866t__);
  value=__t3866t__;
  }
  __t3870t=1;
  if(__t3870t){
  __t3869t=1;
  }
  if(__t3869t){
  abs__t1844t(value,&__t3871t__);
  value=__t3871t__;
  }
  add__t153t(ret,value,&__t3874t__);
  ret=__t3874t__;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6044t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void true__t11t(int* __t6045t) {
  int value=0;
  *__t6045t=value;
}

static inline __attribute__((always_inline)) void not__t39t(int __t_anon0, int* __t6046t) {
  int __t40t__=0;
  true__t11t(&__t40t__);
  goto __t_return;
  __t_return:
  *__t6046t=__t40t__;
}

static inline __attribute__((always_inline)) void float__t415t(uint64_t x, double* __t6047t) {
  int __t416t=0;
  int __t417t__=0;
  int __t418t=0;
  double z=0;
  not__t39t(__t416t,&__t417t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t6047t=z;
}

static inline __attribute__((always_inline)) void lt__t230t(double x, double y, char* __t6048t) {
  int __t231t__=0;
  char z=0;
  is_different__t71t(x,y,&__t231t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6048t=z;
}

static inline __attribute__((always_inline)) int filter__t5698t(double config__alpha, uint64_t config__max_iters, double config__tol, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t6049t, uint64_t* __t6050t, uint64_t* __t6051t, double* __t6052t, uint64_t* __t6053t) {
  double __t5700t__=0;
  double p0norm=0;
  char* __t5701t__unsafe_ptr=0;
  uint64_t __t5701t__unsafe_size=0;
  uint16_t __t5701t__unsafe_offset=0;
  uint16_t __t5701t__unsafe_align=0;
  uint64_t __t5702t=0;
  uint64_t __t5703t__=0;
  uint64_t __t5704t__=0;
  char* __t5705t__unsafe_ptr=0;
  uint64_t __t5705t__unsafe_size=0;
  uint16_t __t5705t__unsafe_offset=0;
  uint16_t __t5705t__unsafe_align=0;
  char __t5706t____t534t__=0;
  char* __t5707t__buf__unsafe_ptr=0;
  uint64_t __t5707t__buf__unsafe_size=0;
  uint16_t __t5707t__buf__unsafe_offset=0;
  uint16_t __t5707t__buf__unsafe_align=0;
  uint64_t __t5707t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  double __t5708t=0;
  double __t5709t__=0;
  double __t5710t__=0;
  char* __t5711t__unsafe_ptr=0;
  uint64_t __t5711t__pos=0;
  uint64_t __t5711t__length=0;
  char* normalized_p0__unsafe_ptr=0;
  uint64_t normalized_p0__pos=0;
  uint64_t normalized_p0__length=0;
  char* __t5712t__unsafe_ptr=0;
  uint64_t __t5712t__pos=0;
  uint64_t __t5712t__length=0;
  char* __t5713t__unsafe_ptr=0;
  uint64_t __t5713t__pos=0;
  uint64_t __t5713t__length=0;
  char* prev_p__unsafe_ptr=0;
  uint64_t prev_p__pos=0;
  uint64_t prev_p__length=0;
  char* __t5714t__unsafe_ptr=0;
  uint64_t __t5714t__pos=0;
  uint64_t __t5714t__length=0;
  char* __t5715t__unsafe_ptr=0;
  uint64_t __t5715t__pos=0;
  uint64_t __t5715t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t5716t__=0;
  char* __t5717t__unsafe_ptr=0;
  uint64_t __t5717t__pos=0;
  uint64_t __t5717t__length=0;
  char* __t5718t__unsafe_ptr=0;
  uint64_t __t5718t__pos=0;
  uint64_t __t5718t__length=0;
  char* empty__unsafe_ptr=0;
  uint64_t empty__pos=0;
  uint64_t empty__length=0;
  uint64_t __t5719t=0;
  char __t5720t=0;
  double __t5721t__=0;
  double alpha=0;
  uint64_t iter=0;
  char* __t5722t__unsafe_ptr=0;
  uint64_t __t5722t__pos=0;
  uint64_t __t5722t__length=0;
  char* __t5723t____t4875t__buf__unsafe_ptr=0;
  uint64_t __t5723t____t4875t__buf__unsafe_size=0;
  uint16_t __t5723t____t4875t__buf__unsafe_offset=0;
  uint16_t __t5723t____t4875t__buf__unsafe_align=0;
  uint64_t __t5723t____t4875t__pos=0;
  char* __t5723t__v__unsafe_ptr=0;
  uint64_t __t5723t__v__pos=0;
  uint64_t __t5723t__v__length=0;
  char* __t5724t__unsafe_ptr=0;
  uint64_t __t5724t__pos=0;
  uint64_t __t5724t__length=0;
  char* __t5725t____t4875t__buf__unsafe_ptr=0;
  uint64_t __t5725t____t4875t__buf__unsafe_size=0;
  uint16_t __t5725t____t4875t__buf__unsafe_offset=0;
  uint16_t __t5725t____t4875t__buf__unsafe_align=0;
  uint64_t __t5725t____t4875t__pos=0;
  char* __t5725t__v__unsafe_ptr=0;
  uint64_t __t5725t__v__pos=0;
  uint64_t __t5725t__v__length=0;
  char* __t5726t__unsafe_ptr=0;
  uint64_t __t5726t__pos=0;
  uint64_t __t5726t__length=0;
  char* __t5727t____t4875t__buf__unsafe_ptr=0;
  uint64_t __t5727t____t4875t__buf__unsafe_size=0;
  uint16_t __t5727t____t4875t__buf__unsafe_offset=0;
  uint16_t __t5727t____t4875t__buf__unsafe_align=0;
  uint64_t __t5727t____t4875t__pos=0;
  char* __t5727t__v__unsafe_ptr=0;
  uint64_t __t5727t__v__pos=0;
  uint64_t __t5727t__v__length=0;
  double __t5729t__=0;
  char* __t5730t__unsafe_ptr=0;
  uint64_t __t5730t__pos=0;
  uint64_t __t5730t__length=0;
  double __t5731t=0;
  char __t5732t__=0;
  double __t5735t__=0;
  double err=0;
  uint64_t __t5736t__=0;
  double __t5737t__=0;
  double __t5738t__=0;
  char __t5739t__=0;
  char* __t5740t____t4875t__buf__unsafe_ptr=0;
  uint64_t __t5740t____t4875t__buf__unsafe_size=0;
  uint16_t __t5740t____t4875t__buf__unsafe_offset=0;
  uint16_t __t5740t____t4875t__buf__unsafe_align=0;
  uint64_t __t5740t____t4875t__pos=0;
  char* __t5740t__v__unsafe_ptr=0;
  uint64_t __t5740t__v__pos=0;
  uint64_t __t5740t__v__length=0;
  char* __t5741t__unsafe_ptr=0;
  uint64_t __t5741t__pos=0;
  uint64_t __t5741t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=reduce__t2585t(p0__unsafe_ptr,p0__pos,p0__length,&__t5700t__);
  if(__t_errcode){
  goto __t_failure;
  }
  p0norm=__t5700t__;
  float____t_buffer____buffer__t5655t(&__t5701t__unsafe_ptr,&__t5701t__unsafe_size,&__t5701t__unsafe_offset,&__t5701t__unsafe_align);
  __t5702t=100;
  len__t1991t(p0__unsafe_ptr,p0__pos,p0__length,&__t5703t__);
  mul__t199t(__t5702t,__t5703t__,&__t5704t__);
  __t_errcode=alloc__t532t(&__t5701t__unsafe_ptr,&__t5701t__unsafe_size,&__t5701t__unsafe_offset,&__t5701t__unsafe_align,__t5704t__,&__t5705t__unsafe_ptr,&__t5705t__unsafe_size,&__t5705t__unsafe_offset,&__t5705t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t655t(&__t5705t__unsafe_ptr,&__t5705t__unsafe_size,&__t5705t__unsafe_offset,&__t5705t__unsafe_align,&__t5707t__buf__unsafe_ptr,&__t5707t__buf__unsafe_size,&__t5707t__buf__unsafe_offset,&__t5707t__buf__unsafe_align,&__t5707t__pos);
  FLOATS__buf__unsafe_ptr=__t5707t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t5707t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t5707t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t5707t__buf__unsafe_align;
  FLOATS__pos=__t5707t__pos;
  __t5708t=1.0;
  sub__t326t(__t5708t,config__alpha,&__t5709t__);
  __t_errcode=div__t201t(__t5709t__,p0norm,&__t5710t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=mul__t2255t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,p0__unsafe_ptr,p0__pos,p0__length,__t5710t__,&__t5711t__unsafe_ptr,&__t5711t__pos,&__t5711t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  normalized_p0__unsafe_ptr=__t5711t__unsafe_ptr;
  normalized_p0__pos=__t5711t__pos;
  normalized_p0__length=__t5711t__length;
  __t_errcode=copy__t4849t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5712t__unsafe_ptr,&__t5712t__pos,&__t5712t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5713t__unsafe_ptr=__t5712t__unsafe_ptr;
  __t5713t__pos=__t5712t__pos;
  __t5713t__length=__t5712t__length;
  prev_p__unsafe_ptr=__t5713t__unsafe_ptr;
  prev_p__pos=__t5713t__pos;
  prev_p__length=__t5713t__length;
  __t_errcode=copy__t4849t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5714t__unsafe_ptr,&__t5714t__pos,&__t5714t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5715t__unsafe_ptr=__t5714t__unsafe_ptr;
  __t5715t__pos=__t5714t__pos;
  __t5715t__length=__t5714t__length;
  p__unsafe_ptr=__t5715t__unsafe_ptr;
  p__pos=__t5715t__pos;
  p__length=__t5715t__length;
  len__t1991t(p__unsafe_ptr,p__pos,p__length,&__t5716t__);
  __t_errcode=vec__t1946t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,__t5716t__,&__t5717t__unsafe_ptr,&__t5717t__pos,&__t5717t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5718t__unsafe_ptr=__t5717t__unsafe_ptr;
  __t5718t__pos=__t5717t__pos;
  __t5718t__length=__t5717t__length;
  empty__unsafe_ptr=__t5718t__unsafe_ptr;
  empty__pos=__t5718t__pos;
  empty__length=__t5718t__length;
  __t5719t=0;
  while(1){
  __t_complain=get__t5650t(config__alpha,config__max_iters,config__tol,__t5719t,&__t5721t__);
  __t5720t=__t_complain;
  alpha=__t5721t__;
  __t5720t=__t5720t==0;
  __t5719t=__t5719t+1;
  if(!__t5720t){
  break;
  }
  iter=__t5719t;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  __t_errcode=mul__t5377t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t5722t__unsafe_ptr,&__t5722t__pos,&__t5722t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4874t(&__t5722t__unsafe_ptr,__t5722t__pos,__t5722t__length,&__t5723t____t4875t__buf__unsafe_ptr,&__t5723t____t4875t__buf__unsafe_size,&__t5723t____t4875t__buf__unsafe_offset,&__t5723t____t4875t__buf__unsafe_align,&__t5723t____t4875t__pos,&__t5723t__v__unsafe_ptr,&__t5723t__v__pos,&__t5723t__v__length);
  __t_errcode=mul__t2255t(&__t5723t____t4875t__buf__unsafe_ptr,&__t5723t____t4875t__buf__unsafe_size,&__t5723t____t4875t__buf__unsafe_offset,&__t5723t____t4875t__buf__unsafe_align,&__t5723t____t4875t__pos,__t5723t__v__unsafe_ptr,__t5723t__v__pos,__t5723t__v__length,alpha,&__t5724t__unsafe_ptr,&__t5724t__pos,&__t5724t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5724t__unsafe_ptr;
  p__pos=__t5724t__pos;
  p__length=__t5724t__length;
  self__t4874t(&p__unsafe_ptr,p__pos,p__length,&__t5725t____t4875t__buf__unsafe_ptr,&__t5725t____t4875t__buf__unsafe_size,&__t5725t____t4875t__buf__unsafe_offset,&__t5725t____t4875t__buf__unsafe_align,&__t5725t____t4875t__pos,&__t5725t__v__unsafe_ptr,&__t5725t__v__pos,&__t5725t__v__length);
  __t_errcode=add__t2037t(&__t5725t____t4875t__buf__unsafe_ptr,&__t5725t____t4875t__buf__unsafe_size,&__t5725t____t4875t__buf__unsafe_offset,&__t5725t____t4875t__buf__unsafe_align,&__t5725t____t4875t__pos,__t5725t__v__unsafe_ptr,__t5725t__v__pos,__t5725t__v__length,normalized_p0__unsafe_ptr,normalized_p0__pos,normalized_p0__length,&__t5726t__unsafe_ptr,&__t5726t__pos,&__t5726t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5726t__unsafe_ptr;
  p__pos=__t5726t__pos;
  p__length=__t5726t__length;
  self__t4874t(&p__unsafe_ptr,p__pos,p__length,&__t5727t____t4875t__buf__unsafe_ptr,&__t5727t____t4875t__buf__unsafe_size,&__t5727t____t4875t__buf__unsafe_offset,&__t5727t____t4875t__buf__unsafe_align,&__t5727t____t4875t__pos,&__t5727t__v__unsafe_ptr,&__t5727t__v__pos,&__t5727t__v__length);
  __t_errcode=reduce__t2585t(p__unsafe_ptr,p__pos,p__length,&__t5729t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=div__t2462t(&__t5727t____t4875t__buf__unsafe_ptr,&__t5727t____t4875t__buf__unsafe_size,&__t5727t____t4875t__buf__unsafe_offset,&__t5727t____t4875t__buf__unsafe_align,&__t5727t____t4875t__pos,__t5727t__v__unsafe_ptr,__t5727t__v__pos,__t5727t__v__length,__t5729t__,&__t5730t__unsafe_ptr,&__t5730t__pos,&__t5730t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5730t__unsafe_ptr;
  p__pos=__t5730t__pos;
  p__length=__t5730t__length;
  __t5731t=0.0;
  neq__t122t(config__tol,__t5731t,&__t5732t__);
  if(__t5732t__){
  __t_errcode=reduce__t3848t(prev_p__unsafe_ptr,prev_p__pos,prev_p__length,p__unsafe_ptr,p__pos,p__length,&__t5735t__);
  if(__t_errcode){
  goto __t_failure;
  }
  err=__t5735t__;
  len__t1991t(p__unsafe_ptr,p__pos,p__length,&__t5736t__);
  float__t415t(__t5736t__,&__t5737t__);
  mul__t177t(config__tol,__t5737t__,&__t5738t__);
  lt__t230t(err,__t5738t__,&__t5739t__);
  if(__t5739t__){
  break;
  }
  }
  empty__unsafe_ptr=prev_p__unsafe_ptr;
  empty__pos=prev_p__pos;
  empty__length=prev_p__length;
  prev_p__unsafe_ptr=p__unsafe_ptr;
  prev_p__pos=p__pos;
  prev_p__length=p__length;
  FLOATS__pos=empty__pos;
  }
  self__t4874t(&p__unsafe_ptr,p__pos,p__length,&__t5740t____t4875t__buf__unsafe_ptr,&__t5740t____t4875t__buf__unsafe_size,&__t5740t____t4875t__buf__unsafe_offset,&__t5740t____t4875t__buf__unsafe_align,&__t5740t____t4875t__pos,&__t5740t__v__unsafe_ptr,&__t5740t__v__pos,&__t5740t__v__length);
  __t_errcode=mul__t2255t(&__t5740t____t4875t__buf__unsafe_ptr,&__t5740t____t4875t__buf__unsafe_size,&__t5740t____t4875t__buf__unsafe_offset,&__t5740t____t4875t__buf__unsafe_align,&__t5740t____t4875t__pos,__t5740t__v__unsafe_ptr,__t5740t__v__pos,__t5740t__v__length,p0norm,&__t5741t__unsafe_ptr,&__t5741t__pos,&__t5741t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5741t__unsafe_ptr;
  p__pos=__t5741t__pos;
  p__length=__t5741t__length;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6049t=p__unsafe_ptr;
  *__t6050t=p__pos;
  *__t6051t=p__length;
  *__t6052t=err;
  *__t6053t=iter;
  
  __t_skip_returns:exists__t447t(__t5705t__unsafe_ptr,&__t5706t____t534t__);
  if(__t5706t____t534t__){
  free__t503t(&__t5705t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t6054t, const char** __t6055t) {
  goto __t_return;
  __t_return:
  *__t6054t=value;
  *__t6055t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t6056t, const char** __t6057t) {
  goto __t_return;
  __t_return:
  *__t6056t=value;
  *__t6057t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t6058t) {
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
  *__t6058t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4821t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4822t=0;
  const char* endl=0;
  const char* __t4823t__value=0;
  const char* __t4823t____t374t=0;
  uint64_t __t4825t=0;
  uint64_t __t4826t__from=0;
  uint64_t __t4826t__to=0;
  char __t4827t=0;
  uint64_t __t4828t__=0;
  uint64_t i=0;
  char* __t4829t__=0;
  double __t4830t__value=0;
  double __t4831t__value=0;
  const char* __t4831t____t374t=0;
  uint64_t __t4833t=0;
  uint64_t __t4834t__=0;
  char __t4835t__=0;
  const char* __t4836t__value=0;
  const char* __t4836t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4802t,&__t4823t__value,&__t4823t____t374t);
  print__t378t(__t4823t__value,__t4823t____t374t);
  range__t471t(v__length,&__t4826t__from,&__t4826t__to);
  __t4825t=0;
  while(1){
  __t_complain=get__t478t(__t4826t__from,__t4826t__to,__t4825t,&__t4828t__);
  __t4827t=__t_complain;
  i=__t4828t__;
  __t4827t=__t4827t==0;
  __t4825t=__t4825t+1;
  if(!__t4827t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t4829t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4829t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4830t__value,__t4829t__,8);
  nn__t375t(__t4830t__value,&__t4831t__value,&__t4831t____t374t);
  print__t383t(__t4831t__value,__t4831t____t374t);
  __t4833t=1;
  __t_errcode=sub__t352t(v__length,__t4833t,&__t4834t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4834t__,&__t4835t__);
  if(__t4835t__){
  nn__t373t(__t4816t,&__t4836t__value,&__t4836t____t374t);
  print__t378t(__t4836t__value,__t4836t____t374t);
  }
  }
  print__t378t(__t4819t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5795t() {
  char* __t5833t=0;
  uint64_t __t5834t=0;
  uint64_t __t5835t=0;
  uint64_t __t5836t=0;
  char* m__t5833t=0;
  uint64_t m__t5834t=0;
  uint64_t m__t5835t=0;
  uint64_t m__t5836t=0;
  double __t5838t=0;
  double __t5843t=0;
  double __t5844t=0;
  char* __t5845t__unsafe_ptr=0;
  uint64_t __t5845t__unsafe_size=0;
  uint16_t __t5845t__unsafe_offset=0;
  uint16_t __t5845t__unsafe_align=0;
  uint64_t __t5846t=0;
  char* __t5847t__unsafe_ptr=0;
  uint64_t __t5847t__unsafe_size=0;
  uint16_t __t5847t__unsafe_offset=0;
  uint16_t __t5847t__unsafe_align=0;
  char __t5848t____t534t__=0;
  char* __t5849t__unsafe_ptr=0;
  uint64_t __t5849t__pos=0;
  uint64_t __t5849t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  double __t5850t=0;
  double __t5851t__alpha=0;
  uint64_t __t5851t__max_iters=0;
  double __t5851t__tol=0;
  char* __t5852t__p__unsafe_ptr=0;
  uint64_t __t5852t__p__pos=0;
  uint64_t __t5852t__p__length=0;
  double __t5852t__err=0;
  uint64_t __t5852t__iter=0;
  char* result__p__unsafe_ptr=0;
  uint64_t result__p__pos=0;
  uint64_t result__p__length=0;
  double result__err=0;
  uint64_t result__iter=0;
  const char* __t5854t__value=0;
  const char* __t5854t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t5833t="\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xef?\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\xfe\xff\xff\xff\xff\xff\xdf?";
  __t5834t=3;
  __t5835t=3;
  __t5836t=3;
  m__t5833t=__t5833t;
  m__t5834t=__t5834t;
  m__t5835t=__t5835t;
  m__t5836t=__t5836t;
  new__t648t();
  __t5838t=1.0;
  __t5843t=2.0;
  __t5844t=3.0;
  float____buffer__t5841t(&__t5845t__unsafe_ptr,&__t5845t__unsafe_size,&__t5845t__unsafe_offset,&__t5845t__unsafe_align);
  __t5846t=3;
  __t_errcode=alloc__t532t(&__t5845t__unsafe_ptr,&__t5845t__unsafe_size,&__t5845t__unsafe_offset,&__t5845t__unsafe_align,__t5846t,&__t5847t__unsafe_ptr,&__t5847t__unsafe_size,&__t5847t__unsafe_offset,&__t5847t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5845t__unsafe_ptr,&__t5838t,8);
  memcpy(__t5845t__unsafe_ptr+8,&__t5843t,8);
  memcpy(__t5845t__unsafe_ptr+16,&__t5844t,8);
  __t_errcode=vec__t1915t(&__t5845t__unsafe_ptr,&__t5845t__unsafe_size,&__t5845t__unsafe_offset,&__t5845t__unsafe_align,&__t5849t__unsafe_ptr,&__t5849t__pos,&__t5849t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5849t__unsafe_ptr;
  p0__pos=__t5849t__pos;
  p0__length=__t5849t__length;
  __t5850t=0.9;
  ppr__t5640t(__t5850t,&__t5851t__alpha,&__t5851t__max_iters,&__t5851t__tol);
  __t_errcode=filter__t5698t(__t5851t__alpha,__t5851t__max_iters,__t5851t__tol,m__t5833t,m__t5834t,m__t5835t,m__t5836t,p0__unsafe_ptr,p0__pos,p0__length,&__t5852t__p__unsafe_ptr,&__t5852t__p__pos,&__t5852t__p__length,&__t5852t__err,&__t5852t__iter);
  if(__t_errcode){
  goto __t_failure;
  }
  result__p__unsafe_ptr=__t5852t__p__unsafe_ptr;
  result__p__pos=__t5852t__p__pos;
  result__p__length=__t5852t__p__length;
  result__err=__t5852t__err;
  result__iter=__t5852t__iter;
  nn__t373t(__t5853t,&__t5854t__value,&__t5854t____t374t);
  print__t378t(__t5854t__value,__t5854t____t374t);
  print__t393t(result__iter);
  __t_errcode=print__t4821t(result__p__unsafe_ptr,result__p__pos,result__p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5847t__unsafe_ptr,&__t5848t____t534t__);
  if(__t5848t____t534t__){
  free__t503t(&__t5847t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5795t();return 0;}