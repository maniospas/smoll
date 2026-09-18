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
const char* const __t4455t="reader";
const char* const __t10483t="sum_data";
const char* const __t10503t="vec_type";
const char* const __t448t="\n";
const char* const __t4471t="writer";
const char* const __t10514t="we got a vector";
const char* const __t10507t="vec__t4749t";
const char* const __t10487t="sum_data__t10474t";
const char* const __t5690t="add";
static const char* __t_all_errcodes[73] = {"noerr",
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
"type does not fit the pipe's size",
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
int parallel_sum__t10592t(char* obj__unsafe_data) ;
static inline __attribute__((always_inline)) void console__t424t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void float____buffer__t10520t(char** __t10606t, uint64_t* __t10607t, uint32_t* __t10608t, uint32_t* __t10609t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10606t=unsafe_ptr;
  *__t10607t=unsafe_size;
  *__t10608t=unsafe_offset;
  *__t10609t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t811t(char** __t10610t) {
  char* allocated=*__t10610t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t10610t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t10611t) {
  int value=0;
  *__t10611t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t10612t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t10612t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t10613t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t10613t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t10614t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t10614t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t10615t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t10615t=z;
}

static inline __attribute__((always_inline)) void nat__t691t(uint32_t x, uint64_t* __t10616t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t10616t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t10617t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t10617t=z;
}

static inline __attribute__((always_inline)) void zero__t812t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t650t(char* x, char* __t10618t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t10618t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t10619t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t10619t=z;
}

static inline __attribute__((always_inline)) int alloc__t795t(uint64_t bytes, char** __t10620t) {
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
  *__t10620t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t934t(char** __t10621t, uint64_t* __t10622t, uint32_t* __t10623t, uint32_t* __t10624t, uint64_t size, char** __t10625t, uint64_t* __t10626t, uint32_t* __t10627t, uint32_t* __t10628t) {
  char* buffer__unsafe_ptr=*__t10621t;
  uint64_t buffer__unsafe_size=*__t10622t;
  uint32_t buffer__unsafe_offset=*__t10623t;
  uint32_t buffer__unsafe_align=*__t10624t;
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
  *__t10621t=buffer__unsafe_ptr;
  *__t10622t=buffer__unsafe_size;
  *__t10623t=buffer__unsafe_offset;
  *__t10624t=buffer__unsafe_align;
  *__t10625t=buffer__unsafe_ptr;
  *__t10626t=buffer__unsafe_size;
  *__t10627t=buffer__unsafe_offset;
  *__t10628t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1165t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t10629t) {
  goto __t_return;
  __t_return:
  *__t10629t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t10630t) {
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
  *__t10630t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1208t(char** __t10631t, uint64_t* __t10632t, uint32_t* __t10633t, uint32_t* __t10634t, uint64_t _pos, char** __t10635t, uint64_t* __t10636t, uint32_t* __t10637t, uint32_t* __t10638t, uint64_t* __t10639t) {
  char* buf__unsafe_ptr=*__t10631t;
  uint64_t buf__unsafe_size=*__t10632t;
  uint32_t buf__unsafe_offset=*__t10633t;
  uint32_t buf__unsafe_align=*__t10634t;
  uint64_t __t1209t=0;
  uint64_t pos=0;
  __t1209t=_pos;
  pos=__t1209t;
  goto __t_return;
  __t_return:
  *__t10631t=buf__unsafe_ptr;
  *__t10632t=buf__unsafe_size;
  *__t10633t=buf__unsafe_offset;
  *__t10634t=buf__unsafe_align;
  *__t10635t=buf__unsafe_ptr;
  *__t10636t=buf__unsafe_size;
  *__t10637t=buf__unsafe_offset;
  *__t10638t=buf__unsafe_align;
  *__t10639t=pos;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t10640t, uint64_t* __t10641t, uint32_t* __t10642t, uint32_t* __t10643t, char** __t10644t, uint64_t* __t10645t, uint32_t* __t10646t, uint32_t* __t10647t, uint64_t* __t10648t) {
  char* buf__unsafe_ptr=*__t10640t;
  uint64_t buf__unsafe_size=*__t10641t;
  uint32_t buf__unsafe_offset=*__t10642t;
  uint32_t buf__unsafe_align=*__t10643t;
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
  *__t10640t=buf__unsafe_ptr;
  *__t10641t=buf__unsafe_size;
  *__t10642t=buf__unsafe_offset;
  *__t10643t=buf__unsafe_align;
  *__t10644t=__t1213t__buf__unsafe_ptr;
  *__t10645t=__t1213t__buf__unsafe_size;
  *__t10646t=__t1213t__buf__unsafe_offset;
  *__t10647t=__t1213t__buf__unsafe_align;
  *__t10648t=__t1213t__pos;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t10649t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10649t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t10650t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t10650t=z;
}

static inline __attribute__((always_inline)) void allocated__t1215t(char** __t10651t, uint64_t* __t10652t, uint32_t* __t10653t, uint32_t* __t10654t, uint64_t pos, char** __t10655t, uint64_t* __t10656t, uint32_t* __t10657t, uint32_t* __t10658t, uint64_t* __t10659t) {
  char* buf__unsafe_ptr=*__t10651t;
  uint64_t buf__unsafe_size=*__t10652t;
  uint32_t buf__unsafe_offset=*__t10653t;
  uint32_t buf__unsafe_align=*__t10654t;
  goto __t_return;
  __t_return:
  *__t10651t=buf__unsafe_ptr;
  *__t10652t=buf__unsafe_size;
  *__t10653t=buf__unsafe_offset;
  *__t10654t=buf__unsafe_align;
  *__t10655t=buf__unsafe_ptr;
  *__t10656t=buf__unsafe_size;
  *__t10657t=buf__unsafe_offset;
  *__t10658t=buf__unsafe_align;
  *__t10659t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1290t(char** __t10660t, uint64_t* __t10661t, uint32_t* __t10662t, uint32_t* __t10663t, uint64_t* __t10664t, uint64_t length, char** __t10665t, uint64_t* __t10666t, uint32_t* __t10667t, uint32_t* __t10668t, uint64_t* __t10669t) {
  char* allocator__buf__unsafe_ptr=*__t10660t;
  uint64_t allocator__buf__unsafe_size=*__t10661t;
  uint32_t allocator__buf__unsafe_offset=*__t10662t;
  uint32_t allocator__buf__unsafe_align=*__t10663t;
  uint64_t allocator__pos=*__t10664t;
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
  *__t10660t=allocator__buf__unsafe_ptr;
  *__t10661t=allocator__buf__unsafe_size;
  *__t10662t=allocator__buf__unsafe_offset;
  *__t10663t=allocator__buf__unsafe_align;
  *__t10664t=allocator__pos;
  *__t10665t=__t1297t__buf__unsafe_ptr;
  *__t10666t=__t1297t__buf__unsafe_size;
  *__t10667t=__t1297t__buf__unsafe_offset;
  *__t10668t=__t1297t__buf__unsafe_align;
  *__t10669t=__t1297t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t4752t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t10670t, uint64_t* __t10671t, uint64_t* __t10672t, uint64_t* __t10673t, uint64_t* __t10674t) {
  char* __t4754t__unsafe_ptr=0;
  uint64_t __t4754t__pos=0;
  uint64_t __t4754t__rows=0;
  uint64_t __t4754t__cols=0;
  uint64_t __t4754t__stride=0;
  __t4754t__unsafe_ptr=unsafe_ptr;
  __t4754t__pos=pos;
  __t4754t__rows=rows;
  __t4754t__cols=cols;
  __t4754t__stride=stride;
  goto __t_return;
  __t_return:
  *__t10670t=__t4754t__unsafe_ptr;
  *__t10671t=__t4754t__pos;
  *__t10672t=__t4754t__rows;
  *__t10673t=__t4754t__cols;
  *__t10674t=__t4754t__stride;
}

static inline __attribute__((always_inline)) int mat__t7920t(char** __t10675t, uint64_t* __t10676t, uint32_t* __t10677t, uint32_t* __t10678t, uint64_t* __t10679t, uint64_t rows, uint64_t cols, char** __t10680t, uint64_t* __t10681t, uint64_t* __t10682t, uint64_t* __t10683t, uint64_t* __t10684t) {
  char* FLOATS__buf__unsafe_ptr=*__t10675t;
  uint64_t FLOATS__buf__unsafe_size=*__t10676t;
  uint32_t FLOATS__buf__unsafe_offset=*__t10677t;
  uint32_t FLOATS__buf__unsafe_align=*__t10678t;
  uint64_t FLOATS__pos=*__t10679t;
  uint64_t __t7921t__=0;
  uint64_t __t7922t=0;
  char __t7923t__=0;
  uint64_t __t7924t__=0;
  uint64_t __t7925t=0;
  char __t7926t__=0;
  uint64_t __t7927t__=0;
  uint64_t size=0;
  char* __t7928t__buf__unsafe_ptr=0;
  uint64_t __t7928t__buf__unsafe_size=0;
  uint32_t __t7928t__buf__unsafe_offset=0;
  uint32_t __t7928t__buf__unsafe_align=0;
  uint64_t __t7928t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t7929t=0;
  char* __t7930t__unsafe_ptr=0;
  uint64_t __t7930t__pos=0;
  uint64_t __t7930t__rows=0;
  uint64_t __t7930t__cols=0;
  uint64_t __t7930t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t691t(FLOATS__buf__unsafe_align,&__t7921t__);
  __t7922t=8;
  neq__t158t(__t7921t__,__t7922t,&__t7923t__);
  if(__t7923t__){
  __t_errcode=61;
  goto __t_failure;
  }
  nat__t691t(FLOATS__buf__unsafe_offset,&__t7924t__);
  __t7925t=0;
  neq__t158t(__t7924t__,__t7925t,&__t7926t__);
  if(__t7926t__){
  __t_errcode=62;
  goto __t_failure;
  }
  mul__t212t(rows,cols,&__t7927t__);
  size=__t7927t__;
  __t_errcode=alloc__t1290t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t7928t__buf__unsafe_ptr,&__t7928t__buf__unsafe_size,&__t7928t__buf__unsafe_offset,&__t7928t__buf__unsafe_align,&__t7928t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t7928t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t7928t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t7928t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t7928t__buf__unsafe_align;
  surface__pos=__t7928t__pos;
  mat__t4752t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t7930t__unsafe_ptr,&__t7930t__pos,&__t7930t__rows,&__t7930t__cols,&__t7930t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10675t=FLOATS__buf__unsafe_ptr;
  *__t10676t=FLOATS__buf__unsafe_size;
  *__t10677t=FLOATS__buf__unsafe_offset;
  *__t10678t=FLOATS__buf__unsafe_align;
  *__t10679t=FLOATS__pos;
  *__t10680t=__t7930t__unsafe_ptr;
  *__t10681t=__t7930t__pos;
  *__t10682t=__t7930t__rows;
  *__t10683t=__t7930t__cols;
  *__t10684t=__t7930t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mat__t7985t(char** __t10685t, uint64_t* __t10686t, uint32_t* __t10687t, uint32_t* __t10688t, uint64_t rows, char** __t10689t, uint64_t* __t10690t, uint64_t* __t10691t, uint64_t* __t10692t, uint64_t* __t10693t) {
  char* buf__unsafe_ptr=*__t10685t;
  uint64_t buf__unsafe_size=*__t10686t;
  uint32_t buf__unsafe_offset=*__t10687t;
  uint32_t buf__unsafe_align=*__t10688t;
  uint64_t __t7986t__=0;
  uint64_t __t7987t__=0;
  uint64_t cols=0;
  uint64_t __t7988t__=0;
  uint64_t __t7989t__=0;
  char __t7990t__=0;
  char* __t7991t__buf__unsafe_ptr=0;
  uint64_t __t7991t__buf__unsafe_size=0;
  uint32_t __t7991t__buf__unsafe_offset=0;
  uint32_t __t7991t__buf__unsafe_align=0;
  uint64_t __t7991t__pos=0;
  char* __t7993t__unsafe_ptr=0;
  uint64_t __t7993t__pos=0;
  uint64_t __t7993t__rows=0;
  uint64_t __t7993t__cols=0;
  uint64_t __t7993t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7986t__);
  __t_errcode=div__t270t(__t7986t__,rows,&__t7987t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t7987t__;
  mul__t212t(cols,rows,&__t7988t__);
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7989t__);
  neq__t158t(__t7988t__,__t7989t__,&__t7990t__);
  if(__t7990t__){
  __t_errcode=63;
  goto __t_failure;
  }
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t7991t__buf__unsafe_ptr,&__t7991t__buf__unsafe_size,&__t7991t__buf__unsafe_offset,&__t7991t__buf__unsafe_align,&__t7991t__pos);
  __t_errcode=mat__t7920t(&__t7991t__buf__unsafe_ptr,&__t7991t__buf__unsafe_size,&__t7991t__buf__unsafe_offset,&__t7991t__buf__unsafe_align,&__t7991t__pos,rows,cols,&__t7993t__unsafe_ptr,&__t7993t__pos,&__t7993t__rows,&__t7993t__cols,&__t7993t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10685t=buf__unsafe_ptr;
  *__t10686t=buf__unsafe_size;
  *__t10687t=buf__unsafe_offset;
  *__t10688t=buf__unsafe_align;
  *__t10689t=__t7993t__unsafe_ptr;
  *__t10690t=__t7993t__pos;
  *__t10691t=__t7993t__rows;
  *__t10692t=__t7993t__cols;
  *__t10693t=__t7993t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cpu__t4535t(uint64_t cores, uint64_t* __t10694t) {
  goto __t_return;
  __t_return:
  *__t10694t=cores;
}

static inline __attribute__((always_inline)) void unsafe_spawn____t_buffer____buffer__t4538t(char** __t10695t, uint64_t* __t10696t, uint32_t* __t10697t, uint32_t* __t10698t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10695t=unsafe_ptr;
  *__t10696t=unsafe_size;
  *__t10697t=unsafe_offset;
  *__t10698t=unsafe_align;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1091t(char** __t10699t, uint64_t* __t10700t, uint32_t* __t10701t, uint32_t* __t10702t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t10699t=unsafe_ptr;
  *__t10700t=unsafe_size;
  *__t10701t=unsafe_offset;
  *__t10702t=unsafe_align;
}

int alloc__t1089t(uint64_t size, char** __t10703t, uint64_t* __t10704t, uint32_t* __t10705t, uint32_t* __t10706t) {
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
  *__t10703t=ret__unsafe_ptr;
  *__t10704t=ret__unsafe_size;
  *__t10705t=ret__unsafe_offset;
  *__t10706t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void of__t746t(uint64_t to, uint64_t* __t10707t, uint64_t* __t10708t) {
  uint64_t __t747t=0;
  uint64_t from=0;
  __t747t=0;
  from=__t747t;
  goto __t_return;
  __t_return:
  *__t10707t=from;
  *__t10708t=to;
}

static inline __attribute__((always_inline)) void range__t763t(uint64_t _from, uint64_t to, uint64_t* __t10709t, uint64_t* __t10710t) {
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
  *__t10709t=from;
  *__t10710t=to;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t10711t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t10711t=z;
}

static inline __attribute__((always_inline)) int mutget__t768t(uint64_t* __t10712t, uint64_t r__to, uint64_t skipped, uint64_t* __t10713t) {
  uint64_t r__from=*__t10712t;
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
  *__t10712t=r__from;
  *__t10713t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t10714t) {
  *__t10714t=to;
}

static inline __attribute__((always_inline)) void add__t813t(char* allocated, uint64_t offset, char** __t10715t) {
  char* element=0;
  char* __t814t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t814t__);
  goto __t_return;
  __t_return:
  *__t10715t=__t814t__;
}

static inline __attribute__((always_inline)) int mutget__t1142t(char** __t10716t, uint64_t* __t10717t, uint32_t* __t10718t, uint32_t* __t10719t, uint64_t i, char** __t10720t) {
  char* buffer__unsafe_ptr=*__t10716t;
  uint64_t buffer__unsafe_size=*__t10717t;
  uint32_t buffer__unsafe_offset=*__t10718t;
  uint32_t buffer__unsafe_align=*__t10719t;
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
  *__t10716t=buffer__unsafe_ptr;
  *__t10717t=buffer__unsafe_size;
  *__t10718t=buffer__unsafe_offset;
  *__t10719t=buffer__unsafe_align;
  *__t10720t=__t1149t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void join__t4533t(char** __t10721t) {
  char* thread__unsafe_ptr=*__t10721t;
  char __t4534t__=0;
  exists__t650t(thread__unsafe_ptr,&__t4534t__);
  if(__t4534t__){
  thread_join(thread__unsafe_ptr);
  }
  *__t10721t=thread__unsafe_ptr;
}

static inline __attribute__((always_inline)) int growing_thread_pool__t4537t(uint64_t CPU__cores, uint64_t shared_storage, uint64_t* __t10722t, char** __t10723t, uint64_t* __t10724t, uint32_t* __t10725t, uint32_t* __t10726t, uint64_t* __t10727t, char** __t10728t, uint64_t* __t10729t, uint32_t* __t10730t, uint32_t* __t10731t, uint64_t* __t10732t, char* __t10733t) {
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
  *__t10722t=CPU__cores;
  *__t10723t=unsafe_threads__buf__unsafe_ptr;
  *__t10724t=unsafe_threads__buf__unsafe_size;
  *__t10725t=unsafe_threads__buf__unsafe_offset;
  *__t10726t=unsafe_threads__buf__unsafe_align;
  *__t10727t=unsafe_threads__pos;
  *__t10728t=unsafe_arena__buf__unsafe_ptr;
  *__t10729t=unsafe_arena__buf__unsafe_size;
  *__t10730t=unsafe_arena__buf__unsafe_offset;
  *__t10731t=unsafe_arena__buf__unsafe_align;
  *__t10732t=unsafe_arena__pos;
  *__t10733t=joined;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pipe____t_buffer____buffer__t10542t(char** __t10734t, uint64_t* __t10735t, uint32_t* __t10736t, uint32_t* __t10737t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10734t=unsafe_ptr;
  *__t10735t=unsafe_size;
  *__t10736t=unsafe_offset;
  *__t10737t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t4749t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t10738t, uint64_t* __t10739t, uint64_t* __t10740t) {
  char* __t4751t__unsafe_ptr=0;
  uint64_t __t4751t__pos=0;
  uint64_t __t4751t__length=0;
  __t4751t__unsafe_ptr=unsafe_ptr;
  __t4751t__pos=pos;
  __t4751t__length=length;
  goto __t_return;
  __t_return:
  *__t10738t=__t4751t__unsafe_ptr;
  *__t10739t=__t4751t__pos;
  *__t10740t=__t4751t__length;
}

static inline __attribute__((always_inline)) int row__t8048t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, char** __t10741t, uint64_t* __t10742t, uint64_t* __t10743t) {
  char __t8049t__=0;
  uint64_t __t8050t__=0;
  uint64_t __t8051t__=0;
  char* __t8052t__unsafe_ptr=0;
  uint64_t __t8052t__pos=0;
  uint64_t __t8052t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,m__rows,&__t8049t__);
  if(__t8049t__){
  __t_errcode=64;
  goto __t_failure;
  }
  mul__t212t(i,m__stride,&__t8050t__);
  add__t188t(m__pos,__t8050t__,&__t8051t__);
  vec__t4749t(m__unsafe_ptr,__t8051t__,m__cols,&__t8052t__unsafe_ptr,&__t8052t__pos,&__t8052t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10741t=__t8052t__unsafe_ptr;
  *__t10742t=__t8052t__pos;
  *__t10743t=__t8052t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data__t10474t(uint64_t row, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t10744t, char** __t10745t, uint64_t* __t10746t, uint64_t* __t10747t, double* __t10748t) {
  double __t10475t=0;
  double __t10476t=0;
  double result=0;
  __t10475t=0.0;
  __t10476t=__t10475t;
  result=__t10476t;
  goto __t_return;
  __t_return:
  *__t10744t=row;
  *__t10745t=v__unsafe_ptr;
  *__t10746t=v__pos;
  *__t10747t=v__length;
  *__t10748t=result;
}

static inline __attribute__((always_inline)) int at__t1574t(char** __t10749t, uint64_t* __t10750t, uint32_t* __t10751t, uint32_t* __t10752t, uint64_t surface__pos, char** __t10753t) {
  char* surface__buf__unsafe_ptr=*__t10749t;
  uint64_t surface__buf__unsafe_size=*__t10750t;
  uint32_t surface__buf__unsafe_offset=*__t10751t;
  uint32_t surface__buf__unsafe_align=*__t10752t;
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
  *__t10749t=surface__buf__unsafe_ptr;
  *__t10750t=surface__buf__unsafe_size;
  *__t10751t=surface__buf__unsafe_offset;
  *__t10752t=surface__buf__unsafe_align;
  *__t10753t=__t1576t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int pipe_data_alloc__t4600t(uint64_t THREADS__CPU__cores, char** __t10754t, uint64_t* __t10755t, uint32_t* __t10756t, uint32_t* __t10757t, uint64_t* __t10758t, char** __t10759t, uint64_t* __t10760t, uint32_t* __t10761t, uint32_t* __t10762t, uint64_t* __t10763t, char* __t10764t, uint64_t size, char** __t10765t) {
  char* THREADS__unsafe_threads__buf__unsafe_ptr=*__t10754t;
  uint64_t THREADS__unsafe_threads__buf__unsafe_size=*__t10755t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_offset=*__t10756t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_align=*__t10757t;
  uint64_t THREADS__unsafe_threads__pos=*__t10758t;
  char* THREADS__unsafe_arena__buf__unsafe_ptr=*__t10759t;
  uint64_t THREADS__unsafe_arena__buf__unsafe_size=*__t10760t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_offset=*__t10761t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_align=*__t10762t;
  uint64_t THREADS__unsafe_arena__pos=*__t10763t;
  char THREADS__joined=*__t10764t;
  char* __t4601t__buf__unsafe_ptr=0;
  uint64_t __t4601t__buf__unsafe_size=0;
  uint32_t __t4601t__buf__unsafe_offset=0;
  uint32_t __t4601t__buf__unsafe_align=0;
  uint64_t __t4601t__pos=0;
  char* __t4602t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1290t(&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,size,&__t4601t__buf__unsafe_ptr,&__t4601t__buf__unsafe_size,&__t4601t__buf__unsafe_offset,&__t4601t__buf__unsafe_align,&__t4601t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1574t(&__t4601t__buf__unsafe_ptr,&__t4601t__buf__unsafe_size,&__t4601t__buf__unsafe_offset,&__t4601t__buf__unsafe_align,__t4601t__pos,&__t4602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10754t=THREADS__unsafe_threads__buf__unsafe_ptr;
  *__t10755t=THREADS__unsafe_threads__buf__unsafe_size;
  *__t10756t=THREADS__unsafe_threads__buf__unsafe_offset;
  *__t10757t=THREADS__unsafe_threads__buf__unsafe_align;
  *__t10758t=THREADS__unsafe_threads__pos;
  *__t10759t=THREADS__unsafe_arena__buf__unsafe_ptr;
  *__t10760t=THREADS__unsafe_arena__buf__unsafe_size;
  *__t10761t=THREADS__unsafe_arena__buf__unsafe_offset;
  *__t10762t=THREADS__unsafe_arena__buf__unsafe_align;
  *__t10763t=THREADS__unsafe_arena__pos;
  *__t10764t=THREADS__joined;
  *__t10765t=__t4602t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t5t(uint64_t* __t10766t) {
  uint64_t value=0;
  *__t10766t=value;
}

static inline __attribute__((always_inline)) void pipe_data__t4415t(const char* value, uint64_t max_stored_size, const char** __t10767t, uint64_t* __t10768t, uint64_t* __t10769t, uint64_t* __t10770t, uint64_t* __t10771t, uint64_t* __t10772t, uint64_t* __t10773t, uint64_t* __t10774t, uint64_t* __t10775t) {
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
  *__t10767t=value;
  *__t10768t=readers;
  *__t10769t=writers;
  *__t10770t=max_stored_size;
  *__t10771t=unsafe_mutex____t4425t__;
  *__t10772t=unsafe_mutex____t4426t__;
  *__t10773t=unsafe_mutex____t4427t__;
  *__t10774t=unsafe_mutex____t4428t__;
  *__t10775t=unsafe_mutex____t4429t__;
}

static inline __attribute__((always_inline)) void pipe_data____t_buffer____buffer__t10570t(char** __t10776t, uint64_t* __t10777t, uint32_t* __t10778t, uint32_t* __t10779t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=72;
  *__t10776t=unsafe_ptr;
  *__t10777t=unsafe_size;
  *__t10778t=unsafe_offset;
  *__t10779t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_mutex_init__t4595t(char** __t10780t, char** __t10781t) {
  char* obj=*__t10780t;
  uint64_t __t4596t=0;
  char* __t4597t__=0;
  char* mutex_ptr_construct=0;
  uint64_t __t4598t=0;
  char* __t4599t__=0;
  char* mutex_ptr=0;
  __t4596t=8;
  add__t813t(obj,__t4596t,&__t4597t__);
  mutex_ptr_construct=__t4597t__;
  mutex_init((mutex_t*)mutex_ptr_construct);
  goto __t_return;
  __t_return:
  *__t10780t=obj;
  *__t10781t=obj;
}

static inline __attribute__((always_inline)) void pipe__t4432t(char* unsafe_data, char** __t10782t) {
  goto __t_return;
  __t_return:
  *__t10782t=unsafe_data;
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

static inline __attribute__((always_inline)) int unsafe_pipe_own__t4467t(char* obj__unsafe_data, char** __t10783t, uint64_t* __t10784t, uint64_t* __t10785t) {
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
  *__t10783t=obj__unsafe_data;
  *__t10784t=readers;
  *__t10785t=writers;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t10786t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t10786t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t10787t) {
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
  *__t10787t=z;
  
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

static inline __attribute__((always_inline)) int open__t4517t(char* _obj__unsafe_data, char** __t10788t) {
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
  *__t10788t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int prepare_writer_overwrite__t4697t(char* opened_pipe__obj__unsafe_data, uint64_t size, const char* name, char** __t10789t) {
  char* __t4699t__max_stored_size=0;
  uint64_t __t4700t__max_stored_size=0;
  uint64_t found=0;
  char __t4701t__=0;
  char* __t4703t__value=0;
  char* _name=0;
  uint64_t __t4704t=0;
  char* __t4705t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!opened_pipe__obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4699t__max_stored_size=opened_pipe__obj__unsafe_data+24;
  if(!__t4699t__max_stored_size){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4700t__max_stored_size,__t4699t__max_stored_size,8);
  found=__t4700t__max_stored_size;
  gt__t325t(size,found,&__t4701t__);
  if(__t4701t__){
  __t_errcode=54;
  goto __t_failure;
  }
  if(!opened_pipe__obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4703t__value=opened_pipe__obj__unsafe_data+0;
  _name=__t4703t__value;
  if(!_name){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(_name,&name,8);
  __t4704t=72;
  add__t813t(opened_pipe__obj__unsafe_data,__t4704t,&__t4705t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10789t=__t4705t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_own__t4450t(char* obj__unsafe_data, char** __t10790t, uint64_t* __t10791t, uint64_t* __t10792t) {
  int __t4452t=0;
  char __t4453t=0;
  char __t4454t=0;
  uint64_t __t4456t=0;
  char* __t4458t__readers=0;
  uint64_t __t4459t__readers=0;
  uint64_t __t4460t__=0;
  uint64_t readers=0;
  char* __t4462t__writers=0;
  uint64_t __t4463t__writers=0;
  uint64_t writers=0;
  char* __t4465t__readers=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4434t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4454t=1;
  if(__t4455t!=__t4455t){
  __t4454t=0;
  }
  if(__t4454t){
  __t4453t=1;
  }
  if(__t4453t){
  __t4456t=1;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4458t__readers=obj__unsafe_data+8;
  if(!__t4458t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4459t__readers,__t4458t__readers,8);
  add__t188t(__t4456t,__t4459t__readers,&__t4460t__);
  readers=__t4460t__;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4462t__writers=obj__unsafe_data+16;
  if(!__t4462t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4463t__writers,__t4462t__writers,8);
  writers=__t4463t__writers;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4465t__readers=obj__unsafe_data+8;
  if(!__t4465t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4465t__readers,&readers,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4439t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10790t=obj__unsafe_data;
  *__t10791t=readers;
  *__t10792t=writers;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_disown__t4484t(char* obj__unsafe_data) {
  char __t4486t=0;
  char __t4487t=0;
  char* __t4489t__readers=0;
  char* __t4491t__readers=0;
  uint64_t __t4492t__readers=0;
  uint64_t __t4493t=0;
  uint64_t __t4494t__=0;
  int __t4495t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4434t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4487t=1;
  if(__t4455t!=__t4455t){
  __t4487t=0;
  }
  if(__t4487t){
  __t4486t=1;
  }
  if(__t4486t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4489t__readers=obj__unsafe_data+8;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4491t__readers=obj__unsafe_data+8;
  if(!__t4491t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4492t__readers,__t4491t__readers,8);
  __t4493t=1;
  __t_errcode=sub__t401t(__t4492t__readers,__t4493t,&__t4494t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4489t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4489t__readers,&__t4494t__,8);
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

static inline __attribute__((always_inline)) int open__t4510t(char* obj__unsafe_data, char** __t10793t) {
  char* __t4511t__obj__unsafe_data=0;
  uint64_t __t4511t__readers=0;
  uint64_t __t4511t__writers=0;
  char* status__obj__unsafe_data=0;
  uint64_t status__readers=0;
  uint64_t status__writers=0;
  uint64_t __t4512t=0;
  char __t4513t__=0;
  char __t4514t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_own__t4450t(obj__unsafe_data,&__t4511t__obj__unsafe_data,&__t4511t__readers,&__t4511t__writers);
  if(__t_errcode){
  goto __t_failure;
  }
  status__obj__unsafe_data=__t4511t__obj__unsafe_data;
  status__readers=__t4511t__readers;
  status__writers=__t4511t__writers;
  __t4512t=0;
  neq__t158t(status__writers,__t4512t,&__t4513t__);
  if(__t4513t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_complain=unsafe_pipe_disown__t4484t(obj__unsafe_data);
  __t4514t=__t_complain;
  if(__t_complain){
  goto __t4514t__label;
  }
  __t4514t__label:__t4514t=__t4514t==0;
  
  goto __t_skip_returns;__t_return:
  *__t10793t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data____t_buffer____buffer__t10488t(char** __t10794t, uint64_t* __t10795t, uint32_t* __t10796t, uint32_t* __t10797t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=40;
  *__t10794t=unsafe_ptr;
  *__t10795t=unsafe_size;
  *__t10796t=unsafe_offset;
  *__t10797t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1821t(const char* x, const char* y, char* __t10798t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t10798t=z;
}

static inline __attribute__((always_inline)) void neq__t1850t(const char* x, const char* y, char* __t10799t) {
  char __t1851t__=0;
  char __t1852t__=0;
  eq__t1821t(x,y,&__t1851t__);
  not__t42t(__t1851t__,&__t1852t__);
  goto __t_return;
  __t_return:
  *__t10799t=__t1852t__;
}

static inline __attribute__((always_inline)) int unsafe_pipe_data_match__t4575t(char* obj__obj__unsafe_data, const char* name, char* type, char** __t10800t) {
  char* __t4577t__value=0;
  const char* __t4578t__value=0;
  const char* found=0;
  char __t4579t__=0;
  uint64_t __t4583t=0;
  char* __t4584t__=0;
  char* __t4585t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4577t__value=obj__obj__unsafe_data+0;
  if(!__t4577t__value){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4578t__value,__t4577t__value,8);
  found=__t4578t__value;
  neq__t1850t(found,name,&__t4579t__);
  if(__t4579t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t4583t=72;
  add__t813t(obj__obj__unsafe_data,__t4583t,&__t4584t__);
  unsafe_attach_type__t28t(__t4584t__,type,&__t4585t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10800t=__t4585t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void iter__t5000t(char* vec__unsafe_ptr, uint64_t vec__pos, uint64_t vec__length, char** __t10801t, uint64_t* __t10802t, uint64_t* __t10803t) {
  goto __t_return;
  __t_return:
  *__t10801t=vec__unsafe_ptr;
  *__t10802t=vec__pos;
  *__t10803t=vec__length;
}

static inline __attribute__((always_inline)) void get__t4987t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t10804t) {
  int __t4988t=0;
  uint64_t __t4989t=0;
  uint64_t __t4990t__=0;
  uint64_t __t4991t__=0;
  char* __t4992t__=0;
  __t4989t=8;
  add__t188t(i,v__pos,&__t4990t__);
  mul__t212t(__t4989t,__t4990t__,&__t4991t__);
  add__t813t(v__unsafe_ptr,__t4991t__,&__t4992t__);
  goto __t_return;
  __t_return:
  *__t10804t=__t4992t__;
}

static inline __attribute__((always_inline)) int get__t5002t(char* v__vec__unsafe_ptr, uint64_t v__vec__pos, uint64_t v__vec__length, uint64_t i, double* __t10805t) {
  char __t5003t__=0;
  char* __t5006t__=0;
  double __t5007t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,v__vec__length,&__t5003t__);
  if(__t5003t__){
  __t_errcode=22;
  goto __t_failure;
  }
  get__t4987t(v__vec__unsafe_ptr,v__vec__pos,v__vec__length,i,&__t5006t__);
  if(!__t5006t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5007t__value,__t5006t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10805t=__t5007t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t10806t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t10806t=__t87t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t10807t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10807t=z;
}

static inline __attribute__((always_inline)) void reduce__t5687t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10808t) {
  char __t5688t=0;
  char __t5689t=0;
  double __t5691t=0;
  double __t5692t=0;
  double ret=0;
  int __t5693t=0;
  int __t5694t=0;
  int __t5695t=0;
  int __t5696t__=0;
  uint64_t __t5697t=0;
  char* __t5698t__vec__unsafe_ptr=0;
  uint64_t __t5698t__vec__pos=0;
  uint64_t __t5698t__vec__length=0;
  char __t5699t=0;
  double __t5700t__=0;
  double _value=0;
  double __t5701t=0;
  double value=0;
  int __t5702t=0;
  int __t5703t=0;
  int __t5704t=0;
  int __t5705t=0;
  int __t5706t=0;
  char __t5707t=0;
  char __t5708t=0;
  double __t5709t__=0;
  int __t5710t=0;
  int __t5711t=0;
  int __t_complain=0;
  __t5689t=1;
  if(__t5690t!=__t5690t){
  __t5689t=0;
  }
  if(__t5689t){
  __t5688t=1;
  }
  if(__t5688t){
  __t5691t=0.0;
  __t5692t=__t5691t;
  ret=__t5692t;
  }
  not__t51t(__t5695t,&__t5696t__);
  iter__t5000t(v__unsafe_ptr,v__pos,v__length,&__t5698t__vec__unsafe_ptr,&__t5698t__vec__pos,&__t5698t__vec__length);
  __t5697t=0-1;
  while(1){
  __t5697t=__t5697t+1;
  __t_complain=get__t5002t(__t5698t__vec__unsafe_ptr,__t5698t__vec__pos,__t5698t__vec__length,__t5697t,&__t5700t__);
  __t5699t=__t_complain;
  if(__t_complain){
  goto __t5699t__label;
  }
  _value=__t5700t__;
  __t5699t__label:__t5699t=__t5699t==0;
  if(!__t5699t){
  break;
  }
  __t5701t=_value;
  value=__t5701t;
  __t5708t=1;
  if(__t5690t!=__t5690t){
  __t5708t=0;
  }
  if(__t5708t){
  __t5707t=1;
  }
  if(__t5707t){
  add__t166t(ret,value,&__t5709t__);
  ret=__t5709t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t10808t=ret;
}

static inline __attribute__((always_inline)) void sum__t7672t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10809t) {
  double __t7674t__=0;
  reduce__t5687t(v__unsafe_ptr,v__pos,v__length,&__t7674t__);
  goto __t_return;
  __t_return:
  *__t10809t=__t7674t__;
}

static inline __attribute__((always_inline)) void vec____t_buffer____buffer__t10508t(char** __t10810t, uint64_t* __t10811t, uint32_t* __t10812t, uint32_t* __t10813t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=24;
  *__t10810t=unsafe_ptr;
  *__t10811t=unsafe_size;
  *__t10812t=unsafe_offset;
  *__t10813t=unsafe_align;
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

static inline __attribute__((always_inline)) int parallel_sum__t10478t(char* obj__unsafe_data) {
  char* __t10480t__obj__unsafe_data=0;
  char __t10481t____t4514t=0;
  char* reader__obj__unsafe_data=0;
  char __t10482t=0;
  char* __t10490t__unsafe_ptr=0;
  uint64_t __t10490t__unsafe_size=0;
  uint32_t __t10490t__unsafe_offset=0;
  uint32_t __t10490t__unsafe_align=0;
  char* __t10491t__=0;
  char* __t10492t=0;
  char* sum_data=0;
  char __t10502t=0;
  char* __t10510t__unsafe_ptr=0;
  uint64_t __t10510t__unsafe_size=0;
  uint32_t __t10510t__unsafe_offset=0;
  uint32_t __t10510t__unsafe_align=0;
  char* __t10511t__=0;
  char* __t10512t=0;
  char* p=0;
  char* __t10494t=0;
  char* __t10495t__unsafe_ptr=0;
  uint64_t __t10495t__pos=0;
  uint64_t __t10495t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* __t10497t__result=0;
  char* __t10499t=0;
  char* __t10500t__unsafe_ptr=0;
  uint64_t __t10500t__pos=0;
  uint64_t __t10500t__length=0;
  double __t10501t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4510t(obj__unsafe_data,&__t10480t__obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  reader__obj__unsafe_data=__t10480t__obj__unsafe_data;
  sum_data____t_buffer____buffer__t10488t(&__t10490t__unsafe_ptr,&__t10490t__unsafe_size,&__t10490t__unsafe_offset,&__t10490t__unsafe_align);
  __t_complain=unsafe_pipe_data_match__t4575t(reader__obj__unsafe_data,__t10487t,__t10490t__unsafe_ptr,&__t10491t__);
  __t10482t=__t_complain;
  if(__t_complain){
  goto __t10482t__label;
  }
  __t10492t=__t10491t__;
  sum_data=__t10492t;
  __t10482t__label:__t10482t=__t10482t==0;
  if(__t10482t){
  if(!sum_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10494t=sum_data+8;
  if(!__t10494t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10495t__unsafe_ptr,__t10494t,8);
  memcpy(&__t10495t__pos,__t10494t+8,8);
  memcpy(&__t10495t__length,__t10494t+16,8);
  v__unsafe_ptr=__t10495t__unsafe_ptr;
  v__pos=__t10495t__pos;
  v__length=__t10495t__length;
  if(!sum_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10497t__result=sum_data+32;
  if(!sum_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10499t=sum_data+8;
  if(!__t10499t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10500t__unsafe_ptr,__t10499t,8);
  memcpy(&__t10500t__pos,__t10499t+8,8);
  memcpy(&__t10500t__length,__t10499t+16,8);
  sum__t7672t(__t10500t__unsafe_ptr,__t10500t__pos,__t10500t__length,&__t10501t__);
  if(!__t10497t__result){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10497t__result,&__t10501t__,8);
  }
  else{
  vec____t_buffer____buffer__t10508t(&__t10510t__unsafe_ptr,&__t10510t__unsafe_size,&__t10510t__unsafe_offset,&__t10510t__unsafe_align);
  __t_complain=unsafe_pipe_data_match__t4575t(reader__obj__unsafe_data,__t10507t,__t10510t__unsafe_ptr,&__t10511t__);
  __t10502t=__t_complain;
  if(__t_complain){
  goto __t10502t__label;
  }
  __t10512t=__t10511t__;
  p=__t10512t;
  __t10502t__label:__t10502t=__t10502t==0;
  if(__t10502t){
  unsafe_console__t427t();
  print__t446t(__t10514t);
  }
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:__t_complain=unsafe_pipe_disown__t4484t(__t10480t__obj__unsafe_data);
  __t10481t____t4514t=__t_complain;
  if(__t_complain){
  goto __t4514t__label;
  }
  __t4514t__label:__t10481t____t4514t=__t10481t____t4514t==0;
  
  return __t_errcode;
}

int parallel_sum__t10592t(char* obj__unsafe_data) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=parallel_sum__t10478t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_spawn__t4531t(__smoll_func_ptr_type func, char* input__unsafe_data, char** __t10814t) {
  char* _unsafe_ptr=0;
  char* unsafe_ptr=0;
  _unsafe_ptr=thread_create((thread_func_t)func,(void*)input__unsafe_data);
  unsafe_ptr=_unsafe_ptr;
  goto __t_return;
  __t_return:
  *__t10814t=unsafe_ptr;
}

static inline __attribute__((always_inline)) int alloc__t1298t(char** __t10815t, uint64_t* __t10816t, uint32_t* __t10817t, uint32_t* __t10818t, uint64_t* __t10819t, char** __t10820t, uint64_t* __t10821t, uint32_t* __t10822t, uint32_t* __t10823t, uint64_t* __t10824t) {
  char* allocator__buf__unsafe_ptr=*__t10815t;
  uint64_t allocator__buf__unsafe_size=*__t10816t;
  uint32_t allocator__buf__unsafe_offset=*__t10817t;
  uint32_t allocator__buf__unsafe_align=*__t10818t;
  uint64_t allocator__pos=*__t10819t;
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
  *__t10815t=allocator__buf__unsafe_ptr;
  *__t10816t=allocator__buf__unsafe_size;
  *__t10817t=allocator__buf__unsafe_offset;
  *__t10818t=allocator__buf__unsafe_align;
  *__t10819t=allocator__pos;
  *__t10820t=__t1306t__buf__unsafe_ptr;
  *__t10821t=__t1306t__buf__unsafe_size;
  *__t10822t=__t1306t__buf__unsafe_offset;
  *__t10823t=__t1306t__buf__unsafe_align;
  *__t10824t=__t1306t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int thread__t4569t(uint64_t THREADS__CPU__cores, char** __t10825t, uint64_t* __t10826t, uint32_t* __t10827t, uint32_t* __t10828t, uint64_t* __t10829t, char** __t10830t, uint64_t* __t10831t, uint32_t* __t10832t, uint32_t* __t10833t, uint64_t* __t10834t, char* __t10835t, __smoll_func_ptr_type func, char* input__unsafe_data, char** __t10836t) {
  char* THREADS__unsafe_threads__buf__unsafe_ptr=*__t10825t;
  uint64_t THREADS__unsafe_threads__buf__unsafe_size=*__t10826t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_offset=*__t10827t;
  uint32_t THREADS__unsafe_threads__buf__unsafe_align=*__t10828t;
  uint64_t THREADS__unsafe_threads__pos=*__t10829t;
  char* THREADS__unsafe_arena__buf__unsafe_ptr=*__t10830t;
  uint64_t THREADS__unsafe_arena__buf__unsafe_size=*__t10831t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_offset=*__t10832t;
  uint32_t THREADS__unsafe_arena__buf__unsafe_align=*__t10833t;
  uint64_t THREADS__unsafe_arena__pos=*__t10834t;
  char THREADS__joined=*__t10835t;
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
  *__t10825t=THREADS__unsafe_threads__buf__unsafe_ptr;
  *__t10826t=THREADS__unsafe_threads__buf__unsafe_size;
  *__t10827t=THREADS__unsafe_threads__buf__unsafe_offset;
  *__t10828t=THREADS__unsafe_threads__buf__unsafe_align;
  *__t10829t=THREADS__unsafe_threads__pos;
  *__t10830t=THREADS__unsafe_arena__buf__unsafe_ptr;
  *__t10831t=THREADS__unsafe_arena__buf__unsafe_size;
  *__t10832t=THREADS__unsafe_arena__buf__unsafe_offset;
  *__t10833t=THREADS__unsafe_arena__buf__unsafe_align;
  *__t10834t=THREADS__unsafe_arena__pos;
  *__t10835t=THREADS__joined;
  *__t10836t=spawned__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t10516t() {
  double __t10519t=0;
  double __t10522t=0;
  double __t10523t=0;
  double __t10524t=0;
  double __t10525t=0;
  double __t10526t=0;
  double __t10527t=0;
  double __t10528t=0;
  double __t10529t=0;
  char* __t10530t__unsafe_ptr=0;
  uint64_t __t10530t__unsafe_size=0;
  uint32_t __t10530t__unsafe_offset=0;
  uint32_t __t10530t__unsafe_align=0;
  uint64_t __t10531t=0;
  char* __t10532t__unsafe_ptr=0;
  uint64_t __t10532t__unsafe_size=0;
  uint32_t __t10532t__unsafe_offset=0;
  uint32_t __t10532t__unsafe_align=0;
  uint64_t __t10534t=0;
  char* __t10535t__unsafe_ptr=0;
  uint64_t __t10535t__pos=0;
  uint64_t __t10535t__rows=0;
  uint64_t __t10535t__cols=0;
  uint64_t __t10535t__stride=0;
  char* mat__unsafe_ptr=0;
  uint64_t mat__pos=0;
  uint64_t mat__rows=0;
  uint64_t mat__cols=0;
  uint64_t mat__stride=0;
  uint64_t __t10536t=0;
  uint64_t __t10537t__cores=0;
  uint64_t __t10538t=0;
  uint64_t __t10539t__CPU__cores=0;
  char* __t10539t__unsafe_threads__buf__unsafe_ptr=0;
  uint64_t __t10539t__unsafe_threads__buf__unsafe_size=0;
  uint32_t __t10539t__unsafe_threads__buf__unsafe_offset=0;
  uint32_t __t10539t__unsafe_threads__buf__unsafe_align=0;
  uint64_t __t10539t__unsafe_threads__pos=0;
  char* __t10539t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10539t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10539t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10539t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10539t__unsafe_arena__pos=0;
  char __t10539t__joined=0;
  char __t10540t____t4551t__=0;
  uint64_t __t10540t____t4554t__from=0;
  uint64_t __t10540t____t4555t__from=0;
  uint64_t __t10540t____t4552t=0;
  uint64_t __t10540t____t4557t__=0;
  char __t10540t____t4556t=0;
  uint64_t __t10540t__i=0;
  char* __t10540t____t4560t__=0;
  char __t10540t____t4558t=0;
  char* __t10540t____t4561t__unsafe_ptr=0;
  uint64_t __t10541t__CPU__cores=0;
  char* __t10541t__unsafe_threads__buf__unsafe_ptr=0;
  uint64_t __t10541t__unsafe_threads__buf__unsafe_size=0;
  uint32_t __t10541t__unsafe_threads__buf__unsafe_offset=0;
  uint32_t __t10541t__unsafe_threads__buf__unsafe_align=0;
  uint64_t __t10541t__unsafe_threads__pos=0;
  char* __t10541t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10541t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10541t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10541t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10541t__unsafe_arena__pos=0;
  char __t10541t__joined=0;
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
  char* __t10544t__unsafe_ptr=0;
  uint64_t __t10544t__unsafe_size=0;
  uint32_t __t10544t__unsafe_offset=0;
  uint32_t __t10544t__unsafe_align=0;
  char* __t10545t__unsafe_ptr=0;
  uint64_t __t10545t__unsafe_size=0;
  uint32_t __t10545t__unsafe_offset=0;
  uint32_t __t10545t__unsafe_align=0;
  char* __t10547t__unsafe_ptr=0;
  uint64_t __t10547t__unsafe_size=0;
  uint32_t __t10547t__unsafe_offset=0;
  uint32_t __t10547t__unsafe_align=0;
  char* pending__unsafe_ptr=0;
  uint64_t pending__unsafe_size=0;
  uint32_t pending__unsafe_offset=0;
  uint32_t pending__unsafe_align=0;
  uint64_t __t10548t=0;
  uint64_t __t10549t__from=0;
  uint64_t __t10549t__to=0;
  uint64_t __t10550t__from=0;
  uint64_t __t10550t__to=0;
  char __t10551t=0;
  uint64_t __t10552t__=0;
  uint64_t i=0;
  char* __t10554t__=0;
  char* __t10555t__unsafe_ptr=0;
  uint64_t __t10555t__pos=0;
  uint64_t __t10555t__length=0;
  uint64_t __t10556t__row=0;
  char* __t10556t__v__unsafe_ptr=0;
  uint64_t __t10556t__v__pos=0;
  uint64_t __t10556t__v__length=0;
  double __t10556t__result=0;
  uint64_t __t10558t=0;
  uint64_t __t10561t=0;
  uint64_t __t10562t__=0;
  char* __t10563t__=0;
  uint64_t __t10568t=0;
  const char* __t10569t__value=0;
  uint64_t __t10569t__readers=0;
  uint64_t __t10569t__writers=0;
  uint64_t __t10569t__max_stored_size=0;
  uint64_t __t10569t__unsafe_mutex____t4425t__=0;
  uint64_t __t10569t__unsafe_mutex____t4426t__=0;
  uint64_t __t10569t__unsafe_mutex____t4427t__=0;
  uint64_t __t10569t__unsafe_mutex____t4428t__=0;
  uint64_t __t10569t__unsafe_mutex____t4429t__=0;
  char* __t10572t__unsafe_ptr=0;
  uint64_t __t10572t__unsafe_size=0;
  uint32_t __t10572t__unsafe_offset=0;
  uint32_t __t10572t__unsafe_align=0;
  char* __t10573t__=0;
  char* __t10574t__=0;
  uint64_t __t10575t____t4598t=0;
  char* __t10575t____t4599t__=0;
  char* __t10575t__mutex_ptr=0;
  char* __t10576t__unsafe_data=0;
  char* __t10578t__=0;
  char* __t10579t__unsafe_data=0;
  char* __t10581t__obj__unsafe_data=0;
  char __t10582t____t4523t=0;
  char* writer__obj__unsafe_data=0;
  uint64_t __t10583t=0;
  char* __t10584t__unsafe_ptr=0;
  uint64_t __t10584t__pos=0;
  uint64_t __t10584t__length=0;
  uint64_t __t10588t=0;
  char* __t10591t__=0;
  __smoll_func_ptr_type __t10600t=0;
  char* __t10602t__=0;
  char* __t10603t__unsafe_data=0;
  char* __t10604t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t424t();
  __t10519t=1.0;
  __t10522t=2.0;
  __t10523t=3.0;
  __t10524t=3.0;
  __t10525t=4.0;
  __t10526t=5.0;
  __t10527t=6.0;
  __t10528t=7.0;
  __t10529t=8.0;
  float____buffer__t10520t(&__t10530t__unsafe_ptr,&__t10530t__unsafe_size,&__t10530t__unsafe_offset,&__t10530t__unsafe_align);
  __t10531t=9;
  __t_errcode=alloc__t934t(&__t10530t__unsafe_ptr,&__t10530t__unsafe_size,&__t10530t__unsafe_offset,&__t10530t__unsafe_align,__t10531t,&__t10532t__unsafe_ptr,&__t10532t__unsafe_size,&__t10532t__unsafe_offset,&__t10532t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t10530t__unsafe_ptr,&__t10519t,8);
  memcpy(__t10530t__unsafe_ptr+8,&__t10522t,8);
  memcpy(__t10530t__unsafe_ptr+16,&__t10523t,8);
  memcpy(__t10530t__unsafe_ptr+24,&__t10524t,8);
  memcpy(__t10530t__unsafe_ptr+32,&__t10525t,8);
  memcpy(__t10530t__unsafe_ptr+40,&__t10526t,8);
  memcpy(__t10530t__unsafe_ptr+48,&__t10527t,8);
  memcpy(__t10530t__unsafe_ptr+56,&__t10528t,8);
  memcpy(__t10530t__unsafe_ptr+64,&__t10529t,8);
  __t10534t=3;
  __t_errcode=mat__t7985t(&__t10530t__unsafe_ptr,&__t10530t__unsafe_size,&__t10530t__unsafe_offset,&__t10530t__unsafe_align,__t10534t,&__t10535t__unsafe_ptr,&__t10535t__pos,&__t10535t__rows,&__t10535t__cols,&__t10535t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  mat__unsafe_ptr=__t10535t__unsafe_ptr;
  mat__pos=__t10535t__pos;
  mat__rows=__t10535t__rows;
  mat__cols=__t10535t__cols;
  mat__stride=__t10535t__stride;
  __t10536t=16;
  cpu__t4535t(__t10536t,&__t10537t__cores);
  __t10538t=1024;
  __t_errcode=growing_thread_pool__t4537t(__t10537t__cores,__t10538t,&__t10539t__CPU__cores,&__t10539t__unsafe_threads__buf__unsafe_ptr,&__t10539t__unsafe_threads__buf__unsafe_size,&__t10539t__unsafe_threads__buf__unsafe_offset,&__t10539t__unsafe_threads__buf__unsafe_align,&__t10539t__unsafe_threads__pos,&__t10539t__unsafe_arena__buf__unsafe_ptr,&__t10539t__unsafe_arena__buf__unsafe_size,&__t10539t__unsafe_arena__buf__unsafe_offset,&__t10539t__unsafe_arena__buf__unsafe_align,&__t10539t__unsafe_arena__pos,&__t10539t__joined);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10541t__CPU__cores=__t10539t__CPU__cores;
  __t10541t__unsafe_threads__buf__unsafe_ptr=__t10539t__unsafe_threads__buf__unsafe_ptr;
  __t10541t__unsafe_threads__buf__unsafe_size=__t10539t__unsafe_threads__buf__unsafe_size;
  __t10541t__unsafe_threads__buf__unsafe_offset=__t10539t__unsafe_threads__buf__unsafe_offset;
  __t10541t__unsafe_threads__buf__unsafe_align=__t10539t__unsafe_threads__buf__unsafe_align;
  __t10541t__unsafe_threads__pos=__t10539t__unsafe_threads__pos;
  __t10541t__unsafe_arena__buf__unsafe_ptr=__t10539t__unsafe_arena__buf__unsafe_ptr;
  __t10541t__unsafe_arena__buf__unsafe_size=__t10539t__unsafe_arena__buf__unsafe_size;
  __t10541t__unsafe_arena__buf__unsafe_offset=__t10539t__unsafe_arena__buf__unsafe_offset;
  __t10541t__unsafe_arena__buf__unsafe_align=__t10539t__unsafe_arena__buf__unsafe_align;
  __t10541t__unsafe_arena__pos=__t10539t__unsafe_arena__pos;
  __t10541t__joined=__t10539t__joined;
  THREADS__CPU__cores=__t10541t__CPU__cores;
  THREADS__unsafe_threads__buf__unsafe_ptr=__t10541t__unsafe_threads__buf__unsafe_ptr;
  THREADS__unsafe_threads__buf__unsafe_size=__t10541t__unsafe_threads__buf__unsafe_size;
  THREADS__unsafe_threads__buf__unsafe_offset=__t10541t__unsafe_threads__buf__unsafe_offset;
  THREADS__unsafe_threads__buf__unsafe_align=__t10541t__unsafe_threads__buf__unsafe_align;
  THREADS__unsafe_threads__pos=__t10541t__unsafe_threads__pos;
  THREADS__unsafe_arena__buf__unsafe_ptr=__t10541t__unsafe_arena__buf__unsafe_ptr;
  THREADS__unsafe_arena__buf__unsafe_size=__t10541t__unsafe_arena__buf__unsafe_size;
  THREADS__unsafe_arena__buf__unsafe_offset=__t10541t__unsafe_arena__buf__unsafe_offset;
  THREADS__unsafe_arena__buf__unsafe_align=__t10541t__unsafe_arena__buf__unsafe_align;
  THREADS__unsafe_arena__pos=__t10541t__unsafe_arena__pos;
  THREADS__joined=__t10541t__joined;
  pipe____t_buffer____buffer__t10542t(&__t10544t__unsafe_ptr,&__t10544t__unsafe_size,&__t10544t__unsafe_offset,&__t10544t__unsafe_align);
  __t_errcode=alloc__t934t(&__t10544t__unsafe_ptr,&__t10544t__unsafe_size,&__t10544t__unsafe_offset,&__t10544t__unsafe_align,mat__rows,&__t10545t__unsafe_ptr,&__t10545t__unsafe_size,&__t10545t__unsafe_offset,&__t10545t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10547t__unsafe_ptr=__t10545t__unsafe_ptr;
  __t10547t__unsafe_size=__t10545t__unsafe_size;
  __t10547t__unsafe_offset=__t10545t__unsafe_offset;
  __t10547t__unsafe_align=__t10545t__unsafe_align;
  pending__unsafe_ptr=__t10547t__unsafe_ptr;
  pending__unsafe_size=__t10547t__unsafe_size;
  pending__unsafe_offset=__t10547t__unsafe_offset;
  pending__unsafe_align=__t10547t__unsafe_align;
  of__t746t(mat__rows,&__t10549t__from,&__t10549t__to);
  range__t763t(__t10549t__from,__t10549t__to,&__t10550t__from,&__t10550t__to);
  __t10548t=0-1;
  while(1){
  __t10548t=__t10548t+1;
  __t_complain=mutget__t768t(&__t10550t__from,__t10550t__to,__t10548t,&__t10552t__);
  __t10551t=__t_complain;
  if(__t_complain){
  goto __t10551t__label;
  }
  i=__t10552t__;
  __t10551t__label:__t10551t=__t10551t==0;
  if(!__t10551t){
  break;
  }
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10554t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=row__t8048t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,i,&__t10555t__unsafe_ptr,&__t10555t__pos,&__t10555t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  sum_data__t10474t(i,__t10555t__unsafe_ptr,__t10555t__pos,__t10555t__length,&__t10556t__row,&__t10556t__v__unsafe_ptr,&__t10556t__v__pos,&__t10556t__v__length,&__t10556t__result);
  __t10558t=72;
  __t10561t=40;
  add__t188t(__t10558t,__t10561t,&__t10562t__);
  __t_errcode=pipe_data_alloc__t4600t(THREADS__CPU__cores,&THREADS__unsafe_threads__buf__unsafe_ptr,&THREADS__unsafe_threads__buf__unsafe_size,&THREADS__unsafe_threads__buf__unsafe_offset,&THREADS__unsafe_threads__buf__unsafe_align,&THREADS__unsafe_threads__pos,&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,&THREADS__joined,__t10562t__,&__t10563t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10568t=40;
  pipe_data__t4415t(__t10487t,__t10568t,&__t10569t__value,&__t10569t__readers,&__t10569t__writers,&__t10569t__max_stored_size,&__t10569t__unsafe_mutex____t4425t__,&__t10569t__unsafe_mutex____t4426t__,&__t10569t__unsafe_mutex____t4427t__,&__t10569t__unsafe_mutex____t4428t__,&__t10569t__unsafe_mutex____t4429t__);
  if(!__t10563t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10563t__,&__t10569t__value,8);
  memcpy(__t10563t__+8,&__t10569t__readers,8);
  memcpy(__t10563t__+16,&__t10569t__writers,8);
  memcpy(__t10563t__+24,&__t10569t__max_stored_size,8);
  memcpy(__t10563t__+32,&__t10569t__unsafe_mutex____t4425t__,8);
  memcpy(__t10563t__+40,&__t10569t__unsafe_mutex____t4426t__,8);
  memcpy(__t10563t__+48,&__t10569t__unsafe_mutex____t4427t__,8);
  memcpy(__t10563t__+56,&__t10569t__unsafe_mutex____t4428t__,8);
  memcpy(__t10563t__+64,&__t10569t__unsafe_mutex____t4429t__,8);
  memcpy(__t10563t__+72,&__t10556t__row,8);
  memcpy(__t10563t__+80,&__t10556t__v__unsafe_ptr,8);
  memcpy(__t10563t__+88,&__t10556t__v__pos,8);
  memcpy(__t10563t__+96,&__t10556t__v__length,8);
  memcpy(__t10563t__+104,&__t10556t__result,8);
  pipe_data____t_buffer____buffer__t10570t(&__t10572t__unsafe_ptr,&__t10572t__unsafe_size,&__t10572t__unsafe_offset,&__t10572t__unsafe_align);
  unsafe_attach_type__t28t(__t10563t__,__t10572t__unsafe_ptr,&__t10573t__);
  unsafe_pipe_data_mutex_init__t4595t(&__t10573t__,&__t10574t__);
  pipe__t4432t(__t10574t__,&__t10576t__unsafe_data);
  if(!__t10554t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10554t__,&__t10576t__unsafe_data,8);
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10578t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10578t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10579t__unsafe_data,__t10578t__,8);
  __t_errcode=open__t4517t(__t10579t__unsafe_data,&__t10581t__obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  writer__obj__unsafe_data=__t10581t__obj__unsafe_data;
  __t10583t=0;
  __t_errcode=row__t8048t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,__t10583t,&__t10584t__unsafe_ptr,&__t10584t__pos,&__t10584t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10588t=8;
  __t_errcode=prepare_writer_overwrite__t4697t(writer__obj__unsafe_data,__t10588t,__t10507t,&__t10591t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10591t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10591t__,&__t10584t__unsafe_ptr,8);
  memcpy(__t10591t__+8,&__t10584t__pos,8);
  memcpy(__t10591t__+16,&__t10584t__length,8);
  __t_complain=unsafe_pipe_disown__t4497t(__t10581t__obj__unsafe_data);
  __t10582t____t4523t=__t_complain;
  if(__t_complain){
  goto __t4523t__label;
  }
  __t4523t__label:__t10582t____t4523t=__t10582t____t4523t==0;
  __t10600t=(__smoll_func_ptr_type)parallel_sum__t10592t;
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10602t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10602t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10603t__unsafe_data,__t10602t__,8);
  __t_errcode=thread__t4569t(THREADS__CPU__cores,&THREADS__unsafe_threads__buf__unsafe_ptr,&THREADS__unsafe_threads__buf__unsafe_size,&THREADS__unsafe_threads__buf__unsafe_offset,&THREADS__unsafe_threads__buf__unsafe_align,&THREADS__unsafe_threads__pos,&THREADS__unsafe_arena__buf__unsafe_ptr,&THREADS__unsafe_arena__buf__unsafe_size,&THREADS__unsafe_arena__buf__unsafe_offset,&THREADS__unsafe_arena__buf__unsafe_align,&THREADS__unsafe_arena__pos,&THREADS__joined,__t10600t,__t10603t__unsafe_data,&__t10604t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  join__t4533t(&__t10604t__unsafe_ptr);
  free__t811t(&__t10539t__unsafe_threads__buf__unsafe_ptr);
  free__t811t(&__t10539t__unsafe_arena__buf__unsafe_ptr);
  not__t42t(__t10539t__joined,&__t10540t____t4551t__);
  if(__t10540t____t4551t__){
  len__t1165t(__t10539t__unsafe_threads__buf__unsafe_ptr,__t10539t__unsafe_threads__buf__unsafe_size,__t10539t__unsafe_threads__buf__unsafe_offset,__t10539t__unsafe_threads__buf__unsafe_align,&__t10539t__unsafe_threads__buf__unsafe_size);
  of__t746t(__t10539t__unsafe_threads__buf__unsafe_size,&__t10540t____t4554t__from,&__t10539t__unsafe_threads__buf__unsafe_size);
  range__t763t(__t10540t____t4554t__from,__t10539t__unsafe_threads__buf__unsafe_size,&__t10540t____t4555t__from,&__t10539t__unsafe_threads__buf__unsafe_size);
  __t10540t____t4552t=0-1;
  while(1){
  __t10540t____t4552t=__t10540t____t4552t+1;
  __t_complain=mutget__t768t(&__t10540t____t4555t__from,__t10539t__unsafe_threads__buf__unsafe_size,__t10540t____t4552t,&__t10540t____t4557t__);
  __t10540t____t4556t=__t_complain;
  if(__t_complain){
  goto __t4556t__label;
  }
  __t10540t__i=__t10540t____t4557t__;
  __t4556t__label:__t10540t____t4556t=__t10540t____t4556t==0;
  if(!__t10540t____t4556t){
  break;
  }
  __t_complain=mutget__t1142t(&__t10539t__unsafe_threads__buf__unsafe_ptr,&__t10539t__unsafe_threads__buf__unsafe_size,&__t10539t__unsafe_threads__buf__unsafe_offset,&__t10539t__unsafe_threads__buf__unsafe_align,__t10540t__i,&__t10540t____t4560t__);
  __t10540t____t4558t=__t_complain;
  if(__t_complain){
  goto __t4558t__label;
  }
  if(!__t10540t____t4560t__){
  __t_complain=2;
  goto __t4558t__label;
  }
  else{
  memcpy(&__t10540t____t4561t__unsafe_ptr,__t10540t____t4560t__,8);
  }
  join__t4533t(&__t10540t____t4561t__unsafe_ptr);
  __t4558t__label:__t10540t____t4558t=__t10540t____t4558t==0;
  }
  }
  __t10539t__joined=1;
  __t10539t__joined=__t10539t__joined;
  __t10575t____t4598t=8;
  add__t813t(__t10574t__,__t10575t____t4598t,&__t10575t____t4599t__);
  __t10575t__mutex_ptr=__t10575t____t4599t__;
  mutex_destroy((mutex_t*)__t10575t__mutex_ptr);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t811t(&__t10545t__unsafe_ptr);
  free__t811t(&__t10532t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t10516t();
                }