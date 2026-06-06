#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4721t="  ";
const char* const __t4706t="[ ";
const char* const __t374t="";
const char* const __t4724t=" ]";
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

static inline __attribute__((always_inline)) void float____buffer__t5759t(char** __t5789t, uint64_t* __t5790t, uint16_t* __t5791t, uint16_t* __t5792t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5789t=unsafe_ptr;
  *__t5790t=unsafe_size;
  *__t5791t=unsafe_offset;
  *__t5792t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t591t(char* x, char* __t5793t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5793t=z;
}

static inline __attribute__((always_inline)) void free__t661t(char** __t5794t) {
  char* allocated=*__t5794t;
  if(allocated){
  free(allocated);
  }
  *__t5794t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5795t) {
  int value=0;
  *__t5795t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5796t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5796t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5797t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5797t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5798t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5798t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5799t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5799t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t5800t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5800t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5801t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5801t=z;
}

static inline __attribute__((always_inline)) void zero__t662t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5802t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5802t=z;
}

static inline __attribute__((always_inline)) int alloc__t654t(uint64_t bytes, char** __t5803t) {
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
  *__t5803t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t690t(char** __t5804t, uint64_t* __t5805t, uint16_t* __t5806t, uint16_t* __t5807t, uint64_t size, char** __t5808t, uint64_t* __t5809t, uint16_t* __t5810t, uint16_t* __t5811t) {
  char* buffer__unsafe_ptr=*__t5804t;
  uint64_t buffer__unsafe_size=*__t5805t;
  uint16_t buffer__unsafe_offset=*__t5806t;
  uint16_t buffer__unsafe_align=*__t5807t;
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
  *__t5804t=buffer__unsafe_ptr;
  *__t5805t=buffer__unsafe_size;
  *__t5806t=buffer__unsafe_offset;
  *__t5807t=buffer__unsafe_align;
  *__t5808t=buffer__unsafe_ptr;
  *__t5809t=buffer__unsafe_size;
  *__t5810t=buffer__unsafe_offset;
  *__t5811t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t805t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5812t) {
  goto __t_return;
  __t_return:
  *__t5812t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5813t) {
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
  *__t5813t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t810t(char** __t5814t, uint64_t* __t5815t, uint16_t* __t5816t, uint16_t* __t5817t, uint64_t _pos, char** __t5818t, uint64_t* __t5819t, uint16_t* __t5820t, uint16_t* __t5821t, uint64_t* __t5822t) {
  char* buf__unsafe_ptr=*__t5814t;
  uint64_t buf__unsafe_size=*__t5815t;
  uint16_t buf__unsafe_offset=*__t5816t;
  uint16_t buf__unsafe_align=*__t5817t;
  uint64_t __t811t=0;
  uint64_t pos=0;
  __t811t=_pos;
  pos=__t811t;
  goto __t_return;
  __t_return:
  *__t5814t=buf__unsafe_ptr;
  *__t5815t=buf__unsafe_size;
  *__t5816t=buf__unsafe_offset;
  *__t5817t=buf__unsafe_align;
  *__t5818t=buf__unsafe_ptr;
  *__t5819t=buf__unsafe_size;
  *__t5820t=buf__unsafe_offset;
  *__t5821t=buf__unsafe_align;
  *__t5822t=pos;
}

static inline __attribute__((always_inline)) void arena__t813t(char** __t5823t, uint64_t* __t5824t, uint16_t* __t5825t, uint16_t* __t5826t, char** __t5827t, uint64_t* __t5828t, uint16_t* __t5829t, uint16_t* __t5830t, uint64_t* __t5831t) {
  char* buf__unsafe_ptr=*__t5823t;
  uint64_t buf__unsafe_size=*__t5824t;
  uint16_t buf__unsafe_offset=*__t5825t;
  uint16_t buf__unsafe_align=*__t5826t;
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
  *__t5823t=buf__unsafe_ptr;
  *__t5824t=buf__unsafe_size;
  *__t5825t=buf__unsafe_offset;
  *__t5826t=buf__unsafe_align;
  *__t5827t=__t815t__buf__unsafe_ptr;
  *__t5828t=__t815t__buf__unsafe_size;
  *__t5829t=__t815t__buf__unsafe_offset;
  *__t5830t=__t815t__buf__unsafe_align;
  *__t5831t=__t815t__pos;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5832t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5832t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5833t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5833t=z;
}

static inline __attribute__((always_inline)) void allocated__t816t(char** __t5834t, uint64_t* __t5835t, uint16_t* __t5836t, uint16_t* __t5837t, uint64_t pos, char** __t5838t, uint64_t* __t5839t, uint16_t* __t5840t, uint16_t* __t5841t, uint64_t* __t5842t) {
  char* buf__unsafe_ptr=*__t5834t;
  uint64_t buf__unsafe_size=*__t5835t;
  uint16_t buf__unsafe_offset=*__t5836t;
  uint16_t buf__unsafe_align=*__t5837t;
  goto __t_return;
  __t_return:
  *__t5834t=buf__unsafe_ptr;
  *__t5835t=buf__unsafe_size;
  *__t5836t=buf__unsafe_offset;
  *__t5837t=buf__unsafe_align;
  *__t5838t=buf__unsafe_ptr;
  *__t5839t=buf__unsafe_size;
  *__t5840t=buf__unsafe_offset;
  *__t5841t=buf__unsafe_align;
  *__t5842t=pos;
}

static inline __attribute__((always_inline)) int alloc__t843t(char** __t5843t, uint64_t* __t5844t, uint16_t* __t5845t, uint16_t* __t5846t, uint64_t* __t5847t, uint64_t length, char** __t5848t, uint64_t* __t5849t, uint16_t* __t5850t, uint16_t* __t5851t, uint64_t* __t5852t) {
  char* allocator__buf__unsafe_ptr=*__t5843t;
  uint64_t allocator__buf__unsafe_size=*__t5844t;
  uint16_t allocator__buf__unsafe_offset=*__t5845t;
  uint16_t allocator__buf__unsafe_align=*__t5846t;
  uint64_t allocator__pos=*__t5847t;
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
  *__t5843t=allocator__buf__unsafe_ptr;
  *__t5844t=allocator__buf__unsafe_size;
  *__t5845t=allocator__buf__unsafe_offset;
  *__t5846t=allocator__buf__unsafe_align;
  *__t5847t=allocator__pos;
  *__t5848t=__t850t__buf__unsafe_ptr;
  *__t5849t=__t850t__buf__unsafe_size;
  *__t5850t=__t850t__buf__unsafe_offset;
  *__t5851t=__t850t__buf__unsafe_align;
  *__t5852t=__t850t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t2042t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5853t, uint64_t* __t5854t, uint64_t* __t5855t, uint64_t* __t5856t, uint64_t* __t5857t) {
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
  *__t5853t=__t2044t__unsafe_ptr;
  *__t5854t=__t2044t__pos;
  *__t5855t=__t2044t__rows;
  *__t5856t=__t2044t__cols;
  *__t5857t=__t2044t__stride;
}

static inline __attribute__((always_inline)) int mat__t4803t(char** __t5858t, uint64_t* __t5859t, uint16_t* __t5860t, uint16_t* __t5861t, uint64_t* __t5862t, uint64_t rows, uint64_t cols, char** __t5863t, uint64_t* __t5864t, uint64_t* __t5865t, uint64_t* __t5866t, uint64_t* __t5867t) {
  char* FLOATS__buf__unsafe_ptr=*__t5858t;
  uint64_t FLOATS__buf__unsafe_size=*__t5859t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5860t;
  uint16_t FLOATS__buf__unsafe_align=*__t5861t;
  uint64_t FLOATS__pos=*__t5862t;
  uint64_t __t4804t__=0;
  uint64_t __t4805t=0;
  char __t4806t__=0;
  uint64_t __t4807t__=0;
  uint64_t __t4808t=0;
  char __t4809t__=0;
  uint64_t __t4810t__=0;
  uint64_t size=0;
  char* __t4811t__buf__unsafe_ptr=0;
  uint64_t __t4811t__buf__unsafe_size=0;
  uint16_t __t4811t__buf__unsafe_offset=0;
  uint16_t __t4811t__buf__unsafe_align=0;
  uint64_t __t4811t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t4812t=0;
  char* __t4813t__unsafe_ptr=0;
  uint64_t __t4813t__pos=0;
  uint64_t __t4813t__rows=0;
  uint64_t __t4813t__cols=0;
  uint64_t __t4813t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t4804t__);
  __t4805t=8;
  neq__t144t(__t4804t__,__t4805t,&__t4806t__);
  if(__t4806t__){
  __t_errcode=38;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t4807t__);
  __t4808t=0;
  neq__t144t(__t4807t__,__t4808t,&__t4809t__);
  if(__t4809t__){
  __t_errcode=39;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4810t__);
  size=__t4810t__;
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t4811t__buf__unsafe_ptr,&__t4811t__buf__unsafe_size,&__t4811t__buf__unsafe_offset,&__t4811t__buf__unsafe_align,&__t4811t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t4811t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t4811t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t4811t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t4811t__buf__unsafe_align;
  surface__pos=__t4811t__pos;
  mat__t2042t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t4813t__unsafe_ptr,&__t4813t__pos,&__t4813t__rows,&__t4813t__cols,&__t4813t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5858t=FLOATS__buf__unsafe_ptr;
  *__t5859t=FLOATS__buf__unsafe_size;
  *__t5860t=FLOATS__buf__unsafe_offset;
  *__t5861t=FLOATS__buf__unsafe_align;
  *__t5862t=FLOATS__pos;
  *__t5863t=__t4813t__unsafe_ptr;
  *__t5864t=__t4813t__pos;
  *__t5865t=__t4813t__rows;
  *__t5866t=__t4813t__cols;
  *__t5867t=__t4813t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mat__t4868t(char** __t5868t, uint64_t* __t5869t, uint16_t* __t5870t, uint16_t* __t5871t, uint64_t rows, char** __t5872t, uint64_t* __t5873t, uint64_t* __t5874t, uint64_t* __t5875t, uint64_t* __t5876t) {
  char* buf__unsafe_ptr=*__t5868t;
  uint64_t buf__unsafe_size=*__t5869t;
  uint16_t buf__unsafe_offset=*__t5870t;
  uint16_t buf__unsafe_align=*__t5871t;
  uint64_t __t4869t__=0;
  uint64_t __t4870t__=0;
  uint64_t cols=0;
  uint64_t __t4871t__=0;
  uint64_t __t4872t__=0;
  char __t4873t__=0;
  char* __t4874t__buf__unsafe_ptr=0;
  uint64_t __t4874t__buf__unsafe_size=0;
  uint16_t __t4874t__buf__unsafe_offset=0;
  uint16_t __t4874t__buf__unsafe_align=0;
  uint64_t __t4874t__pos=0;
  char* __t4876t__unsafe_ptr=0;
  uint64_t __t4876t__pos=0;
  uint64_t __t4876t__rows=0;
  uint64_t __t4876t__cols=0;
  uint64_t __t4876t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4869t__);
  __t_errcode=div__t225t(__t4869t__,rows,&__t4870t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4870t__;
  mul__t199t(cols,rows,&__t4871t__);
  len__t805t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4872t__);
  neq__t144t(__t4871t__,__t4872t__,&__t4873t__);
  if(__t4873t__){
  __t_errcode=40;
  goto __t_failure;
  }
  arena__t813t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4874t__buf__unsafe_ptr,&__t4874t__buf__unsafe_size,&__t4874t__buf__unsafe_offset,&__t4874t__buf__unsafe_align,&__t4874t__pos);
  __t_errcode=mat__t4803t(&__t4874t__buf__unsafe_ptr,&__t4874t__buf__unsafe_size,&__t4874t__buf__unsafe_offset,&__t4874t__buf__unsafe_align,&__t4874t__pos,rows,cols,&__t4876t__unsafe_ptr,&__t4876t__pos,&__t4876t__rows,&__t4876t__cols,&__t4876t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5868t=buf__unsafe_ptr;
  *__t5869t=buf__unsafe_size;
  *__t5870t=buf__unsafe_offset;
  *__t5871t=buf__unsafe_align;
  *__t5872t=__t4876t__unsafe_ptr;
  *__t5873t=__t4876t__pos;
  *__t5874t=__t4876t__rows;
  *__t5875t=__t4876t__cols;
  *__t5876t=__t4876t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5773t(char** __t5877t, uint64_t* __t5878t, uint16_t* __t5879t, uint16_t* __t5880t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5877t=unsafe_ptr;
  *__t5878t=unsafe_size;
  *__t5879t=unsafe_offset;
  *__t5880t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t2039t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5881t, uint64_t* __t5882t, uint64_t* __t5883t) {
  char* __t2041t__unsafe_ptr=0;
  uint64_t __t2041t__pos=0;
  uint64_t __t2041t__length=0;
  __t2041t__unsafe_ptr=unsafe_ptr;
  __t2041t__pos=pos;
  __t2041t__length=length;
  goto __t_return;
  __t_return:
  *__t5881t=__t2041t__unsafe_ptr;
  *__t5882t=__t2041t__pos;
  *__t5883t=__t2041t__length;
}

static inline __attribute__((always_inline)) int vec__t2082t(char** __t5884t, uint64_t* __t5885t, uint16_t* __t5886t, uint16_t* __t5887t, char** __t5888t, uint64_t* __t5889t, uint64_t* __t5890t) {
  char* buf__unsafe_ptr=*__t5884t;
  uint64_t buf__unsafe_size=*__t5885t;
  uint16_t buf__unsafe_offset=*__t5886t;
  uint16_t buf__unsafe_align=*__t5887t;
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
  *__t5884t=buf__unsafe_ptr;
  *__t5885t=buf__unsafe_size;
  *__t5886t=buf__unsafe_offset;
  *__t5887t=buf__unsafe_align;
  *__t5888t=__t2091t__unsafe_ptr;
  *__t5889t=__t2091t__pos;
  *__t5890t=__t2091t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t5726t(char** __t5891t, uint64_t* __t5892t, uint16_t* __t5893t, uint16_t* __t5894t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5891t=unsafe_ptr;
  *__t5892t=unsafe_size;
  *__t5893t=unsafe_offset;
  *__t5894t=unsafe_align;
}

static inline __attribute__((always_inline)) void len__t2158t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t5895t) {
  goto __t_return;
  __t_return:
  *__t5895t=v__length;
}

int vec__t2113t(char** __t5896t, uint64_t* __t5897t, uint16_t* __t5898t, uint16_t* __t5899t, uint64_t* __t5900t, uint64_t length, char** __t5901t, uint64_t* __t5902t, uint64_t* __t5903t) {
  char* FLOATS__buf__unsafe_ptr=*__t5896t;
  uint64_t FLOATS__buf__unsafe_size=*__t5897t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5898t;
  uint16_t FLOATS__buf__unsafe_align=*__t5899t;
  uint64_t FLOATS__pos=*__t5900t;
  uint64_t __t2114t__=0;
  uint64_t __t2115t=0;
  char __t2116t__=0;
  uint64_t __t2117t__=0;
  uint64_t __t2118t=0;
  char __t2119t__=0;
  char* __t2120t__buf__unsafe_ptr=0;
  uint64_t __t2120t__buf__unsafe_size=0;
  uint16_t __t2120t__buf__unsafe_offset=0;
  uint16_t __t2120t__buf__unsafe_align=0;
  uint64_t __t2120t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t2121t__=0;
  int __t2122t=0;
  uint64_t __t2123t=0;
  uint64_t __t2124t__=0;
  uint64_t __t2125t=0;
  uint64_t __t2126t__=0;
  uint64_t __t2127t__=0;
  char* __t2129t__unsafe_ptr=0;
  uint64_t __t2129t__pos=0;
  uint64_t __t2129t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t2114t__);
  __t2115t=8;
  neq__t144t(__t2114t__,__t2115t,&__t2116t__);
  if(__t2116t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t2117t__);
  __t2118t=0;
  neq__t144t(__t2117t__,__t2118t,&__t2119t__);
  if(__t2119t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2120t__buf__unsafe_ptr,&__t2120t__buf__unsafe_size,&__t2120t__buf__unsafe_offset,&__t2120t__buf__unsafe_align,&__t2120t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2120t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2120t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2120t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2120t__buf__unsafe_align;
  surface__pos=__t2120t__pos;
  add__t175t(FLOATS__pos,length,&__t2121t__);
  FLOATS__pos=__t2121t__;
  __t2123t=8;
  mul__t199t(__t2123t,surface__pos,&__t2124t__);
  __t2125t=8;
  add__t175t(surface__pos,length,&__t2126t__);
  mul__t199t(__t2125t,__t2126t__,&__t2127t__);
  zero__t662t(FLOATS__buf__unsafe_ptr,__t2124t__,__t2127t__);
  vec__t2039t(surface__buf__unsafe_ptr,surface__pos,length,&__t2129t__unsafe_ptr,&__t2129t__pos,&__t2129t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5896t=FLOATS__buf__unsafe_ptr;
  *__t5897t=FLOATS__buf__unsafe_size;
  *__t5898t=FLOATS__buf__unsafe_offset;
  *__t5899t=FLOATS__buf__unsafe_align;
  *__t5900t=FLOATS__pos;
  *__t5901t=__t2129t__unsafe_ptr;
  *__t5902t=__t2129t__pos;
  *__t5903t=__t2129t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5904t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5904t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5905t) {
  *__t5905t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t5906t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t5906t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t2165t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5907t) {
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
  *__t5907t=__t2170t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mutget__t2159t(char** __t5908t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5909t) {
  char* v__unsafe_ptr=*__t5908t;
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
  *__t5908t=v__unsafe_ptr;
  *__t5909t=__t2164t__;
  
  __t_skip_returns:
  return __t_errcode;
}

int copy__t4753t(char** __t5910t, uint64_t* __t5911t, uint16_t* __t5912t, uint16_t* __t5913t, uint64_t* __t5914t, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5915t, uint64_t* __t5916t, uint64_t* __t5917t) {
  char* FLOATS__buf__unsafe_ptr=*__t5910t;
  uint64_t FLOATS__buf__unsafe_size=*__t5911t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5912t;
  uint16_t FLOATS__buf__unsafe_align=*__t5913t;
  uint64_t FLOATS__pos=*__t5914t;
  char* __t4754t__unsafe_ptr=0;
  uint64_t __t4754t__pos=0;
  uint64_t __t4754t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4755t=0;
  char __t4756t=0;
  char* __t4757t__=0;
  double __t4758t__value=0;
  double value=0;
  char* __t4759t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2113t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v__length,&__t4754t__unsafe_ptr,&__t4754t__pos,&__t4754t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4754t__unsafe_ptr;
  result__pos=__t4754t__pos;
  result__length=__t4754t__length;
  __t4755t=0-1;
  while(1){
  __t4755t=__t4755t+1;
  __t_complain=get__t2165t(v__unsafe_ptr,v__pos,v__length,__t4755t,&__t4757t__);
  __t4756t=__t_complain;
  if(!__t4757t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t4758t__value,__t4757t__,8);
  }
  value=__t4758t__value;
  __t4756t=__t4756t==0;
  if(!__t4756t){
  break;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,__t4755t,&__t4759t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4759t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4759t__,&value,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5910t=FLOATS__buf__unsafe_ptr;
  *__t5911t=FLOATS__buf__unsafe_size;
  *__t5912t=FLOATS__buf__unsafe_offset;
  *__t5913t=FLOATS__buf__unsafe_align;
  *__t5914t=FLOATS__pos;
  *__t5915t=result__unsafe_ptr;
  *__t5916t=result__pos;
  *__t5917t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t612t(uint64_t to, uint64_t* __t5918t, uint64_t* __t5919t) {
  uint64_t __t613t=0;
  __t613t=0;
  goto __t_return;
  __t_return:
  *__t5918t=__t613t;
  *__t5919t=to;
}

static inline __attribute__((always_inline)) void range__t629t(uint64_t _from, uint64_t to, uint64_t* __t5920t, uint64_t* __t5921t) {
  uint64_t __t630t=0;
  uint64_t from=0;
  __t630t=_from;
  from=__t630t;
  goto __t_return;
  __t_return:
  *__t5920t=from;
  *__t5921t=to;
}

static inline __attribute__((always_inline)) int next__t632t(uint64_t* __t5922t, uint64_t r__to, uint64_t* __t5923t) {
  uint64_t r__from=*__t5922t;
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
  *__t5922t=r__from;
  *__t5923t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4886t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5924t) {
  char __t4887t__=0;
  char __t4888t__=0;
  uint64_t __t4889t=0;
  uint64_t __t4890t__=0;
  uint64_t __t4891t__=0;
  uint64_t __t4892t__=0;
  uint64_t __t4893t__=0;
  char* __t4894t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4887t__);
  if(__t4887t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4888t__);
  if(__t4888t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4889t=8;
  mul__t199t(i,m__stride,&__t4890t__);
  add__t175t(__t4890t__,j,&__t4891t__);
  add__t175t(m__pos,__t4891t__,&__t4892t__);
  mul__t199t(__t4889t,__t4892t__,&__t4893t__);
  add__t663t(m__unsafe_ptr,__t4893t__,&__t4894t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5924t=__t4894t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5925t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5925t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5926t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5926t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5927t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5927t=z;
}

int mul__t4946t(char** __t5928t, uint64_t* __t5929t, uint16_t* __t5930t, uint16_t* __t5931t, uint64_t* __t5932t, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5933t, uint64_t* __t5934t, uint64_t* __t5935t) {
  char* FLOATS__buf__unsafe_ptr=*__t5928t;
  uint64_t FLOATS__buf__unsafe_size=*__t5929t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5930t;
  uint16_t FLOATS__buf__unsafe_align=*__t5931t;
  uint64_t FLOATS__pos=*__t5932t;
  char __t4947t__=0;
  char* __t4948t__unsafe_ptr=0;
  uint64_t __t4948t__pos=0;
  uint64_t __t4948t__length=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4949t____t613t=0;
  uint64_t __t4949t__to=0;
  uint64_t __t4950t__from=0;
  uint64_t __t4950t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4951t=0;
  uint64_t __t4952t__=0;
  uint64_t i=0;
  double __t4953t=0;
  double __t4954t=0;
  double acc=0;
  uint64_t __t4955t____t613t=0;
  uint64_t __t4955t__to=0;
  uint64_t __t4956t__from=0;
  uint64_t __t4956t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4957t=0;
  uint64_t __t4958t__=0;
  uint64_t j=0;
  char* __t4959t__=0;
  double __t4960t__value=0;
  char* __t4961t__=0;
  double __t4962t__value=0;
  double __t4963t__=0;
  double __t4964t__=0;
  char* __t4965t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t4947t__);
  if(__t4947t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t2113t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__rows,&__t4948t__unsafe_ptr,&__t4948t__pos,&__t4948t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4948t__unsafe_ptr;
  result__pos=__t4948t__pos;
  result__length=__t4948t__length;
  of__t612t(m__rows,&__t4949t____t613t,&__t4949t__to);
  range__t629t(__t4949t____t613t,__t4949t__to,&__t4950t__from,&__t4950t__to);
  it_i__from=__t4950t__from;
  it_i__to=__t4950t__to;
  while(1){
  __t_complain=next__t632t(&it_i__from,it_i__to,&__t4952t__);
  __t4951t=__t_complain;
  i=__t4952t__;
  __t4951t=__t4951t==0;
  if(!__t4951t){
  break;
  }
  __t4953t=0.0;
  __t4954t=__t4953t;
  acc=__t4954t;
  of__t612t(m__cols,&__t4955t____t613t,&__t4955t__to);
  range__t629t(__t4955t____t613t,__t4955t__to,&__t4956t__from,&__t4956t__to);
  it_j__from=__t4956t__from;
  it_j__to=__t4956t__to;
  while(1){
  __t_complain=next__t632t(&it_j__from,it_j__to,&__t4958t__);
  __t4957t=__t_complain;
  j=__t4958t__;
  __t4957t=__t4957t==0;
  if(!__t4957t){
  break;
  }
  __t_errcode=get__t4886t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4959t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4959t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4960t__value,__t4959t__,8);
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,j,&__t4961t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4961t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4962t__value,__t4961t__,8);
  mul__t177t(__t4960t__value,__t4962t__value,&__t4963t__);
  add__t153t(acc,__t4963t__,&__t4964t__);
  acc=__t4964t__;
  }
  __t_errcode=mutget__t2159t(&result__unsafe_ptr,result__pos,result__length,i,&__t4965t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4965t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4965t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5928t=FLOATS__buf__unsafe_ptr;
  *__t5929t=FLOATS__buf__unsafe_size;
  *__t5930t=FLOATS__buf__unsafe_offset;
  *__t5931t=FLOATS__buf__unsafe_align;
  *__t5932t=FLOATS__pos;
  *__t5933t=result__unsafe_ptr;
  *__t5934t=result__pos;
  *__t5935t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t2050t(char** __t5936t, uint64_t* __t5937t, uint16_t* __t5938t, uint16_t* __t5939t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5936t=unsafe_ptr;
  *__t5937t=unsafe_size;
  *__t5938t=unsafe_offset;
  *__t5939t=unsafe_align;
}

static inline __attribute__((always_inline)) void arena__t4767t(char** __t5940t, uint64_t v__pos, uint64_t v__length, char** __t5941t, uint64_t* __t5942t, uint16_t* __t5943t, uint16_t* __t5944t, uint64_t* __t5945t) {
  char* v__unsafe_ptr=*__t5940t;
  char* __t4768t__unsafe_ptr=0;
  uint64_t __t4768t__unsafe_size=0;
  uint16_t __t4768t__unsafe_offset=0;
  uint16_t __t4768t__unsafe_align=0;
  char* __t4769t__unsafe_ptr=0;
  uint64_t __t4769t__unsafe_size=0;
  uint16_t __t4769t__unsafe_offset=0;
  uint16_t __t4769t__unsafe_align=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  uint64_t __t4770t__=0;
  uint64_t __t4771t__=0;
  uint64_t __t4772t=0;
  uint64_t pos=0;
  char* __t4773t__buf__unsafe_ptr=0;
  uint64_t __t4773t__buf__unsafe_size=0;
  uint16_t __t4773t__buf__unsafe_offset=0;
  uint16_t __t4773t__buf__unsafe_align=0;
  uint64_t __t4773t__pos=0;
  float____t_buffer____buffer__t2050t(&__t4768t__unsafe_ptr,&__t4768t__unsafe_size,&__t4768t__unsafe_offset,&__t4768t__unsafe_align);
  __t4769t__unsafe_ptr=__t4768t__unsafe_ptr;
  __t4769t__unsafe_size=__t4768t__unsafe_size;
  __t4769t__unsafe_offset=__t4768t__unsafe_offset;
  __t4769t__unsafe_align=__t4768t__unsafe_align;
  buf__unsafe_ptr=__t4769t__unsafe_ptr;
  buf__unsafe_size=__t4769t__unsafe_size;
  buf__unsafe_offset=__t4769t__unsafe_offset;
  buf__unsafe_align=__t4769t__unsafe_align;
  buf__unsafe_ptr=v__unsafe_ptr;
  len__t2158t(v__unsafe_ptr,v__pos,v__length,&__t4770t__);
  add__t175t(v__pos,__t4770t__,&__t4771t__);
  buf__unsafe_size=__t4771t__;
  __t4772t=v__pos;
  pos=__t4772t;
  arena__t810t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,pos,&__t4773t__buf__unsafe_ptr,&__t4773t__buf__unsafe_size,&__t4773t__buf__unsafe_offset,&__t4773t__buf__unsafe_align,&__t4773t__pos);
  goto __t_return;
  __t_return:
  *__t5940t=v__unsafe_ptr;
  *__t5941t=__t4773t__buf__unsafe_ptr;
  *__t5942t=__t4773t__buf__unsafe_size;
  *__t5943t=__t4773t__buf__unsafe_offset;
  *__t5944t=__t4773t__buf__unsafe_align;
  *__t5945t=__t4773t__pos;
}

static inline __attribute__((always_inline)) void self__t4774t(char** __t5946t, uint64_t v__pos, uint64_t v__length, char** __t5947t, uint64_t* __t5948t, uint16_t* __t5949t, uint16_t* __t5950t, uint64_t* __t5951t, char** __t5952t, uint64_t* __t5953t, uint64_t* __t5954t) {
  char* v__unsafe_ptr=*__t5946t;
  char* __t4775t__buf__unsafe_ptr=0;
  uint64_t __t4775t__buf__unsafe_size=0;
  uint16_t __t4775t__buf__unsafe_offset=0;
  uint16_t __t4775t__buf__unsafe_align=0;
  uint64_t __t4775t__pos=0;
  arena__t4767t(&v__unsafe_ptr,v__pos,v__length,&__t4775t__buf__unsafe_ptr,&__t4775t__buf__unsafe_size,&__t4775t__buf__unsafe_offset,&__t4775t__buf__unsafe_align,&__t4775t__pos);
  goto __t_return;
  __t_return:
  *__t5946t=v__unsafe_ptr;
  *__t5947t=__t4775t__buf__unsafe_ptr;
  *__t5948t=__t4775t__buf__unsafe_size;
  *__t5949t=__t4775t__buf__unsafe_offset;
  *__t5950t=__t4775t__buf__unsafe_align;
  *__t5951t=__t4775t__pos;
  *__t5952t=v__unsafe_ptr;
  *__t5953t=v__pos;
  *__t5954t=v__length;
}

static inline __attribute__((always_inline)) int vec__t2102t(char** __t5955t, uint64_t* __t5956t, uint16_t* __t5957t, uint16_t* __t5958t, uint64_t* __t5959t, uint64_t length, char** __t5960t, uint64_t* __t5961t, uint64_t* __t5962t) {
  char* FLOATS__buf__unsafe_ptr=*__t5955t;
  uint64_t FLOATS__buf__unsafe_size=*__t5956t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5957t;
  uint16_t FLOATS__buf__unsafe_align=*__t5958t;
  uint64_t FLOATS__pos=*__t5959t;
  uint64_t __t2103t__=0;
  uint64_t __t2104t=0;
  char __t2105t__=0;
  uint64_t __t2106t__=0;
  uint64_t __t2107t=0;
  char __t2108t__=0;
  char* __t2109t__buf__unsafe_ptr=0;
  uint64_t __t2109t__buf__unsafe_size=0;
  uint16_t __t2109t__buf__unsafe_offset=0;
  uint16_t __t2109t__buf__unsafe_align=0;
  uint64_t __t2109t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  uint64_t __t2110t__=0;
  int __t2111t=0;
  char* __t2112t__unsafe_ptr=0;
  uint64_t __t2112t__pos=0;
  uint64_t __t2112t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t665t(FLOATS__buf__unsafe_align,&__t2103t__);
  __t2104t=8;
  neq__t144t(__t2103t__,__t2104t,&__t2105t__);
  if(__t2105t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t665t(FLOATS__buf__unsafe_offset,&__t2106t__);
  __t2107t=0;
  neq__t144t(__t2106t__,__t2107t,&__t2108t__);
  if(__t2108t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t_errcode=alloc__t843t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,length,&__t2109t__buf__unsafe_ptr,&__t2109t__buf__unsafe_size,&__t2109t__buf__unsafe_offset,&__t2109t__buf__unsafe_align,&__t2109t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t2109t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t2109t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t2109t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t2109t__buf__unsafe_align;
  surface__pos=__t2109t__pos;
  add__t175t(FLOATS__pos,length,&__t2110t__);
  FLOATS__pos=__t2110t__;
  vec__t2039t(surface__buf__unsafe_ptr,surface__pos,length,&__t2112t__unsafe_ptr,&__t2112t__pos,&__t2112t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5955t=FLOATS__buf__unsafe_ptr;
  *__t5956t=FLOATS__buf__unsafe_size;
  *__t5957t=FLOATS__buf__unsafe_offset;
  *__t5958t=FLOATS__buf__unsafe_align;
  *__t5959t=FLOATS__pos;
  *__t5960t=__t2112t__unsafe_ptr;
  *__t5961t=__t2112t__pos;
  *__t5962t=__t2112t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void at__t2171t(double number, uint64_t i, double* __t5963t) {
  goto __t_return;
  __t_return:
  *__t5963t=number;
}

int add__t2212t(char** __t5964t, uint64_t* __t5965t, uint16_t* __t5966t, uint16_t* __t5967t, uint64_t* __t5968t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, double v2, char** __t5969t, uint64_t* __t5970t, uint64_t* __t5971t) {
  char* FLOATS__buf__unsafe_ptr=*__t5964t;
  uint64_t FLOATS__buf__unsafe_size=*__t5965t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5966t;
  uint16_t FLOATS__buf__unsafe_align=*__t5967t;
  uint64_t FLOATS__pos=*__t5968t;
  int __t2213t=0;
  char* __t2215t__unsafe_ptr=0;
  uint64_t __t2215t__pos=0;
  uint64_t __t2215t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2216t=0;
  char __t2217t=0;
  char* __t2218t__=0;
  double __t2219t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2220t__=0;
  double __t2221t__=0;
  double __t2222t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=vec__t2102t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2215t__unsafe_ptr,&__t2215t__pos,&__t2215t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2215t__unsafe_ptr;
  v__pos=__t2215t__pos;
  v__length=__t2215t__length;
  __t2216t=0-1;
  while(1){
  __t2216t=__t2216t+1;
  __t_complain=get__t2165t(v1__unsafe_ptr,v1__pos,v1__length,__t2216t,&__t2218t__);
  __t2217t=__t_complain;
  if(!__t2218t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2219t__value,__t2218t__,8);
  }
  value=__t2219t__value;
  __t2217t=__t2217t==0;
  if(!__t2217t){
  break;
  }
  i=__t2216t;
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,i,&__t2220t__);
  if(__t_errcode){
  goto __t_failure;
  }
  at__t2171t(v2,i,&__t2221t__);
  add__t153t(value,__t2221t__,&__t2222t__);
  if(!__t2220t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2220t__,&__t2222t__,8);
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5964t=FLOATS__buf__unsafe_ptr;
  *__t5965t=FLOATS__buf__unsafe_size;
  *__t5966t=FLOATS__buf__unsafe_offset;
  *__t5967t=FLOATS__buf__unsafe_align;
  *__t5968t=FLOATS__pos;
  *__t5969t=v__unsafe_ptr;
  *__t5970t=v__pos;
  *__t5971t=v__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t2172t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, double* __t5972t) {
  char* __t2173t__=0;
  double __t2174t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t2173t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t2173t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t2174t__value,__t2173t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5972t=__t2174t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

int add__t2200t(char** __t5973t, uint64_t* __t5974t, uint16_t* __t5975t, uint16_t* __t5976t, uint64_t* __t5977t, char* v1__unsafe_ptr, uint64_t v1__pos, uint64_t v1__length, char* v2__unsafe_ptr, uint64_t v2__pos, uint64_t v2__length, char** __t5978t, uint64_t* __t5979t, uint64_t* __t5980t) {
  char* FLOATS__buf__unsafe_ptr=*__t5973t;
  uint64_t FLOATS__buf__unsafe_size=*__t5974t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5975t;
  uint16_t FLOATS__buf__unsafe_align=*__t5976t;
  uint64_t FLOATS__pos=*__t5977t;
  int __t2201t=0;
  char __t2202t__=0;
  char* __t2204t__unsafe_ptr=0;
  uint64_t __t2204t__pos=0;
  uint64_t __t2204t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  uint64_t __t2205t=0;
  char __t2206t=0;
  char* __t2207t__=0;
  double __t2208t__value=0;
  double value=0;
  uint64_t i=0;
  char* __t2209t__=0;
  double __t2210t__=0;
  double __t2211t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v1__length,v2__length,&__t2202t__);
  if(__t2202t__){
  __t_errcode=37;
  goto __t_failure;
  }
  __t_errcode=vec__t2102t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,v1__length,&__t2204t__unsafe_ptr,&__t2204t__pos,&__t2204t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  v__unsafe_ptr=__t2204t__unsafe_ptr;
  v__pos=__t2204t__pos;
  v__length=__t2204t__length;
  __t2205t=0-1;
  while(1){
  __t2205t=__t2205t+1;
  __t_complain=get__t2165t(v1__unsafe_ptr,v1__pos,v1__length,__t2205t,&__t2207t__);
  __t2206t=__t_complain;
  if(!__t2207t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2208t__value,__t2207t__,8);
  }
  value=__t2208t__value;
  __t2206t=__t2206t==0;
  if(!__t2206t){
  break;
  }
  i=__t2205t;
  __t_errcode=mutget__t2159t(&v__unsafe_ptr,v__pos,v__length,i,&__t2209t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t2172t(v2__unsafe_ptr,v2__pos,v2__length,i,&__t2210t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t153t(value,__t2210t__,&__t2211t__);
  if(!__t2209t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t2209t__,&__t2211t__,8);
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

static inline __attribute__((always_inline)) int transform__t5725t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* x__unsafe_ptr, uint64_t x__pos, uint64_t x__length, double offset, char** __t5981t, uint64_t* __t5982t, uint64_t* __t5983t) {
  char* __t5728t__unsafe_ptr=0;
  uint64_t __t5728t__unsafe_size=0;
  uint16_t __t5728t__unsafe_offset=0;
  uint16_t __t5728t__unsafe_align=0;
  uint64_t __t5729t=0;
  uint64_t __t5730t__=0;
  uint64_t __t5731t__=0;
  char* __t5732t__unsafe_ptr=0;
  uint64_t __t5732t__unsafe_size=0;
  uint16_t __t5732t__unsafe_offset=0;
  uint16_t __t5732t__unsafe_align=0;
  char __t5733t____t692t__=0;
  char* __t5734t__buf__unsafe_ptr=0;
  uint64_t __t5734t__buf__unsafe_size=0;
  uint16_t __t5734t__buf__unsafe_offset=0;
  uint16_t __t5734t__buf__unsafe_align=0;
  uint64_t __t5734t__pos=0;
  char* FLOATS__buf__unsafe_ptr=0;
  uint64_t FLOATS__buf__unsafe_size=0;
  uint16_t FLOATS__buf__unsafe_offset=0;
  uint16_t FLOATS__buf__unsafe_align=0;
  uint64_t FLOATS__pos=0;
  char* __t5735t__unsafe_ptr=0;
  uint64_t __t5735t__pos=0;
  uint64_t __t5735t__length=0;
  char* p0__unsafe_ptr=0;
  uint64_t p0__pos=0;
  uint64_t p0__length=0;
  char* __t5736t__unsafe_ptr=0;
  uint64_t __t5736t__pos=0;
  uint64_t __t5736t__length=0;
  char* __t5737t____t4775t__buf__unsafe_ptr=0;
  uint64_t __t5737t____t4775t__buf__unsafe_size=0;
  uint16_t __t5737t____t4775t__buf__unsafe_offset=0;
  uint16_t __t5737t____t4775t__buf__unsafe_align=0;
  uint64_t __t5737t____t4775t__pos=0;
  char* __t5737t__v__unsafe_ptr=0;
  uint64_t __t5737t__v__pos=0;
  uint64_t __t5737t__v__length=0;
  char* __t5738t__unsafe_ptr=0;
  uint64_t __t5738t__pos=0;
  uint64_t __t5738t__length=0;
  char* p__unsafe_ptr=0;
  uint64_t p__pos=0;
  uint64_t p__length=0;
  char* __t5739t____t4775t__buf__unsafe_ptr=0;
  uint64_t __t5739t____t4775t__buf__unsafe_size=0;
  uint16_t __t5739t____t4775t__buf__unsafe_offset=0;
  uint16_t __t5739t____t4775t__buf__unsafe_align=0;
  uint64_t __t5739t____t4775t__pos=0;
  char* __t5739t__v__unsafe_ptr=0;
  uint64_t __t5739t__v__pos=0;
  uint64_t __t5739t__v__length=0;
  char* __t5740t__unsafe_ptr=0;
  uint64_t __t5740t__pos=0;
  uint64_t __t5740t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t5726t(&__t5728t__unsafe_ptr,&__t5728t__unsafe_size,&__t5728t__unsafe_offset,&__t5728t__unsafe_align);
  __t5729t=3;
  len__t2158t(x__unsafe_ptr,x__pos,x__length,&__t5730t__);
  mul__t199t(__t5729t,__t5730t__,&__t5731t__);
  __t_errcode=alloc__t690t(&__t5728t__unsafe_ptr,&__t5728t__unsafe_size,&__t5728t__unsafe_offset,&__t5728t__unsafe_align,__t5731t__,&__t5732t__unsafe_ptr,&__t5732t__unsafe_size,&__t5732t__unsafe_offset,&__t5732t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t813t(&__t5732t__unsafe_ptr,&__t5732t__unsafe_size,&__t5732t__unsafe_offset,&__t5732t__unsafe_align,&__t5734t__buf__unsafe_ptr,&__t5734t__buf__unsafe_size,&__t5734t__buf__unsafe_offset,&__t5734t__buf__unsafe_align,&__t5734t__pos);
  FLOATS__buf__unsafe_ptr=__t5734t__buf__unsafe_ptr;
  FLOATS__buf__unsafe_size=__t5734t__buf__unsafe_size;
  FLOATS__buf__unsafe_offset=__t5734t__buf__unsafe_offset;
  FLOATS__buf__unsafe_align=__t5734t__buf__unsafe_align;
  FLOATS__pos=__t5734t__pos;
  __t_errcode=copy__t4753t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,x__unsafe_ptr,x__pos,x__length,&__t5735t__unsafe_ptr,&__t5735t__pos,&__t5735t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p0__unsafe_ptr=__t5735t__unsafe_ptr;
  p0__pos=__t5735t__pos;
  p0__length=__t5735t__length;
  __t_errcode=mul__t4946t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,x__unsafe_ptr,x__pos,x__length,&__t5736t__unsafe_ptr,&__t5736t__pos,&__t5736t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  self__t4774t(&__t5736t__unsafe_ptr,__t5736t__pos,__t5736t__length,&__t5737t____t4775t__buf__unsafe_ptr,&__t5737t____t4775t__buf__unsafe_size,&__t5737t____t4775t__buf__unsafe_offset,&__t5737t____t4775t__buf__unsafe_align,&__t5737t____t4775t__pos,&__t5737t__v__unsafe_ptr,&__t5737t__v__pos,&__t5737t__v__length);
  __t_errcode=add__t2212t(&__t5737t____t4775t__buf__unsafe_ptr,&__t5737t____t4775t__buf__unsafe_size,&__t5737t____t4775t__buf__unsafe_offset,&__t5737t____t4775t__buf__unsafe_align,&__t5737t____t4775t__pos,__t5737t__v__unsafe_ptr,__t5737t__v__pos,__t5737t__v__length,offset,&__t5738t__unsafe_ptr,&__t5738t__pos,&__t5738t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5738t__unsafe_ptr;
  p__pos=__t5738t__pos;
  p__length=__t5738t__length;
  self__t4774t(&p0__unsafe_ptr,p0__pos,p0__length,&__t5739t____t4775t__buf__unsafe_ptr,&__t5739t____t4775t__buf__unsafe_size,&__t5739t____t4775t__buf__unsafe_offset,&__t5739t____t4775t__buf__unsafe_align,&__t5739t____t4775t__pos,&__t5739t__v__unsafe_ptr,&__t5739t__v__pos,&__t5739t__v__length);
  __t_errcode=add__t2200t(&__t5739t____t4775t__buf__unsafe_ptr,&__t5739t____t4775t__buf__unsafe_size,&__t5739t____t4775t__buf__unsafe_offset,&__t5739t____t4775t__buf__unsafe_align,&__t5739t____t4775t__pos,__t5739t__v__unsafe_ptr,__t5739t__v__pos,__t5739t__v__length,p__unsafe_ptr,p__pos,p__length,&__t5740t__unsafe_ptr,&__t5740t__pos,&__t5740t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  p__unsafe_ptr=__t5740t__unsafe_ptr;
  p__pos=__t5740t__pos;
  p__length=__t5740t__length;
  goto __t_return;
  
  __t_failure:exists__t591t(p__unsafe_ptr,&__t5733t____t692t__);
  if(__t5733t____t692t__){
  free__t661t(&p__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5981t=p__unsafe_ptr;
  *__t5982t=p__pos;
  *__t5983t=p__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int test__t5755t(char** __t5984t, uint64_t* __t5985t, uint64_t* __t5986t) {
  double __t5756t=0;
  double __t5761t=0;
  double __t5762t=0;
  double __t5763t=0;
  char* __t5764t__unsafe_ptr=0;
  uint64_t __t5764t__unsafe_size=0;
  uint16_t __t5764t__unsafe_offset=0;
  uint16_t __t5764t__unsafe_align=0;
  uint64_t __t5765t=0;
  char* __t5766t__unsafe_ptr=0;
  uint64_t __t5766t__unsafe_size=0;
  uint16_t __t5766t__unsafe_offset=0;
  uint16_t __t5766t__unsafe_align=0;
  char __t5767t____t692t__=0;
  uint64_t __t5768t=0;
  char* __t5769t__unsafe_ptr=0;
  uint64_t __t5769t__pos=0;
  uint64_t __t5769t__rows=0;
  uint64_t __t5769t__cols=0;
  uint64_t __t5769t__stride=0;
  char* m__unsafe_ptr=0;
  uint64_t m__pos=0;
  uint64_t m__rows=0;
  uint64_t m__cols=0;
  uint64_t m__stride=0;
  double __t5770t=0;
  double __t5775t=0;
  char* __t5776t__unsafe_ptr=0;
  uint64_t __t5776t__unsafe_size=0;
  uint16_t __t5776t__unsafe_offset=0;
  uint16_t __t5776t__unsafe_align=0;
  uint64_t __t5777t=0;
  char* __t5778t__unsafe_ptr=0;
  uint64_t __t5778t__unsafe_size=0;
  uint16_t __t5778t__unsafe_offset=0;
  uint16_t __t5778t__unsafe_align=0;
  char __t5779t____t692t__=0;
  char* __t5780t__unsafe_ptr=0;
  uint64_t __t5780t__pos=0;
  uint64_t __t5780t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  double __t5781t=0;
  char* __t5782t__unsafe_ptr=0;
  uint64_t __t5782t__pos=0;
  uint64_t __t5782t__length=0;
  char __t5783t____t5733t____t692t__=0;
  char* y__unsafe_ptr=0;
  uint64_t y__pos=0;
  uint64_t y__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t5756t=1.0;
  __t5761t=1.0;
  __t5762t=1.0;
  __t5763t=1.0;
  float____buffer__t5759t(&__t5764t__unsafe_ptr,&__t5764t__unsafe_size,&__t5764t__unsafe_offset,&__t5764t__unsafe_align);
  __t5765t=4;
  __t_errcode=alloc__t690t(&__t5764t__unsafe_ptr,&__t5764t__unsafe_size,&__t5764t__unsafe_offset,&__t5764t__unsafe_align,__t5765t,&__t5766t__unsafe_ptr,&__t5766t__unsafe_size,&__t5766t__unsafe_offset,&__t5766t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5764t__unsafe_ptr,&__t5756t,8);
  memcpy(__t5764t__unsafe_ptr+8,&__t5761t,8);
  memcpy(__t5764t__unsafe_ptr+16,&__t5762t,8);
  memcpy(__t5764t__unsafe_ptr+24,&__t5763t,8);
  __t5768t=2;
  __t_errcode=mat__t4868t(&__t5764t__unsafe_ptr,&__t5764t__unsafe_size,&__t5764t__unsafe_offset,&__t5764t__unsafe_align,__t5768t,&__t5769t__unsafe_ptr,&__t5769t__pos,&__t5769t__rows,&__t5769t__cols,&__t5769t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  m__unsafe_ptr=__t5769t__unsafe_ptr;
  m__pos=__t5769t__pos;
  m__rows=__t5769t__rows;
  m__cols=__t5769t__cols;
  m__stride=__t5769t__stride;
  __t5770t=1.0;
  __t5775t=1.0;
  float____buffer__t5773t(&__t5776t__unsafe_ptr,&__t5776t__unsafe_size,&__t5776t__unsafe_offset,&__t5776t__unsafe_align);
  __t5777t=2;
  __t_errcode=alloc__t690t(&__t5776t__unsafe_ptr,&__t5776t__unsafe_size,&__t5776t__unsafe_offset,&__t5776t__unsafe_align,__t5777t,&__t5778t__unsafe_ptr,&__t5778t__unsafe_size,&__t5778t__unsafe_offset,&__t5778t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5776t__unsafe_ptr,&__t5770t,8);
  memcpy(__t5776t__unsafe_ptr+8,&__t5775t,8);
  __t_errcode=vec__t2082t(&__t5776t__unsafe_ptr,&__t5776t__unsafe_size,&__t5776t__unsafe_offset,&__t5776t__unsafe_align,&__t5780t__unsafe_ptr,&__t5780t__pos,&__t5780t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5780t__unsafe_ptr;
  x__pos=__t5780t__pos;
  x__length=__t5780t__length;
  __t5781t=0.0;
  __t_errcode=transform__t5725t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,x__unsafe_ptr,x__pos,x__length,__t5781t,&__t5782t__unsafe_ptr,&__t5782t__pos,&__t5782t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  y__unsafe_ptr=__t5782t__unsafe_ptr;
  y__pos=__t5782t__pos;
  y__length=__t5782t__length;
  goto __t_return;
  
  __t_failure:exists__t591t(y__unsafe_ptr,&__t5783t____t5733t____t692t__);
  if(__t5783t____t5733t____t692t__){
  free__t661t(&y__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5984t=y__unsafe_ptr;
  *__t5985t=y__pos;
  *__t5986t=y__length;
  
  __t_skip_returns:exists__t591t(__t5778t__unsafe_ptr,&__t5779t____t692t__);
  if(__t5779t____t692t__){
  free__t661t(&__t5778t__unsafe_ptr);
  }
  exists__t591t(__t5766t__unsafe_ptr,&__t5767t____t692t__);
  if(__t5767t____t692t__){
  free__t661t(&__t5766t__unsafe_ptr);
  }
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5987t, const char** __t5988t) {
  goto __t_return;
  __t_return:
  *__t5987t=value;
  *__t5988t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5989t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5989t=z;
}

static inline __attribute__((always_inline)) int get__t636t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5990t) {
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
  *__t5990t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5991t, const char** __t5992t) {
  goto __t_return;
  __t_return:
  *__t5991t=value;
  *__t5992t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5993t) {
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
  *__t5993t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t4726t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4727t=0;
  const char* endl=0;
  const char* __t4728t__value=0;
  const char* __t4728t____t374t=0;
  uint64_t __t4730t=0;
  uint64_t __t4731t____t613t=0;
  uint64_t __t4731t__to=0;
  uint64_t __t4732t__from=0;
  uint64_t __t4732t__to=0;
  char __t4733t=0;
  uint64_t __t4734t__=0;
  uint64_t i=0;
  char* __t4735t__=0;
  double __t4736t__value=0;
  double __t4737t__value=0;
  const char* __t4737t____t374t=0;
  uint64_t __t4739t=0;
  uint64_t __t4740t__=0;
  char __t4741t__=0;
  const char* __t4742t__value=0;
  const char* __t4742t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4706t,&__t4728t__value,&__t4728t____t374t);
  print__t378t(__t4728t__value,__t4728t____t374t);
  of__t612t(v__length,&__t4731t____t613t,&__t4731t__to);
  range__t629t(__t4731t____t613t,__t4731t__to,&__t4732t__from,&__t4732t__to);
  __t4730t=0-1;
  while(1){
  __t4730t=__t4730t+1;
  __t_complain=get__t636t(__t4732t__from,__t4732t__to,__t4730t,&__t4734t__);
  __t4733t=__t_complain;
  i=__t4734t__;
  __t4733t=__t4733t==0;
  if(!__t4733t){
  break;
  }
  __t_errcode=get__t2165t(v__unsafe_ptr,v__pos,v__length,i,&__t4735t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4735t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4736t__value,__t4735t__,8);
  nn__t375t(__t4736t__value,&__t4737t__value,&__t4737t____t374t);
  print__t383t(__t4737t__value,__t4737t____t374t);
  __t4739t=1;
  __t_errcode=sub__t352t(v__length,__t4739t,&__t4740t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4740t__,&__t4741t__);
  if(__t4741t__){
  nn__t373t(__t4721t,&__t4742t__value,&__t4742t____t374t);
  print__t378t(__t4742t__value,__t4742t____t374t);
  }
  }
  print__t378t(__t4724t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5784t() {
  char* __t5786t__unsafe_ptr=0;
  uint64_t __t5786t__pos=0;
  uint64_t __t5786t__length=0;
  char __t5787t____t5783t____t5733t____t692t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  __t_errcode=test__t5755t(&__t5786t__unsafe_ptr,&__t5786t__pos,&__t5786t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4726t(__t5786t__unsafe_ptr,__t5786t__pos,__t5786t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t591t(__t5786t__unsafe_ptr,&__t5787t____t5783t____t5733t____t692t__);
  if(__t5787t____t5783t____t5733t____t692t__){
  free__t661t(&__t5786t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5784t();return 0;}