#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t6150t="u*a";
const char* const __t5558t=" ⎥";
const char* const __t5090t=" ]";
const char* const __t374t="";
const char* const __t5087t="  ";
const char* const __t5507t="⎡ ";
const char* const __t5566t=" ⎦";
const char* const __t5072t="[ ";
const char* const __t5518t="⎢ ";
const char* const __t6133t="a*x";
const char* const __t6172t="a*b";
const char* const __t5547t=" ⎤";
const char* const __t5526t="⎣ ";
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

static inline __attribute__((always_inline)) void new__t806t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void float____buffer__t6104t(char** __t6177t, uint64_t* __t6178t, uint16_t* __t6179t, uint16_t* __t6180t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6177t=unsafe_ptr;
  *__t6178t=unsafe_size;
  *__t6179t=unsafe_offset;
  *__t6180t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t6181t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t6181t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t6182t) {
  char* allocated=*__t6182t;
  if(allocated){
  free(allocated);
  }
  *__t6182t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t6183t) {
  int value=0;
  *__t6183t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t6184t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t6184t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t6185t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t6185t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t6186t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t6186t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t6187t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t6187t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t6188t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t6188t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t6189t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6189t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t6190t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t6190t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t6191t) {
  char* allocated=0;
  char __t655t__=0;
  char __t656t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t591t(allocated,&__t655t__);
  not__t28t(__t655t__,&__t656t__);
  if(__t656t__){
  __t_errcode=10;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6191t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t6192t, uint64_t* __t6193t, uint16_t* __t6194t, uint16_t* __t6195t, uint64_t size, char** __t6196t, uint64_t* __t6197t, uint16_t* __t6198t, uint16_t* __t6199t) {
  char* buffer__unsafe_ptr=*__t6192t;
  uint64_t buffer__unsafe_size=*__t6193t;
  uint16_t buffer__unsafe_offset=*__t6194t;
  uint16_t buffer__unsafe_align=*__t6195t;
  int __t691t=0;
  char __t692t__=0;
  char __t694t__=0;
  uint64_t __t695t=0;
  char __t696t__=0;
  uint64_t __t697t=0;
  uint64_t __t698t__=0;
  uint64_t __t699t__=0;
  uint64_t __t701t=0;
  char __t702t__=0;
  uint64_t __t703t__=0;
  uint64_t __t704t__=0;
  uint64_t bytes=0;
  uint64_t __t705t=0;
  char __t706t__=0;
  char* __t707t__=0;
  int __t708t=0;
  uint64_t __t709t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t694t__);
  if(__t694t__){
  __t695t=0;
  neq__t144t(size,__t695t,&__t696t__);
  if(__t696t__){
  __t697t=0;
  nat__t665t(buffer__unsafe_align,&__t698t__);
  mul__t199t(__t698t__,size,&__t699t__);
  zero__t662t(buffer__unsafe_ptr,__t697t,__t699t__);
  }
  goto __t_return;
  }
  __t701t=0;
  neq__t144t(buffer__unsafe_size,__t701t,&__t702t__);
  if(__t702t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t703t__);
  mul__t199t(__t703t__,size,&__t704t__);
  bytes=__t704t__;
  __t705t=0;
  eq__t120t(bytes,__t705t,&__t706t__);
  if(__t706t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t707t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t709t=0;
  zero__t662t(__t707t__,__t709t,bytes);
  buffer__unsafe_ptr=__t707t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t692t__);
  if(__t692t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6192t=buffer__unsafe_ptr;
  *__t6193t=buffer__unsafe_size;
  *__t6194t=buffer__unsafe_offset;
  *__t6195t=buffer__unsafe_align;
  *__t6196t=buffer__unsafe_ptr;
  *__t6197t=buffer__unsafe_size;
  *__t6198t=buffer__unsafe_offset;
  *__t6199t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t6200t) {
  goto __t_return;
  __t_return:
  *__t6200t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t6201t) {
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
  *__t6201t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t6202t, uint64_t* __t6203t, uint16_t* __t6204t, uint16_t* __t6205t, uint64_t _pos, char** __t6206t, uint64_t* __t6207t, uint16_t* __t6208t, uint16_t* __t6209t, uint64_t* __t6210t) {
  char* buf__unsafe_ptr=*__t6202t;
  uint64_t buf__unsafe_size=*__t6203t;
  uint16_t buf__unsafe_offset=*__t6204t;
  uint16_t buf__unsafe_align=*__t6205t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t6202t=buf__unsafe_ptr;
  *__t6203t=buf__unsafe_size;
  *__t6204t=buf__unsafe_offset;
  *__t6205t=buf__unsafe_align;
  *__t6206t=buf__unsafe_ptr;
  *__t6207t=buf__unsafe_size;
  *__t6208t=buf__unsafe_offset;
  *__t6209t=buf__unsafe_align;
  *__t6210t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t6211t, uint64_t* __t6212t, uint16_t* __t6213t, uint16_t* __t6214t, char** __t6215t, uint64_t* __t6216t, uint16_t* __t6217t, uint16_t* __t6218t, uint64_t* __t6219t) {
  char* buf__unsafe_ptr=*__t6211t;
  uint64_t buf__unsafe_size=*__t6212t;
  uint16_t buf__unsafe_offset=*__t6213t;
  uint16_t buf__unsafe_align=*__t6214t;
  uint64_t __t814t=0;
  char* __t815t__buf__unsafe_ptr=0;
  uint64_t __t815t__buf__unsafe_size=0;
  uint16_t __t815t__buf__unsafe_offset=0;
  uint16_t __t815t__buf__unsafe_align=0;
  uint64_t __t815t__pos=0;
  __t814t=0;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t814t,&__t815t__buf__unsafe_ptr,&__t815t__buf__unsafe_size,&__t815t__buf__unsafe_offset,&__t815t__buf__unsafe_align,&__t815t__pos);
  goto __t_return;
  __t_return:
  *__t6211t=buf__unsafe_ptr;
  *__t6212t=buf__unsafe_size;
  *__t6213t=buf__unsafe_offset;
  *__t6214t=buf__unsafe_align;
  *__t6215t=__t815t__buf__unsafe_ptr;
  *__t6216t=__t815t__buf__unsafe_size;
  *__t6217t=__t815t__buf__unsafe_offset;
  *__t6218t=__t815t__buf__unsafe_align;
  *__t6219t=__t815t__pos;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t6220t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6220t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t6221t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t6221t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t6222t, uint64_t* __t6223t, uint16_t* __t6224t, uint16_t* __t6225t, uint64_t pos, char** __t6226t, uint64_t* __t6227t, uint16_t* __t6228t, uint16_t* __t6229t, uint64_t* __t6230t) {
  char* buf__unsafe_ptr=*__t6222t;
  uint64_t buf__unsafe_size=*__t6223t;
  uint16_t buf__unsafe_offset=*__t6224t;
  uint16_t buf__unsafe_align=*__t6225t;
  goto __t_return;
  __t_return:
  *__t6222t=buf__unsafe_ptr;
  *__t6223t=buf__unsafe_size;
  *__t6224t=buf__unsafe_offset;
  *__t6225t=buf__unsafe_align;
  *__t6226t=buf__unsafe_ptr;
  *__t6227t=buf__unsafe_size;
  *__t6228t=buf__unsafe_offset;
  *__t6229t=buf__unsafe_align;
  *__t6230t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t6231t, uint64_t* __t6232t, uint16_t* __t6233t, uint16_t* __t6234t, uint64_t* __t6235t, uint64_t length, char** __t6236t, uint64_t* __t6237t, uint16_t* __t6238t, uint16_t* __t6239t, uint64_t* __t6240t) {
  char* allocator__buf__unsafe_ptr=*__t6231t;
  uint64_t allocator__buf__unsafe_size=*__t6232t;
  uint16_t allocator__buf__unsafe_offset=*__t6233t;
  uint16_t allocator__buf__unsafe_align=*__t6234t;
  uint64_t allocator__pos=*__t6235t;
  int __t844t=0;
  uint64_t __t845t__=0;
  uint64_t next_pos=0;
  uint64_t __t846t__=0;
  char __t847t__=0;
  uint64_t __t848t=0;
  uint64_t __t849t__=0;
  uint64_t pos=0;
  char* __t850t__buf__unsafe_ptr=0;
  uint64_t __t850t__buf__unsafe_size=0;
  uint16_t __t850t__buf__unsafe_offset=0;
  uint16_t __t850t__buf__unsafe_align=0;
  uint64_t __t850t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t175t(allocator__pos,length,&__t845t__);
  next_pos=__t845t__;
  len__t805t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t846t__);
  gt__t276t(next_pos,__t846t__,&__t847t__);
  if(__t847t__){
  __t_errcode=16;
  goto __t_failure;
  }
  __t848t=0;
  add__t175t(allocator__pos,__t848t,&__t849t__);
  pos=__t849t__;
  allocator__pos=next_pos;
  allocated__t816t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t850t__buf__unsafe_ptr,&__t850t__buf__unsafe_size,&__t850t__buf__unsafe_offset,&__t850t__buf__unsafe_align,&__t850t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6231t=allocator__buf__unsafe_ptr;
  *__t6232t=allocator__buf__unsafe_size;
  *__t6233t=allocator__buf__unsafe_offset;
  *__t6234t=allocator__buf__unsafe_align;
  *__t6235t=allocator__pos;
  *__t6236t=__t850t__buf__unsafe_ptr;
  *__t6237t=__t850t__buf__unsafe_size;
  *__t6238t=__t850t__buf__unsafe_offset;
  *__t6239t=__t850t__buf__unsafe_align;
  *__t6240t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t2042t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t6241t, uint64_t* __t6242t, uint64_t* __t6243t, uint64_t* __t6244t, uint64_t* __t6245t) {
  char* __t2044t__unsafe_ptr=0;
  uint64_t __t2044t__pos=0;
  uint64_t __t2044t__rows=0;
  uint64_t __t2044t__cols=0;
  uint64_t __t2044t__stride=0;
  __t2044t__unsafe_ptr=unsafe_ptr;
  __t2044t__pos=pos;
  __t2044t__rows=rows;
  __t2044t__cols=cols;
  __t2044t__stride=stride;
  goto __t_return;
  __t_return:
  *__t6241t=__t2044t__unsafe_ptr;
  *__t6242t=__t2044t__pos;
  *__t6243t=__t2044t__rows;
  *__t6244t=__t2044t__cols;
  *__t6245t=__t2044t__stride;
}

