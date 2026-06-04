#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4802t="[ ";
const char* const __t5210t="⎡ ";
const char* const __t5869t="a*b";
const char* const __t374t="";
const char* const __t5260t=" ⎥";
const char* const __t4819t=" ]";
const char* const __t5249t=" ⎤";
const char* const __t5830t="a*x";
const char* const __t4816t="  ";
const char* const __t5847t="u*a";
const char* const __t5229t="⎣ ";
const char* const __t5221t="⎢ ";
const char* const __t382t="\n";
const char* const __t5268t=" ⎦";
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

static inline __attribute__((always_inline)) void float____buffer__t5801t(char** __t5874t, uint64_t* __t5875t, uint16_t* __t5876t, uint16_t* __t5877t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5874t=unsafe_ptr;
  *__t5875t=unsafe_size;
  *__t5876t=unsafe_offset;
  *__t5877t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5878t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5878t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5879t) {
  char* allocated=*__t5879t;
  if(allocated){
  free(allocated);
  }
  *__t5879t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5880t) {
  int value=0;
  *__t5880t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5881t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5881t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5882t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5882t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5883t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5883t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5884t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5884t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5885t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5885t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5886t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5886t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5887t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5887t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5888t) {
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
  *__t5888t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5889t, uint64_t* __t5890t, uint16_t* __t5891t, uint16_t* __t5892t, uint64_t size, char** __t5893t, uint64_t* __t5894t, uint16_t* __t5895t, uint16_t* __t5896t) {
  char* buffer__unsafe_ptr=*__t5889t;
  uint64_t buffer__unsafe_size=*__t5890t;
  uint16_t buffer__unsafe_offset=*__t5891t;
  uint16_t buffer__unsafe_align=*__t5892t;
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
  *__t5889t=buffer__unsafe_ptr;
  *__t5890t=buffer__unsafe_size;
  *__t5891t=buffer__unsafe_offset;
  *__t5892t=buffer__unsafe_align;
  *__t5893t=buffer__unsafe_ptr;
  *__t5894t=buffer__unsafe_size;
  *__t5895t=buffer__unsafe_offset;
  *__t5896t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5897t) {
  goto __t_return;
  __t_return:
  *__t5897t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5898t) {
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
  *__t5898t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t5899t, uint64_t* __t5900t, uint16_t* __t5901t, uint16_t* __t5902t, uint64_t _pos, char** __t5903t, uint64_t* __t5904t, uint16_t* __t5905t, uint16_t* __t5906t, uint64_t* __t5907t) {
  char* buf__unsafe_ptr=*__t5899t;
  uint64_t buf__unsafe_size=*__t5900t;
  uint16_t buf__unsafe_offset=*__t5901t;
  uint16_t buf__unsafe_align=*__t5902t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t5899t=buf__unsafe_ptr;
  *__t5900t=buf__unsafe_size;
  *__t5901t=buf__unsafe_offset;
  *__t5902t=buf__unsafe_align;
  *__t5903t=buf__unsafe_ptr;
  *__t5904t=buf__unsafe_size;
  *__t5905t=buf__unsafe_offset;
  *__t5906t=buf__unsafe_align;
  *__t5907t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t5908t, uint64_t* __t5909t, uint16_t* __t5910t, uint16_t* __t5911t, char** __t5912t, uint64_t* __t5913t, uint16_t* __t5914t, uint16_t* __t5915t, uint64_t* __t5916t) {
  char* buf__unsafe_ptr=*__t5908t;
  uint64_t buf__unsafe_size=*__t5909t;
  uint16_t buf__unsafe_offset=*__t5910t;
  uint16_t buf__unsafe_align=*__t5911t;
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
  *__t5908t=buf__unsafe_ptr;
  *__t5909t=buf__unsafe_size;
  *__t5910t=buf__unsafe_offset;
  *__t5911t=buf__unsafe_align;
  *__t5912t=__t657t__buf__unsafe_ptr;
  *__t5913t=__t657t__buf__unsafe_size;
  *__t5914t=__t657t__buf__unsafe_offset;
  *__t5915t=__t657t__buf__unsafe_align;
  *__t5916t=__t657t__pos;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5917t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5917t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5918t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5918t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5919t, uint64_t* __t5920t, uint16_t* __t5921t, uint16_t* __t5922t, uint64_t pos, char** __t5923t, uint64_t* __t5924t, uint16_t* __t5925t, uint16_t* __t5926t, uint64_t* __t5927t) {
  char* buf__unsafe_ptr=*__t5919t;
  uint64_t buf__unsafe_size=*__t5920t;
  uint16_t buf__unsafe_offset=*__t5921t;
  uint16_t buf__unsafe_align=*__t5922t;
  goto __t_return;
  __t_return:
  *__t5919t=buf__unsafe_ptr;
  *__t5920t=buf__unsafe_size;
  *__t5921t=buf__unsafe_offset;
  *__t5922t=buf__unsafe_align;
  *__t5923t=buf__unsafe_ptr;
  *__t5924t=buf__unsafe_size;
  *__t5925t=buf__unsafe_offset;
  *__t5926t=buf__unsafe_align;
  *__t5927t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t5928t, uint64_t* __t5929t, uint16_t* __t5930t, uint16_t* __t5931t, uint64_t* __t5932t, uint64_t length, char** __t5933t, uint64_t* __t5934t, uint16_t* __t5935t, uint16_t* __t5936t, uint64_t* __t5937t) {
  char* allocator__buf__unsafe_ptr=*__t5928t;
  uint64_t allocator__buf__unsafe_size=*__t5929t;
  uint16_t allocator__buf__unsafe_offset=*__t5930t;
  uint16_t allocator__buf__unsafe_align=*__t5931t;
  uint64_t allocator__pos=*__t5932t;
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
  *__t5928t=allocator__buf__unsafe_ptr;
  *__t5929t=allocator__buf__unsafe_size;
  *__t5930t=allocator__buf__unsafe_offset;
  *__t5931t=allocator__buf__unsafe_align;
  *__t5932t=allocator__pos;
  *__t5933t=__t692t__buf__unsafe_ptr;
  *__t5934t=__t692t__buf__unsafe_size;
  *__t5935t=__t692t__buf__unsafe_offset;
  *__t5936t=__t692t__buf__unsafe_align;
  *__t5937t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t1875t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5938t, uint64_t* __t5939t, uint64_t* __t5940t, uint64_t* __t5941t, uint64_t* __t5942t) {
  char* __t1877t__unsafe_ptr=0;
  uint64_t __t1877t__pos=0;
  uint64_t __t1877t__rows=0;
  uint64_t __t1877t__cols=0;
  uint64_t __t1877t__stride=0;
  __t1877t__unsafe_ptr=unsafe_ptr;
  __t1877t__pos=pos;
  __t1877t__rows=rows;
  __t1877t__cols=cols;
  __t1877t__stride=stride;
  goto __t_return;
  __t_return:
  *__t5938t=__t1877t__unsafe_ptr;
  *__t5939t=__t1877t__pos;
  *__t5940t=__t1877t__rows;
  *__t5941t=__t1877t__cols;
  *__t5942t=__t1877t__stride;
}

