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
const char* const __t5704t="add";
const char* const __t10503t="sum_data__t10488t";
const char* const __t448t="\n";
const char* const __t10607t="vec__t4763t";
const char* const __t10499t="sum_data";
const char* const __t4467t="reader";
const char* const __t4483t="writer";
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
"type does not match current pipe contents",
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
int parallel_sum__t10609t(char* obj__unsafe_data) ;
static inline __attribute__((always_inline)) void console__t424t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void float____buffer__t10527t(char** __t10623t, uint64_t* __t10624t, uint32_t* __t10625t, uint32_t* __t10626t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10623t=unsafe_ptr;
  *__t10624t=unsafe_size;
  *__t10625t=unsafe_offset;
  *__t10626t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t811t(char** __t10627t) {
  char* allocated=*__t10627t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t10627t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t10628t) {
  int value=0;
  *__t10628t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t10629t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t10629t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t10630t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t10630t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t10631t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t10631t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t10632t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t10632t=z;
}

static inline __attribute__((always_inline)) void nat__t691t(uint32_t x, uint64_t* __t10633t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t10633t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t10634t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t10634t=z;
}

static inline __attribute__((always_inline)) void zero__t812t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t650t(char* x, char* __t10635t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t10635t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t10636t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t10636t=z;
}

static inline __attribute__((always_inline)) int alloc__t795t(uint64_t bytes, char** __t10637t) {
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
  *__t10637t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t934t(char** __t10638t, uint64_t* __t10639t, uint32_t* __t10640t, uint32_t* __t10641t, uint64_t size, char** __t10642t, uint64_t* __t10643t, uint32_t* __t10644t, uint32_t* __t10645t) {
  char* buffer__unsafe_ptr=*__t10638t;
  uint64_t buffer__unsafe_size=*__t10639t;
  uint32_t buffer__unsafe_offset=*__t10640t;
  uint32_t buffer__unsafe_align=*__t10641t;
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
  *__t10638t=buffer__unsafe_ptr;
  *__t10639t=buffer__unsafe_size;
  *__t10640t=buffer__unsafe_offset;
  *__t10641t=buffer__unsafe_align;
  *__t10642t=buffer__unsafe_ptr;
  *__t10643t=buffer__unsafe_size;
  *__t10644t=buffer__unsafe_offset;
  *__t10645t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1165t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t10646t) {
  goto __t_return;
  __t_return:
  *__t10646t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t10647t) {
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
  *__t10647t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1208t(char** __t10648t, uint64_t* __t10649t, uint32_t* __t10650t, uint32_t* __t10651t, uint64_t _pos, char** __t10652t, uint64_t* __t10653t, uint32_t* __t10654t, uint32_t* __t10655t, uint64_t* __t10656t) {
  char* buf__unsafe_ptr=*__t10648t;
  uint64_t buf__unsafe_size=*__t10649t;
  uint32_t buf__unsafe_offset=*__t10650t;
  uint32_t buf__unsafe_align=*__t10651t;
  uint64_t __t1209t=0;
  uint64_t pos=0;
  __t1209t=_pos;
  pos=__t1209t;
  goto __t_return;
  __t_return:
  *__t10648t=buf__unsafe_ptr;
  *__t10649t=buf__unsafe_size;
  *__t10650t=buf__unsafe_offset;
  *__t10651t=buf__unsafe_align;
  *__t10652t=buf__unsafe_ptr;
  *__t10653t=buf__unsafe_size;
  *__t10654t=buf__unsafe_offset;
  *__t10655t=buf__unsafe_align;
  *__t10656t=pos;
}

static inline __attribute__((always_inline)) void arena__t1211t(char** __t10657t, uint64_t* __t10658t, uint32_t* __t10659t, uint32_t* __t10660t, char** __t10661t, uint64_t* __t10662t, uint32_t* __t10663t, uint32_t* __t10664t, uint64_t* __t10665t) {
  char* buf__unsafe_ptr=*__t10657t;
  uint64_t buf__unsafe_size=*__t10658t;
  uint32_t buf__unsafe_offset=*__t10659t;
  uint32_t buf__unsafe_align=*__t10660t;
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
  *__t10657t=buf__unsafe_ptr;
  *__t10658t=buf__unsafe_size;
  *__t10659t=buf__unsafe_offset;
  *__t10660t=buf__unsafe_align;
  *__t10661t=__t1213t__buf__unsafe_ptr;
  *__t10662t=__t1213t__buf__unsafe_size;
  *__t10663t=__t1213t__buf__unsafe_offset;
  *__t10664t=__t1213t__buf__unsafe_align;
  *__t10665t=__t1213t__pos;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t10666t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10666t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t10667t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t10667t=z;
}

static inline __attribute__((always_inline)) void allocated__t1215t(char** __t10668t, uint64_t* __t10669t, uint32_t* __t10670t, uint32_t* __t10671t, uint64_t pos, char** __t10672t, uint64_t* __t10673t, uint32_t* __t10674t, uint32_t* __t10675t, uint64_t* __t10676t) {
  char* buf__unsafe_ptr=*__t10668t;
  uint64_t buf__unsafe_size=*__t10669t;
  uint32_t buf__unsafe_offset=*__t10670t;
  uint32_t buf__unsafe_align=*__t10671t;
  goto __t_return;
  __t_return:
  *__t10668t=buf__unsafe_ptr;
  *__t10669t=buf__unsafe_size;
  *__t10670t=buf__unsafe_offset;
  *__t10671t=buf__unsafe_align;
  *__t10672t=buf__unsafe_ptr;
  *__t10673t=buf__unsafe_size;
  *__t10674t=buf__unsafe_offset;
  *__t10675t=buf__unsafe_align;
  *__t10676t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1290t(char** __t10677t, uint64_t* __t10678t, uint32_t* __t10679t, uint32_t* __t10680t, uint64_t* __t10681t, uint64_t length, char** __t10682t, uint64_t* __t10683t, uint32_t* __t10684t, uint32_t* __t10685t, uint64_t* __t10686t) {
  char* allocator__buf__unsafe_ptr=*__t10677t;
  uint64_t allocator__buf__unsafe_size=*__t10678t;
  uint32_t allocator__buf__unsafe_offset=*__t10679t;
  uint32_t allocator__buf__unsafe_align=*__t10680t;
  uint64_t allocator__pos=*__t10681t;
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
  *__t10677t=allocator__buf__unsafe_ptr;
  *__t10678t=allocator__buf__unsafe_size;
  *__t10679t=allocator__buf__unsafe_offset;
  *__t10680t=allocator__buf__unsafe_align;
  *__t10681t=allocator__pos;
  *__t10682t=__t1297t__buf__unsafe_ptr;
  *__t10683t=__t1297t__buf__unsafe_size;
  *__t10684t=__t1297t__buf__unsafe_offset;
  *__t10685t=__t1297t__buf__unsafe_align;
  *__t10686t=__t1297t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t4766t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t10687t, uint64_t* __t10688t, uint64_t* __t10689t, uint64_t* __t10690t, uint64_t* __t10691t) {
  char* __t4768t__unsafe_ptr=0;
  uint64_t __t4768t__pos=0;
  uint64_t __t4768t__rows=0;
  uint64_t __t4768t__cols=0;
  uint64_t __t4768t__stride=0;
  __t4768t__unsafe_ptr=unsafe_ptr;
  __t4768t__pos=pos;
  __t4768t__rows=rows;
  __t4768t__cols=cols;
  __t4768t__stride=stride;
  goto __t_return;
  __t_return:
  *__t10687t=__t4768t__unsafe_ptr;
  *__t10688t=__t4768t__pos;
  *__t10689t=__t4768t__rows;
  *__t10690t=__t4768t__cols;
  *__t10691t=__t4768t__stride;
}

static inline __attribute__((always_inline)) int mat__t7934t(char** __t10692t, uint64_t* __t10693t, uint32_t* __t10694t, uint32_t* __t10695t, uint64_t* __t10696t, uint64_t rows, uint64_t cols, char** __t10697t, uint64_t* __t10698t, uint64_t* __t10699t, uint64_t* __t10700t, uint64_t* __t10701t) {
  char* FLOATS__buf__unsafe_ptr=*__t10692t;
  uint64_t FLOATS__buf__unsafe_size=*__t10693t;
  uint32_t FLOATS__buf__unsafe_offset=*__t10694t;
  uint32_t FLOATS__buf__unsafe_align=*__t10695t;
  uint64_t FLOATS__pos=*__t10696t;
  uint64_t __t7935t__=0;
  uint64_t __t7936t=0;
  char __t7937t__=0;
  uint64_t __t7938t__=0;
  uint64_t __t7939t=0;
  char __t7940t__=0;
  uint64_t __t7941t__=0;
  uint64_t size=0;
  char* __t7942t__buf__unsafe_ptr=0;
  uint64_t __t7942t__buf__unsafe_size=0;
  uint32_t __t7942t__buf__unsafe_offset=0;
  uint32_t __t7942t__buf__unsafe_align=0;
  uint64_t __t7942t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t7943t=0;
  char* __t7944t__unsafe_ptr=0;
  uint64_t __t7944t__pos=0;
  uint64_t __t7944t__rows=0;
  uint64_t __t7944t__cols=0;
  uint64_t __t7944t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t691t(FLOATS__buf__unsafe_align,&__t7935t__);
  __t7936t=8;
  neq__t158t(__t7935t__,__t7936t,&__t7937t__);
  if(__t7937t__){
  __t_errcode=61;
  goto __t_failure;
  }
  nat__t691t(FLOATS__buf__unsafe_offset,&__t7938t__);
  __t7939t=0;
  neq__t158t(__t7938t__,__t7939t,&__t7940t__);
  if(__t7940t__){
  __t_errcode=62;
  goto __t_failure;
  }
  mul__t212t(rows,cols,&__t7941t__);
  size=__t7941t__;
  __t_errcode=alloc__t1290t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t7942t__buf__unsafe_ptr,&__t7942t__buf__unsafe_size,&__t7942t__buf__unsafe_offset,&__t7942t__buf__unsafe_align,&__t7942t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t7942t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t7942t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t7942t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t7942t__buf__unsafe_align;
  surface__pos=__t7942t__pos;
  mat__t4766t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t7944t__unsafe_ptr,&__t7944t__pos,&__t7944t__rows,&__t7944t__cols,&__t7944t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10692t=FLOATS__buf__unsafe_ptr;
  *__t10693t=FLOATS__buf__unsafe_size;
  *__t10694t=FLOATS__buf__unsafe_offset;
  *__t10695t=FLOATS__buf__unsafe_align;
  *__t10696t=FLOATS__pos;
  *__t10697t=__t7944t__unsafe_ptr;
  *__t10698t=__t7944t__pos;
  *__t10699t=__t7944t__rows;
  *__t10700t=__t7944t__cols;
  *__t10701t=__t7944t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mat__t7999t(char** __t10702t, uint64_t* __t10703t, uint32_t* __t10704t, uint32_t* __t10705t, uint64_t rows, char** __t10706t, uint64_t* __t10707t, uint64_t* __t10708t, uint64_t* __t10709t, uint64_t* __t10710t) {
  char* buf__unsafe_ptr=*__t10702t;
  uint64_t buf__unsafe_size=*__t10703t;
  uint32_t buf__unsafe_offset=*__t10704t;
  uint32_t buf__unsafe_align=*__t10705t;
  uint64_t __t8000t__=0;
  uint64_t __t8001t__=0;
  uint64_t cols=0;
  uint64_t __t8002t__=0;
  uint64_t __t8003t__=0;
  char __t8004t__=0;
  char* __t8005t__buf__unsafe_ptr=0;
  uint64_t __t8005t__buf__unsafe_size=0;
  uint32_t __t8005t__buf__unsafe_offset=0;
  uint32_t __t8005t__buf__unsafe_align=0;
  uint64_t __t8005t__pos=0;
  char* __t8007t__unsafe_ptr=0;
  uint64_t __t8007t__pos=0;
  uint64_t __t8007t__rows=0;
  uint64_t __t8007t__cols=0;
  uint64_t __t8007t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t8000t__);
  __t_errcode=div__t270t(__t8000t__,rows,&__t8001t__);
  if(__t_errcode){
  goto __t_failure;
  }
  cols=__t8001t__;
  mul__t212t(cols,rows,&__t8002t__);
  len__t1165t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t8003t__);
  neq__t158t(__t8002t__,__t8003t__,&__t8004t__);
  if(__t8004t__){
  __t_errcode=63;
  goto __t_failure;
  }
  arena__t1211t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t8005t__buf__unsafe_ptr,&__t8005t__buf__unsafe_size,&__t8005t__buf__unsafe_offset,&__t8005t__buf__unsafe_align,&__t8005t__pos);
  __t_errcode=mat__t7934t(&__t8005t__buf__unsafe_ptr,&__t8005t__buf__unsafe_size,&__t8005t__buf__unsafe_offset,&__t8005t__buf__unsafe_align,&__t8005t__pos,rows,cols,&__t8007t__unsafe_ptr,&__t8007t__pos,&__t8007t__rows,&__t8007t__cols,&__t8007t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10702t=buf__unsafe_ptr;
  *__t10703t=buf__unsafe_size;
  *__t10704t=buf__unsafe_offset;
  *__t10705t=buf__unsafe_align;
  *__t10706t=__t8007t__unsafe_ptr;
  *__t10707t=__t8007t__pos;
  *__t10708t=__t8007t__rows;
  *__t10709t=__t8007t__cols;
  *__t10710t=__t8007t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cpu__t4547t(uint64_t cores, uint64_t* __t10711t) {
  goto __t_return;
  __t_return:
  *__t10711t=cores;
}

static inline __attribute__((always_inline)) void unsafe_spawn____t_buffer____buffer__t4550t(char** __t10712t, uint64_t* __t10713t, uint32_t* __t10714t, uint32_t* __t10715t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10712t=unsafe_ptr;
  *__t10713t=unsafe_size;
  *__t10714t=unsafe_offset;
  *__t10715t=unsafe_align;
}

static inline __attribute__((always_inline)) void of__t746t(uint64_t to, uint64_t* __t10716t, uint64_t* __t10717t) {
  uint64_t __t747t=0;
  uint64_t from=0;
  __t747t=0;
  from=__t747t;
  goto __t_return;
  __t_return:
  *__t10716t=from;
  *__t10717t=to;
}

static inline __attribute__((always_inline)) void range__t763t(uint64_t _from, uint64_t to, uint64_t* __t10718t, uint64_t* __t10719t) {
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
  *__t10718t=from;
  *__t10719t=to;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t10720t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t10720t=z;
}

static inline __attribute__((always_inline)) int mutget__t768t(uint64_t* __t10721t, uint64_t r__to, uint64_t skipped, uint64_t* __t10722t) {
  uint64_t r__from=*__t10721t;
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
  *__t10721t=r__from;
  *__t10722t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t10723t) {
  *__t10723t=to;
}

static inline __attribute__((always_inline)) void add__t813t(char* allocated, uint64_t offset, char** __t10724t) {
  char* element=0;
  char* __t814t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t814t__);
  goto __t_return;
  __t_return:
  *__t10724t=__t814t__;
}

static inline __attribute__((always_inline)) int mutget__t1142t(char** __t10725t, uint64_t* __t10726t, uint32_t* __t10727t, uint32_t* __t10728t, uint64_t i, char** __t10729t) {
  char* buffer__unsafe_ptr=*__t10725t;
  uint64_t buffer__unsafe_size=*__t10726t;
  uint32_t buffer__unsafe_offset=*__t10727t;
  uint32_t buffer__unsafe_align=*__t10728t;
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
  *__t10725t=buffer__unsafe_ptr;
  *__t10726t=buffer__unsafe_size;
  *__t10727t=buffer__unsafe_offset;
  *__t10728t=buffer__unsafe_align;
  *__t10729t=__t1149t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void join__t4545t(char** __t10730t) {
  char* thread__unsafe_ptr=*__t10730t;
  char __t4546t__=0;
  exists__t650t(thread__unsafe_ptr,&__t4546t__);
  if(__t4546t__){
  thread_join(thread__unsafe_ptr);
  }
  *__t10730t=thread__unsafe_ptr;
}

static inline __attribute__((always_inline)) int growing_thread_pool__t4549t(uint64_t CPU__cores, uint64_t* __t10731t, char** __t10732t, uint64_t* __t10733t, uint32_t* __t10734t, uint32_t* __t10735t, uint64_t* __t10736t, char* __t10737t) {
  char* __t4552t__unsafe_ptr=0;
  uint64_t __t4552t__unsafe_size=0;
  uint32_t __t4552t__unsafe_offset=0;
  uint32_t __t4552t__unsafe_align=0;
  char* __t4553t__unsafe_ptr=0;
  uint64_t __t4553t__unsafe_size=0;
  uint32_t __t4553t__unsafe_offset=0;
  uint32_t __t4553t__unsafe_align=0;
  char* __t4555t__buf__unsafe_ptr=0;
  uint64_t __t4555t__buf__unsafe_size=0;
  uint32_t __t4555t__buf__unsafe_offset=0;
  uint32_t __t4555t__buf__unsafe_align=0;
  uint64_t __t4555t__pos=0;
  char* __t4556t__buf__unsafe_ptr=0;
  uint64_t __t4556t__buf__unsafe_size=0;
  uint32_t __t4556t__buf__unsafe_offset=0;
  uint32_t __t4556t__buf__unsafe_align=0;
  uint64_t __t4556t__pos=0;
  char* threads__buf__unsafe_ptr=0;
  uint64_t threads__buf__unsafe_size=0;
  uint32_t threads__buf__unsafe_offset=0;
  uint32_t threads__buf__unsafe_align=0;
  uint64_t threads__pos=0;
  char __t4557t=0;
  char __t4558t=0;
  char joined=0;
  char __t4559t__=0;
  uint64_t __t4560t=0;
  uint64_t __t4561t__=0;
  uint64_t __t4562t__from=0;
  uint64_t __t4562t__to=0;
  uint64_t __t4563t__from=0;
  uint64_t __t4563t__to=0;
  char __t4564t=0;
  uint64_t __t4565t__=0;
  uint64_t i=0;
  char __t4566t=0;
  char* __t4568t__=0;
  char* __t4569t__unsafe_ptr=0;
  char __t4571t=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_spawn____t_buffer____buffer__t4550t(&__t4552t__unsafe_ptr,&__t4552t__unsafe_size,&__t4552t__unsafe_offset,&__t4552t__unsafe_align);
  __t_errcode=alloc__t934t(&__t4552t__unsafe_ptr,&__t4552t__unsafe_size,&__t4552t__unsafe_offset,&__t4552t__unsafe_align,CPU__cores,&__t4553t__unsafe_ptr,&__t4553t__unsafe_size,&__t4553t__unsafe_offset,&__t4553t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1211t(&__t4553t__unsafe_ptr,&__t4553t__unsafe_size,&__t4553t__unsafe_offset,&__t4553t__unsafe_align,&__t4555t__buf__unsafe_ptr,&__t4555t__buf__unsafe_size,&__t4555t__buf__unsafe_offset,&__t4555t__buf__unsafe_align,&__t4555t__pos);
  __t4556t__buf__unsafe_ptr=__t4555t__buf__unsafe_ptr;
  __t4556t__buf__unsafe_size=__t4555t__buf__unsafe_size;
  __t4556t__buf__unsafe_offset=__t4555t__buf__unsafe_offset;
  __t4556t__buf__unsafe_align=__t4555t__buf__unsafe_align;
  __t4556t__pos=__t4555t__pos;
  threads__buf__unsafe_ptr=__t4556t__buf__unsafe_ptr;
  threads__buf__unsafe_size=__t4556t__buf__unsafe_size;
  threads__buf__unsafe_offset=__t4556t__buf__unsafe_offset;
  threads__buf__unsafe_align=__t4556t__buf__unsafe_align;
  threads__pos=__t4556t__pos;
  __t4557t=0;
  __t4558t=__t4557t;
  joined=__t4558t;
  goto __t_return;
  
  __t_failure:not__t42t(joined,&__t4559t__);
  if(__t4559t__){
  len__t1165t(threads__buf__unsafe_ptr,threads__buf__unsafe_size,threads__buf__unsafe_offset,threads__buf__unsafe_align,&threads__buf__unsafe_size);
  of__t746t(threads__buf__unsafe_size,&__t4562t__from,&threads__buf__unsafe_size);
  range__t763t(__t4562t__from,threads__buf__unsafe_size,&__t4563t__from,&threads__buf__unsafe_size);
  __t4560t=0-1;
  while(1){
  __t4560t=__t4560t+1;
  __t_complain=mutget__t768t(&__t4563t__from,threads__buf__unsafe_size,__t4560t,&__t4565t__);
  __t4564t=__t_complain;
  if(__t_complain){
  goto __t4564t__label;
  }
  i=__t4565t__;
  __t4564t__label:__t4564t=__t4564t==0;
  if(!__t4564t){
  break;
  }
  __t_complain=mutget__t1142t(&threads__buf__unsafe_ptr,&threads__buf__unsafe_size,&threads__buf__unsafe_offset,&threads__buf__unsafe_align,i,&__t4568t__);
  __t4566t=__t_complain;
  if(__t_complain){
  goto __t4566t__label;
  }
  if(!__t4568t__){
  __t_complain=2;
  goto __t4566t__label;
  }
  else{
  memcpy(&__t4569t__unsafe_ptr,__t4568t__,8);
  }
  join__t4545t(&__t4569t__unsafe_ptr);
  __t4566t__label:__t4566t=__t4566t==0;
  }
  }
  joined=1;
  joined=joined;
  free__t811t(&threads__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10731t=CPU__cores;
  *__t10732t=threads__buf__unsafe_ptr;
  *__t10733t=threads__buf__unsafe_size;
  *__t10734t=threads__buf__unsafe_offset;
  *__t10735t=threads__buf__unsafe_align;
  *__t10736t=threads__pos;
  *__t10737t=joined;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1091t(char** __t10738t, uint64_t* __t10739t, uint32_t* __t10740t, uint32_t* __t10741t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t10738t=unsafe_ptr;
  *__t10739t=unsafe_size;
  *__t10740t=unsafe_offset;
  *__t10741t=unsafe_align;
}

int alloc__t1089t(uint64_t size, char** __t10742t, uint64_t* __t10743t, uint32_t* __t10744t, uint32_t* __t10745t) {
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
  *__t10742t=ret__unsafe_ptr;
  *__t10743t=ret__unsafe_size;
  *__t10744t=ret__unsafe_offset;
  *__t10745t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int arena__t4418t(uint64_t size, char** __t10746t, uint64_t* __t10747t, uint32_t* __t10748t, uint32_t* __t10749t, uint64_t* __t10750t) {
  char* __t4419t__unsafe_ptr=0;
  uint64_t __t4419t__unsafe_size=0;
  uint32_t __t4419t__unsafe_offset=0;
  uint32_t __t4419t__unsafe_align=0;
  char* __t4421t__buf__unsafe_ptr=0;
  uint64_t __t4421t__buf__unsafe_size=0;
  uint32_t __t4421t__buf__unsafe_offset=0;
  uint32_t __t4421t__buf__unsafe_align=0;
  uint64_t __t4421t__pos=0;
  char* __t4422t__buf__unsafe_ptr=0;
  uint64_t __t4422t__buf__unsafe_size=0;
  uint32_t __t4422t__buf__unsafe_offset=0;
  uint32_t __t4422t__buf__unsafe_align=0;
  uint64_t __t4422t__pos=0;
  char* unsafe_arena__buf__unsafe_ptr=0;
  uint64_t unsafe_arena__buf__unsafe_size=0;
  uint32_t unsafe_arena__buf__unsafe_offset=0;
  uint32_t unsafe_arena__buf__unsafe_align=0;
  uint64_t unsafe_arena__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1089t(size,&__t4419t__unsafe_ptr,&__t4419t__unsafe_size,&__t4419t__unsafe_offset,&__t4419t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1211t(&__t4419t__unsafe_ptr,&__t4419t__unsafe_size,&__t4419t__unsafe_offset,&__t4419t__unsafe_align,&__t4421t__buf__unsafe_ptr,&__t4421t__buf__unsafe_size,&__t4421t__buf__unsafe_offset,&__t4421t__buf__unsafe_align,&__t4421t__pos);
  __t4422t__buf__unsafe_ptr=__t4421t__buf__unsafe_ptr;
  __t4422t__buf__unsafe_size=__t4421t__buf__unsafe_size;
  __t4422t__buf__unsafe_offset=__t4421t__buf__unsafe_offset;
  __t4422t__buf__unsafe_align=__t4421t__buf__unsafe_align;
  __t4422t__pos=__t4421t__pos;
  unsafe_arena__buf__unsafe_ptr=__t4422t__buf__unsafe_ptr;
  unsafe_arena__buf__unsafe_size=__t4422t__buf__unsafe_size;
  unsafe_arena__buf__unsafe_offset=__t4422t__buf__unsafe_offset;
  unsafe_arena__buf__unsafe_align=__t4422t__buf__unsafe_align;
  unsafe_arena__pos=__t4422t__pos;
  goto __t_return;
  
  __t_failure:free__t811t(&unsafe_arena__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10746t=unsafe_arena__buf__unsafe_ptr;
  *__t10747t=unsafe_arena__buf__unsafe_size;
  *__t10748t=unsafe_arena__buf__unsafe_offset;
  *__t10749t=unsafe_arena__buf__unsafe_align;
  *__t10750t=unsafe_arena__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pipe____t_buffer____buffer__t10553t(char** __t10751t, uint64_t* __t10752t, uint32_t* __t10753t, uint32_t* __t10754t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10751t=unsafe_ptr;
  *__t10752t=unsafe_size;
  *__t10753t=unsafe_offset;
  *__t10754t=unsafe_align;
}

static inline __attribute__((always_inline)) void vec__t4763t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t10755t, uint64_t* __t10756t, uint64_t* __t10757t) {
  char* __t4765t__unsafe_ptr=0;
  uint64_t __t4765t__pos=0;
  uint64_t __t4765t__length=0;
  __t4765t__unsafe_ptr=unsafe_ptr;
  __t4765t__pos=pos;
  __t4765t__length=length;
  goto __t_return;
  __t_return:
  *__t10755t=__t4765t__unsafe_ptr;
  *__t10756t=__t4765t__pos;
  *__t10757t=__t4765t__length;
}

static inline __attribute__((always_inline)) int row__t8062t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, char** __t10758t, uint64_t* __t10759t, uint64_t* __t10760t) {
  char __t8063t__=0;
  uint64_t __t8064t__=0;
  uint64_t __t8065t__=0;
  char* __t8066t__unsafe_ptr=0;
  uint64_t __t8066t__pos=0;
  uint64_t __t8066t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,m__rows,&__t8063t__);
  if(__t8063t__){
  __t_errcode=64;
  goto __t_failure;
  }
  mul__t212t(i,m__stride,&__t8064t__);
  add__t188t(m__pos,__t8064t__,&__t8065t__);
  vec__t4763t(m__unsafe_ptr,__t8065t__,m__cols,&__t8066t__unsafe_ptr,&__t8066t__pos,&__t8066t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10758t=__t8066t__unsafe_ptr;
  *__t10759t=__t8066t__pos;
  *__t10760t=__t8066t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data__t10488t(uint64_t row, char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t* __t10761t, char** __t10762t, uint64_t* __t10763t, uint64_t* __t10764t, double* __t10765t) {
  double __t10489t=0;
  double __t10490t=0;
  double result=0;
  __t10489t=0.0;
  __t10490t=__t10489t;
  result=__t10490t;
  goto __t_return;
  __t_return:
  *__t10761t=row;
  *__t10762t=v__unsafe_ptr;
  *__t10763t=v__pos;
  *__t10764t=v__length;
  *__t10765t=result;
}

static inline __attribute__((always_inline)) int alloc__t1298t(char** __t10766t, uint64_t* __t10767t, uint32_t* __t10768t, uint32_t* __t10769t, uint64_t* __t10770t, char** __t10771t, uint64_t* __t10772t, uint32_t* __t10773t, uint32_t* __t10774t, uint64_t* __t10775t) {
  char* allocator__buf__unsafe_ptr=*__t10766t;
  uint64_t allocator__buf__unsafe_size=*__t10767t;
  uint32_t allocator__buf__unsafe_offset=*__t10768t;
  uint32_t allocator__buf__unsafe_align=*__t10769t;
  uint64_t allocator__pos=*__t10770t;
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
  *__t10766t=allocator__buf__unsafe_ptr;
  *__t10767t=allocator__buf__unsafe_size;
  *__t10768t=allocator__buf__unsafe_offset;
  *__t10769t=allocator__buf__unsafe_align;
  *__t10770t=allocator__pos;
  *__t10771t=__t1306t__buf__unsafe_ptr;
  *__t10772t=__t1306t__buf__unsafe_size;
  *__t10773t=__t1306t__buf__unsafe_offset;
  *__t10774t=__t1306t__buf__unsafe_align;
  *__t10775t=__t1306t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t4425t(char** __t10776t, uint64_t* __t10777t, uint32_t* __t10778t, uint32_t* __t10779t, uint64_t* __t10780t, uint64_t bytes, char** __t10781t, uint64_t* __t10782t, uint32_t* __t10783t, uint32_t* __t10784t, uint64_t* __t10785t) {
  char* arn__unsafe_arena__buf__unsafe_ptr=*__t10776t;
  uint64_t arn__unsafe_arena__buf__unsafe_size=*__t10777t;
  uint32_t arn__unsafe_arena__buf__unsafe_offset=*__t10778t;
  uint32_t arn__unsafe_arena__buf__unsafe_align=*__t10779t;
  uint64_t arn__unsafe_arena__pos=*__t10780t;
  char* __t4426t__buf__unsafe_ptr=0;
  uint64_t __t4426t__buf__unsafe_size=0;
  uint32_t __t4426t__buf__unsafe_offset=0;
  uint32_t __t4426t__buf__unsafe_align=0;
  uint64_t __t4426t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1298t(&arn__unsafe_arena__buf__unsafe_ptr,&arn__unsafe_arena__buf__unsafe_size,&arn__unsafe_arena__buf__unsafe_offset,&arn__unsafe_arena__buf__unsafe_align,&arn__unsafe_arena__pos,&__t4426t__buf__unsafe_ptr,&__t4426t__buf__unsafe_size,&__t4426t__buf__unsafe_offset,&__t4426t__buf__unsafe_align,&__t4426t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10776t=arn__unsafe_arena__buf__unsafe_ptr;
  *__t10777t=arn__unsafe_arena__buf__unsafe_size;
  *__t10778t=arn__unsafe_arena__buf__unsafe_offset;
  *__t10779t=arn__unsafe_arena__buf__unsafe_align;
  *__t10780t=arn__unsafe_arena__pos;
  *__t10781t=__t4426t__buf__unsafe_ptr;
  *__t10782t=__t4426t__buf__unsafe_size;
  *__t10783t=__t4426t__buf__unsafe_offset;
  *__t10784t=__t4426t__buf__unsafe_align;
  *__t10785t=__t4426t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int at__t1574t(char** __t10786t, uint64_t* __t10787t, uint32_t* __t10788t, uint32_t* __t10789t, uint64_t surface__pos, char** __t10790t) {
  char* surface__buf__unsafe_ptr=*__t10786t;
  uint64_t surface__buf__unsafe_size=*__t10787t;
  uint32_t surface__buf__unsafe_offset=*__t10788t;
  uint32_t surface__buf__unsafe_align=*__t10789t;
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
  *__t10786t=surface__buf__unsafe_ptr;
  *__t10787t=surface__buf__unsafe_size;
  *__t10788t=surface__buf__unsafe_offset;
  *__t10789t=surface__buf__unsafe_align;
  *__t10790t=__t1576t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int pipe_data_alloc__t4612t(char** __t10791t, uint64_t* __t10792t, uint32_t* __t10793t, uint32_t* __t10794t, uint64_t* __t10795t, uint64_t size, char** __t10796t) {
  char* arena__unsafe_arena__buf__unsafe_ptr=*__t10791t;
  uint64_t arena__unsafe_arena__buf__unsafe_size=*__t10792t;
  uint32_t arena__unsafe_arena__buf__unsafe_offset=*__t10793t;
  uint32_t arena__unsafe_arena__buf__unsafe_align=*__t10794t;
  uint64_t arena__unsafe_arena__pos=*__t10795t;
  char* __t4613t__buf__unsafe_ptr=0;
  uint64_t __t4613t__buf__unsafe_size=0;
  uint32_t __t4613t__buf__unsafe_offset=0;
  uint32_t __t4613t__buf__unsafe_align=0;
  uint64_t __t4613t__pos=0;
  char* __t4614t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t4425t(&arena__unsafe_arena__buf__unsafe_ptr,&arena__unsafe_arena__buf__unsafe_size,&arena__unsafe_arena__buf__unsafe_offset,&arena__unsafe_arena__buf__unsafe_align,&arena__unsafe_arena__pos,size,&__t4613t__buf__unsafe_ptr,&__t4613t__buf__unsafe_size,&__t4613t__buf__unsafe_offset,&__t4613t__buf__unsafe_align,&__t4613t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1574t(&__t4613t__buf__unsafe_ptr,&__t4613t__buf__unsafe_size,&__t4613t__buf__unsafe_offset,&__t4613t__buf__unsafe_align,__t4613t__pos,&__t4614t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10791t=arena__unsafe_arena__buf__unsafe_ptr;
  *__t10792t=arena__unsafe_arena__buf__unsafe_size;
  *__t10793t=arena__unsafe_arena__buf__unsafe_offset;
  *__t10794t=arena__unsafe_arena__buf__unsafe_align;
  *__t10795t=arena__unsafe_arena__pos;
  *__t10796t=__t4614t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void nat__t5t(uint64_t* __t10797t) {
  uint64_t value=0;
  *__t10797t=value;
}

static inline __attribute__((always_inline)) void pipe_data__t4427t(const char* value, uint64_t max_stored_size, const char** __t10798t, uint64_t* __t10799t, uint64_t* __t10800t, uint64_t* __t10801t, uint64_t* __t10802t, uint64_t* __t10803t, uint64_t* __t10804t, uint64_t* __t10805t, uint64_t* __t10806t) {
  uint64_t __t4428t=0;
  uint64_t __t4429t=0;
  uint64_t readers=0;
  uint64_t __t4430t=0;
  uint64_t __t4431t=0;
  uint64_t writers=0;
  uint64_t __t4437t__=0;
  uint64_t __t4438t__=0;
  uint64_t __t4439t__=0;
  uint64_t __t4440t__=0;
  uint64_t __t4441t__=0;
  uint64_t unsafe_mutex____t4437t__=0;
  uint64_t unsafe_mutex____t4438t__=0;
  uint64_t unsafe_mutex____t4439t__=0;
  uint64_t unsafe_mutex____t4440t__=0;
  uint64_t unsafe_mutex____t4441t__=0;
  __t4428t=0;
  __t4429t=__t4428t;
  readers=__t4429t;
  __t4430t=0;
  __t4431t=__t4430t;
  writers=__t4431t;
  nat__t5t(&__t4437t__);
  nat__t5t(&__t4438t__);
  nat__t5t(&__t4439t__);
  nat__t5t(&__t4440t__);
  nat__t5t(&__t4441t__);
  unsafe_mutex____t4437t__=__t4437t__;
  unsafe_mutex____t4438t__=__t4438t__;
  unsafe_mutex____t4439t__=__t4439t__;
  unsafe_mutex____t4440t__=__t4440t__;
  unsafe_mutex____t4441t__=__t4441t__;
  goto __t_return;
  __t_return:
  *__t10798t=value;
  *__t10799t=readers;
  *__t10800t=writers;
  *__t10801t=max_stored_size;
  *__t10802t=unsafe_mutex____t4437t__;
  *__t10803t=unsafe_mutex____t4438t__;
  *__t10804t=unsafe_mutex____t4439t__;
  *__t10805t=unsafe_mutex____t4440t__;
  *__t10806t=unsafe_mutex____t4441t__;
}

static inline __attribute__((always_inline)) void pipe_data____t_buffer____buffer__t10581t(char** __t10807t, uint64_t* __t10808t, uint32_t* __t10809t, uint32_t* __t10810t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=72;
  *__t10807t=unsafe_ptr;
  *__t10808t=unsafe_size;
  *__t10809t=unsafe_offset;
  *__t10810t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_mutex_init__t4606t(char** __t10811t, char** __t10812t) {
  char* obj=*__t10811t;
  uint64_t __t4607t=0;
  char* __t4608t__=0;
  char* mutex_ptr_construct=0;
  uint64_t __t4609t=0;
  char* __t4610t__=0;
  char* mutex_ptr=0;
  __t4607t=8;
  add__t813t(obj,__t4607t,&__t4608t__);
  mutex_ptr_construct=__t4608t__;
  mutex_init((mutex_t*)mutex_ptr_construct);
  goto __t_return;
  __t_return:
  *__t10811t=obj;
  *__t10812t=obj;
}

static inline __attribute__((always_inline)) void pipe__t4444t(char* unsafe_data, char** __t10813t) {
  goto __t_return;
  __t_return:
  *__t10813t=unsafe_data;
}

static inline __attribute__((always_inline)) int unsafe_pipe_lock__t4446t(char* obj__unsafe_data) {
  uint64_t mutex_size=0;
  uint64_t __t4447t=0;
  char __t4448t__=0;
  char* __t4450t=0;
  char* mutex_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  mutex_size=sizeof(mutex_t);
  __t4447t=48;
  gt__t325t(mutex_size,__t4447t,&__t4448t__);
  if(__t4448t__){
  __t_errcode=44;
  goto __t_failure;
  }
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4450t=obj__unsafe_data+32;
  mutex_ptr=__t4450t;
  mutex_lock((mutex_t*)mutex_ptr);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_unlock__t4451t(char* obj__unsafe_data) {
  uint64_t mutex_size=0;
  uint64_t __t4452t=0;
  char __t4453t__=0;
  char* __t4455t=0;
  char* mutex_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  mutex_size=sizeof(mutex_t);
  __t4452t=48;
  gt__t325t(mutex_size,__t4452t,&__t4453t__);
  if(__t4453t__){
  __t_errcode=44;
  goto __t_failure;
  }
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4455t=obj__unsafe_data+32;
  mutex_ptr=__t4455t;
  mutex_unlock((mutex_t*)mutex_ptr);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_own__t4479t(char* obj__unsafe_data, char** __t10814t, uint64_t* __t10815t, uint64_t* __t10816t) {
  char __t4481t=0;
  char __t4482t=0;
  char* __t4485t__readers=0;
  uint64_t __t4486t__readers=0;
  uint64_t readers=0;
  uint64_t __t4487t=0;
  char* __t4489t__writers=0;
  uint64_t __t4490t__writers=0;
  uint64_t __t4491t__=0;
  uint64_t writers=0;
  char* __t4493t__writers=0;
  int __t4494t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4446t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4482t=1;
  if(__t4483t!=__t4483t){
  __t4482t=0;
  }
  if(__t4482t){
  __t4481t=1;
  }
  if(__t4481t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4485t__readers=obj__unsafe_data+8;
  if(!__t4485t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4486t__readers,__t4485t__readers,8);
  readers=__t4486t__readers;
  __t4487t=1;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4489t__writers=obj__unsafe_data+16;
  if(!__t4489t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4490t__writers,__t4489t__writers,8);
  add__t188t(__t4487t,__t4490t__writers,&__t4491t__);
  writers=__t4491t__;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4493t__writers=obj__unsafe_data+16;
  if(!__t4493t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4493t__writers,&writers,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4451t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10814t=obj__unsafe_data;
  *__t10815t=readers;
  *__t10816t=writers;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t10817t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t10817t=z;
}

static inline __attribute__((always_inline)) int sub__t401t(uint64_t x, uint64_t y, uint64_t* __t10818t) {
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
  *__t10818t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_disown__t4509t(char* obj__unsafe_data) {
  int __t4511t=0;
  char __t4512t=0;
  char __t4513t=0;
  char* __t4515t__writers=0;
  char* __t4517t__writers=0;
  uint64_t __t4518t__writers=0;
  uint64_t __t4519t=0;
  uint64_t __t4520t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4446t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4513t=1;
  if(__t4483t!=__t4483t){
  __t4513t=0;
  }
  if(__t4513t){
  __t4512t=1;
  }
  if(__t4512t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4515t__writers=obj__unsafe_data+16;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4517t__writers=obj__unsafe_data+16;
  if(!__t4517t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4518t__writers,__t4517t__writers,8);
  __t4519t=1;
  __t_errcode=sub__t401t(__t4518t__writers,__t4519t,&__t4520t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4515t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4515t__writers,&__t4520t__,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4451t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4529t(char* _obj__unsafe_data, char** __t10819t) {
  char* __t4530t__obj__unsafe_data=0;
  uint64_t __t4530t__readers=0;
  uint64_t __t4530t__writers=0;
  char* status__obj__unsafe_data=0;
  uint64_t status__readers=0;
  uint64_t status__writers=0;
  uint64_t __t4531t=0;
  char __t4532t__=0;
  uint64_t __t4533t=0;
  char __t4534t__=0;
  char __t4535t=0;
  char* obj__unsafe_data=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_own__t4479t(_obj__unsafe_data,&__t4530t__obj__unsafe_data,&__t4530t__readers,&__t4530t__writers);
  if(__t_errcode){
  goto __t_failure;
  }
  status__obj__unsafe_data=__t4530t__obj__unsafe_data;
  status__readers=__t4530t__readers;
  status__writers=__t4530t__writers;
  __t4531t=0;
  neq__t158t(status__readers,__t4531t,&__t4532t__);
  if(__t4532t__){
  __t_errcode=46;
  goto __t_failure;
  }
  __t4533t=1;
  gt__t325t(status__writers,__t4533t,&__t4534t__);
  if(__t4534t__){
  __t_errcode=47;
  goto __t_failure;
  }
  obj__unsafe_data=_obj__unsafe_data;
  goto __t_return;
  
  __t_failure:__t_complain=unsafe_pipe_disown__t4509t(obj__unsafe_data);
  __t4535t=__t_complain;
  if(__t_complain){
  goto __t4535t__label;
  }
  __t4535t__label:__t4535t=__t4535t==0;
  
  goto __t_skip_returns;__t_return:
  *__t10819t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void verify_opened_pipe_writer__t4714t(char* opened_pipe__obj__unsafe_data, char** __t10820t) {
  goto __t_return;
  __t_return:
  *__t10820t=opened_pipe__obj__unsafe_data;
}

static inline __attribute__((always_inline)) int verify_opened_pipe_data_fit__t4708t(char* obj__unsafe_data, uint64_t size, char** __t10821t) {
  char* __t4710t__max_stored_size=0;
  uint64_t __t4711t__max_stored_size=0;
  uint64_t found=0;
  char __t4712t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4710t__max_stored_size=obj__unsafe_data+24;
  if(!__t4710t__max_stored_size){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4711t__max_stored_size,__t4710t__max_stored_size,8);
  found=__t4711t__max_stored_size;
  gt__t325t(size,found,&__t4712t__);
  if(__t4712t__){
  __t_errcode=54;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10821t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_set_new_name_and_get_offset__t4715t(char* obj__unsafe_data, const char* name, char** __t10822t) {
  char* __t4717t__value=0;
  char* _name=0;
  uint64_t __t4718t=0;
  char* __t4719t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4717t__value=obj__unsafe_data+0;
  _name=__t4717t__value;
  if(!_name){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(_name,&name,8);
  __t4718t=72;
  add__t813t(obj__unsafe_data,__t4718t,&__t4719t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10822t=__t4719t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_own__t4462t(char* obj__unsafe_data, char** __t10823t, uint64_t* __t10824t, uint64_t* __t10825t) {
  int __t4464t=0;
  char __t4465t=0;
  char __t4466t=0;
  uint64_t __t4468t=0;
  char* __t4470t__readers=0;
  uint64_t __t4471t__readers=0;
  uint64_t __t4472t__=0;
  uint64_t readers=0;
  char* __t4474t__writers=0;
  uint64_t __t4475t__writers=0;
  uint64_t writers=0;
  char* __t4477t__readers=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4446t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4466t=1;
  if(__t4467t!=__t4467t){
  __t4466t=0;
  }
  if(__t4466t){
  __t4465t=1;
  }
  if(__t4465t){
  __t4468t=1;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4470t__readers=obj__unsafe_data+8;
  if(!__t4470t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4471t__readers,__t4470t__readers,8);
  add__t188t(__t4468t,__t4471t__readers,&__t4472t__);
  readers=__t4472t__;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4474t__writers=obj__unsafe_data+16;
  if(!__t4474t__writers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4475t__writers,__t4474t__writers,8);
  writers=__t4475t__writers;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4477t__readers=obj__unsafe_data+8;
  if(!__t4477t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4477t__readers,&readers,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4451t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10823t=obj__unsafe_data;
  *__t10824t=readers;
  *__t10825t=writers;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int unsafe_pipe_disown__t4496t(char* obj__unsafe_data) {
  char __t4498t=0;
  char __t4499t=0;
  char* __t4501t__readers=0;
  char* __t4503t__readers=0;
  uint64_t __t4504t__readers=0;
  uint64_t __t4505t=0;
  uint64_t __t4506t__=0;
  int __t4507t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_lock__t4446t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t4499t=1;
  if(__t4467t!=__t4467t){
  __t4499t=0;
  }
  if(__t4499t){
  __t4498t=1;
  }
  if(__t4498t){
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4501t__readers=obj__unsafe_data+8;
  if(!obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4503t__readers=obj__unsafe_data+8;
  if(!__t4503t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4504t__readers,__t4503t__readers,8);
  __t4505t=1;
  __t_errcode=sub__t401t(__t4504t__readers,__t4505t,&__t4506t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4501t__readers){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4501t__readers,&__t4506t__,8);
  }
  __t_errcode=unsafe_pipe_unlock__t4451t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int open__t4522t(char* obj__unsafe_data, char** __t10826t) {
  char* __t4523t__obj__unsafe_data=0;
  uint64_t __t4523t__readers=0;
  uint64_t __t4523t__writers=0;
  char* status__obj__unsafe_data=0;
  uint64_t status__readers=0;
  uint64_t status__writers=0;
  uint64_t __t4524t=0;
  char __t4525t__=0;
  char __t4526t=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=unsafe_pipe_own__t4462t(obj__unsafe_data,&__t4523t__obj__unsafe_data,&__t4523t__readers,&__t4523t__writers);
  if(__t_errcode){
  goto __t_failure;
  }
  status__obj__unsafe_data=__t4523t__obj__unsafe_data;
  status__readers=__t4523t__readers;
  status__writers=__t4523t__writers;
  __t4524t=0;
  neq__t158t(status__writers,__t4524t,&__t4525t__);
  if(__t4525t__){
  __t_errcode=45;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_complain=unsafe_pipe_disown__t4496t(obj__unsafe_data);
  __t4526t=__t_complain;
  if(__t_complain){
  goto __t4526t__label;
  }
  __t4526t__label:__t4526t=__t4526t==0;
  
  goto __t_skip_returns;__t_return:
  *__t10826t=obj__unsafe_data;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data____t_buffer____buffer__t10504t(char** __t10827t, uint64_t* __t10828t, uint32_t* __t10829t, uint32_t* __t10830t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=40;
  *__t10827t=unsafe_ptr;
  *__t10828t=unsafe_size;
  *__t10829t=unsafe_offset;
  *__t10830t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1821t(const char* x, const char* y, char* __t10831t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t10831t=z;
}

static inline __attribute__((always_inline)) void neq__t1850t(const char* x, const char* y, char* __t10832t) {
  char __t1851t__=0;
  char __t1852t__=0;
  eq__t1821t(x,y,&__t1851t__);
  not__t42t(__t1851t__,&__t1852t__);
  goto __t_return;
  __t_return:
  *__t10832t=__t1852t__;
}

static inline __attribute__((always_inline)) int unsafe_pipe_data_match__t4583t(char* obj__obj__unsafe_data, const char* name, char* type, char** __t10833t) {
  char* __t4585t__value=0;
  const char* __t4586t__value=0;
  const char* found=0;
  char __t4587t__=0;
  uint64_t __t4591t=0;
  char* __t4592t__=0;
  char* __t4593t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__obj__unsafe_data){
  __t_errcode=2;
  goto __t_failure;
  }
  __t4585t__value=obj__obj__unsafe_data+0;
  if(!__t4585t__value){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4586t__value,__t4585t__value,8);
  found=__t4586t__value;
  neq__t1850t(found,name,&__t4587t__);
  if(__t4587t__){
  __t_errcode=48;
  goto __t_failure;
  }
  __t4591t=72;
  add__t813t(obj__obj__unsafe_data,__t4591t,&__t4592t__);
  unsafe_attach_type__t28t(__t4592t__,type,&__t4593t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10833t=__t4593t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void iter__t5014t(char* vec__unsafe_ptr, uint64_t vec__pos, uint64_t vec__length, char** __t10834t, uint64_t* __t10835t, uint64_t* __t10836t) {
  goto __t_return;
  __t_return:
  *__t10834t=vec__unsafe_ptr;
  *__t10835t=vec__pos;
  *__t10836t=vec__length;
}

static inline __attribute__((always_inline)) void get__t5001t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t10837t) {
  int __t5002t=0;
  uint64_t __t5003t=0;
  uint64_t __t5004t__=0;
  uint64_t __t5005t__=0;
  char* __t5006t__=0;
  __t5003t=8;
  add__t188t(i,v__pos,&__t5004t__);
  mul__t212t(__t5003t,__t5004t__,&__t5005t__);
  add__t813t(v__unsafe_ptr,__t5005t__,&__t5006t__);
  goto __t_return;
  __t_return:
  *__t10837t=__t5006t__;
}

static inline __attribute__((always_inline)) int get__t5016t(char* v__vec__unsafe_ptr, uint64_t v__vec__pos, uint64_t v__vec__length, uint64_t i, double* __t10838t) {
  char __t5017t__=0;
  char* __t5020t__=0;
  double __t5021t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,v__vec__length,&__t5017t__);
  if(__t5017t__){
  __t_errcode=22;
  goto __t_failure;
  }
  get__t5001t(v__vec__unsafe_ptr,v__vec__pos,v__vec__length,i,&__t5020t__);
  if(!__t5020t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5021t__value,__t5020t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10838t=__t5021t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t10839t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t10839t=__t87t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t10840t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10840t=z;
}

static inline __attribute__((always_inline)) void reduce__t5701t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10841t) {
  char __t5702t=0;
  char __t5703t=0;
  double __t5705t=0;
  double __t5706t=0;
  double ret=0;
  int __t5707t=0;
  int __t5708t=0;
  int __t5709t=0;
  int __t5710t__=0;
  uint64_t __t5711t=0;
  char* __t5712t__vec__unsafe_ptr=0;
  uint64_t __t5712t__vec__pos=0;
  uint64_t __t5712t__vec__length=0;
  char __t5713t=0;
  double __t5714t__=0;
  double _value=0;
  double __t5715t=0;
  double value=0;
  int __t5716t=0;
  int __t5717t=0;
  int __t5718t=0;
  int __t5719t=0;
  int __t5720t=0;
  char __t5721t=0;
  char __t5722t=0;
  double __t5723t__=0;
  int __t5724t=0;
  int __t5725t=0;
  int __t_complain=0;
  __t5703t=1;
  if(__t5704t!=__t5704t){
  __t5703t=0;
  }
  if(__t5703t){
  __t5702t=1;
  }
  if(__t5702t){
  __t5705t=0.0;
  __t5706t=__t5705t;
  ret=__t5706t;
  }
  not__t51t(__t5709t,&__t5710t__);
  iter__t5014t(v__unsafe_ptr,v__pos,v__length,&__t5712t__vec__unsafe_ptr,&__t5712t__vec__pos,&__t5712t__vec__length);
  __t5711t=0-1;
  while(1){
  __t5711t=__t5711t+1;
  __t_complain=get__t5016t(__t5712t__vec__unsafe_ptr,__t5712t__vec__pos,__t5712t__vec__length,__t5711t,&__t5714t__);
  __t5713t=__t_complain;
  if(__t_complain){
  goto __t5713t__label;
  }
  _value=__t5714t__;
  __t5713t__label:__t5713t=__t5713t==0;
  if(!__t5713t){
  break;
  }
  __t5715t=_value;
  value=__t5715t;
  __t5722t=1;
  if(__t5704t!=__t5704t){
  __t5722t=0;
  }
  if(__t5722t){
  __t5721t=1;
  }
  if(__t5721t){
  add__t166t(ret,value,&__t5723t__);
  ret=__t5723t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t10841t=ret;
}

static inline __attribute__((always_inline)) void sum__t7686t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10842t) {
  double __t7688t__=0;
  reduce__t5701t(v__unsafe_ptr,v__pos,v__length,&__t7688t__);
  goto __t_return;
  __t_return:
  *__t10842t=__t7688t__;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t427t() {
  console__t424t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void print__t451t(double value) {
  int __t452t=0;
  const char* endl=0;
  endl=__t448t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int parallel_sum__t10492t(char* obj__unsafe_data) {
  char* __t10494t__obj__unsafe_data=0;
  char __t10495t____t4526t=0;
  char* reader__obj__unsafe_data=0;
  char* __t10506t__unsafe_ptr=0;
  uint64_t __t10506t__unsafe_size=0;
  uint32_t __t10506t__unsafe_offset=0;
  uint32_t __t10506t__unsafe_align=0;
  char* __t10507t__=0;
  char* __t10508t=0;
  char* p=0;
  char* __t10510t=0;
  char* __t10511t__unsafe_ptr=0;
  uint64_t __t10511t__pos=0;
  uint64_t __t10511t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* __t10513t__result=0;
  char* __t10515t=0;
  char* __t10516t__unsafe_ptr=0;
  uint64_t __t10516t__pos=0;
  uint64_t __t10516t__length=0;
  double __t10517t__=0;
  char* __t10520t__result=0;
  double __t10521t__result=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=open__t4522t(obj__unsafe_data,&__t10494t__obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  reader__obj__unsafe_data=__t10494t__obj__unsafe_data;
  sum_data____t_buffer____buffer__t10504t(&__t10506t__unsafe_ptr,&__t10506t__unsafe_size,&__t10506t__unsafe_offset,&__t10506t__unsafe_align);
  __t_errcode=unsafe_pipe_data_match__t4583t(reader__obj__unsafe_data,__t10503t,__t10506t__unsafe_ptr,&__t10507t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10508t=__t10507t__;
  p=__t10508t;
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10510t=p+8;
  if(!__t10510t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10511t__unsafe_ptr,__t10510t,8);
  memcpy(&__t10511t__pos,__t10510t+8,8);
  memcpy(&__t10511t__length,__t10510t+16,8);
  v__unsafe_ptr=__t10511t__unsafe_ptr;
  v__pos=__t10511t__pos;
  v__length=__t10511t__length;
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10513t__result=p+32;
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10515t=p+8;
  if(!__t10515t){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10516t__unsafe_ptr,__t10515t,8);
  memcpy(&__t10516t__pos,__t10515t+8,8);
  memcpy(&__t10516t__length,__t10515t+16,8);
  sum__t7686t(__t10516t__unsafe_ptr,__t10516t__pos,__t10516t__length,&__t10517t__);
  if(!__t10513t__result){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10513t__result,&__t10517t__,8);
  unsafe_console__t427t();
  if(!p){
  __t_errcode=2;
  goto __t_failure;
  }
  __t10520t__result=p+32;
  if(!__t10520t__result){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10521t__result,__t10520t__result,8);
  print__t451t(__t10521t__result);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:__t_complain=unsafe_pipe_disown__t4496t(__t10494t__obj__unsafe_data);
  __t10495t____t4526t=__t_complain;
  if(__t_complain){
  goto __t4526t__label;
  }
  __t4526t__label:__t10495t____t4526t=__t10495t____t4526t==0;
  
  return __t_errcode;
}

int parallel_sum__t10609t(char* obj__unsafe_data) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=parallel_sum__t10492t(obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_spawn__t4543t(__smoll_func_ptr_type func, char* input__unsafe_data, char** __t10843t) {
  char* _unsafe_ptr=0;
  char* unsafe_ptr=0;
  _unsafe_ptr=thread_create((thread_func_t)func,(void*)input__unsafe_data);
  unsafe_ptr=_unsafe_ptr;
  goto __t_return;
  __t_return:
  *__t10843t=unsafe_ptr;
}

static inline __attribute__((always_inline)) int thread__t4577t(uint64_t THREADS__CPU__cores, char** __t10844t, uint64_t* __t10845t, uint32_t* __t10846t, uint32_t* __t10847t, uint64_t* __t10848t, char* __t10849t, __smoll_func_ptr_type func, char* input__unsafe_data, char** __t10850t) {
  char* THREADS__threads__buf__unsafe_ptr=*__t10844t;
  uint64_t THREADS__threads__buf__unsafe_size=*__t10845t;
  uint32_t THREADS__threads__buf__unsafe_offset=*__t10846t;
  uint32_t THREADS__threads__buf__unsafe_align=*__t10847t;
  uint64_t THREADS__threads__pos=*__t10848t;
  char THREADS__joined=*__t10849t;
  char* __t4578t__unsafe_ptr=0;
  char* __t4579t__unsafe_ptr=0;
  char* spawned__unsafe_ptr=0;
  char* __t4580t__buf__unsafe_ptr=0;
  uint64_t __t4580t__buf__unsafe_size=0;
  uint32_t __t4580t__buf__unsafe_offset=0;
  uint32_t __t4580t__buf__unsafe_align=0;
  uint64_t __t4580t__pos=0;
  char* __t4581t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_spawn__t4543t(func,input__unsafe_data,&__t4578t__unsafe_ptr);
  __t4579t__unsafe_ptr=__t4578t__unsafe_ptr;
  spawned__unsafe_ptr=__t4579t__unsafe_ptr;
  __t_errcode=alloc__t1298t(&THREADS__threads__buf__unsafe_ptr,&THREADS__threads__buf__unsafe_size,&THREADS__threads__buf__unsafe_offset,&THREADS__threads__buf__unsafe_align,&THREADS__threads__pos,&__t4580t__buf__unsafe_ptr,&__t4580t__buf__unsafe_size,&__t4580t__buf__unsafe_offset,&__t4580t__buf__unsafe_align,&__t4580t__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=at__t1574t(&__t4580t__buf__unsafe_ptr,&__t4580t__buf__unsafe_size,&__t4580t__buf__unsafe_offset,&__t4580t__buf__unsafe_align,__t4580t__pos,&__t4581t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t4581t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4581t__,&spawned__unsafe_ptr,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10844t=THREADS__threads__buf__unsafe_ptr;
  *__t10845t=THREADS__threads__buf__unsafe_size;
  *__t10846t=THREADS__threads__buf__unsafe_offset;
  *__t10847t=THREADS__threads__buf__unsafe_align;
  *__t10848t=THREADS__threads__pos;
  *__t10849t=THREADS__joined;
  *__t10850t=spawned__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t10523t() {
  double __t10526t=0;
  double __t10529t=0;
  double __t10530t=0;
  double __t10531t=0;
  double __t10532t=0;
  double __t10533t=0;
  double __t10534t=0;
  double __t10535t=0;
  double __t10536t=0;
  char* __t10537t__unsafe_ptr=0;
  uint64_t __t10537t__unsafe_size=0;
  uint32_t __t10537t__unsafe_offset=0;
  uint32_t __t10537t__unsafe_align=0;
  uint64_t __t10538t=0;
  char* __t10539t__unsafe_ptr=0;
  uint64_t __t10539t__unsafe_size=0;
  uint32_t __t10539t__unsafe_offset=0;
  uint32_t __t10539t__unsafe_align=0;
  uint64_t __t10541t=0;
  char* __t10542t__unsafe_ptr=0;
  uint64_t __t10542t__pos=0;
  uint64_t __t10542t__rows=0;
  uint64_t __t10542t__cols=0;
  uint64_t __t10542t__stride=0;
  char* mat__unsafe_ptr=0;
  uint64_t mat__pos=0;
  uint64_t mat__rows=0;
  uint64_t mat__cols=0;
  uint64_t mat__stride=0;
  uint64_t __t10543t=0;
  uint64_t __t10544t__cores=0;
  uint64_t __t10545t__CPU__cores=0;
  char* __t10545t__threads__buf__unsafe_ptr=0;
  uint64_t __t10545t__threads__buf__unsafe_size=0;
  uint32_t __t10545t__threads__buf__unsafe_offset=0;
  uint32_t __t10545t__threads__buf__unsafe_align=0;
  uint64_t __t10545t__threads__pos=0;
  char __t10545t__joined=0;
  char __t10546t____t4559t__=0;
  uint64_t __t10546t____t4562t__from=0;
  uint64_t __t10546t____t4563t__from=0;
  uint64_t __t10546t____t4560t=0;
  uint64_t __t10546t____t4565t__=0;
  char __t10546t____t4564t=0;
  uint64_t __t10546t__i=0;
  char* __t10546t____t4568t__=0;
  char __t10546t____t4566t=0;
  char* __t10546t____t4569t__unsafe_ptr=0;
  uint64_t __t10547t__CPU__cores=0;
  char* __t10547t__threads__buf__unsafe_ptr=0;
  uint64_t __t10547t__threads__buf__unsafe_size=0;
  uint32_t __t10547t__threads__buf__unsafe_offset=0;
  uint32_t __t10547t__threads__buf__unsafe_align=0;
  uint64_t __t10547t__threads__pos=0;
  char __t10547t__joined=0;
  uint64_t THREADS__CPU__cores=0;
  char* THREADS__threads__buf__unsafe_ptr=0;
  uint64_t THREADS__threads__buf__unsafe_size=0;
  uint32_t THREADS__threads__buf__unsafe_offset=0;
  uint32_t THREADS__threads__buf__unsafe_align=0;
  uint64_t THREADS__threads__pos=0;
  char THREADS__joined=0;
  uint64_t __t10548t=0;
  char* __t10550t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10550t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10550t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10550t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10550t__unsafe_arena__pos=0;
  char* __t10552t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10552t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10552t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10552t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10552t__unsafe_arena__pos=0;
  char* INCORRUPTIBLE__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t INCORRUPTIBLE__unsafe_arena__buf__unsafe_size=0;
  uint32_t INCORRUPTIBLE__unsafe_arena__buf__unsafe_offset=0;
  uint32_t INCORRUPTIBLE__unsafe_arena__buf__unsafe_align=0;
  uint64_t INCORRUPTIBLE__unsafe_arena__pos=0;
  char* __t10555t__unsafe_ptr=0;
  uint64_t __t10555t__unsafe_size=0;
  uint32_t __t10555t__unsafe_offset=0;
  uint32_t __t10555t__unsafe_align=0;
  char* __t10556t__unsafe_ptr=0;
  uint64_t __t10556t__unsafe_size=0;
  uint32_t __t10556t__unsafe_offset=0;
  uint32_t __t10556t__unsafe_align=0;
  char* __t10558t__unsafe_ptr=0;
  uint64_t __t10558t__unsafe_size=0;
  uint32_t __t10558t__unsafe_offset=0;
  uint32_t __t10558t__unsafe_align=0;
  char* pending__unsafe_ptr=0;
  uint64_t pending__unsafe_size=0;
  uint32_t pending__unsafe_offset=0;
  uint32_t pending__unsafe_align=0;
  uint64_t __t10559t=0;
  uint64_t __t10560t__from=0;
  uint64_t __t10560t__to=0;
  uint64_t __t10561t__from=0;
  uint64_t __t10561t__to=0;
  char __t10562t=0;
  uint64_t __t10563t__=0;
  uint64_t i=0;
  char* __t10565t__=0;
  char* __t10566t__unsafe_ptr=0;
  uint64_t __t10566t__pos=0;
  uint64_t __t10566t__length=0;
  uint64_t __t10567t__row=0;
  char* __t10567t__v__unsafe_ptr=0;
  uint64_t __t10567t__v__pos=0;
  uint64_t __t10567t__v__length=0;
  double __t10567t__result=0;
  uint64_t __t10569t=0;
  uint64_t __t10572t=0;
  uint64_t __t10573t__=0;
  char* __t10574t__=0;
  uint64_t __t10579t=0;
  const char* __t10580t__value=0;
  uint64_t __t10580t__readers=0;
  uint64_t __t10580t__writers=0;
  uint64_t __t10580t__max_stored_size=0;
  uint64_t __t10580t__unsafe_mutex____t4437t__=0;
  uint64_t __t10580t__unsafe_mutex____t4438t__=0;
  uint64_t __t10580t__unsafe_mutex____t4439t__=0;
  uint64_t __t10580t__unsafe_mutex____t4440t__=0;
  uint64_t __t10580t__unsafe_mutex____t4441t__=0;
  char* __t10583t__unsafe_ptr=0;
  uint64_t __t10583t__unsafe_size=0;
  uint32_t __t10583t__unsafe_offset=0;
  uint32_t __t10583t__unsafe_align=0;
  char* __t10584t__=0;
  char* __t10585t__=0;
  uint64_t __t10586t____t4609t=0;
  char* __t10586t____t4610t__=0;
  char* __t10586t__mutex_ptr=0;
  char* __t10587t__unsafe_data=0;
  char* __t10589t__=0;
  char* __t10590t__unsafe_data=0;
  char* __t10592t__obj__unsafe_data=0;
  char __t10593t____t4535t=0;
  char* writer__obj__unsafe_data=0;
  uint64_t __t10594t=0;
  char* __t10595t__unsafe_ptr=0;
  uint64_t __t10595t__pos=0;
  uint64_t __t10595t__length=0;
  char* __t10597t__obj__unsafe_data=0;
  uint64_t __t10600t=0;
  char* __t10601t__unsafe_data=0;
  char* __t10608t__=0;
  __smoll_func_ptr_type __t10617t=0;
  char* __t10619t__=0;
  char* __t10620t__unsafe_data=0;
  char* __t10621t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t424t();
  __t10526t=1.0;
  __t10529t=2.0;
  __t10530t=3.0;
  __t10531t=3.0;
  __t10532t=4.0;
  __t10533t=5.0;
  __t10534t=6.0;
  __t10535t=7.0;
  __t10536t=8.0;
  float____buffer__t10527t(&__t10537t__unsafe_ptr,&__t10537t__unsafe_size,&__t10537t__unsafe_offset,&__t10537t__unsafe_align);
  __t10538t=9;
  __t_errcode=alloc__t934t(&__t10537t__unsafe_ptr,&__t10537t__unsafe_size,&__t10537t__unsafe_offset,&__t10537t__unsafe_align,__t10538t,&__t10539t__unsafe_ptr,&__t10539t__unsafe_size,&__t10539t__unsafe_offset,&__t10539t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t10537t__unsafe_ptr,&__t10526t,8);
  memcpy(__t10537t__unsafe_ptr+8,&__t10529t,8);
  memcpy(__t10537t__unsafe_ptr+16,&__t10530t,8);
  memcpy(__t10537t__unsafe_ptr+24,&__t10531t,8);
  memcpy(__t10537t__unsafe_ptr+32,&__t10532t,8);
  memcpy(__t10537t__unsafe_ptr+40,&__t10533t,8);
  memcpy(__t10537t__unsafe_ptr+48,&__t10534t,8);
  memcpy(__t10537t__unsafe_ptr+56,&__t10535t,8);
  memcpy(__t10537t__unsafe_ptr+64,&__t10536t,8);
  __t10541t=3;
  __t_errcode=mat__t7999t(&__t10537t__unsafe_ptr,&__t10537t__unsafe_size,&__t10537t__unsafe_offset,&__t10537t__unsafe_align,__t10541t,&__t10542t__unsafe_ptr,&__t10542t__pos,&__t10542t__rows,&__t10542t__cols,&__t10542t__stride);
  if(__t_errcode){
  goto __t_failure;
  }
  mat__unsafe_ptr=__t10542t__unsafe_ptr;
  mat__pos=__t10542t__pos;
  mat__rows=__t10542t__rows;
  mat__cols=__t10542t__cols;
  mat__stride=__t10542t__stride;
  __t10543t=16;
  cpu__t4547t(__t10543t,&__t10544t__cores);
  __t_errcode=growing_thread_pool__t4549t(__t10544t__cores,&__t10545t__CPU__cores,&__t10545t__threads__buf__unsafe_ptr,&__t10545t__threads__buf__unsafe_size,&__t10545t__threads__buf__unsafe_offset,&__t10545t__threads__buf__unsafe_align,&__t10545t__threads__pos,&__t10545t__joined);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10547t__CPU__cores=__t10545t__CPU__cores;
  __t10547t__threads__buf__unsafe_ptr=__t10545t__threads__buf__unsafe_ptr;
  __t10547t__threads__buf__unsafe_size=__t10545t__threads__buf__unsafe_size;
  __t10547t__threads__buf__unsafe_offset=__t10545t__threads__buf__unsafe_offset;
  __t10547t__threads__buf__unsafe_align=__t10545t__threads__buf__unsafe_align;
  __t10547t__threads__pos=__t10545t__threads__pos;
  __t10547t__joined=__t10545t__joined;
  THREADS__CPU__cores=__t10547t__CPU__cores;
  THREADS__threads__buf__unsafe_ptr=__t10547t__threads__buf__unsafe_ptr;
  THREADS__threads__buf__unsafe_size=__t10547t__threads__buf__unsafe_size;
  THREADS__threads__buf__unsafe_offset=__t10547t__threads__buf__unsafe_offset;
  THREADS__threads__buf__unsafe_align=__t10547t__threads__buf__unsafe_align;
  THREADS__threads__pos=__t10547t__threads__pos;
  THREADS__joined=__t10547t__joined;
  __t10548t=1024;
  __t_errcode=arena__t4418t(__t10548t,&__t10550t__unsafe_arena__buf__unsafe_ptr,&__t10550t__unsafe_arena__buf__unsafe_size,&__t10550t__unsafe_arena__buf__unsafe_offset,&__t10550t__unsafe_arena__buf__unsafe_align,&__t10550t__unsafe_arena__pos);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10552t__unsafe_arena__buf__unsafe_ptr=__t10550t__unsafe_arena__buf__unsafe_ptr;
  __t10552t__unsafe_arena__buf__unsafe_size=__t10550t__unsafe_arena__buf__unsafe_size;
  __t10552t__unsafe_arena__buf__unsafe_offset=__t10550t__unsafe_arena__buf__unsafe_offset;
  __t10552t__unsafe_arena__buf__unsafe_align=__t10550t__unsafe_arena__buf__unsafe_align;
  __t10552t__unsafe_arena__pos=__t10550t__unsafe_arena__pos;
  INCORRUPTIBLE__unsafe_arena__buf__unsafe_ptr=__t10552t__unsafe_arena__buf__unsafe_ptr;
  INCORRUPTIBLE__unsafe_arena__buf__unsafe_size=__t10552t__unsafe_arena__buf__unsafe_size;
  INCORRUPTIBLE__unsafe_arena__buf__unsafe_offset=__t10552t__unsafe_arena__buf__unsafe_offset;
  INCORRUPTIBLE__unsafe_arena__buf__unsafe_align=__t10552t__unsafe_arena__buf__unsafe_align;
  INCORRUPTIBLE__unsafe_arena__pos=__t10552t__unsafe_arena__pos;
  pipe____t_buffer____buffer__t10553t(&__t10555t__unsafe_ptr,&__t10555t__unsafe_size,&__t10555t__unsafe_offset,&__t10555t__unsafe_align);
  __t_errcode=alloc__t934t(&__t10555t__unsafe_ptr,&__t10555t__unsafe_size,&__t10555t__unsafe_offset,&__t10555t__unsafe_align,mat__rows,&__t10556t__unsafe_ptr,&__t10556t__unsafe_size,&__t10556t__unsafe_offset,&__t10556t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10558t__unsafe_ptr=__t10556t__unsafe_ptr;
  __t10558t__unsafe_size=__t10556t__unsafe_size;
  __t10558t__unsafe_offset=__t10556t__unsafe_offset;
  __t10558t__unsafe_align=__t10556t__unsafe_align;
  pending__unsafe_ptr=__t10558t__unsafe_ptr;
  pending__unsafe_size=__t10558t__unsafe_size;
  pending__unsafe_offset=__t10558t__unsafe_offset;
  pending__unsafe_align=__t10558t__unsafe_align;
  of__t746t(mat__rows,&__t10560t__from,&__t10560t__to);
  range__t763t(__t10560t__from,__t10560t__to,&__t10561t__from,&__t10561t__to);
  __t10559t=0-1;
  while(1){
  __t10559t=__t10559t+1;
  __t_complain=mutget__t768t(&__t10561t__from,__t10561t__to,__t10559t,&__t10563t__);
  __t10562t=__t_complain;
  if(__t_complain){
  goto __t10562t__label;
  }
  i=__t10563t__;
  __t10562t__label:__t10562t=__t10562t==0;
  if(!__t10562t){
  break;
  }
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10565t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=row__t8062t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,i,&__t10566t__unsafe_ptr,&__t10566t__pos,&__t10566t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  sum_data__t10488t(i,__t10566t__unsafe_ptr,__t10566t__pos,__t10566t__length,&__t10567t__row,&__t10567t__v__unsafe_ptr,&__t10567t__v__pos,&__t10567t__v__length,&__t10567t__result);
  __t10569t=72;
  __t10572t=40;
  add__t188t(__t10569t,__t10572t,&__t10573t__);
  __t_errcode=pipe_data_alloc__t4612t(&INCORRUPTIBLE__unsafe_arena__buf__unsafe_ptr,&INCORRUPTIBLE__unsafe_arena__buf__unsafe_size,&INCORRUPTIBLE__unsafe_arena__buf__unsafe_offset,&INCORRUPTIBLE__unsafe_arena__buf__unsafe_align,&INCORRUPTIBLE__unsafe_arena__pos,__t10573t__,&__t10574t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t10579t=40;
  pipe_data__t4427t(__t10503t,__t10579t,&__t10580t__value,&__t10580t__readers,&__t10580t__writers,&__t10580t__max_stored_size,&__t10580t__unsafe_mutex____t4437t__,&__t10580t__unsafe_mutex____t4438t__,&__t10580t__unsafe_mutex____t4439t__,&__t10580t__unsafe_mutex____t4440t__,&__t10580t__unsafe_mutex____t4441t__);
  if(!__t10574t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10574t__,&__t10580t__value,8);
  memcpy(__t10574t__+8,&__t10580t__readers,8);
  memcpy(__t10574t__+16,&__t10580t__writers,8);
  memcpy(__t10574t__+24,&__t10580t__max_stored_size,8);
  memcpy(__t10574t__+32,&__t10580t__unsafe_mutex____t4437t__,8);
  memcpy(__t10574t__+40,&__t10580t__unsafe_mutex____t4438t__,8);
  memcpy(__t10574t__+48,&__t10580t__unsafe_mutex____t4439t__,8);
  memcpy(__t10574t__+56,&__t10580t__unsafe_mutex____t4440t__,8);
  memcpy(__t10574t__+64,&__t10580t__unsafe_mutex____t4441t__,8);
  memcpy(__t10574t__+72,&__t10567t__row,8);
  memcpy(__t10574t__+80,&__t10567t__v__unsafe_ptr,8);
  memcpy(__t10574t__+88,&__t10567t__v__pos,8);
  memcpy(__t10574t__+96,&__t10567t__v__length,8);
  memcpy(__t10574t__+104,&__t10567t__result,8);
  pipe_data____t_buffer____buffer__t10581t(&__t10583t__unsafe_ptr,&__t10583t__unsafe_size,&__t10583t__unsafe_offset,&__t10583t__unsafe_align);
  unsafe_attach_type__t28t(__t10574t__,__t10583t__unsafe_ptr,&__t10584t__);
  unsafe_pipe_data_mutex_init__t4606t(&__t10584t__,&__t10585t__);
  pipe__t4444t(__t10585t__,&__t10587t__unsafe_data);
  if(!__t10565t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10565t__,&__t10587t__unsafe_data,8);
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10589t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10589t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10590t__unsafe_data,__t10589t__,8);
  __t_errcode=open__t4529t(__t10590t__unsafe_data,&__t10592t__obj__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  writer__obj__unsafe_data=__t10592t__obj__unsafe_data;
  __t10594t=0;
  __t_errcode=row__t8062t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,__t10594t,&__t10595t__unsafe_ptr,&__t10595t__pos,&__t10595t__length);
  if(__t_errcode){
  goto __t_failure;
  }
  verify_opened_pipe_writer__t4714t(writer__obj__unsafe_data,&__t10597t__obj__unsafe_data);
  __t10600t=8;
  __t_errcode=verify_opened_pipe_data_fit__t4708t(__t10597t__obj__unsafe_data,__t10600t,&__t10601t__unsafe_data);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=unsafe_set_new_name_and_get_offset__t4715t(__t10601t__unsafe_data,__t10607t,&__t10608t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10608t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10608t__,&writer__obj__unsafe_data,8);
  __t_complain=unsafe_pipe_disown__t4509t(__t10592t__obj__unsafe_data);
  __t10593t____t4535t=__t_complain;
  if(__t_complain){
  goto __t4535t__label;
  }
  __t4535t__label:__t10593t____t4535t=__t10593t____t4535t==0;
  __t10617t=(__smoll_func_ptr_type)parallel_sum__t10609t;
  __t_errcode=mutget__t1142t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10619t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t10619t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10620t__unsafe_data,__t10619t__,8);
  __t_errcode=thread__t4577t(THREADS__CPU__cores,&THREADS__threads__buf__unsafe_ptr,&THREADS__threads__buf__unsafe_size,&THREADS__threads__buf__unsafe_offset,&THREADS__threads__buf__unsafe_align,&THREADS__threads__pos,&THREADS__joined,__t10617t,__t10620t__unsafe_data,&__t10621t__unsafe_ptr);
  if(__t_errcode){
  goto __t_failure;
  }
  join__t4545t(&__t10621t__unsafe_ptr);
  free__t811t(&__t10550t__unsafe_arena__buf__unsafe_ptr);
  __t10586t____t4609t=8;
  add__t813t(__t10585t__,__t10586t____t4609t,&__t10586t____t4610t__);
  __t10586t__mutex_ptr=__t10586t____t4610t__;
  mutex_destroy((mutex_t*)__t10586t__mutex_ptr);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t811t(&__t10556t__unsafe_ptr);
  not__t42t(__t10545t__joined,&__t10546t____t4559t__);
  if(__t10546t____t4559t__){
  len__t1165t(__t10545t__threads__buf__unsafe_ptr,__t10545t__threads__buf__unsafe_size,__t10545t__threads__buf__unsafe_offset,__t10545t__threads__buf__unsafe_align,&__t10545t__threads__buf__unsafe_size);
  of__t746t(__t10545t__threads__buf__unsafe_size,&__t10546t____t4562t__from,&__t10545t__threads__buf__unsafe_size);
  range__t763t(__t10546t____t4562t__from,__t10545t__threads__buf__unsafe_size,&__t10546t____t4563t__from,&__t10545t__threads__buf__unsafe_size);
  __t10546t____t4560t=0-1;
  while(1){
  __t10546t____t4560t=__t10546t____t4560t+1;
  __t_complain=mutget__t768t(&__t10546t____t4563t__from,__t10545t__threads__buf__unsafe_size,__t10546t____t4560t,&__t10546t____t4565t__);
  __t10546t____t4564t=__t_complain;
  if(__t_complain){
  goto __t4564t__label;
  }
  __t10546t__i=__t10546t____t4565t__;
  __t4564t__label:__t10546t____t4564t=__t10546t____t4564t==0;
  if(!__t10546t____t4564t){
  break;
  }
  __t_complain=mutget__t1142t(&__t10545t__threads__buf__unsafe_ptr,&__t10545t__threads__buf__unsafe_size,&__t10545t__threads__buf__unsafe_offset,&__t10545t__threads__buf__unsafe_align,__t10546t__i,&__t10546t____t4568t__);
  __t10546t____t4566t=__t_complain;
  if(__t_complain){
  goto __t4566t__label;
  }
  if(!__t10546t____t4568t__){
  __t_complain=2;
  goto __t4566t__label;
  }
  else{
  memcpy(&__t10546t____t4569t__unsafe_ptr,__t10546t____t4568t__,8);
  }
  join__t4545t(&__t10546t____t4569t__unsafe_ptr);
  __t4566t__label:__t10546t____t4566t=__t10546t____t4566t==0;
  }
  }
  __t10545t__joined=1;
  __t10545t__joined=__t10545t__joined;
  free__t811t(&__t10545t__threads__buf__unsafe_ptr);
  free__t811t(&__t10539t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t10523t();
                }