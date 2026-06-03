#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
const char* const __t2288t=" ]";
const char* const __t2271t="[ ";
const char* const __t370t="";
const char* const __t2285t="  ";
static const char* __t_all_errcodes[50] = {"noerr",
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
"inner dimensions must agree",
"index out of bounds",
"circular buffer has the wrong size"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void new__t675t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void nat__nat__float____buffer__t3108t(char** __t3138t, uint64_t* __t3139t, uint16_t* __t3140t, uint16_t* __t3141t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=24;
  *__t3138t=unsafe_ptr;
  *__t3139t=unsafe_size;
  *__t3140t=unsafe_offset;
  *__t3141t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t443t(char* x, char* __t3142t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t3142t=z;
}

static inline __attribute__((always_inline)) void free__t509t(char** __t3143t) {
  char* allocated=*__t3143t;
  if(allocated){
  free(allocated);
  }
  *__t3143t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t3144t) {
  int value=0;
  *__t3144t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t3145t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t3145t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t3146t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t3146t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t3147t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t3147t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t3148t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t3148t=z;
}

static inline __attribute__((always_inline)) void nat__t513t(uint16_t x, uint64_t* __t3149t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t3149t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t3150t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3150t=z;
}

static inline __attribute__((always_inline)) void zero__t510t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t3151t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t3151t=z;
}

static inline __attribute__((always_inline)) int alloc__t502t(uint64_t bytes, char** __t3152t) {
  char* allocated=0;
  char __t503t__=0;
  char __t504t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t443t(allocated,&__t503t__);
  not__t28t(__t503t__,&__t504t__);
  if(__t504t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3152t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t538t(char** __t3153t, uint64_t* __t3154t, uint16_t* __t3155t, uint16_t* __t3156t, uint64_t size, char** __t3157t, uint64_t* __t3158t, uint16_t* __t3159t, uint16_t* __t3160t) {
  char* buffer__unsafe_ptr=*__t3153t;
  uint64_t buffer__unsafe_size=*__t3154t;
  uint16_t buffer__unsafe_offset=*__t3155t;
  uint16_t buffer__unsafe_align=*__t3156t;
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
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t513t(buffer__unsafe_align,&__t551t__);
  mul__t199t(__t551t__,size,&__t552t__);
  bytes=__t552t__;
  __t553t=0;
  eq__t120t(bytes,__t553t,&__t554t__);
  if(__t554t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t502t(bytes,&__t555t__);
  if(__t_errcode){
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
  *__t3153t=buffer__unsafe_ptr;
  *__t3154t=buffer__unsafe_size;
  *__t3155t=buffer__unsafe_offset;
  *__t3156t=buffer__unsafe_align;
  *__t3157t=buffer__unsafe_ptr;
  *__t3158t=buffer__unsafe_size;
  *__t3159t=buffer__unsafe_offset;
  *__t3160t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t649t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t3161t) {
  goto __t_return;
  __t_return:
  *__t3161t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) void spmat__t1586t(char* unsafe_ptr, uint64_t rows, uint64_t cols, uint64_t nnz, char** __t3162t, uint64_t* __t3163t, uint64_t* __t3164t, uint64_t* __t3165t) {
  char* __t1588t__unsafe_ptr=0;
  uint64_t __t1588t__rows=0;
  uint64_t __t1588t__cols=0;
  uint64_t __t1588t__nnz=0;
  __t1588t__unsafe_ptr=unsafe_ptr;
  __t1588t__rows=rows;
  __t1588t__cols=cols;
  __t1588t__nnz=nnz;
  goto __t_return;
  __t_return:
  *__t3162t=__t1588t__unsafe_ptr;
  *__t3163t=__t1588t__rows;
  *__t3164t=__t1588t__cols;
  *__t3165t=__t1588t__nnz;
}

static inline __attribute__((always_inline)) void spmat__t2791t(char* elements__unsafe_ptr, uint64_t elements__unsafe_size, uint16_t elements__unsafe_offset, uint16_t elements__unsafe_align, uint64_t rows, uint64_t cols, char** __t3166t, uint64_t* __t3167t, uint64_t* __t3168t, uint64_t* __t3169t) {
  uint64_t __t2792t__=0;
  char* __t2793t__unsafe_ptr=0;
  uint64_t __t2793t__rows=0;
  uint64_t __t2793t__cols=0;
  uint64_t __t2793t__nnz=0;
  len__t649t(elements__unsafe_ptr,elements__unsafe_size,elements__unsafe_offset,elements__unsafe_align,&__t2792t__);
  spmat__t1586t(elements__unsafe_ptr,rows,cols,__t2792t__,&__t2793t__unsafe_ptr,&__t2793t__rows,&__t2793t__cols,&__t2793t__nnz);
  goto __t_return;
  __t_return:
  *__t3166t=__t2793t__unsafe_ptr;
  *__t3167t=__t2793t__rows;
  *__t3168t=__t2793t__cols;
  *__t3169t=__t2793t__nnz;
}

static inline __attribute__((always_inline)) void float____buffer__t3123t(char** __t3170t, uint64_t* __t3171t, uint16_t* __t3172t, uint16_t* __t3173t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t3170t=unsafe_ptr;
  *__t3171t=unsafe_size;
  *__t3172t=unsafe_offset;
  *__t3173t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1579t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t3174t, uint64_t* __t3175t, uint64_t* __t3176t) {
  char* __t1581t__unsafe_ptr=0;
  uint64_t __t1581t__pos=0;
  uint64_t __t1581t__length=0;
  __t1581t__unsafe_ptr=unsafe_ptr;
  __t1581t__pos=pos;
  __t1581t__length=length;
  goto __t_return;
  __t_return:
  *__t3174t=__t1581t__unsafe_ptr;
  *__t3175t=__t1581t__pos;
  *__t3176t=__t1581t__length;
}

static inline __attribute__((always_inline)) int vec__t1628t(char** __t3177t, uint64_t* __t3178t, uint16_t* __t3179t, uint16_t* __t3180t, char** __t3181t, uint64_t* __t3182t, uint64_t* __t3183t) {
  char* buf__unsafe_ptr=*__t3177t;
  uint64_t buf__unsafe_size=*__t3178t;
  uint16_t buf__unsafe_offset=*__t3179t;
  uint16_t buf__unsafe_align=*__t3180t;
  uint64_t __t1629t__=0;
  uint64_t __t1630t=0;
  char __t1631t__=0;
  uint64_t __t1632t__=0;
  uint64_t __t1633t=0;
  char __t1634t__=0;
  uint64_t __t1635t=0;
  uint64_t __t1636t__=0;
  char* __t1637t__unsafe_ptr=0;
  uint64_t __t1637t__pos=0;
  uint64_t __t1637t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(buf__unsafe_align,&__t1629t__);
  __t1630t=8;
  neq__t144t(__t1629t__,__t1630t,&__t1631t__);
  if(__t1631t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t513t(buf__unsafe_offset,&__t1632t__);
  __t1633t=0;
  neq__t144t(__t1632t__,__t1633t,&__t1634t__);
  if(__t1634t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1635t=0;
  len__t649t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1636t__);
  vec__t1579t(buf__unsafe_ptr,__t1635t,__t1636t__,&__t1637t__unsafe_ptr,&__t1637t__pos,&__t1637t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3177t=buf__unsafe_ptr;
  *__t3178t=buf__unsafe_size;
  *__t3179t=buf__unsafe_offset;
  *__t3180t=buf__unsafe_align;
  *__t3181t=__t1637t__unsafe_ptr;
  *__t3182t=__t1637t__pos;
  *__t3183t=__t1637t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t3076t(char** __t3184t, uint64_t* __t3185t, uint16_t* __t3186t, uint16_t* __t3187t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t3184t=unsafe_ptr;
  *__t3185t=unsafe_size;
  *__t3186t=unsafe_offset;
  *__t3187t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t1720t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t3188t) {
  goto __t_return;
  __t_return:
  *__t3188t=v__length;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t3189t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t3189t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t3190t) {
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
  *__t3190t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t3191t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3191t=z;
}

static inline __attribute__((always_inline)) void circular__t682t(char* buf__unsafe_ptr, uint64_t buf__unsafe_size, uint16_t buf__unsafe_offset, uint16_t buf__unsafe_align, uint64_t* __t3192t, uint64_t length, char** __t3193t, uint64_t* __t3194t, uint16_t* __t3195t, uint16_t* __t3196t, uint64_t* __t3197t, uint64_t* __t3198t) {
  uint64_t pos=*__t3192t;
  goto __t_return;
  __t_return:
  *__t3192t=pos;
  *__t3193t=buf__unsafe_ptr;
  *__t3194t=buf__unsafe_size;
  *__t3195t=buf__unsafe_offset;
  *__t3196t=buf__unsafe_align;
  *__t3197t=pos;
  *__t3198t=length;
}

static inline __attribute__((always_inline)) int circular__t1601t(char** __t3199t, uint64_t* __t3200t, uint16_t* __t3201t, uint16_t* __t3202t, char** __t3203t, uint64_t* __t3204t, uint16_t* __t3205t, uint16_t* __t3206t, uint64_t* __t3207t, uint64_t* __t3208t) {
  char* buf__unsafe_ptr=*__t3199t;
  uint64_t buf__unsafe_size=*__t3200t;
  uint16_t buf__unsafe_offset=*__t3201t;
  uint16_t buf__unsafe_align=*__t3202t;
  int __t1602t=0;
  int __t1603t=0;
  uint64_t __t1604t=0;
  uint64_t __t1605t=0;
  uint64_t pos=0;
  int __t1606t=0;
  uint64_t __t1607t__=0;
  uint64_t __t1608t__=0;
  uint64_t length=0;
  uint64_t start=0;
  uint64_t __t1609t__=0;
  char* __t1610t__buf__unsafe_ptr=0;
  uint64_t __t1610t__buf__unsafe_size=0;
  uint16_t __t1610t__buf__unsafe_offset=0;
  uint16_t __t1610t__buf__unsafe_align=0;
  uint64_t __t1610t__pos=0;
  uint64_t __t1610t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1604t=0;
  __t1605t=__t1604t;
  pos=__t1605t;
  len__t649t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1607t__);
  __t_errcode=sub__t352t(__t1607t__,pos,&__t1608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  length=__t1608t__;
  start=pos;
  add__t175t(pos,length,&__t1609t__);
  pos=__t1609t__;
  circular__t682t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&start,length,&__t1610t__buf__unsafe_ptr,&__t1610t__buf__unsafe_size,&__t1610t__buf__unsafe_offset,&__t1610t__buf__unsafe_align,&__t1610t__pos,&__t1610t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3199t=buf__unsafe_ptr;
  *__t3200t=buf__unsafe_size;
  *__t3201t=buf__unsafe_offset;
  *__t3202t=buf__unsafe_align;
  *__t3203t=__t1610t__buf__unsafe_ptr;
  *__t3204t=__t1610t__buf__unsafe_size;
  *__t3205t=__t1610t__buf__unsafe_offset;
  *__t3206t=__t1610t__buf__unsafe_align;
  *__t3207t=__t1610t__pos;
  *__t3208t=__t1610t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t3209t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t3209t=z;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t3210t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t3210t=z;
}

static inline __attribute__((always_inline)) int vec__t1697t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3211t, uint64_t FLOATS__length, uint64_t length, char** __t3212t, uint64_t* __t3213t, uint64_t* __t3214t) {
  uint64_t FLOATS__pos=*__t3211t;
  uint64_t __t1698t__=0;
  uint64_t __t1699t=0;
  char __t1700t__=0;
  uint64_t __t1701t__=0;
  uint64_t __t1702t=0;
  char __t1703t__=0;
  uint64_t __t1704t__=0;
  char __t1705t__=0;
  uint64_t __t1706t=0;
  uint64_t start=0;
  uint64_t __t1707t__=0;
  char __t1708t__=0;
  uint64_t __t1709t=0;
  uint64_t __t1710t__=0;
  uint64_t __t1711t=0;
  int __t1712t=0;
  uint64_t __t1713t=0;
  uint64_t __t1714t__=0;
  uint64_t __t1715t=0;
  uint64_t __t1716t__=0;
  uint64_t __t1717t__=0;
  char* __t1719t__unsafe_ptr=0;
  uint64_t __t1719t__pos=0;
  uint64_t __t1719t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(FLOATS__buf__unsafe_align,&__t1698t__);
  __t1699t=8;
  neq__t144t(__t1698t__,__t1699t,&__t1700t__);
  if(__t1700t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t513t(FLOATS__buf__unsafe_offset,&__t1701t__);
  __t1702t=0;
  neq__t144t(__t1701t__,__t1702t,&__t1703t__);
  if(__t1703t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t649t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1704t__);
  gt__t276t(length,__t1704t__,&__t1705t__);
  if(__t1705t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1706t=FLOATS__pos;
  start=__t1706t;
  add__t175t(FLOATS__pos,length,&__t1707t__);
  FLOATS__pos=__t1707t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1708t__);
  if(__t1708t__){
  __t1709t=0;
  add__t175t(length,__t1709t,&__t1710t__);
  FLOATS__pos=__t1710t__;
  __t1711t=0;
  start=__t1711t;
  }
  __t1713t=8;
  mul__t199t(__t1713t,start,&__t1714t__);
  __t1715t=8;
  add__t175t(start,length,&__t1716t__);
  mul__t199t(__t1715t,__t1716t__,&__t1717t__);
  zero__t510t(FLOATS__buf__unsafe_ptr,__t1714t__,__t1717t__);
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1719t__unsafe_ptr,&__t1719t__pos,&__t1719t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3211t=FLOATS__pos;
  *__t3212t=__t1719t__unsafe_ptr;
  *__t3213t=__t1719t__pos;
  *__t3214t=__t1719t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t to, uint64_t* __t3215t, uint64_t* __t3216t) {
  int __t469t=0;
  uint64_t __t470t=0;
  uint64_t _from=0;
  uint64_t __t471t=0;
  uint64_t from=0;
  __t470t=0;
  _from=__t470t;
  __t471t=_from;
  from=__t471t;
  goto __t_return;
  __t_return:
  *__t3215t=from;
  *__t3216t=to;
}

static inline __attribute__((always_inline)) int get__t484t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t3217t) {
  char __t485t__=0;
  char __t486t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t485t__);
  if(__t485t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t486t__);
  if(__t486t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3217t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t3218t) {
  *__t3218t=to;
}

static inline __attribute__((always_inline)) void add__t511t(char* allocated, uint64_t offset, char** __t3219t) {
  char* element=0;
  char* __t512t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t512t__);
  goto __t_return;
  __t_return:
  *__t3219t=__t512t__;
}

static inline __attribute__((always_inline)) int mutget__t1721t(char** __t3220t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t3221t) {
  char* v__unsafe_ptr=*__t3220t;
  char __t1722t__=0;
  uint64_t __t1723t=0;
  uint64_t __t1724t__=0;
  uint64_t __t1725t__=0;
  char* __t1726t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1722t__);
  if(__t1722t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1723t=8;
  add__t175t(i,v__pos,&__t1724t__);
  mul__t199t(__t1723t,__t1724t__,&__t1725t__);
  add__t511t(v__unsafe_ptr,__t1725t__,&__t1726t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3220t=v__unsafe_ptr;
  *__t3221t=__t1726t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1727t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t3222t) {
  char __t1728t__=0;
  uint64_t __t1729t=0;
  uint64_t __t1730t__=0;
  uint64_t __t1731t__=0;
  char* __t1732t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1728t__);
  if(__t1728t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1729t=8;
  add__t175t(i,v__pos,&__t1730t__);
  mul__t199t(__t1729t,__t1730t__,&__t1731t__);
  add__t511t(v__unsafe_ptr,__t1731t__,&__t1732t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3222t=__t1732t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int copy__t2327t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3223t, uint64_t FLOATS__length, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t3224t, uint64_t* __t3225t, uint64_t* __t3226t) {
  uint64_t FLOATS__pos=*__t3223t;
  char* __t2328t__unsafe_ptr=0;
  uint64_t __t2328t__pos=0;
  uint64_t __t2328t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2329t=0;
  uint64_t __t2330t__from=0;
  uint64_t __t2330t__to=0;
  char __t2331t=0;
  uint64_t __t2332t__=0;
  uint64_t i=0;
  char* __t2333t__=0;
  char* __t2334t__=0;
  double __t2335t__z=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1697t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v__length,&__t2328t__unsafe_ptr,&__t2328t__pos,&__t2328t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2328t__unsafe_ptr;
  result__pos=__t2328t__pos;
  result__length=__t2328t__length;
  range__t468t(v__length,&__t2330t__from,&__t2330t__to);
  __t2329t=0;
  while(1){
  __t_complain=get__t484t(__t2330t__from,__t2330t__to,__t2329t,&__t2332t__);
  __t2331t=__t_complain;
  i=__t2332t__;
  __t2331t=__t2331t==0;
  __t2329t=__t2329t+1;
  if(!__t2331t){
  break;
  }
  __t_errcode=mutget__t1721t(&result__unsafe_ptr,result__pos,result__length,i,&__t2333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1727t(v__unsafe_ptr,v__pos,v__length,i,&__t2334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2334t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2335t__z,__t2334t__,8);
  if(!__t2333t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2333t__,&__t2335t__z,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3223t=FLOATS__pos;
  *__t3224t=result__unsafe_ptr;
  *__t3225t=result__pos;
  *__t3226t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int next__t477t(uint64_t* __t3227t, uint64_t r__to, uint64_t* __t3228t) {
  uint64_t r__from=*__t3227t;
  char __t478t__=0;
  uint64_t ret=0;
  uint64_t __t479t=0;
  uint64_t __t480t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t478t__);
  if(__t478t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t479t=1;
  add__t175t(ret,__t479t,&__t480t__);
  r__from=__t480t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3227t=r__from;
  *__t3228t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2794t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, uint64_t k, char** __t3229t) {
  char __t2795t__=0;
  uint64_t __t2796t=0;
  uint64_t __t2797t__=0;
  char* __t2798t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(k,m__nnz,&__t2795t__);
  if(__t2795t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t2796t=24;
  mul__t199t(k,__t2796t,&__t2797t__);
  add__t511t(m__unsafe_ptr,__t2797t__,&__t2798t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3229t=__t2798t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t3230t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t3230t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t3231t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t3231t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t3232t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t3232t=z;
}

static inline __attribute__((always_inline)) int mul__t2819t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3233t, uint64_t FLOATS__length, char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t3234t, uint64_t* __t3235t, uint64_t* __t3236t) {
  uint64_t FLOATS__pos=*__t3233t;
  char __t2820t__=0;
  char* __t2821t__unsafe_ptr=0;
  uint64_t __t2821t__pos=0;
  uint64_t __t2821t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t2822t__from=0;
  uint64_t __t2822t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t2823t=0;
  uint64_t __t2824t__=0;
  uint64_t k=0;
  char* __t2825t__=0;
  uint64_t __t2826t__row=0;
  uint64_t __t2826t__col=0;
  double __t2826t__value=0;
  uint64_t e__row=0;
  uint64_t e__col=0;
  double e__value=0;
  char* __t2827t__=0;
  char* __t2828t__=0;
  double __t2829t__z=0;
  char* __t2830t__=0;
  double __t2831t__z=0;
  double __t2832t__=0;
  double __t2833t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t2820t__);
  if(__t2820t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=vec__t1697t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,m__rows,&__t2821t__unsafe_ptr,&__t2821t__pos,&__t2821t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t2821t__unsafe_ptr;
  result__pos=__t2821t__pos;
  result__length=__t2821t__length;
  range__t468t(m__nnz,&__t2822t__from,&__t2822t__to);
  it_k__from=__t2822t__from;
  it_k__to=__t2822t__to;
  while(1){
  __t_complain=next__t477t(&it_k__from,it_k__to,&__t2824t__);
  __t2823t=__t_complain;
  k=__t2824t__;
  __t2823t=__t2823t==0;
  if(!__t2823t){
  break;
  }
  __t_errcode=get__t2794t(m__unsafe_ptr,m__rows,m__cols,m__nnz,k,&__t2825t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2825t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2826t__row,__t2825t__,8);
  memcpy(&__t2826t__col,__t2825t__+8,8);
  memcpy(&__t2826t__value,__t2825t__+16,8);
  e__row=__t2826t__row;
  e__col=__t2826t__col;
  e__value=__t2826t__value;
  __t_errcode=mutget__t1721t(&result__unsafe_ptr,result__pos,result__length,e__row,&__t2827t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1727t(result__unsafe_ptr,result__pos,result__length,e__row,&__t2828t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2828t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2829t__z,__t2828t__,8);
  __t_errcode=get__t1727t(v__unsafe_ptr,v__pos,v__length,e__col,&__t2830t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2830t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2831t__z,__t2830t__,8);
  mul__t177t(e__value,__t2831t__z,&__t2832t__);
  add__t153t(__t2829t__z,__t2832t__,&__t2833t__);
  if(!__t2827t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2827t__,&__t2833t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3233t=FLOATS__pos;
  *__t3234t=result__unsafe_ptr;
  *__t3235t=result__pos;
  *__t3236t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int vec__t1680t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3237t, uint64_t FLOATS__length, uint64_t length, char** __t3238t, uint64_t* __t3239t, uint64_t* __t3240t) {
  uint64_t FLOATS__pos=*__t3237t;
  uint64_t __t1681t__=0;
  uint64_t __t1682t=0;
  char __t1683t__=0;
  uint64_t __t1684t__=0;
  uint64_t __t1685t=0;
  char __t1686t__=0;
  uint64_t __t1687t__=0;
  char __t1688t__=0;
  uint64_t __t1689t=0;
  uint64_t start=0;
  uint64_t __t1690t__=0;
  char __t1691t__=0;
  uint64_t __t1692t=0;
  uint64_t __t1693t__=0;
  uint64_t __t1694t=0;
  int __t1695t=0;
  char* __t1696t__unsafe_ptr=0;
  uint64_t __t1696t__pos=0;
  uint64_t __t1696t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t513t(FLOATS__buf__unsafe_align,&__t1681t__);
  __t1682t=8;
  neq__t144t(__t1681t__,__t1682t,&__t1683t__);
  if(__t1683t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t513t(FLOATS__buf__unsafe_offset,&__t1684t__);
  __t1685t=0;
  neq__t144t(__t1684t__,__t1685t,&__t1686t__);
  if(__t1686t__){
  __t_errcode=36;
  goto __t_failure;
  }
  len__t649t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&__t1687t__);
  gt__t276t(length,__t1687t__,&__t1688t__);
  if(__t1688t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t1689t=FLOATS__pos;
  start=__t1689t;
  add__t175t(FLOATS__pos,length,&__t1690t__);
  FLOATS__pos=__t1690t__;
  ge__t324t(FLOATS__pos,FLOATS__length,&__t1691t__);
  if(__t1691t__){
  __t1692t=0;
  add__t175t(length,__t1692t,&__t1693t__);
  FLOATS__pos=__t1693t__;
  __t1694t=0;
  start=__t1694t;
  }
  vec__t1579t(FLOATS__buf__unsafe_ptr,start,length,&__t1696t__unsafe_ptr,&__t1696t__pos,&__t1696t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3237t=FLOATS__pos;
  *__t3238t=__t1696t__unsafe_ptr;
  *__t3239t=__t1696t__pos;
  *__t3240t=__t1696t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t1733t(double number, uint64_t i, double* __t3241t) {
  goto __t_return;
  __t_return:
  *__t3241t=number;
}

int mul__t2011t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3242t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t3243t, uint64_t* __t3244t, uint64_t* __t3245t) {
  uint64_t FLOATS__pos=*__t3242t;
  int __t2012t=0;
  char* __t2014t__unsafe_ptr=0;
  uint64_t __t2014t__pos=0;
  uint64_t __t2014t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2015t=0;
  uint64_t __t2016t__from=0;
  uint64_t __t2016t__to=0;
  char __t2017t=0;
  uint64_t __t2018t__=0;
  uint64_t i=0;
  char* __t2019t__=0;
  char* __t2020t__=0;
  double __t2021t__z=0;
  double __t2022t__=0;
  double __t2023t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t1680t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t2014t__unsafe_ptr,&__t2014t__pos,&__t2014t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2014t__unsafe_ptr;
  v__pos=__t2014t__pos;
  v__length=__t2014t__length;
  range__t468t(v__length,&__t2016t__from,&__t2016t__to);
  __t2015t=0;
  while(1){
  __t_complain=get__t484t(__t2016t__from,__t2016t__to,__t2015t,&__t2018t__);
  __t2017t=__t_complain;
  i=__t2018t__;
  __t2017t=__t2017t==0;
  __t2015t=__t2015t+1;
  if(!__t2017t){
  break;
  }
  __t_errcode=mutget__t1721t(&v__unsafe_ptr,v__pos,v__length,i,&__t2019t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1727t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t2020t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2020t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2021t__z,__t2020t__,8);
  at__t1733t(v2,i,&__t2022t__);
  mul__t177t(__t2021t__z,__t2022t__,&__t2023t__);
  if(!__t2019t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2019t__,&__t2023t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3242t=FLOATS__pos;
  *__t3243t=v__unsafe_ptr;
  *__t3244t=v__pos;
  *__t3245t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t2029t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3246t, uint64_t FLOATS__length, double v1, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t3247t, uint64_t* __t3248t, uint64_t* __t3249t) {
  uint64_t FLOATS__pos=*__t3246t;
  char* __t2030t__unsafe_ptr=0;
  uint64_t __t2030t__pos=0;
  uint64_t __t2030t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mul__t2011t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v2__unsafe_ptr,v2__pos,v2__length,v1,&__t2030t__unsafe_ptr,&__t2030t__pos,&__t2030t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3246t=FLOATS__pos;
  *__t3247t=__t2030t__unsafe_ptr;
  *__t3248t=__t2030t__pos;
  *__t3249t=__t2030t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1734t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t3250t) {
  char* __t1735t__=0;
  double __t1736t__z=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t1727t(v__unsafe_ptr,v__pos,v__length,i,&__t1735t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1735t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1736t__z,__t1735t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3250t=__t1736t__z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int add__t1793t(char* FLOATS__buf__unsafe_ptr, uint64_t FLOATS__buf__unsafe_size, uint16_t FLOATS__buf__unsafe_offset, uint16_t FLOATS__buf__unsafe_align, uint64_t* __t3251t, uint64_t FLOATS__length, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t3252t, uint64_t* __t3253t, uint64_t* __t3254t) {
  uint64_t FLOATS__pos=*__t3251t;
  int __t1794t=0;
  char __t1795t__=0;
  char* __t1797t__unsafe_ptr=0;
  uint64_t __t1797t__pos=0;
  uint64_t __t1797t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* p1=0;
  uint64_t __t1798t=0;
  uint64_t __t1799t__from=0;
  uint64_t __t1799t__to=0;
  char __t1800t=0;
  uint64_t __t1801t__=0;
  uint64_t i=0;
  char* __t1802t__=0;
  char* __t1803t__=0;
  double __t1804t__z=0;
  double __t1805t__=0;
  double __t1806t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t1795t__);
  if(__t1795t__){
  __t_errcode=38;
  goto __t_failure;
  }
  __t_errcode=vec__t1680t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,v1__length,&__t1797t__unsafe_ptr,&__t1797t__pos,&__t1797t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t1797t__unsafe_ptr;
  v__pos=__t1797t__pos;
  v__length=__t1797t__length;
  p1=v1__unsafe_ptr;
  range__t468t(v1__length,&__t1799t__from,&__t1799t__to);
  __t1798t=0;
  while(1){
  __t_complain=get__t484t(__t1799t__from,__t1799t__to,__t1798t,&__t1801t__);
  __t1800t=__t_complain;
  i=__t1801t__;
  __t1800t=__t1800t==0;
  __t1798t=__t1798t+1;
  if(!__t1800t){
  break;
  }
  __t_errcode=mutget__t1721t(&v__unsafe_ptr,v__pos,v__length,i,&__t1802t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=get__t1727t(v1__unsafe_ptr,v1__pos,v1__length,i,&__t1803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t1803t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t1804t__z,__t1803t__,8);
  __t_errcode=at__t1734t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t1805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(__t1804t__z,__t1805t__,&__t1806t__);
  if(!__t1802t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t1802t__,&__t1806t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t3251t=FLOATS__pos;
  *__t3252t=v__unsafe_ptr;
  *__t3253t=v__pos;
  *__t3254t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int diffuse__t3075t(char* m__unsafe_ptr, uint64_t m__rows, uint64_t m__cols, uint64_t m__nnz, char* p0__unsafe_ptr, uint64_t p0__pos, uint64_t p0__length, char** __t3255t, uint64_t* __t3256t, uint64_t* __t3257t) {
  char* __t3078t__unsafe_ptr=0;
  uint64_t __t3078t__unsafe_size=0;
  uint16_t __t3078t__unsafe_offset=0;
  uint16_t __t3078t__unsafe_align=0;
  uint64_t __t3079t=0;
  uint64_t __t3080t__=0;
  uint64_t __t3081t__=0;
  char* __t3082t__unsafe_ptr=0;
  uint64_t __t3082t__unsafe_size=0;
  uint16_t __t3082t__unsafe_offset=0;
  uint16_t __t3082t__unsafe_align=0;
  char __t3083t____t540t__=0;
  char* __t3084t__buf__unsafe_ptr=0;
  uint64_t __t3084t__buf__unsafe_size=0;
  uint16_t __t3084t__buf__unsafe_offset=0;
  uint16_t __t3084t__buf__unsafe_align=0;
  uint64_t __t3084t__pos=0;
  uint64_t __t3084t__length=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  uint64_t FLOATS__length=0;
  char* __t3085t__unsafe_ptr=0;
  uint64_t __t3085t__pos=0;
  uint64_t __t3085t__length=0;
  char* __t3086t__unsafe_ptr=0;
  uint64_t __t3086t__pos=0;
  uint64_t __t3086t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  uint64_t __t3087t=0;
  uint64_t __t3088t=0;
  uint64_t __t3089t__from=0;
  uint64_t __t3089t__to=0;
  char __t3090t=0;
  uint64_t __t3091t__=0;
  uint64_t _=0;
  char* __t3092t__unsafe_ptr=0;
  uint64_t __t3092t__pos=0;
  uint64_t __t3092t__length=0;
  double __t3093t=0;
  char* __t3094t__unsafe_ptr=0;
  uint64_t __t3094t__pos=0;
  uint64_t __t3094t__length=0;
  double __t3095t=0;
  char* __t3096t__unsafe_ptr=0;
  uint64_t __t3096t__pos=0;
  uint64_t __t3096t__length=0;
  char* __t3097t__unsafe_ptr=0;
  uint64_t __t3097t__pos=0;
  uint64_t __t3097t__length=0;
  uint64_t __t3098t=0;
  char __t3099t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t3076t(&__t3078t__unsafe_ptr,&__t3078t__unsafe_size,&__t3078t__unsafe_offset,&__t3078t__unsafe_align);
  __t3079t=4;
  len__t1720t(p0__unsafe_ptr,p0__pos,p0__length,&__t3080t__);
  mul__t199t(__t3079t,__t3080t__,&__t3081t__);
  __t_errcode=alloc__t538t(&__t3078t__unsafe_ptr,&__t3078t__unsafe_size,&__t3078t__unsafe_offset,&__t3078t__unsafe_align,__t3081t__,&__t3082t__unsafe_ptr,&__t3082t__unsafe_size,&__t3082t__unsafe_offset,&__t3082t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=circular__t1601t(&__t3082t__unsafe_ptr,&__t3082t__unsafe_size,&__t3082t__unsafe_offset,&__t3082t__unsafe_align,&__t3084t__buf__unsafe_ptr,&__t3084t__buf__unsafe_size,&__t3084t__buf__unsafe_offset,&__t3084t__buf__unsafe_align,&__t3084t__pos,&__t3084t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  FLOATS__buf__unsafe_ptr=__t3084t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t3084t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t3084t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t3084t__buf__unsafe_align;
  FLOATS__pos=__t3084t__pos;
  FLOATS__length=__t3084t__length;
  __t_errcode=copy__t2327t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,p0__unsafe_ptr,p0__pos,p0__length,&__t3085t__unsafe_ptr,&__t3085t__pos,&__t3085t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3086t__unsafe_ptr=__t3085t__unsafe_ptr;
  __t3086t__pos=__t3085t__pos;
  __t3086t__length=__t3085t__length;
  p__unsafe_ptr=__t3086t__unsafe_ptr;
  p__pos=__t3086t__pos;
  p__length=__t3086t__length;
  __t3088t=10;
  range__t468t(__t3088t,&__t3089t__from,&__t3089t__to);
  __t3087t=0;
  while(1){
  __t_complain=get__t484t(__t3089t__from,__t3089t__to,__t3087t,&__t3091t__);
  __t3090t=__t_complain;
  _=__t3091t__;
  __t3090t=__t3090t==0;
  __t3087t=__t3087t+1;
  if(!__t3090t){
  break;
  }
  __t_errcode=mul__t2819t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,m__unsafe_ptr,m__rows,m__cols,m__nnz,p__unsafe_ptr,p__pos,p__length,&__t3092t__unsafe_ptr,&__t3092t__pos,&__t3092t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3093t=0.9;
  __t_errcode=mul__t2011t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,__t3092t__unsafe_ptr,__t3092t__pos,__t3092t__length,__t3093t,&__t3094t__unsafe_ptr,&__t3094t__pos,&__t3094t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t3095t=0.1;
  __t_errcode=mul__t2029t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,__t3095t,p0__unsafe_ptr,p0__pos,p0__length,&__t3096t__unsafe_ptr,&__t3096t__pos,&__t3096t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=add__t1793t(FLOATS__buf__unsafe_ptr,FLOATS__buf__unsafe_size,FLOATS__buf__unsafe_offset,FLOATS__buf__unsafe_align,&FLOATS__pos,FLOATS__length,__t3094t__unsafe_ptr,__t3094t__pos,__t3094t__length,__t3096t__unsafe_ptr,__t3096t__pos,__t3096t__length,&__t3097t__unsafe_ptr,&__t3097t__pos,&__t3097t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t3097t__unsafe_ptr;
  p__pos=__t3097t__pos;
  p__length=__t3097t__length;
  __t3098t=0;
  neq__t144t(p__pos,__t3098t,&__t3099t__);
  if(__t3099t__){
  __t_errcode=49;
  goto __t_failure;
  }
  }
  goto __t_return;
  
  __t_failure:exists__t443t(p__unsafe_ptr,&__t3083t____t540t__);
  if(__t3083t____t540t__){
  free__t509t(&p__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t3255t=p__unsafe_ptr;
  *__t3256t=p__pos;
  *__t3257t=p__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(char value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t378t;
  if(value){
  printf("%s%s","true",endl);
  }
  else{
  printf("%s%s","false",endl);
  }
}

static inline __attribute__((always_inline)) void nn__t369t(const char* value, const char** __t3258t, const char** __t3259t) {
  goto __t_return;
  __t_return:
  *__t3258t=value;
  *__t3259t=__t370t;
}

static inline __attribute__((always_inline)) void print__t374t(const char* value, const char* endl) {
  int __t375t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void nn__t371t(double value, double* __t3260t, const char** __t3261t) {
  goto __t_return;
  __t_return:
  *__t3260t=value;
  *__t3261t=__t370t;
}

static inline __attribute__((always_inline)) void print__t379t(double value, const char* endl) {
  int __t380t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int print__t2290t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t2291t=0;
  const char* endl=0;
  const char* __t2292t__value=0;
  const char* __t2292t____t370t=0;
  uint64_t __t2294t=0;
  uint64_t __t2295t__from=0;
  uint64_t __t2295t__to=0;
  char __t2296t=0;
  uint64_t __t2297t__=0;
  uint64_t i=0;
  char* __t2298t__=0;
  double __t2299t__z=0;
  double __t2300t__value=0;
  const char* __t2300t____t370t=0;
  uint64_t __t2302t=0;
  uint64_t __t2303t__=0;
  char __t2304t__=0;
  const char* __t2305t__value=0;
  const char* __t2305t____t370t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t378t;
  nn__t369t(__t2271t,&__t2292t__value,&__t2292t____t370t);
  print__t374t(__t2292t__value,__t2292t____t370t);
  range__t468t(v__length,&__t2295t__from,&__t2295t__to);
  __t2294t=0;
  while(1){
  __t_complain=get__t484t(__t2295t__from,__t2295t__to,__t2294t,&__t2297t__);
  __t2296t=__t_complain;
  i=__t2297t__;
  __t2296t=__t2296t==0;
  __t2294t=__t2294t+1;
  if(!__t2296t){
  break;
  }
  __t_errcode=get__t1727t(v__unsafe_ptr,v__pos,v__length,i,&__t2298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2298t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2299t__z,__t2298t__,8);
  nn__t371t(__t2299t__z,&__t2300t__value,&__t2300t____t370t);
  print__t379t(__t2300t__value,__t2300t____t370t);
  __t2302t=1;
  __t_errcode=sub__t352t(v__length,__t2302t,&__t2303t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t2303t__,&__t2304t__);
  if(__t2304t__){
  nn__t369t(__t2285t,&__t2305t__value,&__t2305t____t370t);
  print__t374t(__t2305t__value,__t2305t____t370t);
  }
  }
  print__t374t(__t2288t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t3100t() {
  uint64_t __t3103t=0;
  uint64_t __t3104t=0;
  double __t3105t=0;
  uint64_t __t3110t=0;
  uint64_t __t3111t=0;
  double __t3112t=0;
  char* __t3113t__unsafe_ptr=0;
  uint64_t __t3113t__unsafe_size=0;
  uint16_t __t3113t__unsafe_offset=0;
  uint16_t __t3113t__unsafe_align=0;
  uint64_t __t3114t=0;
  char* __t3115t__unsafe_ptr=0;
  uint64_t __t3115t__unsafe_size=0;
  uint16_t __t3115t__unsafe_offset=0;
  uint16_t __t3115t__unsafe_align=0;
  char __t3116t____t540t__=0;
  uint64_t __t3117t=0;
  uint64_t __t3118t=0;
  char* __t3119t__unsafe_ptr=0;
  uint64_t __t3119t__rows=0;
  uint64_t __t3119t__cols=0;
  uint64_t __t3119t__nnz=0;
  char* m__unsafe_ptr=0;
  uint64_t m__rows=0;
  uint64_t m__cols=0;
  uint64_t m__nnz=0;
  double __t3120t=0;
  double __t3125t=0;
  double __t3126t=0;
  char* __t3127t__unsafe_ptr=0;
  uint64_t __t3127t__unsafe_size=0;
  uint16_t __t3127t__unsafe_offset=0;
  uint16_t __t3127t__unsafe_align=0;
  uint64_t __t3128t=0;
  char* __t3129t__unsafe_ptr=0;
  uint64_t __t3129t__unsafe_size=0;
  uint16_t __t3129t__unsafe_offset=0;
  uint16_t __t3129t__unsafe_align=0;
  char __t3130t____t540t__=0;
  char* __t3131t__unsafe_ptr=0;
  uint64_t __t3131t__pos=0;
  uint64_t __t3131t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  char __t3132t=0;
  char* __t3133t__unsafe_ptr=0;
  uint64_t __t3133t__pos=0;
  uint64_t __t3133t__length=0;
  char __t3134t____t3083t____t540t__=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  char __t3135t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t675t();
  __t3103t=1;
  __t3104t=1;
  __t3105t=1.0;
  __t3110t=2;
  __t3111t=2;
  __t3112t=2.0;
  nat__nat__float____buffer__t3108t(&__t3113t__unsafe_ptr,&__t3113t__unsafe_size,&__t3113t__unsafe_offset,&__t3113t__unsafe_align);
  __t3114t=2;
  __t_errcode=alloc__t538t(&__t3113t__unsafe_ptr,&__t3113t__unsafe_size,&__t3113t__unsafe_offset,&__t3113t__unsafe_align,__t3114t,&__t3115t__unsafe_ptr,&__t3115t__unsafe_size,&__t3115t__unsafe_offset,&__t3115t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t3113t__unsafe_ptr,&__t3103t,8);
  memcpy(__t3113t__unsafe_ptr+8,&__t3104t,8);
  memcpy(__t3113t__unsafe_ptr+16,&__t3105t,8);
  memcpy(__t3113t__unsafe_ptr+24,&__t3110t,8);
  memcpy(__t3113t__unsafe_ptr+32,&__t3111t,8);
  memcpy(__t3113t__unsafe_ptr+40,&__t3112t,8);
  __t3117t=3;
  __t3118t=3;
  spmat__t2791t(__t3113t__unsafe_ptr,__t3113t__unsafe_size,__t3113t__unsafe_offset,__t3113t__unsafe_align,__t3117t,__t3118t,&__t3119t__unsafe_ptr,&__t3119t__rows,&__t3119t__cols,&__t3119t__nnz);
  m__unsafe_ptr=__t3119t__unsafe_ptr;
  m__rows=__t3119t__rows;
  m__cols=__t3119t__cols;
  m__nnz=__t3119t__nnz;
  __t3120t=1.0;
  __t3125t=2.0;
  __t3126t=3.0;
  float____buffer__t3123t(&__t3127t__unsafe_ptr,&__t3127t__unsafe_size,&__t3127t__unsafe_offset,&__t3127t__unsafe_align);
  __t3128t=3;
  __t_errcode=alloc__t538t(&__t3127t__unsafe_ptr,&__t3127t__unsafe_size,&__t3127t__unsafe_offset,&__t3127t__unsafe_align,__t3128t,&__t3129t__unsafe_ptr,&__t3129t__unsafe_size,&__t3129t__unsafe_offset,&__t3129t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t3127t__unsafe_ptr,&__t3120t,8);
  memcpy(__t3127t__unsafe_ptr+8,&__t3125t,8);
  memcpy(__t3127t__unsafe_ptr+16,&__t3126t,8);
  __t_errcode=vec__t1628t(&__t3127t__unsafe_ptr,&__t3127t__unsafe_size,&__t3127t__unsafe_offset,&__t3127t__unsafe_align,&__t3131t__unsafe_ptr,&__t3131t__pos,&__t3131t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t3131t__unsafe_ptr;
  p0__pos=__t3131t__pos;
  p0__length=__t3131t__length;
  __t_complain=diffuse__t3075t(m__unsafe_ptr,m__rows,m__cols,m__nnz,p0__unsafe_ptr,p0__pos,p0__length,&__t3133t__unsafe_ptr,&__t3133t__pos,&__t3133t__length);
  __t3132t=__t_complain;
  p__unsafe_ptr=__t3133t__unsafe_ptr;
  p__pos=__t3133t__pos;
  p__length=__t3133t__length;
  __t3132t=__t3132t==0;
  exists__t443t(p__unsafe_ptr,&__t3135t__);
  print__t393t(__t3135t__);
  __t_errcode=print__t2290t(p__unsafe_ptr,p__pos,p__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t443t(__t3133t__unsafe_ptr,&__t3134t____t3083t____t540t__);
  if(__t3134t____t3083t____t540t__){
  free__t509t(&__t3133t__unsafe_ptr);
  }
  exists__t443t(__t3129t__unsafe_ptr,&__t3130t____t540t__);
  if(__t3130t____t540t__){
  free__t509t(&__t3129t__unsafe_ptr);
  }
  exists__t443t(__t3115t__unsafe_ptr,&__t3116t____t540t__);
  if(__t3116t____t540t__){
  free__t509t(&__t3115t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t3100t();return 0;}