int mat__t5189t(char** __t6246t, uint64_t* __t6247t, uint16_t* __t6248t, uint16_t* __t6249t, uint64_t* __t6250t, uint64_t rows, uint64_t cols, char** __t6251t, uint64_t* __t6252t, uint64_t* __t6253t, uint64_t* __t6254t, uint64_t* __t6255t) {
  char* FLOATS__buf__unsafe_ptr=*__t6246t;
  uint64_t FLOATS__buf__unsafe_size=*__t6247t;
  uint16_t FLOATS__buf__unsafe_offset=*__t6248t;
  uint16_t FLOATS__buf__unsafe_align=*__t6249t;
  uint64_t FLOATS__pos=*__t6250t;
  uint64_t __t5190t__=0;
  uint64_t __t5191t=0;
  char __t5192t__=0;
  uint64_t __t5193t__=0;
  uint64_t __t5194t=0;
  char __t5195t__=0;
  uint64_t __t5196t__=0;
  uint64_t size=0;
  char* __t5197t__buf__unsafe_ptr=0;
  uint64_t __t5197t__buf__unsafe_size=0;
  uint16_t __t5197t__buf__unsafe_offset=0;
  uint16_t __t5197t__buf__unsafe_align=0;
  uint64_t __t5197t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t5198t=0;
  uint64_t __t5199t=0;
  uint64_t __t5200t__=0;
  uint64_t __t5201t=0;
  uint64_t __t5202t__=0;
  uint64_t __t5203t__=0;
  char* __t5205t__unsafe_ptr=0;
  uint64_t __t5205t__pos=0;
  uint64_t __t5205t__rows=0;
  uint64_t __t5205t__cols=0;
  uint64_t __t5205t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t5190t__);
  __t5191t=8;
  neq__t144t(__t5190t__,__t5191t,&__t5192t__);
  if(__t5192t__){
  __t_errcode=38;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t5193t__);
  __t5194t=0;
  neq__t144t(__t5193t__,__t5194t,&__t5195t__);
  if(__t5195t__){
  __t_errcode=39;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t5196t__);
  size=__t5196t__;
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t5197t__buf__unsafe_ptr,&__t5197t__buf__unsafe_size,&__t5197t__buf__unsafe_offset,&__t5197t__buf__unsafe_align,&__t5197t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t5197t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t5197t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t5197t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t5197t__buf__unsafe_align;
  surface__pos=__t5197t__pos;
  __t5199t=8;
  mul__t199t(__t5199t,surface__pos,&__t5200t__);
  __t5201t=8;
  add__t175t(surface__pos,size,&__t5202t__);
  mul__t199t(__t5201t,__t5202t__,&__t5203t__);
  zero__t662t(surface__buf__unsafe_ptr,__t5200t__,__t5203t__);
  mat__t2042t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t5205t__unsafe_ptr,&__t5205t__pos,&__t5205t__rows,&__t5205t__cols,&__t5205t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6246t=FLOATS__buf__unsafe_ptr;
  *__t6247t=FLOATS__buf__unsafe_size;
  *__t6248t=FLOATS__buf__unsafe_offset;
  *__t6249t=FLOATS__buf__unsafe_align;
  *__t6250t=FLOATS__pos;
  *__t6251t=__t5205t__unsafe_ptr;
  *__t6252t=__t5205t__pos;
  *__t6253t=__t5205t__rows;
  *__t6254t=__t5205t__cols;
  *__t6255t=__t5205t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t5242t(char** __t6256t, uint64_t* __t6257t, uint16_t* __t6258t, uint16_t* __t6259t, uint64_t rows, char** __t6260t, uint64_t* __t6261t, uint64_t* __t6262t, uint64_t* __t6263t, uint64_t* __t6264t) {
  char* buf__unsafe_ptr=*__t6256t;
  uint64_t buf__unsafe_size=*__t6257t;
  uint16_t buf__unsafe_offset=*__t6258t;
  uint16_t buf__unsafe_align=*__t6259t;
  uint64_t __t5243t__=0;
  uint64_t __t5244t__=0;
  uint64_t cols=0;
  uint64_t __t5245t__=0;
  uint64_t __t5246t__=0;
  char __t5247t__=0;
  char* __t5248t__buf__unsafe_ptr=0;
  uint64_t __t5248t__buf__unsafe_size=0;
  uint16_t __t5248t__buf__unsafe_offset=0;
  uint16_t __t5248t__buf__unsafe_align=0;
  uint64_t __t5248t__pos=0;
  char* __t5249t__unsafe_ptr=0;
  uint64_t __t5249t__pos=0;
  uint64_t __t5249t__rows=0;
  uint64_t __t5249t__cols=0;
  uint64_t __t5249t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t5243t__);
  __t_errcode=div__t225t(__t5243t__,rows,&__t5244t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t5244t__;
  mul__t199t(cols,rows,&__t5245t__);
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t5246t__);
  neq__t144t(__t5245t__,__t5246t__,&__t5247t__);
  if(__t5247t__){
  __t_errcode=40;
  goto __t_failure;
  }
  arena__t813t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t5248t__buf__unsafe_ptr,&__t5248t__buf__unsafe_size,&__t5248t__buf__unsafe_offset,&__t5248t__buf__unsafe_align,&__t5248t__pos);
  __t_errcode=mat__t5189t(&__t5248t__buf__unsafe_ptr,&__t5248t__buf__unsafe_size,&__t5248t__buf__unsafe_offset,&__t5248t__buf__unsafe_align,&__t5248t__pos,rows,cols,&__t5249t__unsafe_ptr,&__t5249t__pos,&__t5249t__rows,&__t5249t__cols,&__t5249t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6256t=buf__unsafe_ptr;
  *__t6257t=buf__unsafe_size;
  *__t6258t=buf__unsafe_offset;
  *__t6259t=buf__unsafe_align;
  *__t6260t=__t5249t__unsafe_ptr;
  *__t6261t=__t5249t__pos;
  *__t6262t=__t5249t__rows;
  *__t6263t=__t5249t__cols;
  *__t6264t=__t5249t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t6265t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t6265t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t6266t) {
  *__t6266t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t6267t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t6267t=__t664t__;
}