int mat__t4914t(char** __t5943t, uint64_t* __t5944t, uint16_t* __t5945t, uint16_t* __t5946t, uint64_t* __t5947t, uint64_t rows, uint64_t cols, char** __t5948t, uint64_t* __t5949t, uint64_t* __t5950t, uint64_t* __t5951t, uint64_t* __t5952t) {
  char* FLOATS__buf__unsafe_ptr=*__t5943t;
  uint64_t FLOATS__buf__unsafe_size=*__t5944t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5945t;
  uint16_t FLOATS__buf__unsafe_align=*__t5946t;
  uint64_t FLOATS__pos=*__t5947t;
  uint64_t __t4915t__=0;
  uint64_t __t4916t=0;
  char __t4917t__=0;
  uint64_t __t4918t__=0;
  uint64_t __t4919t=0;
  char __t4920t__=0;
  uint64_t __t4921t__=0;
  uint64_t size=0;
  char* __t4922t__buf__unsafe_ptr=0;
  uint64_t __t4922t__buf__unsafe_size=0;
  uint16_t __t4922t__buf__unsafe_offset=0;
  uint16_t __t4922t__buf__unsafe_align=0;
  uint64_t __t4922t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t4923t=0;
  uint64_t __t4924t=0;
  uint64_t __t4925t__=0;
  uint64_t __t4926t=0;
  uint64_t __t4927t__=0;
  uint64_t __t4928t__=0;
  char* __t4930t__unsafe_ptr=0;
  uint64_t __t4930t__pos=0;
  uint64_t __t4930t__rows=0;
  uint64_t __t4930t__cols=0;
  uint64_t __t4930t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t4915t__);
  __t4916t=8;
  neq__t144t(__t4915t__,__t4916t,&__t4917t__);
  if(__t4917t__){
  __t_errcode=38;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t4918t__);
  __t4919t=0;
  neq__t144t(__t4918t__,__t4919t,&__t4920t__);
  if(__t4920t__){
  __t_errcode=39;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4921t__);
  size=__t4921t__;
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t4922t__buf__unsafe_ptr,&__t4922t__buf__unsafe_size,&__t4922t__buf__unsafe_offset,&__t4922t__buf__unsafe_align,&__t4922t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t4922t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t4922t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t4922t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t4922t__buf__unsafe_align;
  surface__pos=__t4922t__pos;
  __t4924t=8;
  mul__t199t(__t4924t,surface__pos,&__t4925t__);
  __t4926t=8;
  add__t175t(surface__pos,size,&__t4927t__);
  mul__t199t(__t4926t,__t4927t__,&__t4928t__);
  zero__t504t(surface__buf__unsafe_ptr,__t4925t__,__t4928t__);
  mat__t1875t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t4930t__unsafe_ptr,&__t4930t__pos,&__t4930t__rows,&__t4930t__cols,&__t4930t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5943t=FLOATS__buf__unsafe_ptr;
  *__t5944t=FLOATS__buf__unsafe_size;
  *__t5945t=FLOATS__buf__unsafe_offset;
  *__t5946t=FLOATS__buf__unsafe_align;
  *__t5947t=FLOATS__pos;
  *__t5948t=__t4930t__unsafe_ptr;
  *__t5949t=__t4930t__pos;
  *__t5950t=__t4930t__rows;
  *__t5951t=__t4930t__cols;
  *__t5952t=__t4930t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t4967t(char** __t5953t, uint64_t* __t5954t, uint16_t* __t5955t, uint16_t* __t5956t, uint64_t rows, char** __t5957t, uint64_t* __t5958t, uint64_t* __t5959t, uint64_t* __t5960t, uint64_t* __t5961t) {
  char* buf__unsafe_ptr=*__t5953t;
  uint64_t buf__unsafe_size=*__t5954t;
  uint16_t buf__unsafe_offset=*__t5955t;
  uint16_t buf__unsafe_align=*__t5956t;
  uint64_t __t4968t__=0;
  uint64_t __t4969t__=0;
  uint64_t cols=0;
  uint64_t __t4970t__=0;
  uint64_t __t4971t__=0;
  char __t4972t__=0;
  char* __t4973t__buf__unsafe_ptr=0;
  uint64_t __t4973t__buf__unsafe_size=0;
  uint16_t __t4973t__buf__unsafe_offset=0;
  uint16_t __t4973t__buf__unsafe_align=0;
  uint64_t __t4973t__pos=0;
  char* __t4974t__unsafe_ptr=0;
  uint64_t __t4974t__pos=0;
  uint64_t __t4974t__rows=0;
  uint64_t __t4974t__cols=0;
  uint64_t __t4974t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4968t__);
  __t_errcode=div__t225t(__t4968t__,rows,&__t4969t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4969t__;
  mul__t199t(cols,rows,&__t4970t__);
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4971t__);
  neq__t144t(__t4970t__,__t4971t__,&__t4972t__);
  if(__t4972t__){
  __t_errcode=40;
  goto __t_failure;
  }
  arena__t655t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4973t__buf__unsafe_ptr,&__t4973t__buf__unsafe_size,&__t4973t__buf__unsafe_offset,&__t4973t__buf__unsafe_align,&__t4973t__pos);
  __t_errcode=mat__t4914t(&__t4973t__buf__unsafe_ptr,&__t4973t__buf__unsafe_size,&__t4973t__buf__unsafe_offset,&__t4973t__buf__unsafe_align,&__t4973t__pos,rows,cols,&__t4974t__unsafe_ptr,&__t4974t__pos,&__t4974t__rows,&__t4974t__cols,&__t4974t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5953t=buf__unsafe_ptr;
  *__t5954t=buf__unsafe_size;
  *__t5955t=buf__unsafe_offset;
  *__t5956t=buf__unsafe_align;
  *__t5957t=__t4974t__unsafe_ptr;
  *__t5958t=__t4974t__pos;
  *__t5959t=__t4974t__rows;
  *__t5960t=__t4974t__cols;
  *__t5961t=__t4974t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5962t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5962t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5963t) {
  *__t5963t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5964t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5964t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t4975t(char** __t5965t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5966t) {
  char* m__unsafe_ptr=*__t5965t;
  char __t4976t__=0;
  char __t4977t__=0;
  uint64_t __t4978t=0;
  uint64_t __t4979t__=0;
  uint64_t __t4980t__=0;
  uint64_t __t4981t__=0;
  uint64_t __t4982t__=0;
  char* __t4983t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4976t__);
  if(__t4976t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4977t__);
  if(__t4977t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4978t=8;
  mul__t199t(i,m__stride,&__t4979t__);
  add__t175t(__t4979t__,j,&__t4980t__);
  add__t175t(m__pos,__t4980t__,&__t4981t__);
  mul__t199t(__t4978t,__t4981t__,&__t4982t__);
  add__t505t(m__unsafe_ptr,__t4982t__,&__t4983t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5965t=m__unsafe_ptr;
  *__t5966t=__t4983t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5821t(char** __t5967t, uint64_t* __t5968t, uint16_t* __t5969t, uint16_t* __t5970t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5967t=unsafe_ptr;
  *__t5968t=unsafe_size;
  *__t5969t=unsafe_offset;
  *__t5970t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1872t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5971t, uint64_t* __t5972t, uint64_t* __t5973t) {
  char* __t1874t__unsafe_ptr=0;
  uint64_t __t1874t__pos=0;
  uint64_t __t1874t__length=0;
  __t1874t__unsafe_ptr=unsafe_ptr;
  __t1874t__pos=pos;
  __t1874t__length=length;
  goto __t_return;
  __t_return:
  *__t5971t=__t1874t__unsafe_ptr;
  *__t5972t=__t1874t__pos;
  *__t5973t=__t1874t__length;
}

static inline __attribute__((always_inline)) int vec__t1915t(char** __t5974t, uint64_t* __t5975t, uint16_t* __t5976t, uint16_t* __t5977t, char** __t5978t, uint64_t* __t5979t, uint64_t* __t5980t) {
  char* buf__unsafe_ptr=*__t5974t;
  uint64_t buf__unsafe_size=*__t5975t;
  uint16_t buf__unsafe_offset=*__t5976t;
  uint16_t buf__unsafe_align=*__t5977t;
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
  *__t5974t=buf__unsafe_ptr;
  *__t5975t=buf__unsafe_size;
  *__t5976t=buf__unsafe_offset;
  *__t5977t=buf__unsafe_align;
  *__t5978t=__t1924t__unsafe_ptr;
  *__t5979t=__t1924t__pos;
  *__t5980t=__t1924t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5981t, const char** __t5982t) {
  goto __t_return;
  __t_return:
  *__t5981t=value;
  *__t5982t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1883t(char** __t5983t, uint64_t* __t5984t, uint16_t* __t5985t, uint16_t* __t5986t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5983t=unsafe_ptr;
  *__t5984t=unsafe_size;
  *__t5985t=unsafe_offset;
  *__t5986t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5987t, uint64_t* __t5988t, uint16_t* __t5989t, uint16_t* __t5990t, uint64_t size, char** __t5991t, uint64_t* __t5992t, uint16_t* __t5993t, uint16_t* __t5994t) {
  char* buffer__unsafe_ptr=*__t5987t;
  uint64_t buffer__unsafe_size=*__t5988t;
  uint16_t buffer__unsafe_offset=*__t5989t;
  uint16_t buffer__unsafe_align=*__t5990t;
  int __t514t=0;
  char __t515t__=0;
  char __t517t__=0;
  uint64_t __t518t=0;
  char __t519t__=0;
  uint64_t __t520t=0;
  uint64_t __t521t__=0;
  uint64_t __t522t__=0;
  uint64_t __t524t=0;
  char __t525t__=0;
  uint64_t __t526t__=0;
  uint64_t __t527t__=0;
  uint64_t bytes=0;
  uint64_t __t528t=0;
  char __t529t__=0;
  char* __t530t__=0;
  int __t531t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t120t(buffer__unsafe_size,size,&__t517t__);
  if(__t517t__){
  __t518t=0;
  neq__t144t(size,__t518t,&__t519t__);
  if(__t519t__){
  __t520t=0;
  nat__t507t(buffer__unsafe_align,&__t521t__);
  mul__t199t(__t521t__,size,&__t522t__);
  zero__t504t(buffer__unsafe_ptr,__t520t,__t522t__);
  }
  goto __t_return;
  }
  __t524t=0;
  neq__t144t(buffer__unsafe_size,__t524t,&__t525t__);
  if(__t525t__){
  __t_errcode=12;
  goto __t_failure;
  }
  nat__t507t(buffer__unsafe_align,&__t526t__);
  mul__t199t(__t526t__,size,&__t527t__);
  bytes=__t527t__;
  __t528t=0;
  eq__t120t(bytes,__t528t,&__t529t__);
  if(__t529t__){
  __t_errcode=13;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t496t(bytes,&__t530t__);
  if(__t_errcode){
  goto __t_failure;
  }
  buffer__unsafe_ptr=__t530t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:exists__t447t(buffer__unsafe_ptr,&__t515t__);
  if(__t515t__){
  free__t503t(&buffer__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5987t=buffer__unsafe_ptr;
  *__t5988t=buffer__unsafe_size;
  *__t5989t=buffer__unsafe_offset;
  *__t5990t=buffer__unsafe_align;
  *__t5991t=buffer__unsafe_ptr;
  *__t5992t=buffer__unsafe_size;
  *__t5993t=buffer__unsafe_offset;
  *__t5994t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1903t(uint64_t length, char** __t5995t, uint64_t* __t5996t, uint64_t* __t5997t) {
  char* __t1904t__unsafe_ptr=0;
  uint64_t __t1904t__unsafe_size=0;
  uint16_t __t1904t__unsafe_offset=0;
  uint16_t __t1904t__unsafe_align=0;
  char* __t1906t__unsafe_ptr=0;
  uint64_t __t1906t__unsafe_size=0;
  uint16_t __t1906t__unsafe_offset=0;
  uint16_t __t1906t__unsafe_align=0;
  char __t1907t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1908t=0;
  uint64_t __t1909t=0;
  uint64_t __t1910t=0;
  uint64_t __t1911t__=0;
  uint64_t __t1913t=0;
  char* __t1914t__unsafe_ptr=0;
  uint64_t __t1914t__pos=0;
  uint64_t __t1914t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1883t(&__t1904t__unsafe_ptr,&__t1904t__unsafe_size,&__t1904t__unsafe_offset,&__t1904t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1904t__unsafe_ptr,&__t1904t__unsafe_size,&__t1904t__unsafe_offset,&__t1904t__unsafe_align,length,&__t1906t__unsafe_ptr,&__t1906t__unsafe_size,&__t1906t__unsafe_offset,&__t1906t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1906t__unsafe_ptr;
  buf__unsafe_size=__t1906t__unsafe_size;
  buf__unsafe_offset=__t1906t__unsafe_offset;
  buf__unsafe_align=__t1906t__unsafe_align;
  __t1909t=0;
  __t1910t=8;
  mul__t199t(__t1910t,length,&__t1911t__);
  zero__t504t(buf__unsafe_ptr,__t1909t,__t1911t__);
  __t1913t=0;
  vec__t1872t(buf__unsafe_ptr,__t1913t,length,&__t1914t__unsafe_ptr,&__t1914t__pos,&__t1914t__length);
  goto __t_return;
  
  __t_failure:exists__t447t(__t1914t__unsafe_ptr,&__t1907t____t515t__);
  if(__t1907t____t515t__){
  free__t503t(&__t1914t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5995t=__t1914t__unsafe_ptr;
  *__t5996t=__t1914t__pos;
  *__t5997t=__t1914t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5998t, uint64_t* __t5999t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5998t=from;
  *__t5999t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t6000t, uint64_t* __t6001t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t6000t=__t473t__from;
  *__t6001t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t6002t, uint64_t r__to, uint64_t* __t6003t) {
  uint64_t r__from=*__t6002t;
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
  *__t6002t=r__from;
  *__t6003t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4984t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t6004t) {
  char __t4985t__=0;
  char __t4986t__=0;
  uint64_t __t4987t=0;
  uint64_t __t4988t__=0;
  uint64_t __t4989t__=0;
  uint64_t __t4990t__=0;
  uint64_t __t4991t__=0;
  char* __t4992t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4985t__);
  if(__t4985t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4986t__);
  if(__t4986t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4987t=8;
  mul__t199t(i,m__stride,&__t4988t__);
  add__t175t(__t4988t__,j,&__t4989t__);
  add__t175t(m__pos,__t4989t__,&__t4990t__);
  mul__t199t(__t4987t,__t4990t__,&__t4991t__);
  add__t505t(m__unsafe_ptr,__t4991t__,&__t4992t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t6004t=__t4992t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1998t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6005t) {
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
  *__t6005t=__t2003t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t6006t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t6006t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t6007t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t6007t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t6008t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t6008t=z;
}

static inline __attribute__((always_inline)) int mutget__t1992t(char** __t6009t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t6010t) {
  char* v__unsafe_ptr=*__t6009t;
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
  *__t6009t=v__unsafe_ptr;
  *__t6010t=__t1997t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5023t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t6011t, uint64_t* __t6012t, uint64_t* __t6013t) {
  char __t5024t__=0;
  char* __t5025t__unsafe_ptr=0;
  uint64_t __t5025t__pos=0;
  uint64_t __t5025t__length=0;
  char __t5026t____t1907t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5027t__from=0;
  uint64_t __t5027t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5028t=0;
  uint64_t __t5029t__=0;
  uint64_t i=0;
  double __t5030t=0;
  double __t5031t=0;
  double acc=0;
  uint64_t __t5032t__from=0;
  uint64_t __t5032t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5033t=0;
  uint64_t __t5034t__=0;
  uint64_t j=0;
  char* __t5035t__=0;
  double __t5036t__value=0;
  char* __t5037t__=0;
  double __t5038t__value=0;
  double __t5039t__=0;
  double __t5040t__=0;
  char* __t5041t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t5024t__);
  if(__t5024t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t1903t(m__rows,&__t5025t__unsafe_ptr,&__t5025t__pos,&__t5025t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5025t__unsafe_ptr;
  result__pos=__t5025t__pos;
  result__length=__t5025t__length;
  range__t471t(m__rows,&__t5027t__from,&__t5027t__to);
  it_i__from=__t5027t__from;
  it_i__to=__t5027t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5029t__);
  __t5028t=__t_complain;
  i=__t5029t__;
  __t5028t=__t5028t==0;
  if(!__t5028t){
  break;
  }
  __t5030t=0.0;
  __t5031t=__t5030t;
  acc=__t5031t;
  range__t471t(m__cols,&__t5032t__from,&__t5032t__to);
  it_j__from=__t5032t__from;
  it_j__to=__t5032t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5034t__);
  __t5033t=__t_complain;
  j=__t5034t__;
  __t5033t=__t5033t==0;
  if(!__t5033t){
  break;
  }
  __t_errcode=get__t4984t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5035t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5035t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5036t__value,__t5035t__,8);
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,j,&__t5037t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5037t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5038t__value,__t5037t__,8);
  mul__t177t(__t5036t__value,__t5038t__value,&__t5039t__);
  add__t153t(acc,__t5039t__,&__t5040t__);
  acc=__t5040t__;
  }
  __t_errcode=mutget__t1992t(&result__unsafe_ptr,result__pos,result__length,i,&__t5041t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5041t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5041t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t5026t____t1907t____t515t__);
  if(__t5026t____t1907t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6011t=result__unsafe_ptr;
  *__t6012t=result__pos;
  *__t6013t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t6014t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t6014t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t6015t) {
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
  *__t6015t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t6016t, const char** __t6017t) {
  goto __t_return;
  __t_return:
  *__t6016t=value;
  *__t6017t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t6018t) {
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
  *__t6018t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t4821t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
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

static inline __attribute__((always_inline)) void float____buffer__t5839t(char** __t6019t, uint64_t* __t6020t, uint16_t* __t6021t, uint16_t* __t6022t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6019t=unsafe_ptr;
  *__t6020t=unsafe_size;
  *__t6021t=unsafe_offset;
  *__t6022t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t5078t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t6023t, uint64_t* __t6024t, uint64_t* __t6025t) {
  char __t5079t__=0;
  char* __t5080t__unsafe_ptr=0;
  uint64_t __t5080t__pos=0;
  uint64_t __t5080t__length=0;
  char __t5081t____t1907t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t5082t__from=0;
  uint64_t __t5082t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5083t=0;
  uint64_t __t5084t__=0;
  uint64_t j=0;
  double __t5085t=0;
  double __t5086t=0;
  double acc=0;
  uint64_t __t5087t__from=0;
  uint64_t __t5087t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5088t=0;
  uint64_t __t5089t__=0;
  uint64_t i=0;
  char* __t5090t__=0;
  double __t5091t__value=0;
  char* __t5092t__=0;
  double __t5093t__value=0;
  double __t5094t__=0;
  double __t5095t__=0;
  char* __t5096t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t5079t__);
  if(__t5079t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t_errcode=vec__t1903t(m__cols,&__t5080t__unsafe_ptr,&__t5080t__pos,&__t5080t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5080t__unsafe_ptr;
  result__pos=__t5080t__pos;
  result__length=__t5080t__length;
  range__t471t(m__cols,&__t5082t__from,&__t5082t__to);
  it_j__from=__t5082t__from;
  it_j__to=__t5082t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5084t__);
  __t5083t=__t_complain;
  j=__t5084t__;
  __t5083t=__t5083t==0;
  if(!__t5083t){
  break;
  }
  __t5085t=0.0;
  __t5086t=__t5085t;
  acc=__t5086t;
  range__t471t(m__rows,&__t5087t__from,&__t5087t__to);
  it_i__from=__t5087t__from;
  it_i__to=__t5087t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5089t__);
  __t5088t=__t_complain;
  i=__t5089t__;
  __t5088t=__t5088t==0;
  if(!__t5088t){
  break;
  }
  __t_errcode=get__t1998t(v__unsafe_ptr,v__pos,v__length,i,&__t5090t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5090t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5091t__value,__t5090t__,8);
  __t_errcode=get__t4984t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5092t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5092t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5093t__value,__t5092t__,8);
  mul__t177t(__t5091t__value,__t5093t__value,&__t5094t__);
  add__t153t(acc,__t5094t__,&__t5095t__);
  acc=__t5095t__;
  }
  __t_errcode=mutget__t1992t(&result__unsafe_ptr,result__pos,result__length,j,&__t5096t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5096t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5096t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t5081t____t1907t____t515t__);
  if(__t5081t____t1907t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6023t=result__unsafe_ptr;
  *__t6024t=result__pos;
  *__t6025t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5856t(char** __t6026t, uint64_t* __t6027t, uint16_t* __t6028t, uint16_t* __t6029t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6026t=unsafe_ptr;
  *__t6027t=unsafe_size;
  *__t6028t=unsafe_offset;
  *__t6029t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t4879t(char** __t6030t, uint64_t* __t6031t, uint16_t* __t6032t, uint16_t* __t6033t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t6030t=unsafe_ptr;
  *__t6031t=unsafe_size;
  *__t6032t=unsafe_offset;
  *__t6033t=unsafe_align;
}

int mat__t4889t(uint64_t rows, uint64_t cols, char** __t6034t, uint64_t* __t6035t, uint64_t* __t6036t, uint64_t* __t6037t, uint64_t* __t6038t) {
  char* __t4890t__unsafe_ptr=0;
  uint64_t __t4890t__unsafe_size=0;
  uint16_t __t4890t__unsafe_offset=0;
  uint16_t __t4890t__unsafe_align=0;
  uint64_t __t4891t__=0;
  char* __t4893t__unsafe_ptr=0;
  uint64_t __t4893t__unsafe_size=0;
  uint16_t __t4893t__unsafe_offset=0;
  uint16_t __t4893t__unsafe_align=0;
  char __t4894t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t4895t=0;
  uint64_t __t4896t=0;
  uint64_t __t4897t=0;
  uint64_t __t4898t__=0;
  uint64_t __t4899t__=0;
  uint64_t __t4901t=0;
  char* __t4902t__unsafe_ptr=0;
  uint64_t __t4902t__pos=0;
  uint64_t __t4902t__rows=0;
  uint64_t __t4902t__cols=0;
  uint64_t __t4902t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t4879t(&__t4890t__unsafe_ptr,&__t4890t__unsafe_size,&__t4890t__unsafe_offset,&__t4890t__unsafe_align);
  mul__t199t(rows,cols,&__t4891t__);
  __t_errcode=alloc__t513t(&__t4890t__unsafe_ptr,&__t4890t__unsafe_size,&__t4890t__unsafe_offset,&__t4890t__unsafe_align,__t4891t__,&__t4893t__unsafe_ptr,&__t4893t__unsafe_size,&__t4893t__unsafe_offset,&__t4893t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t4893t__unsafe_ptr;
  buf__unsafe_size=__t4893t__unsafe_size;
  buf__unsafe_offset=__t4893t__unsafe_offset;
  buf__unsafe_align=__t4893t__unsafe_align;
  __t4896t=0;
  __t4897t=8;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4898t__);
  mul__t199t(__t4897t,__t4898t__,&__t4899t__);
  zero__t504t(buf__unsafe_ptr,__t4896t,__t4899t__);
  __t4901t=0;
  mat__t1875t(buf__unsafe_ptr,__t4901t,rows,cols,cols,&__t4902t__unsafe_ptr,&__t4902t__pos,&__t4902t__rows,&__t4902t__cols,&__t4902t__stride);
  goto __t_return;
  
  __t_failure:exists__t447t(__t4902t__unsafe_ptr,&__t4894t____t515t__);
  if(__t4894t____t515t__){
  free__t503t(&__t4902t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6034t=__t4902t__unsafe_ptr;
  *__t6035t=__t4902t__pos;
  *__t6036t=__t4902t__rows;
  *__t6037t=__t4902t__cols;
  *__t6038t=__t4902t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t5133t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t6039t, uint64_t* __t6040t, uint64_t* __t6041t, uint64_t* __t6042t, uint64_t* __t6043t) {
  char __t5134t__=0;
  char* __t5135t__unsafe_ptr=0;
  uint64_t __t5135t__pos=0;
  uint64_t __t5135t__rows=0;
  uint64_t __t5135t__cols=0;
  uint64_t __t5135t__stride=0;
  char __t5136t____t4894t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t5137t__from=0;
  uint64_t __t5137t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5138t=0;
  uint64_t __t5139t__=0;
  uint64_t i=0;
  uint64_t __t5140t__from=0;
  uint64_t __t5140t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5141t=0;
  uint64_t __t5142t__=0;
  uint64_t j=0;
  double __t5143t=0;
  double __t5144t=0;
  double acc=0;
  uint64_t __t5145t__from=0;
  uint64_t __t5145t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t5146t=0;
  uint64_t __t5147t__=0;
  uint64_t k=0;
  char* __t5148t__=0;
  double __t5149t__value=0;
  char* __t5150t__=0;
  double __t5151t__value=0;
  double __t5152t__=0;
  double __t5153t__=0;
  char* __t5154t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t5134t__);
  if(__t5134t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=mat__t4889t(m1__rows,m2__cols,&__t5135t__unsafe_ptr,&__t5135t__pos,&__t5135t__rows,&__t5135t__cols,&__t5135t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t5135t__unsafe_ptr;
  result__pos=__t5135t__pos;
  result__rows=__t5135t__rows;
  result__cols=__t5135t__cols;
  result__stride=__t5135t__stride;
  range__t471t(m1__rows,&__t5137t__from,&__t5137t__to);
  it_i__from=__t5137t__from;
  it_i__to=__t5137t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5139t__);
  __t5138t=__t_complain;
  i=__t5139t__;
  __t5138t=__t5138t==0;
  if(!__t5138t){
  break;
  }
  range__t471t(m2__cols,&__t5140t__from,&__t5140t__to);
  it_j__from=__t5140t__from;
  it_j__to=__t5140t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5142t__);
  __t5141t=__t_complain;
  j=__t5142t__;
  __t5141t=__t5141t==0;
  if(!__t5141t){
  break;
  }
  __t5143t=0.0;
  __t5144t=__t5143t;
  acc=__t5144t;
  range__t471t(m1__cols,&__t5145t__from,&__t5145t__to);
  it_k__from=__t5145t__from;
  it_k__to=__t5145t__to;
  while(1){
  __t_complain=next__t474t(&it_k__from,it_k__to,&__t5147t__);
  __t5146t=__t_complain;
  k=__t5147t__;
  __t5146t=__t5146t==0;
  if(!__t5146t){
  break;
  }
  __t_errcode=get__t4984t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t5148t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5148t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5149t__value,__t5148t__,8);
  __t_errcode=get__t4984t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t5150t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5150t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5151t__value,__t5150t__,8);
  mul__t177t(__t5149t__value,__t5151t__value,&__t5152t__);
  add__t153t(acc,__t5152t__,&__t5153t__);
  acc=__t5153t__;
  }
  __t_errcode=mutget__t4975t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t5154t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5154t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5154t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t5136t____t4894t____t515t__);
  if(__t5136t____t4894t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t6039t=result__unsafe_ptr;
  *__t6040t=result__pos;
  *__t6041t=result__rows;
  *__t6042t=result__cols;
  *__t6043t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5271t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5272t=0;
  const char* endl=0;
  uint64_t __t5273t__from=0;
  uint64_t __t5273t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5274t=0;
  uint64_t __t5275t__=0;
  uint64_t i=0;
  uint64_t __t5276t=0;
  char __t5277t__=0;
  uint64_t __t5279t=0;
  char __t5280t__=0;
  uint64_t __t5281t=0;
  char __t5282t__=0;
  char __t5283t=0;
  uint64_t __t5285t=0;
  char __t5286t__=0;
  uint64_t __t5287t=0;
  char __t5288t__=0;
  uint64_t __t5289t=0;
  uint64_t __t5290t__=0;
  char __t5291t__=0;
  char __t5292t=0;
  char __t5293t=0;
  uint64_t __t5295t=0;
  char __t5296t__=0;
  uint64_t __t5297t=0;
  uint64_t __t5298t__=0;
  char __t5299t__=0;
  char __t5300t=0;
  uint64_t __t5302t__from=0;
  uint64_t __t5302t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5303t=0;
  uint64_t __t5304t__=0;
  uint64_t j=0;
  char* __t5305t__=0;
  double __t5306t__value=0;
  uint64_t __t5308t=0;
  uint64_t __t5309t__=0;
  char __t5310t__=0;
  uint64_t __t5312t=0;
  char __t5313t__=0;
  uint64_t __t5315t=0;
  char __t5316t__=0;
  uint64_t __t5317t=0;
  char __t5318t__=0;
  char __t5319t=0;
  uint64_t __t5321t=0;
  char __t5322t__=0;
  uint64_t __t5323t=0;
  char __t5324t__=0;
  uint64_t __t5325t=0;
  uint64_t __t5326t__=0;
  char __t5327t__=0;
  char __t5328t=0;
  char __t5329t=0;
  uint64_t __t5331t=0;
  char __t5332t__=0;
  uint64_t __t5333t=0;
  uint64_t __t5334t__=0;
  char __t5335t__=0;
  char __t5336t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  range__t471t(m__rows,&__t5273t__from,&__t5273t__to);
  it_i__from=__t5273t__from;
  it_i__to=__t5273t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5275t__);
  __t5274t=__t_complain;
  i=__t5275t__;
  __t5274t=__t5274t==0;
  if(!__t5274t){
  break;
  }
  __t5276t=1;
  eq__t120t(m__rows,__t5276t,&__t5277t__);
  if(__t5277t__){
  print__t378t(__t4802t,__t374t);
  }
  __t5279t=1;
  gt__t276t(m__rows,__t5279t,&__t5280t__);
  if(__t5280t__){
  __t5281t=0;
  eq__t120t(i,__t5281t,&__t5282t__);
  __t5283t=__t5282t__;
  }
  {
  __t5283t=0;
  }
  if(__t5283t){
  print__t378t(__t5210t,__t374t);
  }
  __t5285t=1;
  gt__t276t(m__rows,__t5285t,&__t5286t__);
  if(__t5286t__){
  __t5287t=0;
  gt__t276t(i,__t5287t,&__t5288t__);
  if(__t5288t__){
  __t5289t=1;
  __t_errcode=sub__t352t(m__rows,__t5289t,&__t5290t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5290t__,&__t5291t__);
  __t5292t=__t5291t__;
  }
  {
  __t5292t=0;
  }
  __t5293t=__t5292t;
  }
  {
  __t5293t=0;
  }
  if(__t5293t){
  print__t378t(__t5221t,__t374t);
  }
  __t5295t=1;
  gt__t276t(m__rows,__t5295t,&__t5296t__);
  if(__t5296t__){
  __t5297t=1;
  __t_errcode=sub__t352t(m__rows,__t5297t,&__t5298t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5298t__,&__t5299t__);
  __t5300t=__t5299t__;
  }
  {
  __t5300t=0;
  }
  if(__t5300t){
  print__t378t(__t5229t,__t374t);
  }
  range__t471t(m__cols,&__t5302t__from,&__t5302t__to);
  it_j__from=__t5302t__from;
  it_j__to=__t5302t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5304t__);
  __t5303t=__t_complain;
  j=__t5304t__;
  __t5303t=__t5303t==0;
  if(!__t5303t){
  break;
  }
  __t_errcode=get__t4984t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5305t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5305t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5306t__value,__t5305t__,8);
  print__t383t(__t5306t__value,__t374t);
  __t5308t=1;
  __t_errcode=sub__t352t(m__cols,__t5308t,&__t5309t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5309t__,&__t5310t__);
  if(__t5310t__){
  print__t378t(__t4816t,__t374t);
  }
  }
  __t5312t=1;
  eq__t120t(m__rows,__t5312t,&__t5313t__);
  if(__t5313t__){
  print__t378t(__t4819t,__t374t);
  }
  __t5315t=1;
  gt__t276t(m__rows,__t5315t,&__t5316t__);
  if(__t5316t__){
  __t5317t=0;
  eq__t120t(i,__t5317t,&__t5318t__);
  __t5319t=__t5318t__;
  }
  {
  __t5319t=0;
  }
  if(__t5319t){
  print__t378t(__t5249t,__t374t);
  }
  __t5321t=1;
  gt__t276t(m__rows,__t5321t,&__t5322t__);
  if(__t5322t__){
  __t5323t=0;
  gt__t276t(i,__t5323t,&__t5324t__);
  if(__t5324t__){
  __t5325t=1;
  __t_errcode=sub__t352t(m__rows,__t5325t,&__t5326t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5326t__,&__t5327t__);
  __t5328t=__t5327t__;
  }
  {
  __t5328t=0;
  }
  __t5329t=__t5328t;
  }
  {
  __t5329t=0;
  }
  if(__t5329t){
  print__t378t(__t5260t,__t374t);
  }
  __t5331t=1;
  gt__t276t(m__rows,__t5331t,&__t5332t__);
  if(__t5332t__){
  __t5333t=1;
  __t_errcode=sub__t352t(m__rows,__t5333t,&__t5334t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5334t__,&__t5335t__);
  __t5336t=__t5335t__;
  }
  {
  __t5336t=0;
  }
  if(__t5336t){
  print__t378t(__t5268t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5795t() {
  double __t5798t=0;
  double __t5803t=0;
  double __t5804t=0;
  double __t5805t=0;
  double __t5806t=0;
  double __t5807t=0;
  char* __t5808t__unsafe_ptr=0;
  uint64_t __t5808t__unsafe_size=0;
  uint16_t __t5808t__unsafe_offset=0;
  uint16_t __t5808t__unsafe_align=0;
  uint64_t __t5809t=0;
  char* __t5810t__unsafe_ptr=0;
  uint64_t __t5810t__unsafe_size=0;
  uint16_t __t5810t__unsafe_offset=0;
  uint16_t __t5810t__unsafe_align=0;
  char __t5811t____t534t__=0;
  uint64_t __t5812t=0;
  char* __t5813t__unsafe_ptr=0;
  uint64_t __t5813t__pos=0;
  uint64_t __t5813t__rows=0;
  uint64_t __t5813t__cols=0;
  uint64_t __t5813t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t5814t=0;
  uint64_t __t5815t=0;
  char* __t5816t__=0;
  double __t5817t=0;
  double __t5818t=0;
  double __t5823t=0;
  double __t5824t=0;
  char* __t5825t__unsafe_ptr=0;
  uint64_t __t5825t__unsafe_size=0;
  uint16_t __t5825t__unsafe_offset=0;
  uint16_t __t5825t__unsafe_align=0;
  uint64_t __t5826t=0;
  char* __t5827t__unsafe_ptr=0;
  uint64_t __t5827t__unsafe_size=0;
  uint16_t __t5827t__unsafe_offset=0;
  uint16_t __t5827t__unsafe_align=0;
  char __t5828t____t534t__=0;
  char* __t5829t__unsafe_ptr=0;
  uint64_t __t5829t__pos=0;
  uint64_t __t5829t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t5831t__value=0;
  const char* __t5831t____t374t=0;
  char* __t5833t__unsafe_ptr=0;
  uint64_t __t5833t__pos=0;
  uint64_t __t5833t__length=0;
  char __t5834t____t5026t____t1907t____t515t__=0;
  double __t5836t=0;
  double __t5841t=0;
  char* __t5842t__unsafe_ptr=0;
  uint64_t __t5842t__unsafe_size=0;
  uint16_t __t5842t__unsafe_offset=0;
  uint16_t __t5842t__unsafe_align=0;
  uint64_t __t5843t=0;
  char* __t5844t__unsafe_ptr=0;
  uint64_t __t5844t__unsafe_size=0;
  uint16_t __t5844t__unsafe_offset=0;
  uint16_t __t5844t__unsafe_align=0;
  char __t5845t____t534t__=0;
  char* __t5846t__unsafe_ptr=0;
  uint64_t __t5846t__pos=0;
  uint64_t __t5846t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t5848t__value=0;
  const char* __t5848t____t374t=0;
  char* __t5850t__unsafe_ptr=0;
  uint64_t __t5850t__pos=0;
  uint64_t __t5850t__length=0;
  char __t5851t____t5081t____t1907t____t515t__=0;
  double __t5853t=0;
  double __t5858t=0;
  double __t5859t=0;
  double __t5860t=0;
  double __t5861t=0;
  double __t5862t=0;
  char* __t5863t__unsafe_ptr=0;
  uint64_t __t5863t__unsafe_size=0;
  uint16_t __t5863t__unsafe_offset=0;
  uint16_t __t5863t__unsafe_align=0;
  uint64_t __t5864t=0;
  char* __t5865t__unsafe_ptr=0;
  uint64_t __t5865t__unsafe_size=0;
  uint16_t __t5865t__unsafe_offset=0;
  uint16_t __t5865t__unsafe_align=0;
  char __t5866t____t534t__=0;
  uint64_t __t5867t=0;
  char* __t5868t__unsafe_ptr=0;
  uint64_t __t5868t__pos=0;
  uint64_t __t5868t__rows=0;
  uint64_t __t5868t__cols=0;
  uint64_t __t5868t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t5871t__unsafe_ptr=0;
  uint64_t __t5871t__pos=0;
  uint64_t __t5871t__rows=0;
  uint64_t __t5871t__cols=0;
  uint64_t __t5871t__stride=0;
  char __t5872t____t5136t____t4894t____t515t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t648t();
  __t5798t=1.0;
  __t5803t=0.0;
  __t5804t=2.0;
  __t5805t=0.0;
  __t5806t=3.0;
  __t5807t=1.0;
  float____buffer__t5801t(&__t5808t__unsafe_ptr,&__t5808t__unsafe_size,&__t5808t__unsafe_offset,&__t5808t__unsafe_align);
  __t5809t=6;
  __t_errcode=alloc__t532t(&__t5808t__unsafe_ptr,&__t5808t__unsafe_size,&__t5808t__unsafe_offset,&__t5808t__unsafe_align,__t5809t,&__t5810t__unsafe_ptr,&__t5810t__unsafe_size,&__t5810t__unsafe_offset,&__t5810t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5808t__unsafe_ptr,&__t5798t,8);
  memcpy(__t5808t__unsafe_ptr+8,&__t5803t,8);
  memcpy(__t5808t__unsafe_ptr+16,&__t5804t,8);
  memcpy(__t5808t__unsafe_ptr+24,&__t5805t,8);
  memcpy(__t5808t__unsafe_ptr+32,&__t5806t,8);
  memcpy(__t5808t__unsafe_ptr+40,&__t5807t,8);
  __t5812t=2;
  __t_errcode=mat__t4967t(&__t5808t__unsafe_ptr,&__t5808t__unsafe_size,&__t5808t__unsafe_offset,&__t5808t__unsafe_align,__t5812t,&__t5813t__unsafe_ptr,&__t5813t__pos,&__t5813t__rows,&__t5813t__cols,&__t5813t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t5813t__unsafe_ptr;
  a__pos=__t5813t__pos;
  a__rows=__t5813t__rows;
  a__cols=__t5813t__cols;
  a__stride=__t5813t__stride;
  __t5814t=0;
  __t5815t=0;
  __t_errcode=mutget__t4975t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t5814t,__t5815t,&__t5816t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5817t=1.0;
  if(!__t5816t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5816t__,&__t5817t,8);
  __t5818t=1.0;
  __t5823t=2.0;
  __t5824t=3.0;
  float____buffer__t5821t(&__t5825t__unsafe_ptr,&__t5825t__unsafe_size,&__t5825t__unsafe_offset,&__t5825t__unsafe_align);
  __t5826t=3;
  __t_errcode=alloc__t532t(&__t5825t__unsafe_ptr,&__t5825t__unsafe_size,&__t5825t__unsafe_offset,&__t5825t__unsafe_align,__t5826t,&__t5827t__unsafe_ptr,&__t5827t__unsafe_size,&__t5827t__unsafe_offset,&__t5827t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5825t__unsafe_ptr,&__t5818t,8);
  memcpy(__t5825t__unsafe_ptr+8,&__t5823t,8);
  memcpy(__t5825t__unsafe_ptr+16,&__t5824t,8);
  __t_errcode=vec__t1915t(&__t5825t__unsafe_ptr,&__t5825t__unsafe_size,&__t5825t__unsafe_offset,&__t5825t__unsafe_align,&__t5829t__unsafe_ptr,&__t5829t__pos,&__t5829t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5829t__unsafe_ptr;
  x__pos=__t5829t__pos;
  x__length=__t5829t__length;
  nn__t373t(__t5830t,&__t5831t__value,&__t5831t____t374t);
  print__t378t(__t5831t__value,__t5831t____t374t);
  __t_errcode=mul__t5023t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t5833t__unsafe_ptr,&__t5833t__pos,&__t5833t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4821t(__t5833t__unsafe_ptr,__t5833t__pos,__t5833t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5836t=1.0;
  __t5841t=2.0;
  float____buffer__t5839t(&__t5842t__unsafe_ptr,&__t5842t__unsafe_size,&__t5842t__unsafe_offset,&__t5842t__unsafe_align);
  __t5843t=2;
  __t_errcode=alloc__t532t(&__t5842t__unsafe_ptr,&__t5842t__unsafe_size,&__t5842t__unsafe_offset,&__t5842t__unsafe_align,__t5843t,&__t5844t__unsafe_ptr,&__t5844t__unsafe_size,&__t5844t__unsafe_offset,&__t5844t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5842t__unsafe_ptr,&__t5836t,8);
  memcpy(__t5842t__unsafe_ptr+8,&__t5841t,8);
  __t_errcode=vec__t1915t(&__t5842t__unsafe_ptr,&__t5842t__unsafe_size,&__t5842t__unsafe_offset,&__t5842t__unsafe_align,&__t5846t__unsafe_ptr,&__t5846t__pos,&__t5846t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t5846t__unsafe_ptr;
  u__pos=__t5846t__pos;
  u__length=__t5846t__length;
  nn__t373t(__t5847t,&__t5848t__value,&__t5848t____t374t);
  print__t378t(__t5848t__value,__t5848t____t374t);
  __t_errcode=mul__t5078t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t5850t__unsafe_ptr,&__t5850t__pos,&__t5850t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4821t(__t5850t__unsafe_ptr,__t5850t__pos,__t5850t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5853t=1.0;
  __t5858t=2.0;
  __t5859t=3.0;
  __t5860t=4.0;
  __t5861t=5.0;
  __t5862t=6.0;
  float____buffer__t5856t(&__t5863t__unsafe_ptr,&__t5863t__unsafe_size,&__t5863t__unsafe_offset,&__t5863t__unsafe_align);
  __t5864t=6;
  __t_errcode=alloc__t532t(&__t5863t__unsafe_ptr,&__t5863t__unsafe_size,&__t5863t__unsafe_offset,&__t5863t__unsafe_align,__t5864t,&__t5865t__unsafe_ptr,&__t5865t__unsafe_size,&__t5865t__unsafe_offset,&__t5865t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5863t__unsafe_ptr,&__t5853t,8);
  memcpy(__t5863t__unsafe_ptr+8,&__t5858t,8);
  memcpy(__t5863t__unsafe_ptr+16,&__t5859t,8);
  memcpy(__t5863t__unsafe_ptr+24,&__t5860t,8);
  memcpy(__t5863t__unsafe_ptr+32,&__t5861t,8);
  memcpy(__t5863t__unsafe_ptr+40,&__t5862t,8);
  __t5867t=3;
  __t_errcode=mat__t4967t(&__t5863t__unsafe_ptr,&__t5863t__unsafe_size,&__t5863t__unsafe_offset,&__t5863t__unsafe_align,__t5867t,&__t5868t__unsafe_ptr,&__t5868t__pos,&__t5868t__rows,&__t5868t__cols,&__t5868t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t5868t__unsafe_ptr;
  b__pos=__t5868t__pos;
  b__rows=__t5868t__rows;
  b__cols=__t5868t__cols;
  b__stride=__t5868t__stride;
  print__t380t(__t5869t);
  __t_errcode=mul__t5133t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t5871t__unsafe_ptr,&__t5871t__pos,&__t5871t__rows,&__t5871t__cols,&__t5871t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5271t(__t5871t__unsafe_ptr,__t5871t__pos,__t5871t__rows,__t5871t__cols,__t5871t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5871t__unsafe_ptr,&__t5872t____t5136t____t4894t____t515t__);
  if(__t5872t____t5136t____t4894t____t515t__){
  free__t503t(&__t5871t__unsafe_ptr);
  }
  exists__t447t(__t5865t__unsafe_ptr,&__t5866t____t534t__);
  if(__t5866t____t534t__){
  free__t503t(&__t5865t__unsafe_ptr);
  }
  exists__t447t(__t5850t__unsafe_ptr,&__t5851t____t5081t____t1907t____t515t__);
  if(__t5851t____t5081t____t1907t____t515t__){
  free__t503t(&__t5850t__unsafe_ptr);
  }
  exists__t447t(__t5844t__unsafe_ptr,&__t5845t____t534t__);
  if(__t5845t____t534t__){
  free__t503t(&__t5844t__unsafe_ptr);
  }
  exists__t447t(__t5833t__unsafe_ptr,&__t5834t____t5026t____t1907t____t515t__);
  if(__t5834t____t5026t____t1907t____t515t__){
  free__t503t(&__t5833t__unsafe_ptr);
  }
  exists__t447t(__t5827t__unsafe_ptr,&__t5828t____t534t__);
  if(__t5828t____t534t__){
  free__t503t(&__t5827t__unsafe_ptr);
  }
  exists__t447t(__t5810t__unsafe_ptr,&__t5811t____t534t__);
  if(__t5811t____t534t__){
  free__t503t(&__t5810t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5795t();return 0;}