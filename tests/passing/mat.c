#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
#include "std/extern/math.h"
int __t_argc;
char** __t_argv;
const char* const __t4587t=" ]";
const char* const __t5028t=" ⎥";
const char* const __t5598t="a*x";
const char* const __t5036t=" ⎦";
const char* const __t374t="";
const char* const __t5637t="a*b";
const char* const __t5017t=" ⎤";
const char* const __t4997t="⎣ ";
const char* const __t4570t="[ ";
const char* const __t4978t="⎡ ";
const char* const __t4584t="  ";
const char* const __t4989t="⎢ ";
const char* const __t382t="\n";
const char* const __t5615t="u*a";
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

static inline __attribute__((always_inline)) void float____buffer__t5569t(char** __t5642t, uint64_t* __t5643t, uint16_t* __t5644t, uint16_t* __t5645t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5642t=unsafe_ptr;
  *__t5643t=unsafe_size;
  *__t5644t=unsafe_offset;
  *__t5645t=unsafe_align;
}

static inline __attribute__((always_inline)) void exists__t447t(char* x, char* __t5646t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5646t=z;
}

static inline __attribute__((always_inline)) void free__t503t(char** __t5647t) {
  char* allocated=*__t5647t;
  if(allocated){
  free(allocated);
  }
  *__t5647t=allocated;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t5648t) {
  int value=0;
  *__t5648t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t5649t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t5649t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t5650t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t5650t=__t97t__;
}

