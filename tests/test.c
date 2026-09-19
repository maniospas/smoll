#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
#include "std/extern/mutex.h"
#include "std/extern/math.h"
#include "std/extern/raysupport.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t5663t="add";
const char* const __t10456t="sum_data";
const char* const __t448t="\n";
const char* const __t4471t="writer";
const char* const __t10484t="we got a vector";
const char* const __t10478t="vec__t4722t";
const char* const __t10460t="sum_data__t10447t";
const char* const __t10474t="vec_type";
static const char* __t_all_errcodes[72] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
"nat value too large to pack in nat8",
"nat value too large to pack in nat16",
"nat value too large to pack in nat32",
"slice start cannot be greater than slice end",
"cannot slice beyond 64 bits",
"slice start cannot be greater than or equal to slice end",
"value does not fit in bit slice",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot allocate a buffer of unsized type",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"not found",
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
"imbalanced brackets",
"mutex too large to fit on allocated lane of 64 bytes",
"cannot read pipe while it's being written",
"cannot write pipe while it's being read",
"cannot write to pipe from multiple sources",
"type does not match pipe contents",
"empty input name",
"structural types cannot be shared",
"functors cannot be shared",
"shared surface cannot be a structural type",
"functors cannot be matched",
"can only place vectors on contiguous buffers",
"cannot place vectors on buffer offsets",
"different vector sizes",
"vectors must have the same length",
"at least two values required",
"undefined for constant vectors",
"can only place matrices on contiguous buffers",
"cannot place matrices on buffer offsets",
"buffer size not divisible by vector rows",
"row out of bounds",
"column out of bounds",
"matrix columns must match vector length",
"vector length must match matrix rows",
"inner dimensions must agree",
"computational budget reached",
"failed to open window",
"already drawing on window",
"plot vectors must have the same length"
};
int parallel_sum__t10547t(char* obj__unsafe_data) ;
static inline __attribute__((always_inline)) void console__t424t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void float____buffer__t10490t(char** __t10561t, uint64_t* __t10562t, uint32_t* __t10563t, uint32_t* __t10564t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10561t=unsafe_ptr;
  *__t10562t=unsafe_size;
  *__t10563t=unsafe_offset;
  *__t10564t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t811t(char** __t10565t) {
  char* allocated=*__t10565t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t10565t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t10566t) {
  int value=0;
  *__t10566t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t10567t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t10567t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t10568t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t10568t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t10569t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t10569t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t10570t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t10570t=z;
}

static inline __attribute__((always_inline)) void nat__t691t(uint32_t x, uint64_t* __t10571t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t10571t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t10572t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t10572t=z;
}

static inline __attribute__((always_inline)) void zero__t812t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t650t(char* x, char* __t10573t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t10573t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t10574t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t10574t=z;
}

static inline __attribute__((always_inline)) int alloc__t795t(uint64_t bytes, char** __t10575t) {
  char* allocated=0;
  char __t796t__=0;
  char __t797t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t650t(allocated,&__t796t__);
  not__t42t(__t796t__,&__t797t__);
  if(__t797t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10575t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t934t(char** __t10576t, uint64_t* __t10577t, uint32_t* __t10578t, uint32_t* __t10579t, uint64_t size, char** __t10580t, uint64_t* __t10581t, uint32_t* __t10582t, uint32_t* __t10583t) {
  char* buffer__unsafe_ptr=*__t10576t;
  uint64_t buffer__unsafe_size=*__t10577t;
  uint32_t buffer__unsafe_offset=*__t10578t;
  uint32_t buffer__unsafe_align=*__t10579t;
  int __t935t=0;
  int __t936t=0;
  char __t938t__=0;
  uint64_t __t939t=0;
  char __t940t__=0;
  char __t941t=0;
  uint64_t __t942t=0;
  uint64_t __t943t__=0;
  uint64_t __t944t__=0;
  int __t946t=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  uint64_t __t949t__=0;
  uint64_t __t950t__=0;
  uint64_t bytes=0;
  int __t951t=0;
  uint64_t __t952t=0;
  char __t953t__=0;
  char* __t954t__=0;
  int __t955t=0;
  uint64_t __t956t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t938t__);
  if(__t938t__){
  __t939t=0;
  neq__t158t(size,__t939t,&__t940t__);
  __t941t=__t940t__;
  }
  if(__t941t){
  __t942t=0;
  nat__t691t(buffer__unsafe_align,&__t943t__);
  mul__t212t(__t943t__,size,&__t944t__);
  zero__t812t(buffer__unsafe_ptr,__t942t,__t944t__);
  goto __t_return;
  }
  __t947t=0;
  neq__t158t(buffer__unsafe_size,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t691t(buffer__unsafe_align,&__t949t__);
  mul__t212t(__t949t__,size,&__t950t__);
  bytes=__t950t__;
  __t952t=0;
  eq__t134t(bytes,__t952t,&__t953t__);
  if(__t953t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t795t(bytes,&__t954t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t956t=0;
  zero__t812t(__t954t__,__t956t,bytes);
  buffer__unsafe_ptr=__t954t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t811t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10576t=buffer__unsafe_ptr;
  *__t10577t=buffer__unsafe_size;
  *__t10578t=buffer__unsafe_offset;
  *__t10579t=buffer__unsafe_align;
  *__t10580t=buffer__unsafe_ptr;
  *__t10581t=buffer__unsafe_size;
  *__t10582t=buffer__unsafe_offset;
  *__t10583t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1165t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t10584t) {
  goto __t_return;
  __t_return:
  *__t10584t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t10585t) {
  int __t271t__=0;
  int __t272t=0;
  uint64_t zero=0;
  char __t273t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t271t__);
  zero=0;
  eq__t134t(y,zero,&__t273t__);
  if(__t273t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10585t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1208t(char** __t10586t, uint64_t* __t10587t, uint32_t* __t10588t, uint32_t* __t10589t, uint64_t _pos, char** __t10590t, uint64_t* __t10591t, uint32_t* __t10592t, uint32_t* __t10593t, uint64_t* __t10594t) {
  char* buf__unsafe_ptr=*__t10586t;
  uint64_t buf__unsafe_size=*__t10587t;
  uint32_t buf__unsafe_offset=*__t10588t;
  uint32_t buf__unsafe_align=*__t10589t;
  uint64_t __t1209t=0;
  uint64_t pos=0;
  __t1209t=_pos;
  pos=__t1209t;
  goto __t_return;
  __t_return:
  *__t10586t=buf__unsafe_ptr;
  *__t10587t=buf__unsafe_size;
  *__t10588t=buf__unsafe_offset;
  *__t10589t=buf__unsafe_align;
  *__t10590t=buf__unsafe_ptr;
  *__t10591t=buf__unsafe_size;
  *__t10592t=buf__unsafe_offset;
  *__t10593t=buf__unsafe_align;
  *__t10594t=pos;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t10595t, uint64_t* __t10596t, uint32_t* __t10597t, uint32_t* __t10598t, char** __t10599t, uint64_t* __t10600t, uint32_t* __t10601t, uint32_t* __t10602t, uint64_t* __t10603t) {
  char* buf__unsafe_ptr=*__t10595t;
  uint64_t buf__unsafe_size=*__t10596t;
  uint32_t buf__unsafe_offset=*__t10597t;
  uint32_t buf__unsafe_align=*__t10598t;
  uint64_t __t1212t=0;
  char* __t1213t__buf__unsafe_ptr=0;
  uint64_t __t1213t__buf__unsafe_size=0;
  uint32_t __t1213t__buf__unsafe_offset=0;
  uint32_t __t1213t__buf__unsafe_align=0;
  uint64_t __t1213t__pos=0;
  __t1212t=0;
  arena__t1208t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1212t,&__t1213t__buf__unsafe_ptr,&__t1213t__buf__unsafe_size,&__t1213t__buf__unsafe_offset,&__t1213t__buf__unsafe_align,&__t1213t__pos);
  goto __t_return;
  __t_return:
  *__t10595t=buf__unsafe_ptr;
  *__t10596t=buf__unsafe_size;
  *__t10597t=buf__unsafe_offset;
  *__t10598t=buf__unsafe_align;
  *__t10599t=__t1213t__buf__unsafe_ptr;
  *__t10600t=__t1213t__buf__unsafe_size;
  *__t10601t=__t1213t__buf__unsafe_offset;
  *__t10602t=__t1213t__buf__unsafe_align;
  *__t10603t=__t1213t__pos;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t10604t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10604t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t10605t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t10605t=z;
}

static inline __attribute__((always_inline)) void allocated__t1215t(char** __t10606t, uint64_t* __t10607t, uint32_t* __t10608t, uint32_t* __t10609t, uint64_t pos, char** __t10610t, uint64_t* __t10611t, uint32_t* __t10612t, uint32_t* __t10613t, uint64_t* __t10614t) {
  char* buf__unsafe_ptr=*__t10606t;
  uint64_t buf__unsafe_size=*__t10607t;
  uint32_t buf__unsafe_offset=*__t10608t;
  uint32_t buf__unsafe_align=*__t10609t;
  goto __t_return;
  __t_return:
  *__t10606t=buf__unsafe_ptr;
  *__t10607t=buf__unsafe_size;
  *__t10608t=buf__unsafe_offset;
  *__t10609t=buf__unsafe_align;
  *__t10610t=buf__unsafe_ptr;
  *__t10611t=buf__unsafe_size;
  *__t10612t=buf__unsafe_offset;
  *__t10613t=buf__unsafe_align;
  *__t10614t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1290t(char** __t10615t, uint64_t* __t10616t, uint32_t* __t10617t, uint32_t* __t10618t, uint64_t* __t10619t, uint64_t length, char** __t10620t, uint64_t* __t10621t, uint32_t* __t10622t, uint32_t* __t10623t, uint64_t* __t10624t) {
  char* allocator__buf__unsafe_ptr=*__t10615t;
  uint64_t allocator__buf__unsafe_size=*__t10616t;
  uint32_t allocator__buf__unsafe_offset=*__t10617t;
  uint32_t allocator__buf__unsafe_align=*__t10618t;
  uint64_t allocator__pos=*__t10619t;
  int __t1291t=0;
  uint64_t __t1292t__=0;
  uint64_t next_pos=0;
  uint64_t __t1293t__=0;
  char __t1294t__=0;
  uint64_t __t1295t=0;
  uint64_t __t1296t__=0;
  uint64_t pos=0;
  char* __t1297t__buf__unsafe_ptr=0;
  uint64_t __t1297t__buf__unsafe_size=0;
  uint32_t __t1297t__buf__unsafe_offset=0;
  uint32_t __t1297t__buf__unsafe_align=0;
  uint64_t __t1297t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1292t__);
  next_pos=__t1292t__;
  len__t1165t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1293t__);
  gt__t325t(next_pos,__t1293t__,&__t1294t__);
  if(__t1294t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1295t=0;
  add__t188t(allocator__pos,__t1295t,&__t1296t__);
  pos=__t1296t__;
  allocator__pos=next_pos;
  allocated__t1215t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1297t__buf__unsafe_ptr,&__t1297t__buf__unsafe_size,&__t1297t__buf__unsafe_offset,&__t1297t__buf__unsafe_align,&__t1297t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10615t=allocator__buf__unsafe_ptr;
  *__t10616t=allocator__buf__unsafe_size;
  *__t10617t=allocator__buf__unsafe_offset;
  *__t10618t=allocator__buf__unsafe_align;
  *__t10619t=allocator__pos;
  *__t10620t=__t1297t__buf__unsafe_ptr;
  *__t10621t=__t1297t__buf__unsafe_size;
  *__t10622t=__t1297t__buf__unsafe_offset;
  *__t10623t=__t1297t__buf__unsafe_align;
  *__t10624t=__t1297t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t4725t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t10625t, uint64_t* __t10626t, uint64_t* __t10627t, uint64_t* __t10628t, uint64_t* __t10629t) {
  char* __t4727t__unsafe_ptr=0;
  uint64_t __t4727t__pos=0;
  uint64_t __t4727t__rows=0;
  uint64_t __t4727t__cols=0;
  uint64_t __t4727t__stride=0;
  __t4727t__unsafe_ptr=unsafe_ptr;
  __t4727t__pos=pos;
  __t4727t__rows=rows;
  __t4727t__cols=cols;
  __t4727t__stride=stride;
  goto __t_return;
  __t_return:
  *__t10625t=__t4727t__unsafe_ptr;
  *__t10626t=__t4727t__pos;
  *__t10627t=__t4727t__rows;
  *__t10628t=__t4727t__cols;
  *__t10629t=__t4727t__stride;
}

static inline __attribute__((always_inline)) int mat__t7893t(char** __t10630t, uint64_t* __t10631t, uint32_t* __t10632t, uint32_t* __t10633t, uint64_t* __t10634t, uint64_t rows, uint64_t cols, char** __t10635t, uint64_t* __t10636t, uint64_t* __t10637t, uint64_t* __t10638t, uint64_t* __t10639t) {
  char* FLOATS__buf__unsafe_ptr=*__t10630t;
  uint64_t FLOATS__buf__unsafe_size=*__t10631t;
  uint32_t FLOATS__buf__unsafe_offset=*__t10632t;
  uint32_t FLOATS__buf__unsafe_align=*__t10633t;
  uint64_t FLOATS__pos=*__t10634t;
  uint64_t __t7894t__=0;
  uint64_t __t7895t=0;
  char __t7896t__=0;
  uint64_t __t7897t__=0;
  uint64_t __t7898t=0;
  char __t7899t__=0;
  uint64_t __t7900t__=0;
  uint64_t size=0;
  char* __t7901t__buf__unsafe_ptr=0;
  uint64_t __t7901t__buf__unsafe_size=0;
  uint32_t __t7901t__buf__unsafe_offset=0;
  uint32_t __t7901t__buf__unsafe_align=0;
  uint64_t __t7901t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t7902t=0;
  char* __t7903t__unsafe_ptr=0;
  uint64_t __t7903t__pos=0;
  uint64_t __t7903t__rows=0;
  uint64_t __t7903t__cols=0;
  uint64_t __t7903t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t691t(FLOATS__buf__unsafe_align,&__t7894t__);
  __t7895t=8;
  neq__t158t(__t7894t__,__t7895t,&__t7896t__);
  if(__t7896t__){
  __t_errcode=60;
  goto __t_failure;
  }
  nat__t691t(FLOATS__buf__unsafe_offset,&__t7897t__);
  __t7898t=0;
  neq__t158t(__t7897t__,__t7898t,&__t7899t__);
  if(__t7899t__){
  __t_errcode=61;
  goto __t_failure;
  }
  mul__t212t(rows,cols,&__t7900t__);
  size=__t7900t__;
  __t_errcode=alloc__t1290t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t7901t__buf__unsafe_ptr,&__t7901t__buf__unsafe_size,&__t7901t__buf__unsafe_offset,&__t7901t__buf__unsafe_align,&__t7901t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t7901t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t7901t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t7901t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t7901t__buf__unsafe_align;
  surface__pos=__t7901t__pos;
  mat__t4725t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t7903t__unsafe_ptr,&__t7903t__pos,&__t7903t__rows,&__t7903t__cols,&__t7903t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10630t=FLOATS__buf__unsafe_ptr;
  *__t10631t=FLOATS__buf__unsafe_size;
  *__t10632t=FLOATS__buf__unsafe_offset;
  *__t10633t=FLOATS__buf__unsafe_align;
  *__t10634t=FLOATS__pos;
  *__t10635t=__t7903t__unsafe_ptr;
  *__t10636t=__t7903t__pos;
  *__t10637t=__t7903t__rows;
  *__t10638t=__t7903t__cols;
  *__t10639t=__t7903t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mat__t7958t(char** __t10640t, uint64_t* __t10641t, uint32_t* __t10642t, uint32_t* __t10643t, uint64_t rows, char** __t10644t, uint64_t* __t10645t, uint64_t* __t10646t, uint64_t* __t10647t, uint64_t* __t10648t) {
  char* buf__unsafe_ptr=*__t10640t;
  uint64_t buf__unsafe_size=*__t10641t;
  uint32_t buf__unsafe_offset=*__t10642t;
  uint32_t buf__unsafe_align=*__t10643t;
  uint64_t __t7959t__=0;
  uint64_t __t7960t__=0;
  uint64_t cols=0;
  uint64_t __t7961t__=0;
  uint64_t __t7962t__=0;
  char __t7963t__=0;
  char* __t7964t__buf__unsafe_ptr=0;
  uint64_t __t7964t__buf__unsafe_size=0;
  uint32_t __t7964t__buf__unsafe_offset=0;
  uint32_t __t7964t__buf__unsafe_align=0;
  uint64_t __t7964t__pos=0;
  char* __t7966t__unsafe_ptr=0;
  uint64_t __t7966t__pos=0;
  uint64_t __t7966t__rows=0;
  uint64_t __t7966t__cols=0;
  uint64_t __t7966t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7959t__);
  __t_errcode=div__t270t(__t7959t__,rows,&__t7960t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t7960t__;
  mul__t212t(cols,rows,&__t7961t__);
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7962t__);
  neq__t158t(__t7961t__,__t7962t__,&__t7963t__);
  if(__t7963t__){
  __t_errcode=62;
  goto __t_failure;
  }
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t7964t__buf__unsafe_ptr,&__t7964t__buf__unsafe_size,&__t7964t__buf__unsafe_offset,&__t7964t__buf__unsafe_align,&__t7964t__pos);
  __t_errcode=mat__t7893t(&__t7964t__buf__unsafe_ptr,&__t7964t__buf__unsafe_size,&__t7964t__buf__unsafe_offset,&__t7964t__buf__unsafe_align,&__t7964t__pos,rows,cols,&__t7966t__unsafe_ptr,&__t7966t__pos,&__t7966t__rows,&__t7966t__cols,&__t7966t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10640t=buf__unsafe_ptr;
  *__t10641t=buf__unsafe_size;
  *__t10642t=buf__unsafe_offset;
  *__t10643t=buf__unsafe_align;
  *__t10644t=__t7966t__unsafe_ptr;
  *__t10645t=__t7966t__pos;
  *__t10646t=__t7966t__rows;
  *__t10647t=__t7966t__cols;
  *__t10648t=__t7966t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cpu__t4535t(uint64_t cores, uint64_t* __t10649t) {
  goto __t_return;
  __t_return:
  *__t10649t=cores;
}

static inline __attribute__((always_inline)) void unsafe_spawn____t_buffer____buffer__t4538t(char** __t10650t, uint64_t* __t10651t, uint32_t* __t10652t, uint32_t* __t10653t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10650t=unsafe_ptr;
  *__t10651t=unsafe_size;
  *__t10652t=unsafe_offset;
  *__t10653t=unsafe_align;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1091t(char** __t10654t, uint64_t* __t10655t, uint32_t* __t10656t, uint32_t* __t10657t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t10654t=unsafe_ptr;
  *__t10655t=unsafe_size;
  *__t10656t=unsafe_offset;
  *__t10657t=unsafe_align;
}

int alloc__t1089t(uint64_t size, char** __t10658t, uint64_t* __t10659t, uint32_t* __t10660t, uint32_t* __t10661t) {
  char __t1090t=0;
  char* __t1093t__unsafe_ptr=0;
  uint64_t __t1093t__unsafe_size=0;
  uint32_t __t1093t__unsafe_offset=0;
  uint32_t __t1093t__unsafe_align=0;
  char* __t1094t__unsafe_ptr=0;
  uint64_t __t1094t__unsafe_size=0;
  uint32_t __t1094t__unsafe_offset=0;
  uint32_t __t1094t__unsafe_align=0;
  char* __t1096t__unsafe_ptr=0;
  uint64_t __t1096t__unsafe_size=0;
  uint32_t __t1096t__unsafe_offset=0;
  uint32_t __t1096t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1097t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1091t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align);
  __t_complain=alloc__t934t(&__t1093t__unsafe_ptr,&__t1093t__unsafe_size,&__t1093t__unsafe_offset,&__t1093t__unsafe_align,size,&__t1094t__unsafe_ptr,&__t1094t__unsafe_size,&__t1094t__unsafe_offset,&__t1094t__unsafe_align);
  __t1090t=__t_complain;
  if(__t_complain){
  goto __t1090t__label;
  }
  __t1096t__unsafe_ptr=__t1094t__unsafe_ptr;
  __t1096t__unsafe_size=__t1094t__unsafe_size;
  __t1096t__unsafe_offset=__t1094t__unsafe_offset;
  __t1096t__unsafe_align=__t1094t__unsafe_align;
  ret__unsafe_ptr=__t1096t__unsafe_ptr;
  ret__unsafe_size=__t1096t__unsafe_size;
  ret__unsafe_offset=__t1096t__unsafe_offset;
  ret__unsafe_align=__t1096t__unsafe_align;
  __t1090t__label:__t1090t=__t1090t==0;
  not__t42t(__t1090t,&__t1097t__);
  if(__t1097t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t811t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10658t=ret__unsafe_ptr;
  *__t10659t=ret__unsafe_size;
  *__t10660t=ret__unsafe_offset;
  *__t10661t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t746t(uint64_t to, uint64_t* __t10662t, uint64_t* __t10663t) {
  uint64_t __t747t=0;
  uint64_t from=0;
  __t747t=0;
  from=__t747t;
  goto __t_return;
  __t_return:
  *__t10662t=from;
  *__t10663t=to;
}

static inline __attribute__((always_inline)) void range__t763t(uint64_t _from, uint64_t to, uint64_t* __t10664t, uint64_t* __t10665t) {
  uint64_t __t764t=0;
  uint64_t __t765t__=0;
  uint64_t __t766t=0;
  uint64_t from=0;
  __t764t=0;
  add__t188t(__t764t,_from,&__t765t__);
  __t766t=__t765t__;
  from=__t766t;
  goto __t_return;
  __t_return:
  *__t10664t=from;
  *__t10665t=to;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t10666t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t10666t=z;
}

static inline __attribute__((always_inline)) int mutget__t768t(uint64_t* __t10667t, uint64_t r__to, uint64_t skipped, uint64_t* __t10668t) {
  uint64_t r__from=*__t10667t;
  char __t769t__=0;
  uint64_t ret=0;
  uint64_t __t770t=0;
  uint64_t __t771t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t769t__);
  if(__t769t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t770t=1;
  add__t188t(ret,__t770t,&__t771t__);
  r__from=__t771t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10667t=r__from;
  *__t10668t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t10669t) {
  *__t10669t=to;
}

static inline __attribute__((always_inline)) void add__t813t(char* allocated, uint64_t offset, char** __t10670t) {
  char* element=0;
  char* __t814t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t814t__);
  goto __t_return;
  __t_return:
  *__t10670t=__t814t__;
}

static inline __attribute__((always_inline)) int mutget__t1142t(char** __t10671t, uint64_t* __t10672t, uint32_t* __t10673t, uint32_t* __t10674t, uint64_t i, char** __t10675t) {
  char* buffer__unsafe_ptr=*__t10671t;
  uint64_t buffer__unsafe_size=*__t10672t;
  uint32_t buffer__unsafe_offset=*__t10673t;
  uint32_t buffer__unsafe_align=*__t10674t;
  int __t1143t=0;
  char __t1144t__=0;
  uint64_t __t1145t__=0;
  uint64_t __t1146t__=0;
  uint64_t __t1147t__=0;
  uint64_t __t1148t__=0;
  char* __t1149t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1144t__);
  if(__t1144t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t691t(buffer__unsafe_align,&__t1145t__);
  mul__t212t(i,__t1145t__,&__t1146t__);
  nat__t691t(buffer__unsafe_offset,&__t1147t__);
  add__t188t(__t1146t__,__t1147t__,&__t1148t__);
  add__t813t(buffer__unsafe_ptr,__t1148t__,&__t1149t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10671t=buffer__unsafe_ptr;
  *__t10672t=buffer__unsafe_size;
  *__t10673t=buffer__unsafe_offset;
  *__t10674t=buffer__unsafe_align;
  *__t10675t=__t1149t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void join__t4533t(char** __t10676t) {
  char* thread__unsafe_ptr=*__t10676t;
  char __t4534t__=0;
  exists__t650t(thread__unsafe_ptr,&__t4534t__);
  if(__t4534t__){
  thread_join(thread__unsafe_ptr);
  }
  *__t10676t=thread__unsafe_ptr;
}

static inline __attribute__((always_inline)) int growing_thread_pool__t4537t(uint64_t CPU__cores, uint64_t shared_storage, uint64_t* __t10677t, char** __t10678t, uint64_t* __t10679t, uint32_t* __t10680t, uint32_t* __t10681t, uint64_t* __t10682t, char** __t10683t, uint64_t* __t10684t, uint32_t* __t10685t, uint32_t* __t10686t, uint64_t* __t10687t, char* __t10688t) {
  char* __t4540t__unsafe_ptr=0;
  uint64_t __t4540t__unsafe_size=0;
  uint32_t __t4540t__unsafe_offset=0;
  uint32_t __t4540t__unsafe_align=0;
  char* __t4541t__unsafe_ptr=0;
  uint64_t __t4541t__unsafe_size=0;
  uint32_t __t4541t__unsafe_offset=0;
  uint32_t __t4541t__unsafe_align=0;
  char* __t4543t__buf__unsafe_ptr=0;
  uint64_t __t4543t__buf__unsafe_size=0;
  uint32_t __t4543t__buf__unsafe_offset=0;
  uint32_t __t4543t__buf__unsafe_align=0;
  uint64_t __t4543t__pos=0;
  char* __t4544t__buf__unsafe_ptr=0;
  uint64_t __t4544t__buf__unsafe_size=0;
  uint32_t __t4544t__buf__unsafe_offset=0;
  uint32_t __t4544t__buf__unsafe_align=0;
  uint64_t __t4544t__pos=0;
  char* unsafe_threads__buf__unsafe_ptr=0;
  uint64_t unsafe_threads__buf__unsafe_size=0;
  uint32_t unsafe_threads__buf__unsafe_offset=0;
  uint32_t unsafe_threads__buf__unsafe_align=0;
  uint64_t unsafe_threads__pos=0;
  char* __t4545t__unsafe_ptr=0;
  uint64_t __t4545t__unsafe_size=0;
  uint32_t __t4545t__unsafe_offset=0;
  uint32_t __t4545t__unsafe_align=0;
  char* __t4547t__buf__unsafe_ptr=0;
  uint64_t __t4547t__buf__unsafe_size=0;
  uint32_t __t4547t__buf__unsafe_offset=0;
  uint32_t __t4547t__buf__unsafe_align=0;
  uint64_t __t4547t__pos=0;
  char* __t4548t__buf__unsafe_ptr=0;
  uint64_t __t4548t__buf__unsafe_size=0;
  uint32_t __t4548t__buf__unsafe_offset=0;
  uint32_t __t4548t__buf__unsafe_align=0;
  uint64_t __t4548t__pos=0;
  char* unsafe_arena__buf__unsafe_ptr=0;
  uint64_t unsafe_arena__buf__unsafe_size=0;
  uint32_t unsafe_arena__buf__unsafe_offset=0;
  uint32_t unsafe_arena__buf__unsafe_align=0;
  uint64_t unsafe_arena__pos=0;
  char __t4549t=0;
  char __t4550t=0;
  char joined=0;
  char __t4551t__=0;
  uint64_t __t4552t=0;
  uint64_t __t4553t__=0;
  uint64_t __t4554t__from=0;
  uint64_t __t4554t__to=0;
  uint64_t __t4555t__from=0;
  uint64_t __t4555t__to=0;
  char __t4556t=0;
  uint64_t __t4557t__=0;
  uint64_t i=0;
  char __t4558t=0;
  char* __t4560t__=0;
  char* __t4561t__unsafe_ptr=0;
  char __t4563t=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_spawn____t_buffer____buffer__t4538t(&__t4540t__unsafe_ptr,&__t4540t__unsafe_size,&__t4540t__unsafe_offset,&__t4540t__unsafe_align);
  __t_errcode=alloc__t934t(&__t4540t__unsafe_ptr,&__t4540t__unsafe_size,&__t4540t__unsafe_offset,&__t4540t__unsafe_align,CPU__cores,&__t4541t__unsafe_ptr,&__t4541t__unsafe_size,&__t4541t__unsafe_offset,&__t4541t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1211t(&__t4541t__unsafe_ptr,&__t4541t__unsafe_size,&__t4541t__unsafe_offset,&__t4541t__unsafe_align,&__t4543t__buf__unsafe_ptr,&__t4543t__buf__unsafe_size,&__t4543t__buf__unsafe_offset,&__t4543t__buf__unsafe_align,&__t4543t__pos);
  __t4544t__buf__unsafe_ptr=__t4543t__buf__unsafe_ptr;
  __t4544t__buf__unsafe_size=__t4543t__buf__unsafe_size;
  __t4544t__buf__unsafe_offset=__t4543t__buf__unsafe_offset;
  __t4544t__buf__unsafe_align=__t4543t__buf__unsafe_align;
  __t4544t__pos=__t4543t__pos;
  unsafe_threads__buf__unsafe_ptr=__t4544t__buf__unsafe_ptr;
  unsafe_threads__buf__unsafe_size=__t4544t__buf__unsafe_size;
  unsafe_threads__buf__unsafe_offset=__t4544t__buf__unsafe_offset;
  unsafe_threads__buf__unsafe_align=__t4544t__buf__unsafe_align;
  unsafe_threads__pos=__t4544t__pos;
  __t_errcode=alloc__t1089t(shared_storage,&__t4545t__unsafe_ptr,&__t4545t__unsafe_size,&__t4545t__unsafe_offset,&__t4545t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1211t(&__t4545t__unsafe_ptr,&__t4545t__unsafe_size,&__t4545t__unsafe_offset,&__t4545t__unsafe_align,&__t4547t__buf__unsafe_ptr,&__t4547t__buf__unsafe_size,&__t4547t__buf__unsafe_offset,&__t4547t__buf__unsafe_align,&__t4547t__pos);
  __t4548t__buf__unsafe_ptr=__t4547t__buf__unsafe_ptr;
  __t4548t__buf__unsafe_size=__t4547t__buf__unsafe_size;
  __t4548t__buf__unsafe_offset=__t4547t__buf__unsafe_offset;
  __t4548t__buf__unsafe_align=__t4547t__buf__unsafe_align;
  __t4548t__pos=__t4547t__pos;
  unsafe_arena__buf__unsafe_ptr=__t4548t__buf__unsafe_ptr;
  unsafe_arena__buf__unsafe_size=__t4548t__buf__unsafe_size;
  unsafe_arena__buf__unsafe_offset=__t4548t__buf__unsafe_offset;
  unsafe_arena__buf__unsafe_align=__t4548t__buf__unsafe_align;
  unsafe_arena__pos=__t4548t__pos;
  __t4549t=0;
  __t4550t=__t4549t;
  joined=__t4550t;
  goto __t_return;
  
  __t_failure:not__t42t(joined,&__t4551t__);
  if(__t4551t__){
  len__t1165t(unsafe_threads__buf__unsafe_ptr,unsafe_threads__buf__unsafe_size,unsafe_threads__buf__unsafe_offset,unsafe_threads__buf__unsafe_align,&unsafe_threads__buf__unsafe_size);
  of__t746t(unsafe_threads__buf__unsafe_size,&__t4554t__from,&unsafe_threads__buf__unsafe_size);
  range__t763t(__t4554t__from,unsafe_threads__buf__unsafe_size,&__t4555t__from,&unsafe_threads__buf__unsafe_size);
  __t4552t=0-1;
  while(1){
  __t4552t=__t4552t+1;
  __t_complain=mutget__t768t(&__t4555t__from,unsafe_threads__buf__unsafe_size,__t4552t,&__t4557t__);
  __t4556t=__t_complain;
  if(__t_complain){
  goto __t4556t__label;
  }
  i=__t4557t__;
  __t4556t__label:__t4556t=__t4556t==0;
  if(!__t4556t){
  break;
  }
  __t_complain=mutget__t1142t(&unsafe_threads__buf__unsafe_ptr,&unsafe_threads__buf__unsafe_size,&unsafe_threads__buf__unsafe_offset,&unsafe_threads__buf__unsafe_align,i,&__t4560t__);
  __t4558t=__t_complain;
  if(__t_complain){
  goto __t4558t__label;
  }
  if(!__t4560t__){
  __t_complain=2;
  goto __t4558t__label;
  }
  else{
  memcpy(&__t4561t__unsafe_ptr,__t4560t__,8);
  }
  join__t4533t(&__t4561t__unsafe_ptr);
  __t4558t__label:__t4558t=__t4558t==0;
  }
  }
  joined=1;
  joined=joined;
  free__t811t(&unsafe_arena__buf__unsafe_ptr);
  free__t811t(&unsafe_threads__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10677t=CPU__cores;
  *__t10678t=unsafe_threads__buf__unsafe_ptr;
  *__t10679t=unsafe_threads__buf__unsafe_size;
  *__t10680t=unsafe_threads__buf__unsafe_offset;
  *__t10681t=unsafe_threads__buf__unsafe_align;
  *__t10682t=unsafe_threads__pos;
  *__t10683t=unsafe_arena__buf__unsafe_ptr;
  *__t10684t=unsafe_arena__buf__unsafe_size;
  *__t10685t=unsafe_arena__buf__unsafe_offset;
  *__t10686t=unsafe_arena__buf__unsafe_align;
  *__t10687t=unsafe_arena__pos;
  *__t10688t=joined;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pipe____t_buffer____buffer__t10512t(char** __t10689t, uint64_t* __t10690t, uint32_t* __t10691t, uint32_t* __t10692t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10689t=unsafe_ptr;
  *__t10690t=unsafe_size;
  *__t10691t=unsafe_offset;
  *__t10692t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t4722t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t10693t, uint64_t* __t10694t, uint64_t* __t10695t) {
  char* __t4724t__unsafe_ptr=0;
  uint64_t __t4724t__pos=0;
  uint64_t __t4724t__length=0;
  __t4724t__unsafe_ptr=unsafe_ptr;
  __t4724t__pos=pos;
  __t4724t__length=length;
  goto __t_return;
  __t_return:
  *__t10693t=__t4724t__unsafe_ptr;
  *__t10694t=__t4724t__pos;
  *__t10695t=__t4724t__length;
}

static inline __attribute__((always_inline)) int row__t8021t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, char** __t10696t, uint64_t* __t10697t, uint64_t* __t10698t) {
  char __t8022t__=0;
  uint64_t __t8023t__=0;
  uint64_t __t8024t__=0;
  char* __t8025t__unsafe_ptr=0;
  uint64_t __t8025t__pos=0;
  uint64_t __t8025t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,m__rows,&__t8022t__);
  if(__t8022t__){
  __t_errcode=63;
  goto __t_failure;
  }
  mul__t212t(i,m__stride,&__t8023t__);
  add__t188t(m__pos,__t8023t__,&__t8024t__);
  vec__t4722t(m__unsafe_ptr,__t8024t__,m__cols,&__t8025t__unsafe_ptr,&__t8025t__pos,&__t8025t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10696t=__t8025t__unsafe_ptr;
  *__t10697t=__t8025t__pos;
  *__t10698t=__t8025t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data__t10447t(uint64_t row, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t10699t, char** __t10700t, uint64_t* __t10701t, uint64_t* __t10702t, double* __t10703t) {
  double __t10448t=0;
  double __t10449t=0;
  double result=0;
  __t10448t=0.0;
  __t10449t=__t10448t;
  result=__t10449t;
  goto __t_return;
  __t_return:
  *__t10699t=row;
  *__t10700t=v__unsafe_ptr;
  *__t10701t=v__pos;
  *__t10702t=v__length;
  *__t10703t=result;
}

static inline __attribute__((always_inline)) int at__t1574t(char** __t10704t, uint64_t* __t10705t, uint32_t* __t10706t, uint32_t* __t10707t, uint64_t surface__pos, char** __t10708t) {
  char* surface__buf__unsafe_ptr=*__t10704t;
  uint64_t surface__buf__unsafe_size=*__t10705t;
  uint32_t surface__buf__unsafe_offset=*__t10706t;
  uint32_t surface__buf__unsafe_align=*__t10707t;
  char* __t1576t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t1142t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t1576t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10704t=surface__buf__unsafe_ptr;
  *__t10705t=surface__buf__unsafe_size;
  *__t10706t=surface__buf__unsafe_offset;
  *__t10707t=surface__buf__unsafe_align;
  *__t10708t=__t1576t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int pipe_data_alloc__t4603t(uint64_t THREADS__CPU__cores, char** __t10709t, uint64_t* __t10710t, uint32_t* __t10711t, uint32_t* __t10712t, uint64_t* __t10713t, char** __t10714t, uint64_t* __t10715t, uint32_t* __t10716t, uint32_t* __t10717t, uint64_t* __t10718t, char* __t10719t, uint64_t size, char** __t10720t) {
  char* THREADS__unsafe_threads__buf__unsafe_ptr=*__t10709t;
  uint64_t THREADS__unsafe_threads__buf__unsafe_size=*__t10710t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_offset=*__t10711t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_align=*__t10712t;
  uint64_t THREADS__unsafe_threads__pos=*__t10713t;
  char* THREADS__unsafe_arena__buf__unsafe_ptr=*__t10714t;
  uint64_t THREADS__unsafe_arena__buf__unsafe_size=*__t10715t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_offset=*__t10716t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_align=*__t10717t;
  uint64_t THREADS__unsafe_arena__pos=*__t10718t;
  char THREADS__joined=*__t10719t;
  char* __t4604t__buf__unsafe_ptr=0;
  uint64_t __t4604t__buf__unsafe_size=0;
  uint32_t __t4604t__buf__unsafe_offset=0;
  uint32_t __t4604t__buf__unsafe_align=0;
  uint64_t __t4604t__pos=0;
  char* __t4605t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1290t(&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,size,&__t4604t__buf__unsafe_ptr,&__t4604t__buf__unsafe_size,&__t4604t__buf__unsafe_offset,&__t4604t__buf__unsafe_align,&__t4604t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1574t(&__t4604t__buf__unsafe_ptr,&__t4604t__buf__unsafe_size,&__t4604t__buf__unsafe_offset,&__t4604t__buf__unsafe_align,__t4604t__pos,&__t4605t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10709t=THREADS__unsafe_threads__buf__unsafe_ptr;
  *__t10710t=THREADS__unsafe_threads__buf__unsafe_size;
  *__t10711t=THREADS__unsafe_threads__buf__unsafe_offset;
  *__t10712t=THREADS__unsafe_threads__buf__unsafe_align;
  *__t10713t=THREADS__unsafe_threads__pos;
  *__t10714t=THREADS__unsafe_arena__buf__unsafe_ptr;
  *__t10715t=THREADS__unsafe_arena__buf__unsafe_size;
  *__t10716t=THREADS__unsafe_arena__buf__unsafe_offset;
  *__t10717t=THREADS__unsafe_arena__buf__unsafe_align;
  *__t10718t=THREADS__unsafe_arena__pos;
  *__t10719t=THREADS__joined;
  *__t10720t=__t4605t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t5t(uint64_t* __t10721t) {
  uint64_t value=0;
  *__t10721t=value;
}

static inline __attribute__((always_inline)) void pipe_data__t4415t(const char* value, uint64_t max_stored_size, const char** __t10722t, uint64_t* __t10723t, uint64_t* __t10724t, uint64_t* __t10725t, uint64_t* __t10726t, uint64_t* __t10727t, uint64_t* __t10728t, uint64_t* __t10729t, uint64_t* __t10730t) {
  uint64_t __t4416t=0;
  uint64_t __t4417t=0;
  uint64_t readers=0;
  uint64_t __t4418t=0;
  uint64_t __t4419t=0;
  uint64_t writers=0;
  uint64_t __t4425t__=0;
  uint64_t __t4426t__=0;
  uint64_t __t4427t__=0;
  uint64_t __t4428t__=0;
  uint64_t __t4429t__=0;
  uint64_t unsafe_mutex____t4425t__=0;
  uint64_t unsafe_mutex____t4426t__=0;
  uint64_t unsafe_mutex____t4427t__=0;
  uint64_t unsafe_mutex____t4428t__=0;
  uint64_t unsafe_mutex____t4429t__=0;
  __t4416t=0;
  __t4417t=__t4416t;
  readers=__t4417t;
  __t4418t=0;
  __t4419t=__t4418t;
  writers=__t4419t;
  nat__t5t(&__t4425t__);
  nat__t5t(&__t4426t__);
  nat__t5t(&__t4427t__);
  nat__t5t(&__t4428t__);
  nat__t5t(&__t4429t__);
  unsafe_mutex____t4425t__=__t4425t__;
  unsafe_mutex____t4426t__=__t4426t__;
  unsafe_mutex____t4427t__=__t4427t__;
  unsafe_mutex____t4428t__=__t4428t__;
  unsafe_mutex____t4429t__=__t4429t__;
  goto __t_return;
  __t_return:
  *__t10722t=value;
  *__t10723t=readers;
  *__t10724t=writers;
  *__t10725t=max_stored_size;
  *__t10726t=unsafe_mutex____t4425t__;
  *__t10727t=unsafe_mutex____t4426t__;
  *__t10728t=unsafe_mutex____t4427t__;
  *__t10729t=unsafe_mutex____t4428t__;
  *__t10730t=unsafe_mutex____t4429t__;
}

static inline __attribute__((always_inline)) void pipe_data____t_buffer____buffer__t10540t(char** __t10731t, uint64_t* __t10732t, uint32_t* __t10733t, uint32_t* __t10734t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=72;
  *__t10731t=unsafe_ptr;
  *__t10732t=unsafe_size;
  *__t10733t=unsafe_offset;
  *__t10734t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_mutex_init__t4598t(char** __t10735t, char** __t10736t) {
  char* obj=*__t10735t;
  uint64_t __t4599t=0;
  char* __t4600t__=0;
  char* mutex_ptr_construct=0;
  uint64_t __t4601t=0;
  char* __t4602t__=0;
  char* mutex_ptr=0;
  __t4599t=8;
  add__t813t(obj,__t4599t,&__t4600t__);
  mutex_ptr_construct=__t4600t__;
  mutex_init((mutex_t*)mutex_ptr_construct);
  goto __t_return;
  __t_return:
  *__t10735t=obj;
  *__t10736t=obj;
}

static inline __attribute__((always_inline)) void pipe__t4432t(char* unsafe_data, char** __t10737t) {
  goto __t_return;
  __t_return:
  *__t10737t=unsafe_data;
}

static inline __attribute__((always_inline)) int unsafe_pipe_lock__t4434t(char* obj__unsafe_data) {
  uint64_t mutex_size=0;
  uint64_t __t4435t=0;
  char __t4436t__=0;
  char* __t4438t=0;
  char* mutex_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  mutex_size=sizeof(mutex_t);
  __t4435t=48;
  gt__t325t(mutex_size,__t4435t,&__t4436t__);
  if(__t4436t__){
  __t_errcode=44;
  goto __t_failure;
  }
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4438t=obj__unsafe_data+32;
  mutex_ptr=__t4438t;
  mutex_lock((mutex_t*)mutex_ptr);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_unlock__t4439t(char* obj__unsafe_data) {
  uint64_t mutex_size=0;
  uint64_t __t4440t=0;
  char __t4441t__=0;
  char* __t4443t=0;
  char* mutex_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  mutex_size=sizeof(mutex_t);
  __t4440t=48;
  gt__t325t(mutex_size,__t4440t,&__t4441t__);
  if(__t4441t__){
  __t_errcode=44;
  goto __t_failure;
  }
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4443t=obj__unsafe_data+32;
  mutex_ptr=__t4443t;
  mutex_unlock((mutex_t*)mutex_ptr);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_own__t4467t(char* obj__unsafe_data, char** __t10738t, uint64_t* __t10739t, uint64_t* __t10740t) {
  char __t4469t=0;
  char __t4470t=0;
  char* __t4473t__readers=0;
  uint64_t __t4474t__readers=0;
  uint64_t readers=0;
  uint64_t __t4475t=0;
  char* __t4477t__writers=0;
  uint64_t __t4478t__writers=0;
  uint64_t __t4479t__=0;
  uint64_t writers=0;
  char* __t4481t__writers=0;
  int __t4482t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4434t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4470t=1;
  if(__t4471t!=__t4471t){
  __t4470t=0;
  }
  if(__t4470t){
  __t4469t=1;
  }
  if(__t4469t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4473t__readers=obj__unsafe_data+8;
  if(!__t4473t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4474t__readers,__t4473t__readers,8);
  readers=__t4474t__readers;
  __t4475t=1;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4477t__writers=obj__unsafe_data+16;
  if(!__t4477t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4478t__writers,__t4477t__writers,8);
  add__t188t(__t4475t,__t4478t__writers,&__t4479t__);
  writers=__t4479t__;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4481t__writers=obj__unsafe_data+16;
  if(!__t4481t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4481t__writers,&writers,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4439t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10738t=obj__unsafe_data;
  *__t10739t=readers;
  *__t10740t=writers;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t10741t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t10741t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t10742t) {
  int __t402t__=0;
  int __t403t=0;
  int __t404t=0;
  char __t405t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t109t(x,y,&__t402t__);
  lt__t301t(x,y,&__t405t__);
  if(__t405t__){
  __t_errcode=6;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10742t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_disown__t4497t(char* obj__unsafe_data) {
  int __t4499t=0;
  char __t4500t=0;
  char __t4501t=0;
  char* __t4503t__writers=0;
  char* __t4505t__writers=0;
  uint64_t __t4506t__writers=0;
  uint64_t __t4507t=0;
  uint64_t __t4508t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4434t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4501t=1;
  if(__t4471t!=__t4471t){
  __t4501t=0;
  }
  if(__t4501t){
  __t4500t=1;
  }
  if(__t4500t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4503t__writers=obj__unsafe_data+16;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4505t__writers=obj__unsafe_data+16;
  if(!__t4505t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4506t__writers,__t4505t__writers,8);
  __t4507t=1;
  __t_errcode=sub__t401t(__t4506t__writers,__t4507t,&__t4508t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4503t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4503t__writers,&__t4508t__,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4439t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4517t(char* _obj__unsafe_data, char** __t10743t) {
  char* __t4518t__obj__unsafe_data=0;
  uint64_t __t4518t__readers=0;
  uint64_t __t4518t__writers=0;
  char* status__obj__unsafe_data=0;
  uint64_t status__readers=0;
  uint64_t status__writers=0;
  uint64_t __t4519t=0;
  char __t4520t__=0;
  uint64_t __t4521t=0;
  char __t4522t__=0;
  char __t4523t=0;
  char* obj__unsafe_data=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_own__t4467t(_obj__unsafe_data,&__t4518t__obj__unsafe_data,&__t4518t__readers,&__t4518t__writers);
  if(__t_errcode){
  goto __t_failure;
  }
  status__obj__unsafe_data=__t4518t__obj__unsafe_data;
  status__readers=__t4518t__readers;
  status__writers=__t4518t__writers;
  __t4519t=0;
  neq__t158t(status__readers,__t4519t,&__t4520t__);
  if(__t4520t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t4521t=1;
  gt__t325t(status__writers,__t4521t,&__t4522t__);
  if(__t4522t__){
  __t_errcode=47;
  goto __t_failure;
  }
  obj__unsafe_data=_obj__unsafe_data;
  goto __t_return;
  
  __t_failure:__t_complain=unsafe_pipe_disown__t4497t(obj__unsafe_data);
  __t4523t=__t_complain;
  if(__t_complain){
  goto __t4523t__label;
  }
  __t4523t__label:__t4523t=__t4523t==0;
  
  goto __t_skip_returns;__t_return:
  *__t10743t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data____t_buffer____buffer__t10461t(char** __t10744t, uint64_t* __t10745t, uint32_t* __t10746t, uint32_t* __t10747t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=40;
  *__t10744t=unsafe_ptr;
  *__t10745t=unsafe_size;
  *__t10746t=unsafe_offset;
  *__t10747t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1821t(const char* x, const char* y, char* __t10748t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t10748t=z;
}

static inline __attribute__((always_inline)) void neq__t1850t(const char* x, const char* y, char* __t10749t) {
  char __t1851t__=0;
  char __t1852t__=0;
  eq__t1821t(x,y,&__t1851t__);
  not__t42t(__t1851t__,&__t1852t__);
  goto __t_return;
  __t_return:
  *__t10749t=__t1852t__;
}

static inline __attribute__((always_inline)) int unsafe_pipe_data_match__t4589t(char* obj__obj__unsafe_data, const char* name, char* type, char** __t10750t) {
  char* __t4591t__value=0;
  const char* __t4592t__value=0;
  const char* found=0;
  char __t4593t__=0;
  uint64_t __t4594t=0;
  char* __t4595t__=0;
  char* __t4596t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4591t__value=obj__obj__unsafe_data+0;
  if(!__t4591t__value){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4592t__value,__t4591t__value,8);
  found=__t4592t__value;
  neq__t1850t(found,name,&__t4593t__);
  if(__t4593t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t4594t=72;
  add__t813t(obj__obj__unsafe_data,__t4594t,&__t4595t__);
  unsafe_attach_type__t28t(__t4595t__,type,&__t4596t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10750t=__t4596t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void iter__t4973t(char* vec__unsafe_ptr, uint64_t vec__pos, uint64_t vec__length, char** __t10751t, uint64_t* __t10752t, uint64_t* __t10753t) {
  goto __t_return;
  __t_return:
  *__t10751t=vec__unsafe_ptr;
  *__t10752t=vec__pos;
  *__t10753t=vec__length;
}

static inline __attribute__((always_inline)) void get__t4960t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t10754t) {
  int __t4961t=0;
  uint64_t __t4962t=0;
  uint64_t __t4963t__=0;
  uint64_t __t4964t__=0;
  char* __t4965t__=0;
  __t4962t=8;
  add__t188t(i,v__pos,&__t4963t__);
  mul__t212t(__t4962t,__t4963t__,&__t4964t__);
  add__t813t(v__unsafe_ptr,__t4964t__,&__t4965t__);
  goto __t_return;
  __t_return:
  *__t10754t=__t4965t__;
}

static inline __attribute__((always_inline)) int get__t4975t(char* v__vec__unsafe_ptr, uint64_t v__vec__pos, uint64_t v__vec__length, uint64_t i, double* __t10755t) {
  char __t4976t__=0;
  char* __t4979t__=0;
  double __t4980t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,v__vec__length,&__t4976t__);
  if(__t4976t__){
  __t_errcode=22;
  goto __t_failure;
  }
  get__t4960t(v__vec__unsafe_ptr,v__vec__pos,v__vec__length,i,&__t4979t__);
  if(!__t4979t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4980t__value,__t4979t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10755t=__t4980t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t10756t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t10756t=__t87t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t10757t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10757t=z;
}

static inline __attribute__((always_inline)) void reduce__t5660t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10758t) {
  char __t5661t=0;
  char __t5662t=0;
  double __t5664t=0;
  double __t5665t=0;
  double ret=0;
  int __t5666t=0;
  int __t5667t=0;
  int __t5668t=0;
  int __t5669t__=0;
  uint64_t __t5670t=0;
  char* __t5671t__vec__unsafe_ptr=0;
  uint64_t __t5671t__vec__pos=0;
  uint64_t __t5671t__vec__length=0;
  char __t5672t=0;
  double __t5673t__=0;
  double _value=0;
  double __t5674t=0;
  double value=0;
  int __t5675t=0;
  int __t5676t=0;
  int __t5677t=0;
  int __t5678t=0;
  int __t5679t=0;
  char __t5680t=0;
  char __t5681t=0;
  double __t5682t__=0;
  int __t5683t=0;
  int __t5684t=0;
  int __t_complain=0;
  __t5662t=1;
  if(__t5663t!=__t5663t){
  __t5662t=0;
  }
  if(__t5662t){
  __t5661t=1;
  }
  if(__t5661t){
  __t5664t=0.0;
  __t5665t=__t5664t;
  ret=__t5665t;
  }
  not__t51t(__t5668t,&__t5669t__);
  iter__t4973t(v__unsafe_ptr,v__pos,v__length,&__t5671t__vec__unsafe_ptr,&__t5671t__vec__pos,&__t5671t__vec__length);
  __t5670t=0-1;
  while(1){
  __t5670t=__t5670t+1;
  __t_complain=get__t4975t(__t5671t__vec__unsafe_ptr,__t5671t__vec__pos,__t5671t__vec__length,__t5670t,&__t5673t__);
  __t5672t=__t_complain;
  if(__t_complain){
  goto __t5672t__label;
  }
  _value=__t5673t__;
  __t5672t__label:__t5672t=__t5672t==0;
  if(!__t5672t){
  break;
  }
  __t5674t=_value;
  value=__t5674t;
  __t5681t=1;
  if(__t5663t!=__t5663t){
  __t5681t=0;
  }
  if(__t5681t){
  __t5680t=1;
  }
  if(__t5680t){
  add__t166t(ret,value,&__t5682t__);
  ret=__t5682t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t10758t=ret;
}

static inline __attribute__((always_inline)) void sum__t7645t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10759t) {
  double __t7647t__=0;
  reduce__t5660t(v__unsafe_ptr,v__pos,v__length,&__t7647t__);
  goto __t_return;
  __t_return:
  *__t10759t=__t7647t__;
}

static inline __attribute__((always_inline)) void vec____t_buffer____buffer__t10479t(char** __t10760t, uint64_t* __t10761t, uint32_t* __t10762t, uint32_t* __t10763t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t10760t=unsafe_ptr;
  *__t10761t=unsafe_size;
  *__t10762t=unsafe_offset;
  *__t10763t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t427t() {
  console__t424t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t446t(const char* value) {
  int __t447t=0;
  const char* endl=0;
  endl=__t448t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) int parallel_sum__t10451t(char* obj__unsafe_data) {
  char* __t10453t__obj__unsafe_data=0;
  char __t10454t____t4523t=0;
  char* reader__obj__unsafe_data=0;
  char __t10455t=0;
  char* __t10463t__unsafe_ptr=0;
  uint64_t __t10463t__unsafe_size=0;
  uint32_t __t10463t__unsafe_offset=0;
  uint32_t __t10463t__unsafe_align=0;
  char* __t10464t__=0;
  char* __t10465t=0;
  char* sum_data=0;
  char __t10473t=0;
  char* __t10481t__unsafe_ptr=0;
  uint64_t __t10481t__unsafe_size=0;
  uint32_t __t10481t__unsafe_offset=0;
  uint32_t __t10481t__unsafe_align=0;
  char* __t10482t__=0;
  char* p=0;
  double __t10466t=0;
  double a__result=0;
  char* __t10468t__result=0;
  char* __t10470t=0;
  char* __t10471t__unsafe_ptr=0;
  uint64_t __t10471t__pos=0;
  uint64_t __t10471t__length=0;
  double __t10472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4517t(obj__unsafe_data,&__t10453t__obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  reader__obj__unsafe_data=__t10453t__obj__unsafe_data;
  sum_data____t_buffer____buffer__t10461t(&__t10463t__unsafe_ptr,&__t10463t__unsafe_size,&__t10463t__unsafe_offset,&__t10463t__unsafe_align);
  __t_complain=unsafe_pipe_data_match__t4589t(reader__obj__unsafe_data,__t10460t,__t10463t__unsafe_ptr,&__t10464t__);
  __t10455t=__t_complain;
  if(__t_complain){
  goto __t10455t__label;
  }
  __t10465t=__t10464t__;
  sum_data=__t10465t;
  __t10455t__label:__t10455t=__t10455t==0;
  if(__t10455t){
  __t10466t=2.0;
  a__result=__t10466t;
  if(!sum_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10468t__result=sum_data+32;
  if(!sum_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10470t=sum_data+8;
  if(!__t10470t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10471t__unsafe_ptr,__t10470t,8);
  memcpy(&__t10471t__pos,__t10470t+8,8);
  memcpy(&__t10471t__length,__t10470t+16,8);
  sum__t7645t(__t10471t__unsafe_ptr,__t10471t__pos,__t10471t__length,&__t10472t__);
  if(!__t10468t__result){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10468t__result,&__t10472t__,8);
  }
  else{
  vec____t_buffer____buffer__t10479t(&__t10481t__unsafe_ptr,&__t10481t__unsafe_size,&__t10481t__unsafe_offset,&__t10481t__unsafe_align);
  __t_complain=unsafe_pipe_data_match__t4589t(reader__obj__unsafe_data,__t10478t,__t10481t__unsafe_ptr,&__t10482t__);
  __t10473t=__t_complain;
  if(__t_complain){
  goto __t10473t__label;
  }
  p=__t10482t__;
  __t10473t__label:__t10473t=__t10473t==0;
  if(__t10473t){
  unsafe_console__t427t();
  print__t446t(__t10484t);
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:__t_complain=unsafe_pipe_disown__t4497t(__t10453t__obj__unsafe_data);
  __t10454t____t4523t=__t_complain;
  if(__t_complain){
  goto __t4523t__label;
  }
  __t4523t__label:__t10454t____t4523t=__t10454t____t4523t==0;
  
  return __t_errcode;
}

int parallel_sum__t10547t(char* obj__unsafe_data) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=parallel_sum__t10451t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_spawn__t4531t(__smoll_func_ptr_type func, char* input__unsafe_data, char** __t10764t) {
  char* _unsafe_ptr=0;
  char* unsafe_ptr=0;
  _unsafe_ptr=thread_create((thread_func_t)func,(void*)input__unsafe_data);
  unsafe_ptr=_unsafe_ptr;
  goto __t_return;
  __t_return:
  *__t10764t=unsafe_ptr;
}

static inline __attribute__((always_inline)) int alloc__t1298t(char** __t10765t, uint64_t* __t10766t, uint32_t* __t10767t, uint32_t* __t10768t, uint64_t* __t10769t, char** __t10770t, uint64_t* __t10771t, uint32_t* __t10772t, uint32_t* __t10773t, uint64_t* __t10774t) {
  char* allocator__buf__unsafe_ptr=*__t10765t;
  uint64_t allocator__buf__unsafe_size=*__t10766t;
  uint32_t allocator__buf__unsafe_offset=*__t10767t;
  uint32_t allocator__buf__unsafe_align=*__t10768t;
  uint64_t allocator__pos=*__t10769t;
  int __t1299t=0;
  uint64_t __t1300t=0;
  uint64_t length=0;
  uint64_t __t1301t__=0;
  uint64_t next_pos=0;
  uint64_t __t1302t__=0;
  char __t1303t__=0;
  uint64_t __t1304t=0;
  uint64_t __t1305t__=0;
  uint64_t pos=0;
  char* __t1306t__buf__unsafe_ptr=0;
  uint64_t __t1306t__buf__unsafe_size=0;
  uint32_t __t1306t__buf__unsafe_offset=0;
  uint32_t __t1306t__buf__unsafe_align=0;
  uint64_t __t1306t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1300t=1;
  length=__t1300t;
  add__t188t(allocator__pos,length,&__t1301t__);
  next_pos=__t1301t__;
  len__t1165t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1302t__);
  gt__t325t(next_pos,__t1302t__,&__t1303t__);
  if(__t1303t__){
  __t_errcode=23;
  goto __t_failure;
  }
  __t1304t=0;
  add__t188t(allocator__pos,__t1304t,&__t1305t__);
  pos=__t1305t__;
  allocator__pos=next_pos;
  allocated__t1215t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1306t__buf__unsafe_ptr,&__t1306t__buf__unsafe_size,&__t1306t__buf__unsafe_offset,&__t1306t__buf__unsafe_align,&__t1306t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10765t=allocator__buf__unsafe_ptr;
  *__t10766t=allocator__buf__unsafe_size;
  *__t10767t=allocator__buf__unsafe_offset;
  *__t10768t=allocator__buf__unsafe_align;
  *__t10769t=allocator__pos;
  *__t10770t=__t1306t__buf__unsafe_ptr;
  *__t10771t=__t1306t__buf__unsafe_size;
  *__t10772t=__t1306t__buf__unsafe_offset;
  *__t10773t=__t1306t__buf__unsafe_align;
  *__t10774t=__t1306t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int thread__t4569t(uint64_t THREADS__CPU__cores, char** __t10775t, uint64_t* __t10776t, uint32_t* __t10777t, uint32_t* __t10778t, uint64_t* __t10779t, char** __t10780t, uint64_t* __t10781t, uint32_t* __t10782t, uint32_t* __t10783t, uint64_t* __t10784t, char* __t10785t, __smoll_func_ptr_type func, char* input__unsafe_data, char** __t10786t) {
  char* THREADS__unsafe_threads__buf__unsafe_ptr=*__t10775t;
  uint64_t THREADS__unsafe_threads__buf__unsafe_size=*__t10776t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_offset=*__t10777t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_align=*__t10778t;
  uint64_t THREADS__unsafe_threads__pos=*__t10779t;
  char* THREADS__unsafe_arena__buf__unsafe_ptr=*__t10780t;
  uint64_t THREADS__unsafe_arena__buf__unsafe_size=*__t10781t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_offset=*__t10782t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_align=*__t10783t;
  uint64_t THREADS__unsafe_arena__pos=*__t10784t;
  char THREADS__joined=*__t10785t;
  char* __t4570t__unsafe_ptr=0;
  char* __t4571t__unsafe_ptr=0;
  char* spawned__unsafe_ptr=0;
  char* __t4572t__buf__unsafe_ptr=0;
  uint64_t __t4572t__buf__unsafe_size=0;
  uint32_t __t4572t__buf__unsafe_offset=0;
  uint32_t __t4572t__buf__unsafe_align=0;
  uint64_t __t4572t__pos=0;
  char* __t4573t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_spawn__t4531t(func,input__unsafe_data,&__t4570t__unsafe_ptr);
  __t4571t__unsafe_ptr=__t4570t__unsafe_ptr;
  spawned__unsafe_ptr=__t4571t__unsafe_ptr;
  __t_errcode=alloc__t1298t(&THREADS__unsafe_threads__buf__unsafe_ptr,&THREADS__unsafe_threads__buf__unsafe_size,&THREADS__unsafe_threads__buf__unsafe_offset,&THREADS__unsafe_threads__buf__unsafe_align,&THREADS__unsafe_threads__pos,&__t4572t__buf__unsafe_ptr,&__t4572t__buf__unsafe_size,&__t4572t__buf__unsafe_offset,&__t4572t__buf__unsafe_align,&__t4572t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1574t(&__t4572t__buf__unsafe_ptr,&__t4572t__buf__unsafe_size,&__t4572t__buf__unsafe_offset,&__t4572t__buf__unsafe_align,__t4572t__pos,&__t4573t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4573t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4573t__,&spawned__unsafe_ptr,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10775t=THREADS__unsafe_threads__buf__unsafe_ptr;
  *__t10776t=THREADS__unsafe_threads__buf__unsafe_size;
  *__t10777t=THREADS__unsafe_threads__buf__unsafe_offset;
  *__t10778t=THREADS__unsafe_threads__buf__unsafe_align;
  *__t10779t=THREADS__unsafe_threads__pos;
  *__t10780t=THREADS__unsafe_arena__buf__unsafe_ptr;
  *__t10781t=THREADS__unsafe_arena__buf__unsafe_size;
  *__t10782t=THREADS__unsafe_arena__buf__unsafe_offset;
  *__t10783t=THREADS__unsafe_arena__buf__unsafe_align;
  *__t10784t=THREADS__unsafe_arena__pos;
  *__t10785t=THREADS__joined;
  *__t10786t=spawned__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t10486t() {
  double __t10489t=0;
  double __t10492t=0;
  double __t10493t=0;
  double __t10494t=0;
  double __t10495t=0;
  double __t10496t=0;
  double __t10497t=0;
  double __t10498t=0;
  double __t10499t=0;
  char* __t10500t__unsafe_ptr=0;
  uint64_t __t10500t__unsafe_size=0;
  uint32_t __t10500t__unsafe_offset=0;
  uint32_t __t10500t__unsafe_align=0;
  uint64_t __t10501t=0;
  char* __t10502t__unsafe_ptr=0;
  uint64_t __t10502t__unsafe_size=0;
  uint32_t __t10502t__unsafe_offset=0;
  uint32_t __t10502t__unsafe_align=0;
  uint64_t __t10504t=0;
  char* __t10505t__unsafe_ptr=0;
  uint64_t __t10505t__pos=0;
  uint64_t __t10505t__rows=0;
  uint64_t __t10505t__cols=0;
  uint64_t __t10505t__stride=0;
  char* mat__unsafe_ptr=0;
  uint64_t mat__pos=0;
  uint64_t mat__rows=0;
  uint64_t mat__cols=0;
  uint64_t mat__stride=0;
  uint64_t __t10506t=0;
  uint64_t __t10507t__cores=0;
  uint64_t __t10508t=0;
  uint64_t __t10509t__CPU__cores=0;
  char* __t10509t__unsafe_threads__buf__unsafe_ptr=0;
  uint64_t __t10509t__unsafe_threads__buf__unsafe_size=0;
  uint32_t __t10509t__unsafe_threads__buf__unsafe_offset=0;
  uint32_t __t10509t__unsafe_threads__buf__unsafe_align=0;
  uint64_t __t10509t__unsafe_threads__pos=0;
  char* __t10509t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10509t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10509t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10509t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10509t__unsafe_arena__pos=0;
  char __t10509t__joined=0;
  char __t10510t____t4551t__=0;
  uint64_t __t10510t____t4554t__from=0;
  uint64_t __t10510t____t4555t__from=0;
  uint64_t __t10510t____t4552t=0;
  uint64_t __t10510t____t4557t__=0;
  char __t10510t____t4556t=0;
  uint64_t __t10510t__i=0;
  char* __t10510t____t4560t__=0;
  char __t10510t____t4558t=0;
  char* __t10510t____t4561t__unsafe_ptr=0;
  uint64_t __t10511t__CPU__cores=0;
  char* __t10511t__unsafe_threads__buf__unsafe_ptr=0;
  uint64_t __t10511t__unsafe_threads__buf__unsafe_size=0;
  uint32_t __t10511t__unsafe_threads__buf__unsafe_offset=0;
  uint32_t __t10511t__unsafe_threads__buf__unsafe_align=0;
  uint64_t __t10511t__unsafe_threads__pos=0;
  char* __t10511t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10511t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10511t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10511t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10511t__unsafe_arena__pos=0;
  char __t10511t__joined=0;
  uint64_t THREADS__CPU__cores=0;
  char* THREADS__unsafe_threads__buf__unsafe_ptr=0;
  uint64_t THREADS__unsafe_threads__buf__unsafe_size=0;
  uint32_t THREADS__unsafe_threads__buf__unsafe_offset=0;
  uint32_t THREADS__unsafe_threads__buf__unsafe_align=0;
  uint64_t THREADS__unsafe_threads__pos=0;
  char* THREADS__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t THREADS__unsafe_arena__buf__unsafe_size=0;
  uint32_t THREADS__unsafe_arena__buf__unsafe_offset=0;
  uint32_t THREADS__unsafe_arena__buf__unsafe_align=0;
  uint64_t THREADS__unsafe_arena__pos=0;
  char THREADS__joined=0;
  char* __t10514t__unsafe_ptr=0;
  uint64_t __t10514t__unsafe_size=0;
  uint32_t __t10514t__unsafe_offset=0;
  uint32_t __t10514t__unsafe_align=0;
  char* __t10515t__unsafe_ptr=0;
  uint64_t __t10515t__unsafe_size=0;
  uint32_t __t10515t__unsafe_offset=0;
  uint32_t __t10515t__unsafe_align=0;
  char* __t10517t__unsafe_ptr=0;
  uint64_t __t10517t__unsafe_size=0;
  uint32_t __t10517t__unsafe_offset=0;
  uint32_t __t10517t__unsafe_align=0;
  char* pending__unsafe_ptr=0;
  uint64_t pending__unsafe_size=0;
  uint32_t pending__unsafe_offset=0;
  uint32_t pending__unsafe_align=0;
  uint64_t __t10518t=0;
  uint64_t __t10519t__from=0;
  uint64_t __t10519t__to=0;
  uint64_t __t10520t__from=0;
  uint64_t __t10520t__to=0;
  char __t10521t=0;
  uint64_t __t10522t__=0;
  uint64_t i=0;
  char* __t10524t__=0;
  char* __t10525t__unsafe_ptr=0;
  uint64_t __t10525t__pos=0;
  uint64_t __t10525t__length=0;
  uint64_t __t10526t__row=0;
  char* __t10526t__v__unsafe_ptr=0;
  uint64_t __t10526t__v__pos=0;
  uint64_t __t10526t__v__length=0;
  double __t10526t__result=0;
  uint64_t __t10528t=0;
  uint64_t __t10531t=0;
  uint64_t __t10532t__=0;
  char* __t10533t__=0;
  uint64_t __t10538t=0;
  const char* __t10539t__value=0;
  uint64_t __t10539t__readers=0;
  uint64_t __t10539t__writers=0;
  uint64_t __t10539t__max_stored_size=0;
  uint64_t __t10539t__unsafe_mutex____t4425t__=0;
  uint64_t __t10539t__unsafe_mutex____t4426t__=0;
  uint64_t __t10539t__unsafe_mutex____t4427t__=0;
  uint64_t __t10539t__unsafe_mutex____t4428t__=0;
  uint64_t __t10539t__unsafe_mutex____t4429t__=0;
  char* __t10542t__unsafe_ptr=0;
  uint64_t __t10542t__unsafe_size=0;
  uint32_t __t10542t__unsafe_offset=0;
  uint32_t __t10542t__unsafe_align=0;
  char* __t10543t__=0;
  char* __t10544t__=0;
  uint64_t __t10545t____t4601t=0;
  char* __t10545t____t4602t__=0;
  char* __t10545t__mutex_ptr=0;
  char* __t10546t__unsafe_data=0;
  __smoll_func_ptr_type __t10555t=0;
  char* __t10557t__=0;
  char* __t10558t__unsafe_data=0;
  char* __t10559t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t424t();
  __t10489t=1.0;
  __t10492t=2.0;
  __t10493t=3.0;
  __t10494t=3.0;
  __t10495t=4.0;
  __t10496t=5.0;
  __t10497t=6.0;
  __t10498t=7.0;
  __t10499t=8.0;
  float____buffer__t10490t(&__t10500t__unsafe_ptr,&__t10500t__unsafe_size,&__t10500t__unsafe_offset,&__t10500t__unsafe_align);
  __t10501t=9;
  __t_errcode=alloc__t934t(&__t10500t__unsafe_ptr,&__t10500t__unsafe_size,&__t10500t__unsafe_offset,&__t10500t__unsafe_align,__t10501t,&__t10502t__unsafe_ptr,&__t10502t__unsafe_size,&__t10502t__unsafe_offset,&__t10502t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t10500t__unsafe_ptr,&__t10489t,8);
  memcpy(__t10500t__unsafe_ptr+8,&__t10492t,8);
  memcpy(__t10500t__unsafe_ptr+16,&__t10493t,8);
  memcpy(__t10500t__unsafe_ptr+24,&__t10494t,8);
  memcpy(__t10500t__unsafe_ptr+32,&__t10495t,8);
  memcpy(__t10500t__unsafe_ptr+40,&__t10496t,8);
  memcpy(__t10500t__unsafe_ptr+48,&__t10497t,8);
  memcpy(__t10500t__unsafe_ptr+56,&__t10498t,8);
  memcpy(__t10500t__unsafe_ptr+64,&__t10499t,8);
  __t10504t=3;
  __t_errcode=mat__t7958t(&__t10500t__unsafe_ptr,&__t10500t__unsafe_size,&__t10500t__unsafe_offset,&__t10500t__unsafe_align,__t10504t,&__t10505t__unsafe_ptr,&__t10505t__pos,&__t10505t__rows,&__t10505t__cols,&__t10505t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  mat__unsafe_ptr=__t10505t__unsafe_ptr;
  mat__pos=__t10505t__pos;
  mat__rows=__t10505t__rows;
  mat__cols=__t10505t__cols;
  mat__stride=__t10505t__stride;
  __t10506t=16;
  cpu__t4535t(__t10506t,&__t10507t__cores);
  __t10508t=1024;
  __t_errcode=growing_thread_pool__t4537t(__t10507t__cores,__t10508t,&__t10509t__CPU__cores,&__t10509t__unsafe_threads__buf__unsafe_ptr,&__t10509t__unsafe_threads__buf__unsafe_size,&__t10509t__unsafe_threads__buf__unsafe_offset,&__t10509t__unsafe_threads__buf__unsafe_align,&__t10509t__unsafe_threads__pos,&__t10509t__unsafe_arena__buf__unsafe_ptr,&__t10509t__unsafe_arena__buf__unsafe_size,&__t10509t__unsafe_arena__buf__unsafe_offset,&__t10509t__unsafe_arena__buf__unsafe_align,&__t10509t__unsafe_arena__pos,&__t10509t__joined);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10511t__CPU__cores=__t10509t__CPU__cores;
  __t10511t__unsafe_threads__buf__unsafe_ptr=__t10509t__unsafe_threads__buf__unsafe_ptr;
  __t10511t__unsafe_threads__buf__unsafe_size=__t10509t__unsafe_threads__buf__unsafe_size;
  __t10511t__unsafe_threads__buf__unsafe_offset=__t10509t__unsafe_threads__buf__unsafe_offset;
  __t10511t__unsafe_threads__buf__unsafe_align=__t10509t__unsafe_threads__buf__unsafe_align;
  __t10511t__unsafe_threads__pos=__t10509t__unsafe_threads__pos;
  __t10511t__unsafe_arena__buf__unsafe_ptr=__t10509t__unsafe_arena__buf__unsafe_ptr;
  __t10511t__unsafe_arena__buf__unsafe_size=__t10509t__unsafe_arena__buf__unsafe_size;
  __t10511t__unsafe_arena__buf__unsafe_offset=__t10509t__unsafe_arena__buf__unsafe_offset;
  __t10511t__unsafe_arena__buf__unsafe_align=__t10509t__unsafe_arena__buf__unsafe_align;
  __t10511t__unsafe_arena__pos=__t10509t__unsafe_arena__pos;
  __t10511t__joined=__t10509t__joined;
  THREADS__CPU__cores=__t10511t__CPU__cores;
  THREADS__unsafe_threads__buf__unsafe_ptr=__t10511t__unsafe_threads__buf__unsafe_ptr;
  THREADS__unsafe_threads__buf__unsafe_size=__t10511t__unsafe_threads__buf__unsafe_size;
  THREADS__unsafe_threads__buf__unsafe_offset=__t10511t__unsafe_threads__buf__unsafe_offset;
  THREADS__unsafe_threads__buf__unsafe_align=__t10511t__unsafe_threads__buf__unsafe_align;
  THREADS__unsafe_threads__pos=__t10511t__unsafe_threads__pos;
  THREADS__unsafe_arena__buf__unsafe_ptr=__t10511t__unsafe_arena__buf__unsafe_ptr;
  THREADS__unsafe_arena__buf__unsafe_size=__t10511t__unsafe_arena__buf__unsafe_size;
  THREADS__unsafe_arena__buf__unsafe_offset=__t10511t__unsafe_arena__buf__unsafe_offset;
  THREADS__unsafe_arena__buf__unsafe_align=__t10511t__unsafe_arena__buf__unsafe_align;
  THREADS__unsafe_arena__pos=__t10511t__unsafe_arena__pos;
  THREADS__joined=__t10511t__joined;
  pipe____t_buffer____buffer__t10512t(&__t10514t__unsafe_ptr,&__t10514t__unsafe_size,&__t10514t__unsafe_offset,&__t10514t__unsafe_align);
  __t_errcode=alloc__t934t(&__t10514t__unsafe_ptr,&__t10514t__unsafe_size,&__t10514t__unsafe_offset,&__t10514t__unsafe_align,mat__rows,&__t10515t__unsafe_ptr,&__t10515t__unsafe_size,&__t10515t__unsafe_offset,&__t10515t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10517t__unsafe_ptr=__t10515t__unsafe_ptr;
  __t10517t__unsafe_size=__t10515t__unsafe_size;
  __t10517t__unsafe_offset=__t10515t__unsafe_offset;
  __t10517t__unsafe_align=__t10515t__unsafe_align;
  pending__unsafe_ptr=__t10517t__unsafe_ptr;
  pending__unsafe_size=__t10517t__unsafe_size;
  pending__unsafe_offset=__t10517t__unsafe_offset;
  pending__unsafe_align=__t10517t__unsafe_align;
  of__t746t(mat__rows,&__t10519t__from,&__t10519t__to);
  range__t763t(__t10519t__from,__t10519t__to,&__t10520t__from,&__t10520t__to);
  __t10518t=0-1;
  while(1){
  __t10518t=__t10518t+1;
  __t_complain=mutget__t768t(&__t10520t__from,__t10520t__to,__t10518t,&__t10522t__);
  __t10521t=__t_complain;
  if(__t_complain){
  goto __t10521t__label;
  }
  i=__t10522t__;
  __t10521t__label:__t10521t=__t10521t==0;
  if(!__t10521t){
  break;
  }
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10524t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=row__t8021t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,i,&__t10525t__unsafe_ptr,&__t10525t__pos,&__t10525t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  sum_data__t10447t(i,__t10525t__unsafe_ptr,__t10525t__pos,__t10525t__length,&__t10526t__row,&__t10526t__v__unsafe_ptr,&__t10526t__v__pos,&__t10526t__v__length,&__t10526t__result);
  __t10528t=72;
  __t10531t=40;
  add__t188t(__t10528t,__t10531t,&__t10532t__);
  __t_errcode=pipe_data_alloc__t4603t(THREADS__CPU__cores,&THREADS__unsafe_threads__buf__unsafe_ptr,&THREADS__unsafe_threads__buf__unsafe_size,&THREADS__unsafe_threads__buf__unsafe_offset,&THREADS__unsafe_threads__buf__unsafe_align,&THREADS__unsafe_threads__pos,&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,&THREADS__joined,__t10532t__,&__t10533t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10538t=40;
  pipe_data__t4415t(__t10460t,__t10538t,&__t10539t__value,&__t10539t__readers,&__t10539t__writers,&__t10539t__max_stored_size,&__t10539t__unsafe_mutex____t4425t__,&__t10539t__unsafe_mutex____t4426t__,&__t10539t__unsafe_mutex____t4427t__,&__t10539t__unsafe_mutex____t4428t__,&__t10539t__unsafe_mutex____t4429t__);
  if(!__t10533t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10533t__,&__t10539t__value,8);
  memcpy(__t10533t__+8,&__t10539t__readers,8);
  memcpy(__t10533t__+16,&__t10539t__writers,8);
  memcpy(__t10533t__+24,&__t10539t__max_stored_size,8);
  memcpy(__t10533t__+32,&__t10539t__unsafe_mutex____t4425t__,8);
  memcpy(__t10533t__+40,&__t10539t__unsafe_mutex____t4426t__,8);
  memcpy(__t10533t__+48,&__t10539t__unsafe_mutex____t4427t__,8);
  memcpy(__t10533t__+56,&__t10539t__unsafe_mutex____t4428t__,8);
  memcpy(__t10533t__+64,&__t10539t__unsafe_mutex____t4429t__,8);
  memcpy(__t10533t__+72,&__t10526t__row,8);
  memcpy(__t10533t__+80,&__t10526t__v__unsafe_ptr,8);
  memcpy(__t10533t__+88,&__t10526t__v__pos,8);
  memcpy(__t10533t__+96,&__t10526t__v__length,8);
  memcpy(__t10533t__+104,&__t10526t__result,8);
  pipe_data____t_buffer____buffer__t10540t(&__t10542t__unsafe_ptr,&__t10542t__unsafe_size,&__t10542t__unsafe_offset,&__t10542t__unsafe_align);
  unsafe_attach_type__t28t(__t10533t__,__t10542t__unsafe_ptr,&__t10543t__);
  unsafe_pipe_data_mutex_init__t4598t(&__t10543t__,&__t10544t__);
  pipe__t4432t(__t10544t__,&__t10546t__unsafe_data);
  if(!__t10524t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10524t__,&__t10546t__unsafe_data,8);
  __t10555t=(__smoll_func_ptr_type)parallel_sum__t10547t;
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10557t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10557t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10558t__unsafe_data,__t10557t__,8);
  __t_errcode=thread__t4569t(THREADS__CPU__cores,&THREADS__unsafe_threads__buf__unsafe_ptr,&THREADS__unsafe_threads__buf__unsafe_size,&THREADS__unsafe_threads__buf__unsafe_offset,&THREADS__unsafe_threads__buf__unsafe_align,&THREADS__unsafe_threads__pos,&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,&THREADS__joined,__t10555t,__t10558t__unsafe_data,&__t10559t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  join__t4533t(&__t10559t__unsafe_ptr);
  free__t811t(&__t10509t__unsafe_threads__buf__unsafe_ptr);
  free__t811t(&__t10509t__unsafe_arena__buf__unsafe_ptr);
  not__t42t(__t10509t__joined,&__t10510t____t4551t__);
  if(__t10510t____t4551t__){
  len__t1165t(__t10509t__unsafe_threads__buf__unsafe_ptr,__t10509t__unsafe_threads__buf__unsafe_size,__t10509t__unsafe_threads__buf__unsafe_offset,__t10509t__unsafe_threads__buf__unsafe_align,&__t10509t__unsafe_threads__buf__unsafe_size);
  of__t746t(__t10509t__unsafe_threads__buf__unsafe_size,&__t10510t____t4554t__from,&__t10509t__unsafe_threads__buf__unsafe_size);
  range__t763t(__t10510t____t4554t__from,__t10509t__unsafe_threads__buf__unsafe_size,&__t10510t____t4555t__from,&__t10509t__unsafe_threads__buf__unsafe_size);
  __t10510t____t4552t=0-1;
  while(1){
  __t10510t____t4552t=__t10510t____t4552t+1;
  __t_complain=mutget__t768t(&__t10510t____t4555t__from,__t10509t__unsafe_threads__buf__unsafe_size,__t10510t____t4552t,&__t10510t____t4557t__);
  __t10510t____t4556t=__t_complain;
  if(__t_complain){
  goto __t4556t__label;
  }
  __t10510t__i=__t10510t____t4557t__;
  __t4556t__label:__t10510t____t4556t=__t10510t____t4556t==0;
  if(!__t10510t____t4556t){
  break;
  }
  __t_complain=mutget__t1142t(&__t10509t__unsafe_threads__buf__unsafe_ptr,&__t10509t__unsafe_threads__buf__unsafe_size,&__t10509t__unsafe_threads__buf__unsafe_offset,&__t10509t__unsafe_threads__buf__unsafe_align,__t10510t__i,&__t10510t____t4560t__);
  __t10510t____t4558t=__t_complain;
  if(__t_complain){
  goto __t4558t__label;
  }
  if(!__t10510t____t4560t__){
  __t_complain=2;
  goto __t4558t__label;
  }
  else{
  memcpy(&__t10510t____t4561t__unsafe_ptr,__t10510t____t4560t__,8);
  }
  join__t4533t(&__t10510t____t4561t__unsafe_ptr);
  __t4558t__label:__t10510t____t4558t=__t10510t____t4558t==0;
  }
  }
  __t10509t__joined=1;
  __t10509t__joined=__t10509t__joined;
  __t10545t____t4601t=8;
  add__t813t(__t10544t__,__t10545t____t4601t,&__t10545t____t4602t__);
  __t10545t__mutex_ptr=__t10545t____t4602t__;
  mutex_destroy((mutex_t*)__t10545t__mutex_ptr);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t811t(&__t10515t__unsafe_ptr);
  free__t811t(&__t10502t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t10486t();
                }