static inline __attribute__((always_inline)) int mutget__t5250t(char** __t6268t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t6269t) {
  char* m__unsafe_ptr=*__t6268t;
  char __t5251t__=0;
  char __t5252t__=0;
  uint64_t __t5253t=0;
  uint64_t __t5254t__=0;
  uint64_t __t5255t__=0;
  uint64_t __t5256t__=0;
  uint64_t __t5257t__=0;
  char* __t5258t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t5251t__);
  if(__t5251t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t5252t__);
  if(__t5252t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t5253t=8;
  mul__t199t(i,m__stride,&__t5254t__);
  add__t175t(__t5254t__,j,&__t5255t__);
  add__t175t(m__pos,__t5255t__,&__t5256t__);
  mul__t199t(__t5253t,__t5256t__,&__t5257t__);
  add__t663t(m__unsafe_ptr,__t5257t__,&__t5258t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6268t=m__unsafe_ptr;
  *__t6269t=__t5258t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t6124t(char** __t6270t, uint64_t* __t6271t, uint16_t* __t6272t, uint16_t* __t6273t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6270t=unsafe_ptr;
  *__t6271t=unsafe_size;
  *__t6272t=unsafe_offset;
  *__t6273t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t2039t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t6274t, uint64_t* __t6275t, uint64_t* __t6276t) {
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__pos=0;
  uint64_t __t2041t__length=0;
  __t2041t__unsafe_ptr=unsafe_ptr;
  __t2041t__pos=pos;
  __t2041t__length=length;
  goto __t_return;
  __t_return:
  *__t6274t=__t2041t__unsafe_ptr;
  *__t6275t=__t2041t__pos;
  *__t6276t=__t2041t__length;
}

static inline __attribute__((always_inline)) int vec__t2082t(char** __t6277t, uint64_t* __t6278t, uint16_t* __t6279t, uint16_t* __t6280t, char** __t6281t, uint64_t* __t6282t, uint64_t* __t6283t) {
  char* buf__unsafe_ptr=*__t6277t;
  uint64_t buf__unsafe_size=*__t6278t;
  uint16_t buf__unsafe_offset=*__t6279t;
  uint16_t buf__unsafe_align=*__t6280t;
  uint64_t __t2083t__=0;
  uint64_t __t2084t=0;
  char __t2085t__=0;
  uint64_t __t2086t__=0;
  uint64_t __t2087t=0;
  char __t2088t__=0;
  uint64_t __t2089t=0;
  uint64_t __t2090t__=0;
  char* __t2091t__unsafe_ptr=0;
  uint64_t __t2091t__pos=0;
  uint64_t __t2091t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(buf__unsafe_align,&__t2083t__);
  __t2084t=8;
  neq__t144t(__t2083t__,__t2084t,&__t2085t__);
  if(__t2085t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(buf__unsafe_offset,&__t2086t__);
  __t2087t=0;
  neq__t144t(__t2086t__,__t2087t,&__t2088t__);
  if(__t2088t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t2089t=0;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t2090t__);
  vec__t2039t(buf__unsafe_ptr,__t2089t,__t2090t__,&__t2091t__unsafe_ptr,&__t2091t__pos,&__t2091t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6277t=buf__unsafe_ptr;
  *__t6278t=buf__unsafe_size;
  *__t6279t=buf__unsafe_offset;
  *__t6280t=buf__unsafe_align;
  *__t6281t=__t2091t__unsafe_ptr;
  *__t6282t=__t2091t__pos;
  *__t6283t=__t2091t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t6284t, const char** __t6285t) {
  goto __t_return;
  __t_return:
  *__t6284t=value;
  *__t6285t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2050t(char** __t6286t, uint64_t* __t6287t, uint16_t* __t6288t, uint16_t* __t6289t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6286t=unsafe_ptr;
  *__t6287t=unsafe_size;
  *__t6288t=unsafe_offset;
  *__t6289t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t671t(char** __t6290t, uint64_t* __t6291t, uint16_t* __t6292t, uint16_t* __t6293t, uint64_t size, char** __t6294t, uint64_t* __t6295t, uint16_t* __t6296t, uint16_t* __t6297t) {
  char* buffer__unsafe_ptr=*__t6290t;
  uint64_t buffer__unsafe_size=*__t6291t;
  uint16_t buffer__unsafe_offset=*__t6292t;
  uint16_t buffer__unsafe_align=*__t6293t;
  int __t672t=0;
  char __t673t__=0;
  char __t675t__=0;
  uint64_t __t676t=0;
  char __t677t__=0;
  uint64_t __t678t=0;
  uint64_t __t679t__=0;
  uint64_t __t680t__=0;
  uint64_t __t682t=0;
  char __t683t__=0;
  uint64_t __t684t__=0;
  uint64_t __t685t__=0;
  uint64_t bytes=0;
  uint64_t __t686t=0;
  char __t687t__=0;
  char* __t688t__=0;
  int __t689t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t675t__);
  if(__t675t__){
  __t676t=0;
  neq__t144t(size,__t676t,&__t677t__);
  if(__t677t__){
  __t678t=0;
  nat__t665t(buffer__unsafe_align,&__t679t__);
  mul__t199t(__t679t__,size,&__t680t__);
  zero__t662t(buffer__unsafe_ptr,__t678t,__t680t__);
  }
  goto __t_return;
  }
  __t682t=0;
  neq__t144t(buffer__unsafe_size,__t682t,&__t683t__);
  if(__t683t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t684t__);
  mul__t199t(__t684t__,size,&__t685t__);
  bytes=__t685t__;
  __t686t=0;
  eq__t120t(bytes,__t686t,&__t687t__);
  if(__t687t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t654t(bytes,&__t688t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t688t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t591t(buffer__unsafe_ptr,&__t673t__);
  if(__t673t__){
  free__t661t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6290t=buffer__unsafe_ptr;
  *__t6291t=buffer__unsafe_size;
  *__t6292t=buffer__unsafe_offset;
  *__t6293t=buffer__unsafe_align;
  *__t6294t=buffer__unsafe_ptr;
  *__t6295t=buffer__unsafe_size;
  *__t6296t=buffer__unsafe_offset;
  *__t6297t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t2070t(uint64_t length, char** __t6298t, uint64_t* __t6299t, uint64_t* __t6300t) {
  char* __t2071t__unsafe_ptr=0;
  uint64_t __t2071t__unsafe_size=0;
  uint16_t __t2071t__unsafe_offset=0;
  uint16_t __t2071t__unsafe_align=0;
  char* __t2073t__unsafe_ptr=0;
  uint64_t __t2073t__unsafe_size=0;
  uint16_t __t2073t__unsafe_offset=0;
  uint16_t __t2073t__unsafe_align=0;
  char __t2074t____t673t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t2075t=0;
  uint64_t __t2076t=0;
  uint64_t __t2077t=0;
  uint64_t __t2078t__=0;
  uint64_t __t2080t=0;
  char* __t2081t__unsafe_ptr=0;
  uint64_t __t2081t__pos=0;
  uint64_t __t2081t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t2050t(&__t2071t__unsafe_ptr,&__t2071t__unsafe_size,&__t2071t__unsafe_offset,&__t2071t__unsafe_align);
  __t_errcode=alloc__t671t(&__t2071t__unsafe_ptr,&__t2071t__unsafe_size,&__t2071t__unsafe_offset,&__t2071t__unsafe_align,length,&__t2073t__unsafe_ptr,&__t2073t__unsafe_size,&__t2073t__unsafe_offset,&__t2073t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t2073t__unsafe_ptr;
  buf__unsafe_size=__t2073t__unsafe_size;
  buf__unsafe_offset=__t2073t__unsafe_offset;
  buf__unsafe_align=__t2073t__unsafe_align;
  __t2076t=0;
  __t2077t=8;
  mul__t199t(__t2077t,length,&__t2078t__);
  zero__t662t(buf__unsafe_ptr,__t2076t,__t2078t__);
  __t2080t=0;
  vec__t2039t(buf__unsafe_ptr,__t2080t,length,&__t2081t__unsafe_ptr,&__t2081t__pos,&__t2081t__length);
  goto __t_return;
  
  __t_failure:exists__t591t(__t2081t__unsafe_ptr,&__t2074t____t673t__);
  if(__t2074t____t673t__){
  free__t661t(&__t2081t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6298t=__t2081t__unsafe_ptr;
  *__t6299t=__t2081t__pos;
  *__t6300t=__t2081t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t6301t, uint64_t* __t6302t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t6301t=__t613t;
  *__t6302t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t6303t, uint64_t* __t6304t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t6303t=from;
  *__t6304t=to;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t6305t, uint64_t r__to, uint64_t* __t6306t) {
  uint64_t r__from=*__t6305t;
  char __t633t__=0;
  uint64_t ret=0;
  uint64_t __t634t=0;
  uint64_t __t635t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(r__from,r__to,&__t633t__);
  if(__t633t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t634t=1;
  add__t175t(ret,__t634t,&__t635t__);
  r__from=__t635t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6305t=r__from;
  *__t6306t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t5259t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t6307t) {
  char __t5260t__=0;
  char __t5261t__=0;
  uint64_t __t5262t=0;
  uint64_t __t5263t__=0;
  uint64_t __t5264t__=0;
  uint64_t __t5265t__=0;
  uint64_t __t5266t__=0;
  char* __t5267t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t5260t__);
  if(__t5260t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t5261t__);
  if(__t5261t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t5262t=8;
  mul__t199t(i,m__stride,&__t5263t__);
  add__t175t(__t5263t__,j,&__t5264t__);
  add__t175t(m__pos,__t5264t__,&__t5265t__);
  mul__t199t(__t5262t,__t5265t__,&__t5266t__);
  add__t663t(m__unsafe_ptr,__t5266t__,&__t5267t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6307t=__t5267t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t2165t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6308t) {
  char __t2166t__=0;
  uint64_t __t2167t=0;
  uint64_t __t2168t__=0;
  uint64_t __t2169t__=0;
  char* __t2170t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2166t__);
  if(__t2166t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2167t=8;
  add__t175t(i,v__pos,&__t2168t__);
  mul__t199t(__t2167t,__t2168t__,&__t2169t__);
  add__t663t(v__unsafe_ptr,__t2169t__,&__t2170t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6308t=__t2170t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6309t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6309t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t6310t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6310t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t6311t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6311t=z;
}

static inline __attribute__((always_inline)) int mutget__t2159t(char** __t6312t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6313t) {
  char* v__unsafe_ptr=*__t6312t;
  char __t2160t__=0;
  uint64_t __t2161t=0;
  uint64_t __t2162t__=0;
  uint64_t __t2163t__=0;
  char* __t2164t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t2160t__);
  if(__t2160t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t2161t=8;
  add__t175t(i,v__pos,&__t2162t__);
  mul__t199t(__t2161t,__t2162t__,&__t2163t__);
  add__t663t(v__unsafe_ptr,__t2163t__,&__t2164t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6312t=v__unsafe_ptr;
  *__t6313t=__t2164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5298t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6314t, uint64_t* __t6315t, uint64_t* __t6316t) {
  char __t5299t__=0;
  char* __t5300t__unsafe_ptr=0;
  uint64_t __t5300t__pos=0;
  uint64_t __t5300t__length=0;
  char __t5301t____t2074t____t673t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5302t____t613t=0;
  uint64_t __t5302t__to=0;
  uint64_t __t5303t__from=0;
  uint64_t __t5303t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5304t=0;
  uint64_t __t5305t__=0;
  uint64_t i=0;
  double __t5306t=0;
  double __t5307t=0;
  double acc=0;
  uint64_t __t5308t____t613t=0;
  uint64_t __t5308t__to=0;
  uint64_t __t5309t__from=0;
  uint64_t __t5309t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5310t=0;
  uint64_t __t5311t__=0;
  uint64_t j=0;
  char* __t5312t__=0;
  double __t5313t__value=0;
  char* __t5314t__=0;
  double __t5315t__value=0;
  double __t5316t__=0;
  double __t5317t__=0;
  char* __t5318t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5299t__);
  if(__t5299t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t2070t(m__rows,&__t5300t__unsafe_ptr,&__t5300t__pos,&__t5300t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5300t__unsafe_ptr;
  result__pos=__t5300t__pos;
  result__length=__t5300t__length;
  of__t612t(m__rows,&__t5302t____t613t,&__t5302t__to);
  range__t629t(__t5302t____t613t,__t5302t__to,&__t5303t__from,&__t5303t__to);
  it_i__from=__t5303t__from;
  it_i__to=__t5303t__to;
  while(1){
  __t_complain=next__t632t(&it_i__from,it_i__to,&__t5305t__);
  __t5304t=__t_complain;
  i=__t5305t__;
  __t5304t=__t5304t==0;
  if(!__t5304t){
  break;
  }
  __t5306t=0.0;
  __t5307t=__t5306t;
  acc=__t5307t;
  of__t612t(m__cols,&__t5308t____t613t,&__t5308t__to);
  range__t629t(__t5308t____t613t,__t5308t__to,&__t5309t__from,&__t5309t__to);
  it_j__from=__t5309t__from;
  it_j__to=__t5309t__to;
  while(1){
  __t_complain=next__t632t(&it_j__from,it_j__to,&__t5311t__);
  __t5310t=__t_complain;
  j=__t5311t__;
  __t5310t=__t5310t==0;
  if(!__t5310t){
  break;
  }
  __t_errcode=get__t5259t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5312t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5312t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5313t__value,__t5312t__,8);
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,j,&__t5314t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5314t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5315t__value,__t5314t__,8);
  mul__t177t(__t5313t__value,__t5315t__value,&__t5316t__);
  add__t153t(acc,__t5316t__,&__t5317t__);
  acc=__t5317t__;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,i,&__t5318t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5318t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5318t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t591t(result__unsafe_ptr,&__t5301t____t2074t____t673t__);
  if(__t5301t____t2074t____t673t__){
  free__t661t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6314t=result__unsafe_ptr;
  *__t6315t=result__pos;
  *__t6316t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t6317t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6317t=z;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6318t) {
  char __t637t__=0;
  char __t638t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(pos,r__to,&__t637t__);
  if(__t637t__){
  __t_errcode=8;
  goto __t_failure;
  }
  lt__t252t(pos,r__from,&__t638t__);
  if(__t638t__){
  __t_errcode=9;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6318t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t6319t, const char** __t6320t) {
  goto __t_return;
  __t_return:
  *__t6319t=value;
  *__t6320t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t6321t) {
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
  *__t6321t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t5092t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t5093t=0;
  const char* endl=0;
  const char* __t5094t__value=0;
  const char* __t5094t____t374t=0;
  uint64_t __t5096t=0;
  uint64_t __t5097t____t613t=0;
  uint64_t __t5097t__to=0;
  uint64_t __t5098t__from=0;
  uint64_t __t5098t__to=0;
  char __t5099t=0;
  uint64_t __t5100t__=0;
  uint64_t i=0;
  char* __t5101t__=0;
  double __t5102t__value=0;
  double __t5103t__value=0;
  const char* __t5103t____t374t=0;
  uint64_t __t5105t=0;
  uint64_t __t5106t__=0;
  char __t5107t__=0;
  const char* __t5108t__value=0;
  const char* __t5108t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t5072t,&__t5094t__value,&__t5094t____t374t);
  print__t378t(__t5094t__value,__t5094t____t374t);
  of__t612t(v__length,&__t5097t____t613t,&__t5097t__to);
  range__t629t(__t5097t____t613t,__t5097t__to,&__t5098t__from,&__t5098t__to);
  __t5096t=0;
  while(1){
  __t_complain=get__t636t(__t5098t__from,__t5098t__to,__t5096t,&__t5100t__);
  __t5099t=__t_complain;
  i=__t5100t__;
  __t5099t=__t5099t==0;
  __t5096t=__t5096t+1;
  if(!__t5099t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t5101t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5101t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5102t__value,__t5101t__,8);
  nn__t375t(__t5102t__value,&__t5103t__value,&__t5103t____t374t);
  print__t383t(__t5103t__value,__t5103t____t374t);
  __t5105t=1;
  __t_errcode=sub__t352t(v__length,__t5105t,&__t5106t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5106t__,&__t5107t__);
  if(__t5107t__){
  nn__t373t(__t5087t,&__t5108t__value,&__t5108t____t374t);
  print__t378t(__t5108t__value,__t5108t____t374t);
  }
  }
  print__t378t(__t5090t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t6142t(char** __t6322t, uint64_t* __t6323t, uint16_t* __t6324t, uint16_t* __t6325t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6322t=unsafe_ptr;
  *__t6323t=unsafe_size;
  *__t6324t=unsafe_offset;
  *__t6325t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t5359t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t6326t, uint64_t* __t6327t, uint64_t* __t6328t) {
  char __t5360t__=0;
  char* __t5361t__unsafe_ptr=0;
  uint64_t __t5361t__pos=0;
  uint64_t __t5361t__length=0;
  char __t5362t____t2074t____t673t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5363t____t613t=0;
  uint64_t __t5363t__to=0;
  uint64_t __t5364t__from=0;
  uint64_t __t5364t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5365t=0;
  uint64_t __t5366t__=0;
  uint64_t j=0;
  double __t5367t=0;
  double __t5368t=0;
  double acc=0;
  uint64_t __t5369t____t613t=0;
  uint64_t __t5369t__to=0;
  uint64_t __t5370t__from=0;
  uint64_t __t5370t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5371t=0;
  uint64_t __t5372t__=0;
  uint64_t i=0;
  char* __t5373t__=0;
  double __t5374t__value=0;
  char* __t5375t__=0;
  double __t5376t__value=0;
  double __t5377t__=0;
  double __t5378t__=0;
  char* __t5379t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t5360t__);
  if(__t5360t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t_errcode=vec__t2070t(m__cols,&__t5361t__unsafe_ptr,&__t5361t__pos,&__t5361t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5361t__unsafe_ptr;
  result__pos=__t5361t__pos;
  result__length=__t5361t__length;
  of__t612t(m__cols,&__t5363t____t613t,&__t5363t__to);
  range__t629t(__t5363t____t613t,__t5363t__to,&__t5364t__from,&__t5364t__to);
  it_j__from=__t5364t__from;
  it_j__to=__t5364t__to;
  while(1){
  __t_complain=next__t632t(&it_j__from,it_j__to,&__t5366t__);
  __t5365t=__t_complain;
  j=__t5366t__;
  __t5365t=__t5365t==0;
  if(!__t5365t){
  break;
  }
  __t5367t=0.0;
  __t5368t=__t5367t;
  acc=__t5368t;
  of__t612t(m__rows,&__t5369t____t613t,&__t5369t__to);
  range__t629t(__t5369t____t613t,__t5369t__to,&__t5370t__from,&__t5370t__to);
  it_i__from=__t5370t__from;
  it_i__to=__t5370t__to;
  while(1){
  __t_complain=next__t632t(&it_i__from,it_i__to,&__t5372t__);
  __t5371t=__t_complain;
  i=__t5372t__;
  __t5371t=__t5371t==0;
  if(!__t5371t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t5373t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5373t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5374t__value,__t5373t__,8);
  __t_errcode=get__t5259t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5375t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5375t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5376t__value,__t5375t__,8);
  mul__t177t(__t5374t__value,__t5376t__value,&__t5377t__);
  add__t153t(acc,__t5377t__,&__t5378t__);
  acc=__t5378t__;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,j,&__t5379t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5379t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5379t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t591t(result__unsafe_ptr,&__t5362t____t2074t____t673t__);
  if(__t5362t____t2074t____t673t__){
  free__t661t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6326t=result__unsafe_ptr;
  *__t6327t=result__pos;
  *__t6328t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t6159t(char** __t6329t, uint64_t* __t6330t, uint16_t* __t6331t, uint16_t* __t6332t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6329t=unsafe_ptr;
  *__t6330t=unsafe_size;
  *__t6331t=unsafe_offset;
  *__t6332t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5154t(char** __t6333t, uint64_t* __t6334t, uint16_t* __t6335t, uint16_t* __t6336t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6333t=unsafe_ptr;
  *__t6334t=unsafe_size;
  *__t6335t=unsafe_offset;
  *__t6336t=unsafe_align;
}

int mat__t5164t(uint64_t rows, uint64_t cols, char** __t6337t, uint64_t* __t6338t, uint64_t* __t6339t, uint64_t* __t6340t, uint64_t* __t6341t) {
  char* __t5165t__unsafe_ptr=0;
  uint64_t __t5165t__unsafe_size=0;
  uint16_t __t5165t__unsafe_offset=0;
  uint16_t __t5165t__unsafe_align=0;
  uint64_t __t5166t__=0;
  char* __t5168t__unsafe_ptr=0;
  uint64_t __t5168t__unsafe_size=0;
  uint16_t __t5168t__unsafe_offset=0;
  uint16_t __t5168t__unsafe_align=0;
  char __t5169t____t673t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t5170t=0;
  uint64_t __t5171t=0;
  uint64_t __t5172t=0;
  uint64_t __t5173t__=0;
  uint64_t __t5174t__=0;
  uint64_t __t5176t=0;
  char* __t5177t__unsafe_ptr=0;
  uint64_t __t5177t__pos=0;
  uint64_t __t5177t__rows=0;
  uint64_t __t5177t__cols=0;
  uint64_t __t5177t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5154t(&__t5165t__unsafe_ptr,&__t5165t__unsafe_size,&__t5165t__unsafe_offset,&__t5165t__unsafe_align);
  mul__t199t(rows,cols,&__t5166t__);
  __t_errcode=alloc__t671t(&__t5165t__unsafe_ptr,&__t5165t__unsafe_size,&__t5165t__unsafe_offset,&__t5165t__unsafe_align,__t5166t__,&__t5168t__unsafe_ptr,&__t5168t__unsafe_size,&__t5168t__unsafe_offset,&__t5168t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t5168t__unsafe_ptr;
  buf__unsafe_size=__t5168t__unsafe_size;
  buf__unsafe_offset=__t5168t__unsafe_offset;
  buf__unsafe_align=__t5168t__unsafe_align;
  __t5171t=0;
  __t5172t=8;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t5173t__);
  mul__t199t(__t5172t,__t5173t__,&__t5174t__);
  zero__t662t(buf__unsafe_ptr,__t5171t,__t5174t__);
  __t5176t=0;
  mat__t2042t(buf__unsafe_ptr,__t5176t,rows,cols,cols,&__t5177t__unsafe_ptr,&__t5177t__pos,&__t5177t__rows,&__t5177t__cols,&__t5177t__stride);
  goto __t_return;
  
  __t_failure:exists__t591t(__t5177t__unsafe_ptr,&__t5169t____t673t__);
  if(__t5169t____t673t__){
  free__t661t(&__t5177t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6337t=__t5177t__unsafe_ptr;
  *__t6338t=__t5177t__pos;
  *__t6339t=__t5177t__rows;
  *__t6340t=__t5177t__cols;
  *__t6341t=__t5177t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5420t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t6342t, uint64_t* __t6343t, uint64_t* __t6344t, uint64_t* __t6345t, uint64_t* __t6346t) {
  char __t5421t__=0;
  char* __t5422t__unsafe_ptr=0;
  uint64_t __t5422t__pos=0;
  uint64_t __t5422t__rows=0;
  uint64_t __t5422t__cols=0;
  uint64_t __t5422t__stride=0;
  char __t5423t____t5169t____t673t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t5424t____t613t=0;
  uint64_t __t5424t__to=0;
  uint64_t __t5425t__from=0;
  uint64_t __t5425t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5426t=0;
  uint64_t __t5427t__=0;
  uint64_t i=0;
  uint64_t __t5428t____t613t=0;
  uint64_t __t5428t__to=0;
  uint64_t __t5429t__from=0;
  uint64_t __t5429t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5430t=0;
  uint64_t __t5431t__=0;
  uint64_t j=0;
  double __t5432t=0;
  double __t5433t=0;
  double acc=0;
  uint64_t __t5434t____t613t=0;
  uint64_t __t5434t__to=0;
  uint64_t __t5435t__from=0;
  uint64_t __t5435t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t5436t=0;
  uint64_t __t5437t__=0;
  uint64_t k=0;
  char* __t5438t__=0;
  double __t5439t__value=0;
  char* __t5440t__=0;
  double __t5441t__value=0;
  double __t5442t__=0;
  double __t5443t__=0;
  char* __t5444t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t5421t__);
  if(__t5421t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=mat__t5164t(m1__rows,m2__cols,&__t5422t__unsafe_ptr,&__t5422t__pos,&__t5422t__rows,&__t5422t__cols,&__t5422t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5422t__unsafe_ptr;
  result__pos=__t5422t__pos;
  result__rows=__t5422t__rows;
  result__cols=__t5422t__cols;
  result__stride=__t5422t__stride;
  of__t612t(m1__rows,&__t5424t____t613t,&__t5424t__to);
  range__t629t(__t5424t____t613t,__t5424t__to,&__t5425t__from,&__t5425t__to);
  it_i__from=__t5425t__from;
  it_i__to=__t5425t__to;
  while(1){
  __t_complain=next__t632t(&it_i__from,it_i__to,&__t5427t__);
  __t5426t=__t_complain;
  i=__t5427t__;
  __t5426t=__t5426t==0;
  if(!__t5426t){
  break;
  }
  of__t612t(m2__cols,&__t5428t____t613t,&__t5428t__to);
  range__t629t(__t5428t____t613t,__t5428t__to,&__t5429t__from,&__t5429t__to);
  it_j__from=__t5429t__from;
  it_j__to=__t5429t__to;
  while(1){
  __t_complain=next__t632t(&it_j__from,it_j__to,&__t5431t__);
  __t5430t=__t_complain;
  j=__t5431t__;
  __t5430t=__t5430t==0;
  if(!__t5430t){
  break;
  }
  __t5432t=0.0;
  __t5433t=__t5432t;
  acc=__t5433t;
  of__t612t(m1__cols,&__t5434t____t613t,&__t5434t__to);
  range__t629t(__t5434t____t613t,__t5434t__to,&__t5435t__from,&__t5435t__to);
  it_k__from=__t5435t__from;
  it_k__to=__t5435t__to;
  while(1){
  __t_complain=next__t632t(&it_k__from,it_k__to,&__t5437t__);
  __t5436t=__t_complain;
  k=__t5437t__;
  __t5436t=__t5436t==0;
  if(!__t5436t){
  break;
  }
  __t_errcode=get__t5259t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t5438t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5438t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5439t__value,__t5438t__,8);
  __t_errcode=get__t5259t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t5440t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5440t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5441t__value,__t5440t__,8);
  mul__t177t(__t5439t__value,__t5441t__value,&__t5442t__);
  add__t153t(acc,__t5442t__,&__t5443t__);
  acc=__t5443t__;
  }
  __t_errcode=mutget__t5250t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t5444t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5444t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5444t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t591t(result__unsafe_ptr,&__t5423t____t5169t____t673t__);
  if(__t5423t____t5169t____t673t__){
  free__t661t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6342t=result__unsafe_ptr;
  *__t6343t=result__pos;
  *__t6344t=result__rows;
  *__t6345t=result__cols;
  *__t6346t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5569t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5570t=0;
  const char* endl=0;
  uint64_t __t5571t____t613t=0;
  uint64_t __t5571t__to=0;
  uint64_t __t5572t__from=0;
  uint64_t __t5572t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5573t=0;
  uint64_t __t5574t__=0;
  uint64_t i=0;
  uint64_t __t5575t=0;
  char __t5576t__=0;
  uint64_t __t5578t=0;
  char __t5579t__=0;
  uint64_t __t5580t=0;
  char __t5581t__=0;
  char __t5582t=0;
  uint64_t __t5584t=0;
  char __t5585t__=0;
  uint64_t __t5586t=0;
  char __t5587t__=0;
  uint64_t __t5588t=0;
  uint64_t __t5589t__=0;
  char __t5590t__=0;
  char __t5591t=0;
  char __t5592t=0;
  uint64_t __t5594t=0;
  char __t5595t__=0;
  uint64_t __t5596t=0;
  uint64_t __t5597t__=0;
  char __t5598t__=0;
  char __t5599t=0;
  uint64_t __t5601t____t613t=0;
  uint64_t __t5601t__to=0;
  uint64_t __t5602t__from=0;
  uint64_t __t5602t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5603t=0;
  uint64_t __t5604t__=0;
  uint64_t j=0;
  char* __t5605t__=0;
  double __t5606t__value=0;
  uint64_t __t5608t=0;
  uint64_t __t5609t__=0;
  char __t5610t__=0;
  uint64_t __t5612t=0;
  char __t5613t__=0;
  uint64_t __t5615t=0;
  char __t5616t__=0;
  uint64_t __t5617t=0;
  char __t5618t__=0;
  char __t5619t=0;
  uint64_t __t5621t=0;
  char __t5622t__=0;
  uint64_t __t5623t=0;
  char __t5624t__=0;
  uint64_t __t5625t=0;
  uint64_t __t5626t__=0;
  char __t5627t__=0;
  char __t5628t=0;
  char __t5629t=0;
  uint64_t __t5631t=0;
  char __t5632t__=0;
  uint64_t __t5633t=0;
  uint64_t __t5634t__=0;
  char __t5635t__=0;
  char __t5636t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  of__t612t(m__rows,&__t5571t____t613t,&__t5571t__to);
  range__t629t(__t5571t____t613t,__t5571t__to,&__t5572t__from,&__t5572t__to);
  it_i__from=__t5572t__from;
  it_i__to=__t5572t__to;
  while(1){
  __t_complain=next__t632t(&it_i__from,it_i__to,&__t5574t__);
  __t5573t=__t_complain;
  i=__t5574t__;
  __t5573t=__t5573t==0;
  if(!__t5573t){
  break;
  }
  __t5575t=1;
  eq__t120t(m__rows,__t5575t,&__t5576t__);
  if(__t5576t__){
  print__t378t(__t5072t,__t374t);
  }
  __t5578t=1;
  gt__t276t(m__rows,__t5578t,&__t5579t__);
  if(__t5579t__){
  __t5580t=0;
  eq__t120t(i,__t5580t,&__t5581t__);
  __t5582t=__t5581t__;
  }
  {
  __t5582t=0;
  }
  if(__t5582t){
  print__t378t(__t5507t,__t374t);
  }
  __t5584t=1;
  gt__t276t(m__rows,__t5584t,&__t5585t__);
  if(__t5585t__){
  __t5586t=0;
  gt__t276t(i,__t5586t,&__t5587t__);
  if(__t5587t__){
  __t5588t=1;
  __t_errcode=sub__t352t(m__rows,__t5588t,&__t5589t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5589t__,&__t5590t__);
  __t5591t=__t5590t__;
  }
  {
  __t5591t=0;
  }
  __t5592t=__t5591t;
  }
  {
  __t5592t=0;
  }
  if(__t5592t){
  print__t378t(__t5518t,__t374t);
  }
  __t5594t=1;
  gt__t276t(m__rows,__t5594t,&__t5595t__);
  if(__t5595t__){
  __t5596t=1;
  __t_errcode=sub__t352t(m__rows,__t5596t,&__t5597t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5597t__,&__t5598t__);
  __t5599t=__t5598t__;
  }
  {
  __t5599t=0;
  }
  if(__t5599t){
  print__t378t(__t5526t,__t374t);
  }
  of__t612t(m__cols,&__t5601t____t613t,&__t5601t__to);
  range__t629t(__t5601t____t613t,__t5601t__to,&__t5602t__from,&__t5602t__to);
  it_j__from=__t5602t__from;
  it_j__to=__t5602t__to;
  while(1){
  __t_complain=next__t632t(&it_j__from,it_j__to,&__t5604t__);
  __t5603t=__t_complain;
  j=__t5604t__;
  __t5603t=__t5603t==0;
  if(!__t5603t){
  break;
  }
  __t_errcode=get__t5259t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5605t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5605t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5606t__value,__t5605t__,8);
  print__t383t(__t5606t__value,__t374t);
  __t5608t=1;
  __t_errcode=sub__t352t(m__cols,__t5608t,&__t5609t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5609t__,&__t5610t__);
  if(__t5610t__){
  print__t378t(__t5087t,__t374t);
  }
  }
  __t5612t=1;
  eq__t120t(m__rows,__t5612t,&__t5613t__);
  if(__t5613t__){
  print__t378t(__t5090t,__t374t);
  }
  __t5615t=1;
  gt__t276t(m__rows,__t5615t,&__t5616t__);
  if(__t5616t__){
  __t5617t=0;
  eq__t120t(i,__t5617t,&__t5618t__);
  __t5619t=__t5618t__;
  }
  {
  __t5619t=0;
  }
  if(__t5619t){
  print__t378t(__t5547t,__t374t);
  }
  __t5621t=1;
  gt__t276t(m__rows,__t5621t,&__t5622t__);
  if(__t5622t__){
  __t5623t=0;
  gt__t276t(i,__t5623t,&__t5624t__);
  if(__t5624t__){
  __t5625t=1;
  __t_errcode=sub__t352t(m__rows,__t5625t,&__t5626t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5626t__,&__t5627t__);
  __t5628t=__t5627t__;
  }
  {
  __t5628t=0;
  }
  __t5629t=__t5628t;
  }
  {
  __t5629t=0;
  }
  if(__t5629t){
  print__t378t(__t5558t,__t374t);
  }
  __t5631t=1;
  gt__t276t(m__rows,__t5631t,&__t5632t__);
  if(__t5632t__){
  __t5633t=1;
  __t_errcode=sub__t352t(m__rows,__t5633t,&__t5634t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5634t__,&__t5635t__);
  __t5636t=__t5635t__;
  }
  {
  __t5636t=0;
  }
  if(__t5636t){
  print__t378t(__t5566t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t6098t() {
  double __t6101t=0;
  double __t6106t=0;
  double __t6107t=0;
  double __t6108t=0;
  double __t6109t=0;
  double __t6110t=0;
  char* __t6111t__unsafe_ptr=0;
  uint64_t __t6111t__unsafe_size=0;
  uint16_t __t6111t__unsafe_offset=0;
  uint16_t __t6111t__unsafe_align=0;
  uint64_t __t6112t=0;
  char* __t6113t__unsafe_ptr=0;
  uint64_t __t6113t__unsafe_size=0;
  uint16_t __t6113t__unsafe_offset=0;
  uint16_t __t6113t__unsafe_align=0;
  char __t6114t____t692t__=0;
  uint64_t __t6115t=0;
  char* __t6116t__unsafe_ptr=0;
  uint64_t __t6116t__pos=0;
  uint64_t __t6116t__rows=0;
  uint64_t __t6116t__cols=0;
  uint64_t __t6116t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t6117t=0;
  uint64_t __t6118t=0;
  char* __t6119t__=0;
  double __t6120t=0;
  double __t6121t=0;
  double __t6126t=0;
  double __t6127t=0;
  char* __t6128t__unsafe_ptr=0;
  uint64_t __t6128t__unsafe_size=0;
  uint16_t __t6128t__unsafe_offset=0;
  uint16_t __t6128t__unsafe_align=0;
  uint64_t __t6129t=0;
  char* __t6130t__unsafe_ptr=0;
  uint64_t __t6130t__unsafe_size=0;
  uint16_t __t6130t__unsafe_offset=0;
  uint16_t __t6130t__unsafe_align=0;
  char __t6131t____t692t__=0;
  char* __t6132t__unsafe_ptr=0;
  uint64_t __t6132t__pos=0;
  uint64_t __t6132t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t6134t__value=0;
  const char* __t6134t____t374t=0;
  char* __t6136t__unsafe_ptr=0;
  uint64_t __t6136t__pos=0;
  uint64_t __t6136t__length=0;
  char __t6137t____t5301t____t2074t____t673t__=0;
  double __t6139t=0;
  double __t6144t=0;
  char* __t6145t__unsafe_ptr=0;
  uint64_t __t6145t__unsafe_size=0;
  uint16_t __t6145t__unsafe_offset=0;
  uint16_t __t6145t__unsafe_align=0;
  uint64_t __t6146t=0;
  char* __t6147t__unsafe_ptr=0;
  uint64_t __t6147t__unsafe_size=0;
  uint16_t __t6147t__unsafe_offset=0;
  uint16_t __t6147t__unsafe_align=0;
  char __t6148t____t692t__=0;
  char* __t6149t__unsafe_ptr=0;
  uint64_t __t6149t__pos=0;
  uint64_t __t6149t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t6151t__value=0;
  const char* __t6151t____t374t=0;
  char* __t6153t__unsafe_ptr=0;
  uint64_t __t6153t__pos=0;
  uint64_t __t6153t__length=0;
  char __t6154t____t5362t____t2074t____t673t__=0;
  double __t6156t=0;
  double __t6161t=0;
  double __t6162t=0;
  double __t6163t=0;
  double __t6164t=0;
  double __t6165t=0;
  char* __t6166t__unsafe_ptr=0;
  uint64_t __t6166t__unsafe_size=0;
  uint16_t __t6166t__unsafe_offset=0;
  uint16_t __t6166t__unsafe_align=0;
  uint64_t __t6167t=0;
  char* __t6168t__unsafe_ptr=0;
  uint64_t __t6168t__unsafe_size=0;
  uint16_t __t6168t__unsafe_offset=0;
  uint16_t __t6168t__unsafe_align=0;
  char __t6169t____t692t__=0;
  uint64_t __t6170t=0;
  char* __t6171t__unsafe_ptr=0;
  uint64_t __t6171t__pos=0;
  uint64_t __t6171t__rows=0;
  uint64_t __t6171t__cols=0;
  uint64_t __t6171t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t6174t__unsafe_ptr=0;
  uint64_t __t6174t__pos=0;
  uint64_t __t6174t__rows=0;
  uint64_t __t6174t__cols=0;
  uint64_t __t6174t__stride=0;
  char __t6175t____t5423t____t5169t____t673t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t806t();
  __t6101t=1.0;
  __t6106t=0.0;
  __t6107t=2.0;
  __t6108t=0.0;
  __t6109t=3.0;
  __t6110t=1.0;
  float____buffer__t6104t(&__t6111t__unsafe_ptr,&__t6111t__unsafe_size,&__t6111t__unsafe_offset,&__t6111t__unsafe_align);
  __t6112t=6;
  __t_errcode=alloc__t690t(&__t6111t__unsafe_ptr,&__t6111t__unsafe_size,&__t6111t__unsafe_offset,&__t6111t__unsafe_align,__t6112t,&__t6113t__unsafe_ptr,&__t6113t__unsafe_size,&__t6113t__unsafe_offset,&__t6113t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6111t__unsafe_ptr,&__t6101t,8);
  memcpy(__t6111t__unsafe_ptr+8,&__t6106t,8);
  memcpy(__t6111t__unsafe_ptr+16,&__t6107t,8);
  memcpy(__t6111t__unsafe_ptr+24,&__t6108t,8);
  memcpy(__t6111t__unsafe_ptr+32,&__t6109t,8);
  memcpy(__t6111t__unsafe_ptr+40,&__t6110t,8);
  __t6115t=2;
  __t_errcode=mat__t5242t(&__t6111t__unsafe_ptr,&__t6111t__unsafe_size,&__t6111t__unsafe_offset,&__t6111t__unsafe_align,__t6115t,&__t6116t__unsafe_ptr,&__t6116t__pos,&__t6116t__rows,&__t6116t__cols,&__t6116t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t6116t__unsafe_ptr;
  a__pos=__t6116t__pos;
  a__rows=__t6116t__rows;
  a__cols=__t6116t__cols;
  a__stride=__t6116t__stride;
  __t6117t=0;
  __t6118t=0;
  __t_errcode=mutget__t5250t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t6117t,__t6118t,&__t6119t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6120t=1.0;
  if(!__t6119t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t6119t__,&__t6120t,8);
  __t6121t=1.0;
  __t6126t=2.0;
  __t6127t=3.0;
  float____buffer__t6124t(&__t6128t__unsafe_ptr,&__t6128t__unsafe_size,&__t6128t__unsafe_offset,&__t6128t__unsafe_align);
  __t6129t=3;
  __t_errcode=alloc__t690t(&__t6128t__unsafe_ptr,&__t6128t__unsafe_size,&__t6128t__unsafe_offset,&__t6128t__unsafe_align,__t6129t,&__t6130t__unsafe_ptr,&__t6130t__unsafe_size,&__t6130t__unsafe_offset,&__t6130t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6128t__unsafe_ptr,&__t6121t,8);
  memcpy(__t6128t__unsafe_ptr+8,&__t6126t,8);
  memcpy(__t6128t__unsafe_ptr+16,&__t6127t,8);
  __t_errcode=vec__t2082t(&__t6128t__unsafe_ptr,&__t6128t__unsafe_size,&__t6128t__unsafe_offset,&__t6128t__unsafe_align,&__t6132t__unsafe_ptr,&__t6132t__pos,&__t6132t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t6132t__unsafe_ptr;
  x__pos=__t6132t__pos;
  x__length=__t6132t__length;
  nn__t373t(__t6133t,&__t6134t__value,&__t6134t____t374t);
  print__t378t(__t6134t__value,__t6134t____t374t);
  __t_errcode=mul__t5298t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t6136t__unsafe_ptr,&__t6136t__pos,&__t6136t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5092t(__t6136t__unsafe_ptr,__t6136t__pos,__t6136t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6139t=1.0;
  __t6144t=2.0;
  float____buffer__t6142t(&__t6145t__unsafe_ptr,&__t6145t__unsafe_size,&__t6145t__unsafe_offset,&__t6145t__unsafe_align);
  __t6146t=2;
  __t_errcode=alloc__t690t(&__t6145t__unsafe_ptr,&__t6145t__unsafe_size,&__t6145t__unsafe_offset,&__t6145t__unsafe_align,__t6146t,&__t6147t__unsafe_ptr,&__t6147t__unsafe_size,&__t6147t__unsafe_offset,&__t6147t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6145t__unsafe_ptr,&__t6139t,8);
  memcpy(__t6145t__unsafe_ptr+8,&__t6144t,8);
  __t_errcode=vec__t2082t(&__t6145t__unsafe_ptr,&__t6145t__unsafe_size,&__t6145t__unsafe_offset,&__t6145t__unsafe_align,&__t6149t__unsafe_ptr,&__t6149t__pos,&__t6149t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t6149t__unsafe_ptr;
  u__pos=__t6149t__pos;
  u__length=__t6149t__length;
  nn__t373t(__t6150t,&__t6151t__value,&__t6151t____t374t);
  print__t378t(__t6151t__value,__t6151t____t374t);
  __t_errcode=mul__t5359t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t6153t__unsafe_ptr,&__t6153t__pos,&__t6153t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5092t(__t6153t__unsafe_ptr,__t6153t__pos,__t6153t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t6156t=1.0;
  __t6161t=2.0;
  __t6162t=3.0;
  __t6163t=4.0;
  __t6164t=5.0;
  __t6165t=6.0;
  float____buffer__t6159t(&__t6166t__unsafe_ptr,&__t6166t__unsafe_size,&__t6166t__unsafe_offset,&__t6166t__unsafe_align);
  __t6167t=6;
  __t_errcode=alloc__t690t(&__t6166t__unsafe_ptr,&__t6166t__unsafe_size,&__t6166t__unsafe_offset,&__t6166t__unsafe_align,__t6167t,&__t6168t__unsafe_ptr,&__t6168t__unsafe_size,&__t6168t__unsafe_offset,&__t6168t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t6166t__unsafe_ptr,&__t6156t,8);
  memcpy(__t6166t__unsafe_ptr+8,&__t6161t,8);
  memcpy(__t6166t__unsafe_ptr+16,&__t6162t,8);
  memcpy(__t6166t__unsafe_ptr+24,&__t6163t,8);
  memcpy(__t6166t__unsafe_ptr+32,&__t6164t,8);
  memcpy(__t6166t__unsafe_ptr+40,&__t6165t,8);
  __t6170t=3;
  __t_errcode=mat__t5242t(&__t6166t__unsafe_ptr,&__t6166t__unsafe_size,&__t6166t__unsafe_offset,&__t6166t__unsafe_align,__t6170t,&__t6171t__unsafe_ptr,&__t6171t__pos,&__t6171t__rows,&__t6171t__cols,&__t6171t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t6171t__unsafe_ptr;
  b__pos=__t6171t__pos;
  b__rows=__t6171t__rows;
  b__cols=__t6171t__cols;
  b__stride=__t6171t__stride;
  print__t380t(__t6172t);
  __t_errcode=mul__t5420t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t6174t__unsafe_ptr,&__t6174t__pos,&__t6174t__rows,&__t6174t__cols,&__t6174t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5569t(__t6174t__unsafe_ptr,__t6174t__pos,__t6174t__rows,__t6174t__cols,__t6174t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t6174t__unsafe_ptr,&__t6175t____t5423t____t5169t____t673t__);
  if(__t6175t____t5423t____t5169t____t673t__){
  free__t661t(&__t6174t__unsafe_ptr);
  }
  exists__t591t(__t6168t__unsafe_ptr,&__t6169t____t692t__);
  if(__t6169t____t692t__){
  free__t661t(&__t6168t__unsafe_ptr);
  }
  exists__t591t(__t6153t__unsafe_ptr,&__t6154t____t5362t____t2074t____t673t__);
  if(__t6154t____t5362t____t2074t____t673t__){
  free__t661t(&__t6153t__unsafe_ptr);
  }
  exists__t591t(__t6147t__unsafe_ptr,&__t6148t____t692t__);
  if(__t6148t____t692t__){
  free__t661t(&__t6147t__unsafe_ptr);
  }
  exists__t591t(__t6136t__unsafe_ptr,&__t6137t____t5301t____t2074t____t673t__);
  if(__t6137t____t5301t____t2074t____t673t__){
  free__t661t(&__t6136t__unsafe_ptr);
  }
  exists__t591t(__t6130t__unsafe_ptr,&__t6131t____t692t__);
  if(__t6131t____t692t__){
  free__t661t(&__t6130t__unsafe_ptr);
  }
  exists__t591t(__t6113t__unsafe_ptr,&__t6114t____t692t__);
  if(__t6114t____t692t__){
  free__t661t(&__t6113t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t6098t();return 0;}