static inline __attribute__((always_inline)) void eq__t120t(uint64_t x, uint64_t y, char* __t5651t) {
  int __t121t__=0;
  char z=0;
  is_different__t95t(x,y,&__t121t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5651t=z;
}

static inline __attribute__((always_inline)) void neq__t144t(uint64_t x, uint64_t y, char* __t5652t) {
  int __t145t__=0;
  char z=0;
  is_different__t95t(x,y,&__t145t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5652t=z;
}

static inline __attribute__((always_inline)) void nat__t507t(uint16_t x, uint64_t* __t5653t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5653t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t5654t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5654t=z;
}

static inline __attribute__((always_inline)) void zero__t504t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void not__t28t(char value, char* __t5655t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5655t=z;
}

static inline __attribute__((always_inline)) int alloc__t496t(uint64_t bytes, char** __t5656t) {
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
  *__t5656t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t532t(char** __t5657t, uint64_t* __t5658t, uint16_t* __t5659t, uint16_t* __t5660t, uint64_t size, char** __t5661t, uint64_t* __t5662t, uint16_t* __t5663t, uint16_t* __t5664t) {
  char* buffer__unsafe_ptr=*__t5657t;
  uint64_t buffer__unsafe_size=*__t5658t;
  uint16_t buffer__unsafe_offset=*__t5659t;
  uint16_t buffer__unsafe_align=*__t5660t;
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
  *__t5657t=buffer__unsafe_ptr;
  *__t5658t=buffer__unsafe_size;
  *__t5659t=buffer__unsafe_offset;
  *__t5660t=buffer__unsafe_align;
  *__t5661t=buffer__unsafe_ptr;
  *__t5662t=buffer__unsafe_size;
  *__t5663t=buffer__unsafe_offset;
  *__t5664t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t647t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t* __t5665t) {
  goto __t_return;
  __t_return:
  *__t5665t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t225t(uint64_t x, uint64_t y, uint64_t* __t5666t) {
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
  *__t5666t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t652t(char** __t5667t, uint64_t* __t5668t, uint16_t* __t5669t, uint16_t* __t5670t, uint64_t _pos, char** __t5671t, uint64_t* __t5672t, uint16_t* __t5673t, uint16_t* __t5674t, uint64_t* __t5675t) {
  char* buf__unsafe_ptr=*__t5667t;
  uint64_t buf__unsafe_size=*__t5668t;
  uint16_t buf__unsafe_offset=*__t5669t;
  uint16_t buf__unsafe_align=*__t5670t;
  uint64_t __t653t=0;
  uint64_t pos=0;
  __t653t=_pos;
  pos=__t653t;
  goto __t_return;
  __t_return:
  *__t5667t=buf__unsafe_ptr;
  *__t5668t=buf__unsafe_size;
  *__t5669t=buf__unsafe_offset;
  *__t5670t=buf__unsafe_align;
  *__t5671t=buf__unsafe_ptr;
  *__t5672t=buf__unsafe_size;
  *__t5673t=buf__unsafe_offset;
  *__t5674t=buf__unsafe_align;
  *__t5675t=pos;
}

static inline __attribute__((always_inline)) void arena__t655t(char** __t5676t, uint64_t* __t5677t, uint16_t* __t5678t, uint16_t* __t5679t, char** __t5680t, uint64_t* __t5681t, uint16_t* __t5682t, uint16_t* __t5683t, uint64_t* __t5684t) {
  char* buf__unsafe_ptr=*__t5676t;
  uint64_t buf__unsafe_size=*__t5677t;
  uint16_t buf__unsafe_offset=*__t5678t;
  uint16_t buf__unsafe_align=*__t5679t;
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
  *__t5676t=buf__unsafe_ptr;
  *__t5677t=buf__unsafe_size;
  *__t5678t=buf__unsafe_offset;
  *__t5679t=buf__unsafe_align;
  *__t5680t=__t657t__buf__unsafe_ptr;
  *__t5681t=__t657t__buf__unsafe_size;
  *__t5682t=__t657t__buf__unsafe_offset;
  *__t5683t=__t657t__buf__unsafe_align;
  *__t5684t=__t657t__pos;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t5685t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5685t=z;
}

static inline __attribute__((always_inline)) void gt__t276t(uint64_t x, uint64_t y, char* __t5686t) {
  int __t277t__=0;
  char z=0;
  is_different__t95t(x,y,&__t277t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t5686t=z;
}

static inline __attribute__((always_inline)) void allocated__t658t(char** __t5687t, uint64_t* __t5688t, uint16_t* __t5689t, uint16_t* __t5690t, uint64_t pos, char** __t5691t, uint64_t* __t5692t, uint16_t* __t5693t, uint16_t* __t5694t, uint64_t* __t5695t) {
  char* buf__unsafe_ptr=*__t5687t;
  uint64_t buf__unsafe_size=*__t5688t;
  uint16_t buf__unsafe_offset=*__t5689t;
  uint16_t buf__unsafe_align=*__t5690t;
  goto __t_return;
  __t_return:
  *__t5687t=buf__unsafe_ptr;
  *__t5688t=buf__unsafe_size;
  *__t5689t=buf__unsafe_offset;
  *__t5690t=buf__unsafe_align;
  *__t5691t=buf__unsafe_ptr;
  *__t5692t=buf__unsafe_size;
  *__t5693t=buf__unsafe_offset;
  *__t5694t=buf__unsafe_align;
  *__t5695t=pos;
}

static inline __attribute__((always_inline)) int alloc__t685t(char** __t5696t, uint64_t* __t5697t, uint16_t* __t5698t, uint16_t* __t5699t, uint64_t* __t5700t, uint64_t length, char** __t5701t, uint64_t* __t5702t, uint16_t* __t5703t, uint16_t* __t5704t, uint64_t* __t5705t) {
  char* allocator__buf__unsafe_ptr=*__t5696t;
  uint64_t allocator__buf__unsafe_size=*__t5697t;
  uint16_t allocator__buf__unsafe_offset=*__t5698t;
  uint16_t allocator__buf__unsafe_align=*__t5699t;
  uint64_t allocator__pos=*__t5700t;
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
  *__t5696t=allocator__buf__unsafe_ptr;
  *__t5697t=allocator__buf__unsafe_size;
  *__t5698t=allocator__buf__unsafe_offset;
  *__t5699t=allocator__buf__unsafe_align;
  *__t5700t=allocator__pos;
  *__t5701t=__t692t__buf__unsafe_ptr;
  *__t5702t=__t692t__buf__unsafe_size;
  *__t5703t=__t692t__buf__unsafe_offset;
  *__t5704t=__t692t__buf__unsafe_align;
  *__t5705t=__t692t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t1643t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t5706t, uint64_t* __t5707t, uint64_t* __t5708t, uint64_t* __t5709t, uint64_t* __t5710t) {
  char* __t1645t__unsafe_ptr=0;
  uint64_t __t1645t__pos=0;
  uint64_t __t1645t__rows=0;
  uint64_t __t1645t__cols=0;
  uint64_t __t1645t__stride=0;
  __t1645t__unsafe_ptr=unsafe_ptr;
  __t1645t__pos=pos;
  __t1645t__rows=rows;
  __t1645t__cols=cols;
  __t1645t__stride=stride;
  goto __t_return;
  __t_return:
  *__t5706t=__t1645t__unsafe_ptr;
  *__t5707t=__t1645t__pos;
  *__t5708t=__t1645t__rows;
  *__t5709t=__t1645t__cols;
  *__t5710t=__t1645t__stride;
}

int mat__t4682t(char** __t5711t, uint64_t* __t5712t, uint16_t* __t5713t, uint16_t* __t5714t, uint64_t* __t5715t, uint64_t rows, uint64_t cols, char** __t5716t, uint64_t* __t5717t, uint64_t* __t5718t, uint64_t* __t5719t, uint64_t* __t5720t) {
  char* FLOATS__buf__unsafe_ptr=*__t5711t;
  uint64_t FLOATS__buf__unsafe_size=*__t5712t;
  uint16_t FLOATS__buf__unsafe_offset=*__t5713t;
  uint16_t FLOATS__buf__unsafe_align=*__t5714t;
  uint64_t FLOATS__pos=*__t5715t;
  uint64_t __t4683t__=0;
  uint64_t __t4684t=0;
  char __t4685t__=0;
  uint64_t __t4686t__=0;
  uint64_t __t4687t=0;
  char __t4688t__=0;
  uint64_t __t4689t__=0;
  uint64_t size=0;
  char* __t4690t__buf__unsafe_ptr=0;
  uint64_t __t4690t__buf__unsafe_size=0;
  uint16_t __t4690t__buf__unsafe_offset=0;
  uint16_t __t4690t__buf__unsafe_align=0;
  uint64_t __t4690t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint16_t surface__buf__unsafe_offset=0;
  uint16_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t4691t=0;
  uint64_t __t4692t=0;
  uint64_t __t4693t__=0;
  uint64_t __t4694t=0;
  uint64_t __t4695t__=0;
  uint64_t __t4696t__=0;
  char* __t4698t__unsafe_ptr=0;
  uint64_t __t4698t__pos=0;
  uint64_t __t4698t__rows=0;
  uint64_t __t4698t__cols=0;
  uint64_t __t4698t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(FLOATS__buf__unsafe_align,&__t4683t__);
  __t4684t=8;
  neq__t144t(__t4683t__,__t4684t,&__t4685t__);
  if(__t4685t__){
  __t_errcode=38;
  goto __t_failure;
  }
  nat__t507t(FLOATS__buf__unsafe_offset,&__t4686t__);
  __t4687t=0;
  neq__t144t(__t4686t__,__t4687t,&__t4688t__);
  if(__t4688t__){
  __t_errcode=39;
  goto __t_failure;
  }
  mul__t199t(rows,cols,&__t4689t__);
  size=__t4689t__;
  __t_errcode=alloc__t685t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t4690t__buf__unsafe_ptr,&__t4690t__buf__unsafe_size,&__t4690t__buf__unsafe_offset,&__t4690t__buf__unsafe_align,&__t4690t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t4690t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t4690t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t4690t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t4690t__buf__unsafe_align;
  surface__pos=__t4690t__pos;
  __t4692t=8;
  mul__t199t(__t4692t,surface__pos,&__t4693t__);
  __t4694t=8;
  add__t175t(surface__pos,size,&__t4695t__);
  mul__t199t(__t4694t,__t4695t__,&__t4696t__);
  zero__t504t(surface__buf__unsafe_ptr,__t4693t__,__t4696t__);
  mat__t1643t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t4698t__unsafe_ptr,&__t4698t__pos,&__t4698t__rows,&__t4698t__cols,&__t4698t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5711t=FLOATS__buf__unsafe_ptr;
  *__t5712t=FLOATS__buf__unsafe_size;
  *__t5713t=FLOATS__buf__unsafe_offset;
  *__t5714t=FLOATS__buf__unsafe_align;
  *__t5715t=FLOATS__pos;
  *__t5716t=__t4698t__unsafe_ptr;
  *__t5717t=__t4698t__pos;
  *__t5718t=__t4698t__rows;
  *__t5719t=__t4698t__cols;
  *__t5720t=__t4698t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

int mat__t4735t(char** __t5721t, uint64_t* __t5722t, uint16_t* __t5723t, uint16_t* __t5724t, uint64_t rows, char** __t5725t, uint64_t* __t5726t, uint64_t* __t5727t, uint64_t* __t5728t, uint64_t* __t5729t) {
  char* buf__unsafe_ptr=*__t5721t;
  uint64_t buf__unsafe_size=*__t5722t;
  uint16_t buf__unsafe_offset=*__t5723t;
  uint16_t buf__unsafe_align=*__t5724t;
  uint64_t __t4736t__=0;
  uint64_t __t4737t__=0;
  uint64_t cols=0;
  uint64_t __t4738t__=0;
  uint64_t __t4739t__=0;
  char __t4740t__=0;
  char* __t4741t__buf__unsafe_ptr=0;
  uint64_t __t4741t__buf__unsafe_size=0;
  uint16_t __t4741t__buf__unsafe_offset=0;
  uint16_t __t4741t__buf__unsafe_align=0;
  uint64_t __t4741t__pos=0;
  char* __t4742t__unsafe_ptr=0;
  uint64_t __t4742t__pos=0;
  uint64_t __t4742t__rows=0;
  uint64_t __t4742t__cols=0;
  uint64_t __t4742t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4736t__);
  __t_errcode=div__t225t(__t4736t__,rows,&__t4737t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t4737t__;
  mul__t199t(cols,rows,&__t4738t__);
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4739t__);
  neq__t144t(__t4738t__,__t4739t__,&__t4740t__);
  if(__t4740t__){
  __t_errcode=40;
  goto __t_failure;
  }
  arena__t655t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t4741t__buf__unsafe_ptr,&__t4741t__buf__unsafe_size,&__t4741t__buf__unsafe_offset,&__t4741t__buf__unsafe_align,&__t4741t__pos);
  __t_errcode=mat__t4682t(&__t4741t__buf__unsafe_ptr,&__t4741t__buf__unsafe_size,&__t4741t__buf__unsafe_offset,&__t4741t__buf__unsafe_align,&__t4741t__pos,rows,cols,&__t4742t__unsafe_ptr,&__t4742t__pos,&__t4742t__rows,&__t4742t__cols,&__t4742t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5721t=buf__unsafe_ptr;
  *__t5722t=buf__unsafe_size;
  *__t5723t=buf__unsafe_offset;
  *__t5724t=buf__unsafe_align;
  *__t5725t=__t4742t__unsafe_ptr;
  *__t5726t=__t4742t__pos;
  *__t5727t=__t4742t__rows;
  *__t5728t=__t4742t__cols;
  *__t5729t=__t4742t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t5730t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5730t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t5731t) {
  *__t5731t=to;
}

static inline __attribute__((always_inline)) void add__t505t(char* allocated, uint64_t offset, char** __t5732t) {
  char* element=0;
  char* __t506t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t506t__);
  goto __t_return;
  __t_return:
  *__t5732t=__t506t__;
}

static inline __attribute__((always_inline)) int mutget__t4743t(char** __t5733t, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5734t) {
  char* m__unsafe_ptr=*__t5733t;
  char __t4744t__=0;
  char __t4745t__=0;
  uint64_t __t4746t=0;
  uint64_t __t4747t__=0;
  uint64_t __t4748t__=0;
  uint64_t __t4749t__=0;
  uint64_t __t4750t__=0;
  char* __t4751t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4744t__);
  if(__t4744t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4745t__);
  if(__t4745t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4746t=8;
  mul__t199t(i,m__stride,&__t4747t__);
  add__t175t(__t4747t__,j,&__t4748t__);
  add__t175t(m__pos,__t4748t__,&__t4749t__);
  mul__t199t(__t4746t,__t4749t__,&__t4750t__);
  add__t505t(m__unsafe_ptr,__t4750t__,&__t4751t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5733t=m__unsafe_ptr;
  *__t5734t=__t4751t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5589t(char** __t5735t, uint64_t* __t5736t, uint16_t* __t5737t, uint16_t* __t5738t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5735t=unsafe_ptr;
  *__t5736t=unsafe_size;
  *__t5737t=unsafe_offset;
  *__t5738t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t1640t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t5739t, uint64_t* __t5740t, uint64_t* __t5741t) {
  char* __t1642t__unsafe_ptr=0;
  uint64_t __t1642t__pos=0;
  uint64_t __t1642t__length=0;
  __t1642t__unsafe_ptr=unsafe_ptr;
  __t1642t__pos=pos;
  __t1642t__length=length;
  goto __t_return;
  __t_return:
  *__t5739t=__t1642t__unsafe_ptr;
  *__t5740t=__t1642t__pos;
  *__t5741t=__t1642t__length;
}

static inline __attribute__((always_inline)) int vec__t1683t(char** __t5742t, uint64_t* __t5743t, uint16_t* __t5744t, uint16_t* __t5745t, char** __t5746t, uint64_t* __t5747t, uint64_t* __t5748t) {
  char* buf__unsafe_ptr=*__t5742t;
  uint64_t buf__unsafe_size=*__t5743t;
  uint16_t buf__unsafe_offset=*__t5744t;
  uint16_t buf__unsafe_align=*__t5745t;
  uint64_t __t1684t__=0;
  uint64_t __t1685t=0;
  char __t1686t__=0;
  uint64_t __t1687t__=0;
  uint64_t __t1688t=0;
  char __t1689t__=0;
  uint64_t __t1690t=0;
  uint64_t __t1691t__=0;
  char* __t1692t__unsafe_ptr=0;
  uint64_t __t1692t__pos=0;
  uint64_t __t1692t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t507t(buf__unsafe_align,&__t1684t__);
  __t1685t=8;
  neq__t144t(__t1684t__,__t1685t,&__t1686t__);
  if(__t1686t__){
  __t_errcode=35;
  goto __t_failure;
  }
  nat__t507t(buf__unsafe_offset,&__t1687t__);
  __t1688t=0;
  neq__t144t(__t1687t__,__t1688t,&__t1689t__);
  if(__t1689t__){
  __t_errcode=36;
  goto __t_failure;
  }
  __t1690t=0;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t1691t__);
  vec__t1640t(buf__unsafe_ptr,__t1690t,__t1691t__,&__t1692t__unsafe_ptr,&__t1692t__pos,&__t1692t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5742t=buf__unsafe_ptr;
  *__t5743t=buf__unsafe_size;
  *__t5744t=buf__unsafe_offset;
  *__t5745t=buf__unsafe_align;
  *__t5746t=__t1692t__unsafe_ptr;
  *__t5747t=__t1692t__pos;
  *__t5748t=__t1692t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t373t(const char* value, const char** __t5749t, const char** __t5750t) {
  goto __t_return;
  __t_return:
  *__t5749t=value;
  *__t5750t=__t374t;
}

static inline __attribute__((always_inline)) void print__t378t(const char* value, const char* endl) {
  int __t379t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t1651t(char** __t5751t, uint64_t* __t5752t, uint16_t* __t5753t, uint16_t* __t5754t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5751t=unsafe_ptr;
  *__t5752t=unsafe_size;
  *__t5753t=unsafe_offset;
  *__t5754t=unsafe_align;
}

static inline __attribute__((always_inline)) int alloc__t513t(char** __t5755t, uint64_t* __t5756t, uint16_t* __t5757t, uint16_t* __t5758t, uint64_t size, char** __t5759t, uint64_t* __t5760t, uint16_t* __t5761t, uint16_t* __t5762t) {
  char* buffer__unsafe_ptr=*__t5755t;
  uint64_t buffer__unsafe_size=*__t5756t;
  uint16_t buffer__unsafe_offset=*__t5757t;
  uint16_t buffer__unsafe_align=*__t5758t;
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
  *__t5755t=buffer__unsafe_ptr;
  *__t5756t=buffer__unsafe_size;
  *__t5757t=buffer__unsafe_offset;
  *__t5758t=buffer__unsafe_align;
  *__t5759t=buffer__unsafe_ptr;
  *__t5760t=buffer__unsafe_size;
  *__t5761t=buffer__unsafe_offset;
  *__t5762t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

int vec__t1671t(uint64_t length, char** __t5763t, uint64_t* __t5764t, uint64_t* __t5765t) {
  char* __t1672t__unsafe_ptr=0;
  uint64_t __t1672t__unsafe_size=0;
  uint16_t __t1672t__unsafe_offset=0;
  uint16_t __t1672t__unsafe_align=0;
  char* __t1674t__unsafe_ptr=0;
  uint64_t __t1674t__unsafe_size=0;
  uint16_t __t1674t__unsafe_offset=0;
  uint16_t __t1674t__unsafe_align=0;
  char __t1675t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t1676t=0;
  uint64_t __t1677t=0;
  uint64_t __t1678t=0;
  uint64_t __t1679t__=0;
  uint64_t __t1681t=0;
  char* __t1682t__unsafe_ptr=0;
  uint64_t __t1682t__pos=0;
  uint64_t __t1682t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t1651t(&__t1672t__unsafe_ptr,&__t1672t__unsafe_size,&__t1672t__unsafe_offset,&__t1672t__unsafe_align);
  __t_errcode=alloc__t513t(&__t1672t__unsafe_ptr,&__t1672t__unsafe_size,&__t1672t__unsafe_offset,&__t1672t__unsafe_align,length,&__t1674t__unsafe_ptr,&__t1674t__unsafe_size,&__t1674t__unsafe_offset,&__t1674t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t1674t__unsafe_ptr;
  buf__unsafe_size=__t1674t__unsafe_size;
  buf__unsafe_offset=__t1674t__unsafe_offset;
  buf__unsafe_align=__t1674t__unsafe_align;
  __t1677t=0;
  __t1678t=8;
  mul__t199t(__t1678t,length,&__t1679t__);
  zero__t504t(buf__unsafe_ptr,__t1677t,__t1679t__);
  __t1681t=0;
  vec__t1640t(buf__unsafe_ptr,__t1681t,length,&__t1682t__unsafe_ptr,&__t1682t__pos,&__t1682t__length);
  goto __t_return;
  
  __t_failure:exists__t447t(__t1682t__unsafe_ptr,&__t1675t____t515t__);
  if(__t1675t____t515t__){
  free__t503t(&__t1682t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5763t=__t1682t__unsafe_ptr;
  *__t5764t=__t1682t__pos;
  *__t5765t=__t1682t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void range__t468t(uint64_t _from, uint64_t to, uint64_t* __t5766t, uint64_t* __t5767t) {
  uint64_t __t469t=0;
  uint64_t from=0;
  __t469t=_from;
  from=__t469t;
  goto __t_return;
  __t_return:
  *__t5766t=from;
  *__t5767t=to;
}

static inline __attribute__((always_inline)) void range__t471t(uint64_t to, uint64_t* __t5768t, uint64_t* __t5769t) {
  uint64_t __t472t=0;
  uint64_t __t473t__from=0;
  uint64_t __t473t__to=0;
  __t472t=0;
  range__t468t(__t472t,to,&__t473t__from,&__t473t__to);
  goto __t_return;
  __t_return:
  *__t5768t=__t473t__from;
  *__t5769t=__t473t__to;
}

static inline __attribute__((always_inline)) int next__t474t(uint64_t* __t5770t, uint64_t r__to, uint64_t* __t5771t) {
  uint64_t r__from=*__t5770t;
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
  *__t5770t=r__from;
  *__t5771t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t4752t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, uint64_t j, char** __t5772t) {
  char __t4753t__=0;
  char __t4754t__=0;
  uint64_t __t4755t=0;
  uint64_t __t4756t__=0;
  uint64_t __t4757t__=0;
  uint64_t __t4758t__=0;
  uint64_t __t4759t__=0;
  char* __t4760t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,m__rows,&__t4753t__);
  if(__t4753t__){
  __t_errcode=41;
  goto __t_failure;
  }
  ge__t324t(j,m__cols,&__t4754t__);
  if(__t4754t__){
  __t_errcode=42;
  goto __t_failure;
  }
  __t4755t=8;
  mul__t199t(i,m__stride,&__t4756t__);
  add__t175t(__t4756t__,j,&__t4757t__);
  add__t175t(m__pos,__t4757t__,&__t4758t__);
  mul__t199t(__t4755t,__t4758t__,&__t4759t__);
  add__t505t(m__unsafe_ptr,__t4759t__,&__t4760t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5772t=__t4760t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int get__t1766t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5773t) {
  char __t1767t__=0;
  uint64_t __t1768t=0;
  uint64_t __t1769t__=0;
  uint64_t __t1770t__=0;
  char* __t1771t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1767t__);
  if(__t1767t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1768t=8;
  add__t175t(i,v__pos,&__t1769t__);
  mul__t199t(__t1768t,__t1769t__,&__t1770t__);
  add__t505t(v__unsafe_ptr,__t1770t__,&__t1771t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5773t=__t1771t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t71t(double x, double y, int* __t5774t) {
  int __t72t=0;
  int __t73t__=0;
  not__t37t(__t72t,&__t73t__);
  goto __t_return;
  __t_return:
  *__t5774t=__t73t__;
}

static inline __attribute__((always_inline)) void mul__t177t(double x, double y, double* __t5775t) {
  int __t178t__=0;
  double z=0;
  is_different__t71t(x,y,&__t178t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5775t=z;
}

static inline __attribute__((always_inline)) void add__t153t(double x, double y, double* __t5776t) {
  int __t154t__=0;
  double z=0;
  is_different__t71t(x,y,&__t154t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5776t=z;
}

static inline __attribute__((always_inline)) int mutget__t1760t(char** __t5777t, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t5778t) {
  char* v__unsafe_ptr=*__t5777t;
  char __t1761t__=0;
  uint64_t __t1762t=0;
  uint64_t __t1763t__=0;
  uint64_t __t1764t__=0;
  char* __t1765t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,v__length,&__t1761t__);
  if(__t1761t__){
  __t_errcode=15;
  goto __t_failure;
  }
  __t1762t=8;
  add__t175t(i,v__pos,&__t1763t__);
  mul__t199t(__t1762t,__t1763t__,&__t1764t__);
  add__t505t(v__unsafe_ptr,__t1764t__,&__t1765t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5777t=v__unsafe_ptr;
  *__t5778t=__t1765t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4791t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t5779t, uint64_t* __t5780t, uint64_t* __t5781t) {
  char __t4792t__=0;
  char* __t4793t__unsafe_ptr=0;
  uint64_t __t4793t__pos=0;
  uint64_t __t4793t__length=0;
  char __t4794t____t1675t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4795t__from=0;
  uint64_t __t4795t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4796t=0;
  uint64_t __t4797t__=0;
  uint64_t i=0;
  double __t4798t=0;
  double __t4799t=0;
  double acc=0;
  uint64_t __t4800t__from=0;
  uint64_t __t4800t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4801t=0;
  uint64_t __t4802t__=0;
  uint64_t j=0;
  char* __t4803t__=0;
  double __t4804t__value=0;
  char* __t4805t__=0;
  double __t4806t__value=0;
  double __t4807t__=0;
  double __t4808t__=0;
  char* __t4809t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m__cols,v__length,&__t4792t__);
  if(__t4792t__){
  __t_errcode=43;
  goto __t_failure;
  }
  __t_errcode=vec__t1671t(m__rows,&__t4793t__unsafe_ptr,&__t4793t__pos,&__t4793t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4793t__unsafe_ptr;
  result__pos=__t4793t__pos;
  result__length=__t4793t__length;
  range__t471t(m__rows,&__t4795t__from,&__t4795t__to);
  it_i__from=__t4795t__from;
  it_i__to=__t4795t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4797t__);
  __t4796t=__t_complain;
  i=__t4797t__;
  __t4796t=__t4796t==0;
  if(!__t4796t){
  break;
  }
  __t4798t=0.0;
  __t4799t=__t4798t;
  acc=__t4799t;
  range__t471t(m__cols,&__t4800t__from,&__t4800t__to);
  it_j__from=__t4800t__from;
  it_j__to=__t4800t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4802t__);
  __t4801t=__t_complain;
  j=__t4802t__;
  __t4801t=__t4801t==0;
  if(!__t4801t){
  break;
  }
  __t_errcode=get__t4752t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4803t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4803t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4804t__value,__t4803t__,8);
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,j,&__t4805t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4805t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4806t__value,__t4805t__,8);
  mul__t177t(__t4804t__value,__t4806t__value,&__t4807t__);
  add__t153t(acc,__t4807t__,&__t4808t__);
  acc=__t4808t__;
  }
  __t_errcode=mutget__t1760t(&result__unsafe_ptr,result__pos,result__length,i,&__t4809t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4809t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4809t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4794t____t1675t____t515t__);
  if(__t4794t____t1675t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5779t=result__unsafe_ptr;
  *__t5780t=result__pos;
  *__t5781t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t5782t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t5782t=z;
}

static inline __attribute__((always_inline)) int get__t478t(uint64_t r__from, uint64_t r__to, uint64_t pos, uint64_t* __t5783t) {
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
  *__t5783t=pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nn__t375t(double value, double* __t5784t, const char** __t5785t) {
  goto __t_return;
  __t_return:
  *__t5784t=value;
  *__t5785t=__t374t;
}

static inline __attribute__((always_inline)) void print__t383t(double value, const char* endl) {
  int __t384t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t5786t) {
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
  *__t5786t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

int print__t4589t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t4590t=0;
  const char* endl=0;
  const char* __t4591t__value=0;
  const char* __t4591t____t374t=0;
  uint64_t __t4593t=0;
  uint64_t __t4594t__from=0;
  uint64_t __t4594t__to=0;
  char __t4595t=0;
  uint64_t __t4596t__=0;
  uint64_t i=0;
  char* __t4597t__=0;
  double __t4598t__value=0;
  double __t4599t__value=0;
  const char* __t4599t____t374t=0;
  uint64_t __t4601t=0;
  uint64_t __t4602t__=0;
  char __t4603t__=0;
  const char* __t4604t__value=0;
  const char* __t4604t____t374t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  nn__t373t(__t4570t,&__t4591t__value,&__t4591t____t374t);
  print__t378t(__t4591t__value,__t4591t____t374t);
  range__t471t(v__length,&__t4594t__from,&__t4594t__to);
  __t4593t=0;
  while(1){
  __t_complain=get__t478t(__t4594t__from,__t4594t__to,__t4593t,&__t4596t__);
  __t4595t=__t_complain;
  i=__t4596t__;
  __t4595t=__t4595t==0;
  __t4593t=__t4593t+1;
  if(!__t4595t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t4597t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4597t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4598t__value,__t4597t__,8);
  nn__t375t(__t4598t__value,&__t4599t__value,&__t4599t____t374t);
  print__t383t(__t4599t__value,__t4599t____t374t);
  __t4601t=1;
  __t_errcode=sub__t352t(v__length,__t4601t,&__t4602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t4602t__,&__t4603t__);
  if(__t4603t__){
  nn__t373t(__t4584t,&__t4604t__value,&__t4604t____t374t);
  print__t378t(__t4604t__value,__t4604t____t374t);
  }
  }
  print__t378t(__t4587t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5607t(char** __t5787t, uint64_t* __t5788t, uint16_t* __t5789t, uint16_t* __t5790t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5787t=unsafe_ptr;
  *__t5788t=unsafe_size;
  *__t5789t=unsafe_offset;
  *__t5790t=unsafe_align;
}

static inline __attribute__((always_inline)) int mul__t4846t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, char** __t5791t, uint64_t* __t5792t, uint64_t* __t5793t) {
  char __t4847t__=0;
  char* __t4848t__unsafe_ptr=0;
  uint64_t __t4848t__pos=0;
  uint64_t __t4848t__length=0;
  char __t4849t____t1675t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__length=0;
  uint64_t __t4850t__from=0;
  uint64_t __t4850t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4851t=0;
  uint64_t __t4852t__=0;
  uint64_t j=0;
  double __t4853t=0;
  double __t4854t=0;
  double acc=0;
  uint64_t __t4855t__from=0;
  uint64_t __t4855t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4856t=0;
  uint64_t __t4857t__=0;
  uint64_t i=0;
  char* __t4858t__=0;
  double __t4859t__value=0;
  char* __t4860t__=0;
  double __t4861t__value=0;
  double __t4862t__=0;
  double __t4863t__=0;
  char* __t4864t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(v__length,m__rows,&__t4847t__);
  if(__t4847t__){
  __t_errcode=44;
  goto __t_failure;
  }
  __t_errcode=vec__t1671t(m__cols,&__t4848t__unsafe_ptr,&__t4848t__pos,&__t4848t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4848t__unsafe_ptr;
  result__pos=__t4848t__pos;
  result__length=__t4848t__length;
  range__t471t(m__cols,&__t4850t__from,&__t4850t__to);
  it_j__from=__t4850t__from;
  it_j__to=__t4850t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4852t__);
  __t4851t=__t_complain;
  j=__t4852t__;
  __t4851t=__t4851t==0;
  if(!__t4851t){
  break;
  }
  __t4853t=0.0;
  __t4854t=__t4853t;
  acc=__t4854t;
  range__t471t(m__rows,&__t4855t__from,&__t4855t__to);
  it_i__from=__t4855t__from;
  it_i__to=__t4855t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4857t__);
  __t4856t=__t_complain;
  i=__t4857t__;
  __t4856t=__t4856t==0;
  if(!__t4856t){
  break;
  }
  __t_errcode=get__t1766t(v__unsafe_ptr,v__pos,v__length,i,&__t4858t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4858t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4859t__value,__t4858t__,8);
  __t_errcode=get__t4752t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t4860t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4860t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4861t__value,__t4860t__,8);
  mul__t177t(__t4859t__value,__t4861t__value,&__t4862t__);
  add__t153t(acc,__t4862t__,&__t4863t__);
  acc=__t4863t__;
  }
  __t_errcode=mutget__t1760t(&result__unsafe_ptr,result__pos,result__length,j,&__t4864t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4864t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4864t__,&acc,8);
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4849t____t1675t____t515t__);
  if(__t4849t____t1675t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5791t=result__unsafe_ptr;
  *__t5792t=result__pos;
  *__t5793t=result__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void float____buffer__t5624t(char** __t5794t, uint64_t* __t5795t, uint16_t* __t5796t, uint16_t* __t5797t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5794t=unsafe_ptr;
  *__t5795t=unsafe_size;
  *__t5796t=unsafe_offset;
  *__t5797t=unsafe_align;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void float____t_buffer____buffer__t4647t(char** __t5798t, uint64_t* __t5799t, uint16_t* __t5800t, uint16_t* __t5801t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t5798t=unsafe_ptr;
  *__t5799t=unsafe_size;
  *__t5800t=unsafe_offset;
  *__t5801t=unsafe_align;
}

int mat__t4657t(uint64_t rows, uint64_t cols, char** __t5802t, uint64_t* __t5803t, uint64_t* __t5804t, uint64_t* __t5805t, uint64_t* __t5806t) {
  char* __t4658t__unsafe_ptr=0;
  uint64_t __t4658t__unsafe_size=0;
  uint16_t __t4658t__unsafe_offset=0;
  uint16_t __t4658t__unsafe_align=0;
  uint64_t __t4659t__=0;
  char* __t4661t__unsafe_ptr=0;
  uint64_t __t4661t__unsafe_size=0;
  uint16_t __t4661t__unsafe_offset=0;
  uint16_t __t4661t__unsafe_align=0;
  char __t4662t____t515t__=0;
  char* buf__unsafe_ptr=0;
  uint64_t buf__unsafe_size=0;
  uint16_t buf__unsafe_offset=0;
  uint16_t buf__unsafe_align=0;
  int __t4663t=0;
  uint64_t __t4664t=0;
  uint64_t __t4665t=0;
  uint64_t __t4666t__=0;
  uint64_t __t4667t__=0;
  uint64_t __t4669t=0;
  char* __t4670t__unsafe_ptr=0;
  uint64_t __t4670t__pos=0;
  uint64_t __t4670t__rows=0;
  uint64_t __t4670t__cols=0;
  uint64_t __t4670t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  float____t_buffer____buffer__t4647t(&__t4658t__unsafe_ptr,&__t4658t__unsafe_size,&__t4658t__unsafe_offset,&__t4658t__unsafe_align);
  mul__t199t(rows,cols,&__t4659t__);
  __t_errcode=alloc__t513t(&__t4658t__unsafe_ptr,&__t4658t__unsafe_size,&__t4658t__unsafe_offset,&__t4658t__unsafe_align,__t4659t__,&__t4661t__unsafe_ptr,&__t4661t__unsafe_size,&__t4661t__unsafe_offset,&__t4661t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  buf__unsafe_ptr=__t4661t__unsafe_ptr;
  buf__unsafe_size=__t4661t__unsafe_size;
  buf__unsafe_offset=__t4661t__unsafe_offset;
  buf__unsafe_align=__t4661t__unsafe_align;
  __t4664t=0;
  __t4665t=8;
  len__t647t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t4666t__);
  mul__t199t(__t4665t,__t4666t__,&__t4667t__);
  zero__t504t(buf__unsafe_ptr,__t4664t,__t4667t__);
  __t4669t=0;
  mat__t1643t(buf__unsafe_ptr,__t4669t,rows,cols,cols,&__t4670t__unsafe_ptr,&__t4670t__pos,&__t4670t__rows,&__t4670t__cols,&__t4670t__stride);
  goto __t_return;
  
  __t_failure:exists__t447t(__t4670t__unsafe_ptr,&__t4662t____t515t__);
  if(__t4662t____t515t__){
  free__t503t(&__t4670t__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5802t=__t4670t__unsafe_ptr;
  *__t5803t=__t4670t__pos;
  *__t5804t=__t4670t__rows;
  *__t5805t=__t4670t__cols;
  *__t5806t=__t4670t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mul__t4901t(char* m1__unsafe_ptr, uint64_t m1__pos, uint64_t m1__rows, uint64_t m1__cols, uint64_t m1__stride, char* m2__unsafe_ptr, uint64_t m2__pos, uint64_t m2__rows, uint64_t m2__cols, uint64_t m2__stride, char** __t5807t, uint64_t* __t5808t, uint64_t* __t5809t, uint64_t* __t5810t, uint64_t* __t5811t) {
  char __t4902t__=0;
  char* __t4903t__unsafe_ptr=0;
  uint64_t __t4903t__pos=0;
  uint64_t __t4903t__rows=0;
  uint64_t __t4903t__cols=0;
  uint64_t __t4903t__stride=0;
  char __t4904t____t4662t____t515t__=0;
  char* result__unsafe_ptr=0;
  uint64_t result__pos=0;
  uint64_t result__rows=0;
  uint64_t result__cols=0;
  uint64_t result__stride=0;
  uint64_t __t4905t__from=0;
  uint64_t __t4905t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t4906t=0;
  uint64_t __t4907t__=0;
  uint64_t i=0;
  uint64_t __t4908t__from=0;
  uint64_t __t4908t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t4909t=0;
  uint64_t __t4910t__=0;
  uint64_t j=0;
  double __t4911t=0;
  double __t4912t=0;
  double acc=0;
  uint64_t __t4913t__from=0;
  uint64_t __t4913t__to=0;
  uint64_t it_k__from=0;
  uint64_t it_k__to=0;
  char __t4914t=0;
  uint64_t __t4915t__=0;
  uint64_t k=0;
  char* __t4916t__=0;
  double __t4917t__value=0;
  char* __t4918t__=0;
  double __t4919t__value=0;
  double __t4920t__=0;
  double __t4921t__=0;
  char* __t4922t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  neq__t144t(m1__cols,m2__rows,&__t4902t__);
  if(__t4902t__){
  __t_errcode=45;
  goto __t_failure;
  }
  __t_errcode=mat__t4657t(m1__rows,m2__cols,&__t4903t__unsafe_ptr,&__t4903t__pos,&__t4903t__rows,&__t4903t__cols,&__t4903t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  result__unsafe_ptr=__t4903t__unsafe_ptr;
  result__pos=__t4903t__pos;
  result__rows=__t4903t__rows;
  result__cols=__t4903t__cols;
  result__stride=__t4903t__stride;
  range__t471t(m1__rows,&__t4905t__from,&__t4905t__to);
  it_i__from=__t4905t__from;
  it_i__to=__t4905t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t4907t__);
  __t4906t=__t_complain;
  i=__t4907t__;
  __t4906t=__t4906t==0;
  if(!__t4906t){
  break;
  }
  range__t471t(m2__cols,&__t4908t__from,&__t4908t__to);
  it_j__from=__t4908t__from;
  it_j__to=__t4908t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t4910t__);
  __t4909t=__t_complain;
  j=__t4910t__;
  __t4909t=__t4909t==0;
  if(!__t4909t){
  break;
  }
  __t4911t=0.0;
  __t4912t=__t4911t;
  acc=__t4912t;
  range__t471t(m1__cols,&__t4913t__from,&__t4913t__to);
  it_k__from=__t4913t__from;
  it_k__to=__t4913t__to;
  while(1){
  __t_complain=next__t474t(&it_k__from,it_k__to,&__t4915t__);
  __t4914t=__t_complain;
  k=__t4915t__;
  __t4914t=__t4914t==0;
  if(!__t4914t){
  break;
  }
  __t_errcode=get__t4752t(m1__unsafe_ptr,m1__pos,m1__rows,m1__cols,m1__stride,i,k,&__t4916t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4916t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4917t__value,__t4916t__,8);
  __t_errcode=get__t4752t(m2__unsafe_ptr,m2__pos,m2__rows,m2__cols,m2__stride,k,j,&__t4918t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4918t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4919t__value,__t4918t__,8);
  mul__t177t(__t4917t__value,__t4919t__value,&__t4920t__);
  add__t153t(acc,__t4920t__,&__t4921t__);
  acc=__t4921t__;
  }
  __t_errcode=mutget__t4743t(&result__unsafe_ptr,result__pos,result__rows,result__cols,result__stride,i,j,&__t4922t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4922t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4922t__,&acc,8);
  }
  }
  goto __t_return;
  
  __t_failure:exists__t447t(result__unsafe_ptr,&__t4904t____t4662t____t515t__);
  if(__t4904t____t4662t____t515t__){
  free__t503t(&result__unsafe_ptr);
  }
  
  goto __t_skip_returns;__t_return:
  *__t5807t=result__unsafe_ptr;
  *__t5808t=result__pos;
  *__t5809t=result__rows;
  *__t5810t=result__cols;
  *__t5811t=result__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int print__t5039t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride) {
  int __t5040t=0;
  const char* endl=0;
  uint64_t __t5041t__from=0;
  uint64_t __t5041t__to=0;
  uint64_t it_i__from=0;
  uint64_t it_i__to=0;
  char __t5042t=0;
  uint64_t __t5043t__=0;
  uint64_t i=0;
  uint64_t __t5044t=0;
  char __t5045t__=0;
  uint64_t __t5047t=0;
  char __t5048t__=0;
  uint64_t __t5049t=0;
  char __t5050t__=0;
  char __t5051t=0;
  uint64_t __t5053t=0;
  char __t5054t__=0;
  uint64_t __t5055t=0;
  char __t5056t__=0;
  uint64_t __t5057t=0;
  uint64_t __t5058t__=0;
  char __t5059t__=0;
  char __t5060t=0;
  char __t5061t=0;
  uint64_t __t5063t=0;
  char __t5064t__=0;
  uint64_t __t5065t=0;
  uint64_t __t5066t__=0;
  char __t5067t__=0;
  char __t5068t=0;
  uint64_t __t5070t__from=0;
  uint64_t __t5070t__to=0;
  uint64_t it_j__from=0;
  uint64_t it_j__to=0;
  char __t5071t=0;
  uint64_t __t5072t__=0;
  uint64_t j=0;
  char* __t5073t__=0;
  double __t5074t__value=0;
  uint64_t __t5076t=0;
  uint64_t __t5077t__=0;
  char __t5078t__=0;
  uint64_t __t5080t=0;
  char __t5081t__=0;
  uint64_t __t5083t=0;
  char __t5084t__=0;
  uint64_t __t5085t=0;
  char __t5086t__=0;
  char __t5087t=0;
  uint64_t __t5089t=0;
  char __t5090t__=0;
  uint64_t __t5091t=0;
  char __t5092t__=0;
  uint64_t __t5093t=0;
  uint64_t __t5094t__=0;
  char __t5095t__=0;
  char __t5096t=0;
  char __t5097t=0;
  uint64_t __t5099t=0;
  char __t5100t__=0;
  uint64_t __t5101t=0;
  uint64_t __t5102t__=0;
  char __t5103t__=0;
  char __t5104t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t382t;
  range__t471t(m__rows,&__t5041t__from,&__t5041t__to);
  it_i__from=__t5041t__from;
  it_i__to=__t5041t__to;
  while(1){
  __t_complain=next__t474t(&it_i__from,it_i__to,&__t5043t__);
  __t5042t=__t_complain;
  i=__t5043t__;
  __t5042t=__t5042t==0;
  if(!__t5042t){
  break;
  }
  __t5044t=1;
  eq__t120t(m__rows,__t5044t,&__t5045t__);
  if(__t5045t__){
  print__t378t(__t4570t,__t374t);
  }
  __t5047t=1;
  gt__t276t(m__rows,__t5047t,&__t5048t__);
  if(__t5048t__){
  __t5049t=0;
  eq__t120t(i,__t5049t,&__t5050t__);
  __t5051t=__t5050t__;
  }
  {
  __t5051t=0;
  }
  if(__t5051t){
  print__t378t(__t4978t,__t374t);
  }
  __t5053t=1;
  gt__t276t(m__rows,__t5053t,&__t5054t__);
  if(__t5054t__){
  __t5055t=0;
  gt__t276t(i,__t5055t,&__t5056t__);
  if(__t5056t__){
  __t5057t=1;
  __t_errcode=sub__t352t(m__rows,__t5057t,&__t5058t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5058t__,&__t5059t__);
  __t5060t=__t5059t__;
  }
  {
  __t5060t=0;
  }
  __t5061t=__t5060t;
  }
  {
  __t5061t=0;
  }
  if(__t5061t){
  print__t378t(__t4989t,__t374t);
  }
  __t5063t=1;
  gt__t276t(m__rows,__t5063t,&__t5064t__);
  if(__t5064t__){
  __t5065t=1;
  __t_errcode=sub__t352t(m__rows,__t5065t,&__t5066t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5066t__,&__t5067t__);
  __t5068t=__t5067t__;
  }
  {
  __t5068t=0;
  }
  if(__t5068t){
  print__t378t(__t4997t,__t374t);
  }
  range__t471t(m__cols,&__t5070t__from,&__t5070t__to);
  it_j__from=__t5070t__from;
  it_j__to=__t5070t__to;
  while(1){
  __t_complain=next__t474t(&it_j__from,it_j__to,&__t5072t__);
  __t5071t=__t_complain;
  j=__t5072t__;
  __t5071t=__t5071t==0;
  if(!__t5071t){
  break;
  }
  __t_errcode=get__t4752t(m__unsafe_ptr,m__pos,m__rows,m__cols,m__stride,i,j,&__t5073t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5073t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5074t__value,__t5073t__,8);
  print__t383t(__t5074t__value,__t374t);
  __t5076t=1;
  __t_errcode=sub__t352t(m__cols,__t5076t,&__t5077t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(j,__t5077t__,&__t5078t__);
  if(__t5078t__){
  print__t378t(__t4584t,__t374t);
  }
  }
  __t5080t=1;
  eq__t120t(m__rows,__t5080t,&__t5081t__);
  if(__t5081t__){
  print__t378t(__t4587t,__t374t);
  }
  __t5083t=1;
  gt__t276t(m__rows,__t5083t,&__t5084t__);
  if(__t5084t__){
  __t5085t=0;
  eq__t120t(i,__t5085t,&__t5086t__);
  __t5087t=__t5086t__;
  }
  {
  __t5087t=0;
  }
  if(__t5087t){
  print__t378t(__t5017t,__t374t);
  }
  __t5089t=1;
  gt__t276t(m__rows,__t5089t,&__t5090t__);
  if(__t5090t__){
  __t5091t=0;
  gt__t276t(i,__t5091t,&__t5092t__);
  if(__t5092t__){
  __t5093t=1;
  __t_errcode=sub__t352t(m__rows,__t5093t,&__t5094t__);
  if(__t_errcode){
  goto __t_failure;
  }
  lt__t252t(i,__t5094t__,&__t5095t__);
  __t5096t=__t5095t__;
  }
  {
  __t5096t=0;
  }
  __t5097t=__t5096t;
  }
  {
  __t5097t=0;
  }
  if(__t5097t){
  print__t378t(__t5028t,__t374t);
  }
  __t5099t=1;
  gt__t276t(m__rows,__t5099t,&__t5100t__);
  if(__t5100t__){
  __t5101t=1;
  __t_errcode=sub__t352t(m__rows,__t5101t,&__t5102t__);
  if(__t_errcode){
  goto __t_failure;
  }
  eq__t120t(i,__t5102t__,&__t5103t__);
  __t5104t=__t5103t__;
  }
  {
  __t5104t=0;
  }
  if(__t5104t){
  print__t378t(__t5036t,__t374t);
  }
  print__t378t(__t374t,endl);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t5563t() {
  double __t5566t=0;
  double __t5571t=0;
  double __t5572t=0;
  double __t5573t=0;
  double __t5574t=0;
  double __t5575t=0;
  char* __t5576t__unsafe_ptr=0;
  uint64_t __t5576t__unsafe_size=0;
  uint16_t __t5576t__unsafe_offset=0;
  uint16_t __t5576t__unsafe_align=0;
  uint64_t __t5577t=0;
  char* __t5578t__unsafe_ptr=0;
  uint64_t __t5578t__unsafe_size=0;
  uint16_t __t5578t__unsafe_offset=0;
  uint16_t __t5578t__unsafe_align=0;
  char __t5579t____t534t__=0;
  uint64_t __t5580t=0;
  char* __t5581t__unsafe_ptr=0;
  uint64_t __t5581t__pos=0;
  uint64_t __t5581t__rows=0;
  uint64_t __t5581t__cols=0;
  uint64_t __t5581t__stride=0;
  char* a__unsafe_ptr=0;
  uint64_t a__pos=0;
  uint64_t a__rows=0;
  uint64_t a__cols=0;
  uint64_t a__stride=0;
  uint64_t __t5582t=0;
  uint64_t __t5583t=0;
  char* __t5584t__=0;
  double __t5585t=0;
  double __t5586t=0;
  double __t5591t=0;
  double __t5592t=0;
  char* __t5593t__unsafe_ptr=0;
  uint64_t __t5593t__unsafe_size=0;
  uint16_t __t5593t__unsafe_offset=0;
  uint16_t __t5593t__unsafe_align=0;
  uint64_t __t5594t=0;
  char* __t5595t__unsafe_ptr=0;
  uint64_t __t5595t__unsafe_size=0;
  uint16_t __t5595t__unsafe_offset=0;
  uint16_t __t5595t__unsafe_align=0;
  char __t5596t____t534t__=0;
  char* __t5597t__unsafe_ptr=0;
  uint64_t __t5597t__pos=0;
  uint64_t __t5597t__length=0;
  char* x__unsafe_ptr=0;
  uint64_t x__pos=0;
  uint64_t x__length=0;
  const char* __t5599t__value=0;
  const char* __t5599t____t374t=0;
  char* __t5601t__unsafe_ptr=0;
  uint64_t __t5601t__pos=0;
  uint64_t __t5601t__length=0;
  char __t5602t____t4794t____t1675t____t515t__=0;
  double __t5604t=0;
  double __t5609t=0;
  char* __t5610t__unsafe_ptr=0;
  uint64_t __t5610t__unsafe_size=0;
  uint16_t __t5610t__unsafe_offset=0;
  uint16_t __t5610t__unsafe_align=0;
  uint64_t __t5611t=0;
  char* __t5612t__unsafe_ptr=0;
  uint64_t __t5612t__unsafe_size=0;
  uint16_t __t5612t__unsafe_offset=0;
  uint16_t __t5612t__unsafe_align=0;
  char __t5613t____t534t__=0;
  char* __t5614t__unsafe_ptr=0;
  uint64_t __t5614t__pos=0;
  uint64_t __t5614t__length=0;
  char* u__unsafe_ptr=0;
  uint64_t u__pos=0;
  uint64_t u__length=0;
  const char* __t5616t__value=0;
  const char* __t5616t____t374t=0;
  char* __t5618t__unsafe_ptr=0;
  uint64_t __t5618t__pos=0;
  uint64_t __t5618t__length=0;
  char __t5619t____t4849t____t1675t____t515t__=0;
  double __t5621t=0;
  double __t5626t=0;
  double __t5627t=0;
  double __t5628t=0;
  double __t5629t=0;
  double __t5630t=0;
  char* __t5631t__unsafe_ptr=0;
  uint64_t __t5631t__unsafe_size=0;
  uint16_t __t5631t__unsafe_offset=0;
  uint16_t __t5631t__unsafe_align=0;
  uint64_t __t5632t=0;
  char* __t5633t__unsafe_ptr=0;
  uint64_t __t5633t__unsafe_size=0;
  uint16_t __t5633t__unsafe_offset=0;
  uint16_t __t5633t__unsafe_align=0;
  char __t5634t____t534t__=0;
  uint64_t __t5635t=0;
  char* __t5636t__unsafe_ptr=0;
  uint64_t __t5636t__pos=0;
  uint64_t __t5636t__rows=0;
  uint64_t __t5636t__cols=0;
  uint64_t __t5636t__stride=0;
  char* b__unsafe_ptr=0;
  uint64_t b__pos=0;
  uint64_t b__rows=0;
  uint64_t b__cols=0;
  uint64_t b__stride=0;
  char* __t5639t__unsafe_ptr=0;
  uint64_t __t5639t__pos=0;
  uint64_t __t5639t__rows=0;
  uint64_t __t5639t__cols=0;
  uint64_t __t5639t__stride=0;
  char __t5640t____t4904t____t4662t____t515t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t366t();
  new__t648t();
  __t5566t=1.0;
  __t5571t=0.0;
  __t5572t=2.0;
  __t5573t=0.0;
  __t5574t=3.0;
  __t5575t=1.0;
  float____buffer__t5569t(&__t5576t__unsafe_ptr,&__t5576t__unsafe_size,&__t5576t__unsafe_offset,&__t5576t__unsafe_align);
  __t5577t=6;
  __t_errcode=alloc__t532t(&__t5576t__unsafe_ptr,&__t5576t__unsafe_size,&__t5576t__unsafe_offset,&__t5576t__unsafe_align,__t5577t,&__t5578t__unsafe_ptr,&__t5578t__unsafe_size,&__t5578t__unsafe_offset,&__t5578t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5576t__unsafe_ptr,&__t5566t,8);
  memcpy(__t5576t__unsafe_ptr+8,&__t5571t,8);
  memcpy(__t5576t__unsafe_ptr+16,&__t5572t,8);
  memcpy(__t5576t__unsafe_ptr+24,&__t5573t,8);
  memcpy(__t5576t__unsafe_ptr+32,&__t5574t,8);
  memcpy(__t5576t__unsafe_ptr+40,&__t5575t,8);
  __t5580t=2;
  __t_errcode=mat__t4735t(&__t5576t__unsafe_ptr,&__t5576t__unsafe_size,&__t5576t__unsafe_offset,&__t5576t__unsafe_align,__t5580t,&__t5581t__unsafe_ptr,&__t5581t__pos,&__t5581t__rows,&__t5581t__cols,&__t5581t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  a__unsafe_ptr=__t5581t__unsafe_ptr;
  a__pos=__t5581t__pos;
  a__rows=__t5581t__rows;
  a__cols=__t5581t__cols;
  a__stride=__t5581t__stride;
  __t5582t=0;
  __t5583t=0;
  __t_errcode=mutget__t4743t(&a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,__t5582t,__t5583t,&__t5584t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5585t=1.0;
  if(!__t5584t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t5584t__,&__t5585t,8);
  __t5586t=1.0;
  __t5591t=2.0;
  __t5592t=3.0;
  float____buffer__t5589t(&__t5593t__unsafe_ptr,&__t5593t__unsafe_size,&__t5593t__unsafe_offset,&__t5593t__unsafe_align);
  __t5594t=3;
  __t_errcode=alloc__t532t(&__t5593t__unsafe_ptr,&__t5593t__unsafe_size,&__t5593t__unsafe_offset,&__t5593t__unsafe_align,__t5594t,&__t5595t__unsafe_ptr,&__t5595t__unsafe_size,&__t5595t__unsafe_offset,&__t5595t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5593t__unsafe_ptr,&__t5586t,8);
  memcpy(__t5593t__unsafe_ptr+8,&__t5591t,8);
  memcpy(__t5593t__unsafe_ptr+16,&__t5592t,8);
  __t_errcode=vec__t1683t(&__t5593t__unsafe_ptr,&__t5593t__unsafe_size,&__t5593t__unsafe_offset,&__t5593t__unsafe_align,&__t5597t__unsafe_ptr,&__t5597t__pos,&__t5597t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  x__unsafe_ptr=__t5597t__unsafe_ptr;
  x__pos=__t5597t__pos;
  x__length=__t5597t__length;
  nn__t373t(__t5598t,&__t5599t__value,&__t5599t____t374t);
  print__t378t(__t5599t__value,__t5599t____t374t);
  __t_errcode=mul__t4791t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,x__unsafe_ptr,x__pos,x__length,&__t5601t__unsafe_ptr,&__t5601t__pos,&__t5601t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4589t(__t5601t__unsafe_ptr,__t5601t__pos,__t5601t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5604t=1.0;
  __t5609t=2.0;
  float____buffer__t5607t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align);
  __t5611t=2;
  __t_errcode=alloc__t532t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align,__t5611t,&__t5612t__unsafe_ptr,&__t5612t__unsafe_size,&__t5612t__unsafe_offset,&__t5612t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5610t__unsafe_ptr,&__t5604t,8);
  memcpy(__t5610t__unsafe_ptr+8,&__t5609t,8);
  __t_errcode=vec__t1683t(&__t5610t__unsafe_ptr,&__t5610t__unsafe_size,&__t5610t__unsafe_offset,&__t5610t__unsafe_align,&__t5614t__unsafe_ptr,&__t5614t__pos,&__t5614t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  u__unsafe_ptr=__t5614t__unsafe_ptr;
  u__pos=__t5614t__pos;
  u__length=__t5614t__length;
  nn__t373t(__t5615t,&__t5616t__value,&__t5616t____t374t);
  print__t378t(__t5616t__value,__t5616t____t374t);
  __t_errcode=mul__t4846t(u__unsafe_ptr,u__pos,u__length,a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,&__t5618t__unsafe_ptr,&__t5618t__pos,&__t5618t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t4589t(__t5618t__unsafe_ptr,__t5618t__pos,__t5618t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t5621t=1.0;
  __t5626t=2.0;
  __t5627t=3.0;
  __t5628t=4.0;
  __t5629t=5.0;
  __t5630t=6.0;
  float____buffer__t5624t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align);
  __t5632t=6;
  __t_errcode=alloc__t532t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align,__t5632t,&__t5633t__unsafe_ptr,&__t5633t__unsafe_size,&__t5633t__unsafe_offset,&__t5633t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5631t__unsafe_ptr,&__t5621t,8);
  memcpy(__t5631t__unsafe_ptr+8,&__t5626t,8);
  memcpy(__t5631t__unsafe_ptr+16,&__t5627t,8);
  memcpy(__t5631t__unsafe_ptr+24,&__t5628t,8);
  memcpy(__t5631t__unsafe_ptr+32,&__t5629t,8);
  memcpy(__t5631t__unsafe_ptr+40,&__t5630t,8);
  __t5635t=3;
  __t_errcode=mat__t4735t(&__t5631t__unsafe_ptr,&__t5631t__unsafe_size,&__t5631t__unsafe_offset,&__t5631t__unsafe_align,__t5635t,&__t5636t__unsafe_ptr,&__t5636t__pos,&__t5636t__rows,&__t5636t__cols,&__t5636t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  b__unsafe_ptr=__t5636t__unsafe_ptr;
  b__pos=__t5636t__pos;
  b__rows=__t5636t__rows;
  b__cols=__t5636t__cols;
  b__stride=__t5636t__stride;
  print__t380t(__t5637t);
  __t_errcode=mul__t4901t(a__unsafe_ptr,a__pos,a__rows,a__cols,a__stride,b__unsafe_ptr,b__pos,b__rows,b__cols,b__stride,&__t5639t__unsafe_ptr,&__t5639t__pos,&__t5639t__rows,&__t5639t__cols,&__t5639t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=print__t5039t(__t5639t__unsafe_ptr,__t5639t__pos,__t5639t__rows,__t5639t__cols,__t5639t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:exists__t447t(__t5639t__unsafe_ptr,&__t5640t____t4904t____t4662t____t515t__);
  if(__t5640t____t4904t____t4662t____t515t__){
  free__t503t(&__t5639t__unsafe_ptr);
  }
  exists__t447t(__t5633t__unsafe_ptr,&__t5634t____t534t__);
  if(__t5634t____t534t__){
  free__t503t(&__t5633t__unsafe_ptr);
  }
  exists__t447t(__t5618t__unsafe_ptr,&__t5619t____t4849t____t1675t____t515t__);
  if(__t5619t____t4849t____t1675t____t515t__){
  free__t503t(&__t5618t__unsafe_ptr);
  }
  exists__t447t(__t5612t__unsafe_ptr,&__t5613t____t534t__);
  if(__t5613t____t534t__){
  free__t503t(&__t5612t__unsafe_ptr);
  }
  exists__t447t(__t5601t__unsafe_ptr,&__t5602t____t4794t____t1675t____t515t__);
  if(__t5602t____t4794t____t1675t____t515t__){
  free__t503t(&__t5601t__unsafe_ptr);
  }
  exists__t447t(__t5595t__unsafe_ptr,&__t5596t____t534t__);
  if(__t5596t____t534t__){
  free__t503t(&__t5595t__unsafe_ptr);
  }
  exists__t447t(__t5578t__unsafe_ptr,&__t5579t____t534t__);
  if(__t5579t____t534t__){
  free__t503t(&__t5578t__unsafe_ptr);
  }
  
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t5563t();return 0;}