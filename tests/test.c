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
const char* const __t10298t="sum_data__t10283t";
const char* const __t431t="";
const char* const __t7534t="[ ";
const char* const __t10294t="sum_data";
const char* const __t443t="\n";
const char* const __t5496t="add";
const char* const __t7554t=" ]";
const char* const __t7551t="  ";
static const char* __t_all_errcodes[68] = {"noerr",
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
"does not match",
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
int parallel_sum__t10385t(char* obj__data) ;
static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void float____buffer__t10324t(char** __t10399t, uint64_t* __t10400t, uint32_t* __t10401t, uint32_t* __t10402t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10399t=unsafe_ptr;
  *__t10400t=unsafe_size;
  *__t10401t=unsafe_offset;
  *__t10402t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t10403t) {
  char* allocated=*__t10403t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t10403t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t10404t) {
  int value=0;
  *__t10404t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t10405t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t10405t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t10406t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t10406t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t10407t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t10407t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t10408t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t10408t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t10409t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t10409t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t10410t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t10410t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t10411t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t10411t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t10412t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t10412t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t10413t) {
  char* allocated=0;
  char __t791t__=0;
  char __t792t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t645t(allocated,&__t791t__);
  not__t42t(__t791t__,&__t792t__);
  if(__t792t__){
  printf("%s","\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/unsafe.s line 31 column 35\n");
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10413t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t10414t, uint64_t* __t10415t, uint32_t* __t10416t, uint32_t* __t10417t, uint64_t size, char** __t10418t, uint64_t* __t10419t, uint32_t* __t10420t, uint32_t* __t10421t) {
  char* buffer__unsafe_ptr=*__t10414t;
  uint64_t buffer__unsafe_size=*__t10415t;
  uint32_t buffer__unsafe_offset=*__t10416t;
  uint32_t buffer__unsafe_align=*__t10417t;
  int __t930t=0;
  int __t931t=0;
  char __t933t__=0;
  uint64_t __t934t=0;
  char __t935t__=0;
  char __t936t=0;
  uint64_t __t937t=0;
  uint64_t __t938t__=0;
  uint64_t __t939t__=0;
  int __t941t=0;
  uint64_t __t942t=0;
  char __t943t__=0;
  uint64_t __t944t__=0;
  uint64_t __t945t__=0;
  uint64_t bytes=0;
  int __t946t=0;
  uint64_t __t947t=0;
  char __t948t__=0;
  char* __t949t__=0;
  int __t950t=0;
  uint64_t __t951t=0;
  int __t_errcode=0;
  int __t_complain=0;
  eq__t134t(buffer__unsafe_size,size,&__t933t__);
  if(__t933t__){
  __t934t=0;
  neq__t158t(size,__t934t,&__t935t__);
  __t936t=__t935t__;
  }
  if(__t936t){
  __t937t=0;
  nat__t686t(buffer__unsafe_align,&__t938t__);
  mul__t212t(__t938t__,size,&__t939t__);
  zero__t807t(buffer__unsafe_ptr,__t937t,__t939t__);
  goto __t_return;
  }
  __t942t=0;
  neq__t158t(buffer__unsafe_size,__t942t,&__t943t__);
  if(__t943t__){
  printf("%s","\033[31mfail\033[0m cannot resize buffers with alloc; it promises no data reallocation\n\033[31mat\033[0m std/core/array.s line 43 column 18\n");
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t944t__);
  mul__t212t(__t944t__,size,&__t945t__);
  bytes=__t945t__;
  __t947t=0;
  eq__t134t(bytes,__t947t,&__t948t__);
  if(__t948t__){
  printf("%s","\033[31mfail\033[0m cannot allocate a buffer of unsized type\n\033[31mat\033[0m std/core/array.s line 47 column 18\n");
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t790t(bytes,&__t949t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/array.s line 49 column 29\n   unhandled error from alloc(nat) -> (mut any ptr)\n");
  goto __t_failure;
  }
  __t951t=0;
  zero__t807t(__t949t__,__t951t,bytes);
  buffer__unsafe_ptr=__t949t__;
  buffer__unsafe_ptr=buffer__unsafe_ptr;
  buffer__unsafe_size=buffer__unsafe_size;
  buffer__unsafe_offset=buffer__unsafe_offset;
  buffer__unsafe_align=buffer__unsafe_align;
  goto __t_return;
  
  __t_failure:free__t806t(&buffer__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10414t=buffer__unsafe_ptr;
  *__t10415t=buffer__unsafe_size;
  *__t10416t=buffer__unsafe_offset;
  *__t10417t=buffer__unsafe_align;
  *__t10418t=buffer__unsafe_ptr;
  *__t10419t=buffer__unsafe_size;
  *__t10420t=buffer__unsafe_offset;
  *__t10421t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void len__t1160t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t* __t10422t) {
  goto __t_return;
  __t_return:
  *__t10422t=buffer__unsafe_size;
}

static inline __attribute__((always_inline)) int div__t270t(uint64_t x, uint64_t y, uint64_t* __t10423t) {
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
  printf("%s","\033[31mfail\033[0m division by zero\n\033[31mat\033[0m std/core/numbers.s line 92 column 18\n");
  __t_errcode=4;
  goto __t_failure;
  }
  z=x/y;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10423t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1203t(char** __t10424t, uint64_t* __t10425t, uint32_t* __t10426t, uint32_t* __t10427t, uint64_t _pos, char** __t10428t, uint64_t* __t10429t, uint32_t* __t10430t, uint32_t* __t10431t, uint64_t* __t10432t) {
  char* buf__unsafe_ptr=*__t10424t;
  uint64_t buf__unsafe_size=*__t10425t;
  uint32_t buf__unsafe_offset=*__t10426t;
  uint32_t buf__unsafe_align=*__t10427t;
  uint64_t __t1204t=0;
  uint64_t pos=0;
  __t1204t=_pos;
  pos=__t1204t;
  goto __t_return;
  __t_return:
  *__t10424t=buf__unsafe_ptr;
  *__t10425t=buf__unsafe_size;
  *__t10426t=buf__unsafe_offset;
  *__t10427t=buf__unsafe_align;
  *__t10428t=buf__unsafe_ptr;
  *__t10429t=buf__unsafe_size;
  *__t10430t=buf__unsafe_offset;
  *__t10431t=buf__unsafe_align;
  *__t10432t=pos;
}

static inline __attribute__((always_inline)) void arena__t1206t(char** __t10433t, uint64_t* __t10434t, uint32_t* __t10435t, uint32_t* __t10436t, char** __t10437t, uint64_t* __t10438t, uint32_t* __t10439t, uint32_t* __t10440t, uint64_t* __t10441t) {
  char* buf__unsafe_ptr=*__t10433t;
  uint64_t buf__unsafe_size=*__t10434t;
  uint32_t buf__unsafe_offset=*__t10435t;
  uint32_t buf__unsafe_align=*__t10436t;
  uint64_t __t1207t=0;
  char* __t1208t__buf__unsafe_ptr=0;
  uint64_t __t1208t__buf__unsafe_size=0;
  uint32_t __t1208t__buf__unsafe_offset=0;
  uint32_t __t1208t__buf__unsafe_align=0;
  uint64_t __t1208t__pos=0;
  __t1207t=0;
  arena__t1203t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1207t,&__t1208t__buf__unsafe_ptr,&__t1208t__buf__unsafe_size,&__t1208t__buf__unsafe_offset,&__t1208t__buf__unsafe_align,&__t1208t__pos);
  goto __t_return;
  __t_return:
  *__t10433t=buf__unsafe_ptr;
  *__t10434t=buf__unsafe_size;
  *__t10435t=buf__unsafe_offset;
  *__t10436t=buf__unsafe_align;
  *__t10437t=__t1208t__buf__unsafe_ptr;
  *__t10438t=__t1208t__buf__unsafe_size;
  *__t10439t=__t1208t__buf__unsafe_offset;
  *__t10440t=__t1208t__buf__unsafe_align;
  *__t10441t=__t1208t__pos;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t10442t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10442t=z;
}

static inline __attribute__((always_inline)) void gt__t325t(uint64_t x, uint64_t y, char* __t10443t) {
  int __t326t__=0;
  char z=0;
  is_different__t109t(x,y,&__t326t__);
  z=x>y;
  goto __t_return;
  __t_return:
  *__t10443t=z;
}

static inline __attribute__((always_inline)) void allocated__t1210t(char** __t10444t, uint64_t* __t10445t, uint32_t* __t10446t, uint32_t* __t10447t, uint64_t pos, char** __t10448t, uint64_t* __t10449t, uint32_t* __t10450t, uint32_t* __t10451t, uint64_t* __t10452t) {
  char* buf__unsafe_ptr=*__t10444t;
  uint64_t buf__unsafe_size=*__t10445t;
  uint32_t buf__unsafe_offset=*__t10446t;
  uint32_t buf__unsafe_align=*__t10447t;
  goto __t_return;
  __t_return:
  *__t10444t=buf__unsafe_ptr;
  *__t10445t=buf__unsafe_size;
  *__t10446t=buf__unsafe_offset;
  *__t10447t=buf__unsafe_align;
  *__t10448t=buf__unsafe_ptr;
  *__t10449t=buf__unsafe_size;
  *__t10450t=buf__unsafe_offset;
  *__t10451t=buf__unsafe_align;
  *__t10452t=pos;
}

static inline __attribute__((always_inline)) int alloc__t1285t(char** __t10453t, uint64_t* __t10454t, uint32_t* __t10455t, uint32_t* __t10456t, uint64_t* __t10457t, uint64_t length, char** __t10458t, uint64_t* __t10459t, uint32_t* __t10460t, uint32_t* __t10461t, uint64_t* __t10462t) {
  char* allocator__buf__unsafe_ptr=*__t10453t;
  uint64_t allocator__buf__unsafe_size=*__t10454t;
  uint32_t allocator__buf__unsafe_offset=*__t10455t;
  uint32_t allocator__buf__unsafe_align=*__t10456t;
  uint64_t allocator__pos=*__t10457t;
  int __t1286t=0;
  uint64_t __t1287t__=0;
  uint64_t next_pos=0;
  uint64_t __t1288t__=0;
  char __t1289t__=0;
  uint64_t __t1290t=0;
  uint64_t __t1291t__=0;
  uint64_t pos=0;
  char* __t1292t__buf__unsafe_ptr=0;
  uint64_t __t1292t__buf__unsafe_size=0;
  uint32_t __t1292t__buf__unsafe_offset=0;
  uint32_t __t1292t__buf__unsafe_align=0;
  uint64_t __t1292t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  add__t188t(allocator__pos,length,&__t1287t__);
  next_pos=__t1287t__;
  len__t1160t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1288t__);
  gt__t325t(next_pos,__t1288t__,&__t1289t__);
  if(__t1289t__){
  printf("%s","\033[31mfail\033[0m arena is out of space\n\033[31mat\033[0m std/core/allocators.s line 155 column 41\n");
  __t_errcode=23;
  goto __t_failure;
  }
  __t1290t=0;
  add__t188t(allocator__pos,__t1290t,&__t1291t__);
  pos=__t1291t__;
  allocator__pos=next_pos;
  allocated__t1210t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1292t__buf__unsafe_ptr,&__t1292t__buf__unsafe_size,&__t1292t__buf__unsafe_offset,&__t1292t__buf__unsafe_align,&__t1292t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10453t=allocator__buf__unsafe_ptr;
  *__t10454t=allocator__buf__unsafe_size;
  *__t10455t=allocator__buf__unsafe_offset;
  *__t10456t=allocator__buf__unsafe_align;
  *__t10457t=allocator__pos;
  *__t10458t=__t1292t__buf__unsafe_ptr;
  *__t10459t=__t1292t__buf__unsafe_size;
  *__t10460t=__t1292t__buf__unsafe_offset;
  *__t10461t=__t1292t__buf__unsafe_align;
  *__t10462t=__t1292t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void mat__t4558t(char* unsafe_ptr, uint64_t pos, uint64_t rows, uint64_t cols, uint64_t stride, char** __t10463t, uint64_t* __t10464t, uint64_t* __t10465t, uint64_t* __t10466t, uint64_t* __t10467t) {
  char* __t4560t__unsafe_ptr=0;
  uint64_t __t4560t__pos=0;
  uint64_t __t4560t__rows=0;
  uint64_t __t4560t__cols=0;
  uint64_t __t4560t__stride=0;
  __t4560t__unsafe_ptr=unsafe_ptr;
  __t4560t__pos=pos;
  __t4560t__rows=rows;
  __t4560t__cols=cols;
  __t4560t__stride=stride;
  goto __t_return;
  __t_return:
  *__t10463t=__t4560t__unsafe_ptr;
  *__t10464t=__t4560t__pos;
  *__t10465t=__t4560t__rows;
  *__t10466t=__t4560t__cols;
  *__t10467t=__t4560t__stride;
}

static inline __attribute__((always_inline)) int mat__t7726t(char** __t10468t, uint64_t* __t10469t, uint32_t* __t10470t, uint32_t* __t10471t, uint64_t* __t10472t, uint64_t rows, uint64_t cols, char** __t10473t, uint64_t* __t10474t, uint64_t* __t10475t, uint64_t* __t10476t, uint64_t* __t10477t) {
  char* FLOATS__buf__unsafe_ptr=*__t10468t;
  uint64_t FLOATS__buf__unsafe_size=*__t10469t;
  uint32_t FLOATS__buf__unsafe_offset=*__t10470t;
  uint32_t FLOATS__buf__unsafe_align=*__t10471t;
  uint64_t FLOATS__pos=*__t10472t;
  uint64_t __t7727t__=0;
  uint64_t __t7728t=0;
  char __t7729t__=0;
  uint64_t __t7730t__=0;
  uint64_t __t7731t=0;
  char __t7732t__=0;
  uint64_t __t7733t__=0;
  uint64_t size=0;
  char* __t7734t__buf__unsafe_ptr=0;
  uint64_t __t7734t__buf__unsafe_size=0;
  uint32_t __t7734t__buf__unsafe_offset=0;
  uint32_t __t7734t__buf__unsafe_align=0;
  uint64_t __t7734t__pos=0;
  char* surface__buf__unsafe_ptr=0;
  uint64_t surface__buf__unsafe_size=0;
  uint32_t surface__buf__unsafe_offset=0;
  uint32_t surface__buf__unsafe_align=0;
  uint64_t surface__pos=0;
  int __t7735t=0;
  char* __t7736t__unsafe_ptr=0;
  uint64_t __t7736t__pos=0;
  uint64_t __t7736t__rows=0;
  uint64_t __t7736t__cols=0;
  uint64_t __t7736t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  nat__t686t(FLOATS__buf__unsafe_align,&__t7727t__);
  __t7728t=8;
  neq__t158t(__t7727t__,__t7728t,&__t7729t__);
  if(__t7729t__){
  printf("%s","\033[31mfail\033[0m can only place matrices on contiguous buffers\n\033[31mat\033[0m std/sci/mat.s line 39 column 47\n");
  __t_errcode=56;
  goto __t_failure;
  }
  nat__t686t(FLOATS__buf__unsafe_offset,&__t7730t__);
  __t7731t=0;
  neq__t158t(__t7730t__,__t7731t,&__t7732t__);
  if(__t7732t__){
  printf("%s","\033[31mfail\033[0m cannot place matrices on buffer offsets\n\033[31mat\033[0m std/sci/mat.s line 40 column 48\n");
  __t_errcode=57;
  goto __t_failure;
  }
  mul__t212t(rows,cols,&__t7733t__);
  size=__t7733t__;
  __t_errcode=alloc__t1285t(&FLOATS__buf__unsafe_ptr,&FLOATS__buf__unsafe_size,&FLOATS__buf__unsafe_offset,&FLOATS__buf__unsafe_align,&FLOATS__pos,size,&__t7734t__buf__unsafe_ptr,&__t7734t__buf__unsafe_size,&__t7734t__buf__unsafe_offset,&__t7734t__buf__unsafe_align,&__t7734t__pos);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/sci/mat.s line 42 column 22\n   unhandled error from alloc(edit arena, nat length) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})\n");
  goto __t_failure;
  }
  surface__buf__unsafe_ptr=__t7734t__buf__unsafe_ptr;
  surface__buf__unsafe_size=__t7734t__buf__unsafe_size;
  surface__buf__unsafe_offset=__t7734t__buf__unsafe_offset;
  surface__buf__unsafe_align=__t7734t__buf__unsafe_align;
  surface__pos=__t7734t__pos;
  mat__t4558t(FLOATS__buf__unsafe_ptr,surface__pos,rows,cols,cols,&__t7736t__unsafe_ptr,&__t7736t__pos,&__t7736t__rows,&__t7736t__cols,&__t7736t__stride);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10468t=FLOATS__buf__unsafe_ptr;
  *__t10469t=FLOATS__buf__unsafe_size;
  *__t10470t=FLOATS__buf__unsafe_offset;
  *__t10471t=FLOATS__buf__unsafe_align;
  *__t10472t=FLOATS__pos;
  *__t10473t=__t7736t__unsafe_ptr;
  *__t10474t=__t7736t__pos;
  *__t10475t=__t7736t__rows;
  *__t10476t=__t7736t__cols;
  *__t10477t=__t7736t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int mat__t7791t(char** __t10478t, uint64_t* __t10479t, uint32_t* __t10480t, uint32_t* __t10481t, uint64_t rows, char** __t10482t, uint64_t* __t10483t, uint64_t* __t10484t, uint64_t* __t10485t, uint64_t* __t10486t) {
  char* buf__unsafe_ptr=*__t10478t;
  uint64_t buf__unsafe_size=*__t10479t;
  uint32_t buf__unsafe_offset=*__t10480t;
  uint32_t buf__unsafe_align=*__t10481t;
  uint64_t __t7792t__=0;
  uint64_t __t7793t__=0;
  uint64_t cols=0;
  uint64_t __t7794t__=0;
  uint64_t __t7795t__=0;
  char __t7796t__=0;
  char* __t7797t__buf__unsafe_ptr=0;
  uint64_t __t7797t__buf__unsafe_size=0;
  uint32_t __t7797t__buf__unsafe_offset=0;
  uint32_t __t7797t__buf__unsafe_align=0;
  uint64_t __t7797t__pos=0;
  char* __t7799t__unsafe_ptr=0;
  uint64_t __t7799t__pos=0;
  uint64_t __t7799t__rows=0;
  uint64_t __t7799t__cols=0;
  uint64_t __t7799t__stride=0;
  int __t_errcode=0;
  int __t_complain=0;
  len__t1160t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7792t__);
  __t_errcode=div__t270t(__t7792t__,rows,&__t7793t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/sci/mat.s line 55 column 20\n   unhandled error from div(nat x, nat y) -> (nat)\n");
  goto __t_failure;
  }
  cols=__t7793t__;
  mul__t212t(cols,rows,&__t7794t__);
  len__t1160t(buf__unsafe_ptr,buf__unsafe_size,buf__unsafe_offset,buf__unsafe_align,&__t7795t__);
  neq__t158t(__t7794t__,__t7795t__,&__t7796t__);
  if(__t7796t__){
  printf("%s","\033[31mfail\033[0m buffer size not divisible by vector rows\n\033[31mat\033[0m std/sci/mat.s line 56 column 33\n");
  __t_errcode=58;
  goto __t_failure;
  }
  arena__t1206t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,&__t7797t__buf__unsafe_ptr,&__t7797t__buf__unsafe_size,&__t7797t__buf__unsafe_offset,&__t7797t__buf__unsafe_align,&__t7797t__pos);
  __t_errcode=mat__t7726t(&__t7797t__buf__unsafe_ptr,&__t7797t__buf__unsafe_size,&__t7797t__buf__unsafe_offset,&__t7797t__buf__unsafe_align,&__t7797t__pos,rows,cols,&__t7799t__unsafe_ptr,&__t7799t__pos,&__t7799t__rows,&__t7799t__cols,&__t7799t__stride);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/sci/mat.s line 57 column 12\n   unhandled error from mat(edit arena, nat rows, nat cols, \"dirty\") -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride}) with effects FLOATS\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10478t=buf__unsafe_ptr;
  *__t10479t=buf__unsafe_size;
  *__t10480t=buf__unsafe_offset;
  *__t10481t=buf__unsafe_align;
  *__t10482t=__t7799t__unsafe_ptr;
  *__t10483t=__t7799t__pos;
  *__t10484t=__t7799t__rows;
  *__t10485t=__t7799t__cols;
  *__t10486t=__t7799t__stride;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void cpu__t4412t(uint64_t cores, uint64_t* __t10487t) {
  goto __t_return;
  __t_return:
  *__t10487t=cores;
}

static inline __attribute__((always_inline)) void unsafe_system_thread____t_buffer____buffer__t4415t(char** __t10488t, uint64_t* __t10489t, uint32_t* __t10490t, uint32_t* __t10491t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10488t=unsafe_ptr;
  *__t10489t=unsafe_size;
  *__t10490t=unsafe_offset;
  *__t10491t=unsafe_align;
}

static inline __attribute__((always_inline)) void of__t741t(uint64_t to, uint64_t* __t10492t, uint64_t* __t10493t) {
  uint64_t __t742t=0;
  uint64_t from=0;
  __t742t=0;
  from=__t742t;
  goto __t_return;
  __t_return:
  *__t10492t=from;
  *__t10493t=to;
}

static inline __attribute__((always_inline)) void range__t758t(uint64_t _from, uint64_t to, uint64_t* __t10494t, uint64_t* __t10495t) {
  uint64_t __t759t=0;
  uint64_t __t760t__=0;
  uint64_t __t761t=0;
  uint64_t from=0;
  __t759t=0;
  add__t188t(__t759t,_from,&__t760t__);
  __t761t=__t760t__;
  from=__t761t;
  goto __t_return;
  __t_return:
  *__t10494t=from;
  *__t10495t=to;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t10496t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t10496t=z;
}

static inline __attribute__((always_inline)) int mutget__t763t(uint64_t* __t10497t, uint64_t r__to, uint64_t skipped, uint64_t* __t10498t) {
  uint64_t r__from=*__t10497t;
  char __t764t__=0;
  uint64_t ret=0;
  uint64_t __t765t=0;
  uint64_t __t766t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(r__from,r__to,&__t764t__);
  if(__t764t__){
  __t_errcode=16;
  goto __t_failure;
  }
  ret=r__from;
  __t765t=1;
  add__t188t(ret,__t765t,&__t766t__);
  r__from=__t766t__;
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10497t=r__from;
  *__t10498t=ret;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t10499t) {
  *__t10499t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t10500t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t10500t=__t809t__;
}

static inline __attribute__((always_inline)) int mutget__t1137t(char** __t10501t, uint64_t* __t10502t, uint32_t* __t10503t, uint32_t* __t10504t, uint64_t i, char** __t10505t) {
  char* buffer__unsafe_ptr=*__t10501t;
  uint64_t buffer__unsafe_size=*__t10502t;
  uint32_t buffer__unsafe_offset=*__t10503t;
  uint32_t buffer__unsafe_align=*__t10504t;
  int __t1138t=0;
  char __t1139t__=0;
  uint64_t __t1140t__=0;
  uint64_t __t1141t__=0;
  uint64_t __t1142t__=0;
  uint64_t __t1143t__=0;
  char* __t1144t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1139t__);
  if(__t1139t__){
  printf("%s","\033[31mfail\033[0m out of bounds\n\033[31mat\033[0m std/core/array.s line 90 column 40\n");
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t1140t__);
  mul__t212t(i,__t1140t__,&__t1141t__);
  nat__t686t(buffer__unsafe_offset,&__t1142t__);
  add__t188t(__t1141t__,__t1142t__,&__t1143t__);
  add__t808t(buffer__unsafe_ptr,__t1143t__,&__t1144t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10501t=buffer__unsafe_ptr;
  *__t10502t=buffer__unsafe_size;
  *__t10503t=buffer__unsafe_offset;
  *__t10504t=buffer__unsafe_align;
  *__t10505t=__t1144t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void join__t4410t(char* thread__unsafe_ptr) {
  char __t4411t__=0;
  exists__t645t(thread__unsafe_ptr,&__t4411t__);
  if(__t4411t__){
  thread_join(thread__unsafe_ptr);
  }
}

static inline __attribute__((always_inline)) int growing_thread_pool__t4414t(uint64_t cpu__cores, uint64_t* __t10506t, char** __t10507t, uint64_t* __t10508t, uint32_t* __t10509t, uint32_t* __t10510t, uint64_t* __t10511t, char* __t10512t) {
  char* __t4417t__unsafe_ptr=0;
  uint64_t __t4417t__unsafe_size=0;
  uint32_t __t4417t__unsafe_offset=0;
  uint32_t __t4417t__unsafe_align=0;
  char* __t4418t__unsafe_ptr=0;
  uint64_t __t4418t__unsafe_size=0;
  uint32_t __t4418t__unsafe_offset=0;
  uint32_t __t4418t__unsafe_align=0;
  char* __t4420t__buf__unsafe_ptr=0;
  uint64_t __t4420t__buf__unsafe_size=0;
  uint32_t __t4420t__buf__unsafe_offset=0;
  uint32_t __t4420t__buf__unsafe_align=0;
  uint64_t __t4420t__pos=0;
  char* __t4421t__buf__unsafe_ptr=0;
  uint64_t __t4421t__buf__unsafe_size=0;
  uint32_t __t4421t__buf__unsafe_offset=0;
  uint32_t __t4421t__buf__unsafe_align=0;
  uint64_t __t4421t__pos=0;
  char* threads__buf__unsafe_ptr=0;
  uint64_t threads__buf__unsafe_size=0;
  uint32_t threads__buf__unsafe_offset=0;
  uint32_t threads__buf__unsafe_align=0;
  uint64_t threads__pos=0;
  char __t4422t=0;
  char __t4423t=0;
  char joined=0;
  char __t4424t__=0;
  uint64_t __t4425t=0;
  uint64_t __t4426t__=0;
  uint64_t __t4427t__from=0;
  uint64_t __t4427t__to=0;
  uint64_t __t4428t__from=0;
  uint64_t __t4428t__to=0;
  char __t4429t=0;
  uint64_t __t4430t__=0;
  uint64_t i=0;
  char __t4431t=0;
  char* __t4433t__=0;
  char* __t4434t__unsafe_ptr=0;
  char __t4436t=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_system_thread____t_buffer____buffer__t4415t(&__t4417t__unsafe_ptr,&__t4417t__unsafe_size,&__t4417t__unsafe_offset,&__t4417t__unsafe_align);
  __t_errcode=alloc__t929t(&__t4417t__unsafe_ptr,&__t4417t__unsafe_size,&__t4417t__unsafe_offset,&__t4417t__unsafe_align,cpu__cores,&__t4418t__unsafe_ptr,&__t4418t__unsafe_size,&__t4418t__unsafe_offset,&__t4418t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 74 column 48\n   unhandled error from alloc(edit any[], nat size) -> (edit any[])\n");
  goto __t_failure;
  }
  arena__t1206t(&__t4418t__unsafe_ptr,&__t4418t__unsafe_size,&__t4418t__unsafe_offset,&__t4418t__unsafe_align,&__t4420t__buf__unsafe_ptr,&__t4420t__buf__unsafe_size,&__t4420t__buf__unsafe_offset,&__t4420t__buf__unsafe_align,&__t4420t__pos);
  __t4421t__buf__unsafe_ptr=__t4420t__buf__unsafe_ptr;
  __t4421t__buf__unsafe_size=__t4420t__buf__unsafe_size;
  __t4421t__buf__unsafe_offset=__t4420t__buf__unsafe_offset;
  __t4421t__buf__unsafe_align=__t4420t__buf__unsafe_align;
  __t4421t__pos=__t4420t__pos;
  threads__buf__unsafe_ptr=__t4421t__buf__unsafe_ptr;
  threads__buf__unsafe_size=__t4421t__buf__unsafe_size;
  threads__buf__unsafe_offset=__t4421t__buf__unsafe_offset;
  threads__buf__unsafe_align=__t4421t__buf__unsafe_align;
  threads__pos=__t4421t__pos;
  __t4422t=0;
  __t4423t=__t4422t;
  joined=__t4423t;
  goto __t_return;
  
  __t_failure:not__t42t(joined,&__t4424t__);
  if(__t4424t__){
  len__t1160t(threads__buf__unsafe_ptr,threads__buf__unsafe_size,threads__buf__unsafe_offset,threads__buf__unsafe_align,&threads__buf__unsafe_size);
  of__t741t(threads__buf__unsafe_size,&__t4427t__from,&threads__buf__unsafe_size);
  range__t758t(__t4427t__from,threads__buf__unsafe_size,&__t4428t__from,&threads__buf__unsafe_size);
  __t4425t=0-1;
  while(1){
  __t4425t=__t4425t+1;
  __t_complain=mutget__t763t(&__t4428t__from,threads__buf__unsafe_size,__t4425t,&__t4430t__);
  __t4429t=__t_complain;
  if(__t_complain){
  goto __t4429t__label;
  }
  i=__t4430t__;
  __t4429t__label:__t4429t=__t4429t==0;
  if(!__t4429t){
  break;
  }
  __t_complain=mutget__t1137t(&threads__buf__unsafe_ptr,&threads__buf__unsafe_size,&threads__buf__unsafe_offset,&threads__buf__unsafe_align,i,&__t4433t__);
  __t4431t=__t_complain;
  if(__t_complain){
  goto __t4431t__label;
  }
  if(!__t4433t__){
  __t_complain=2;
  goto __t4431t__label;
  }
  else{
  memcpy(&__t4434t__unsafe_ptr,__t4433t__,8);
  }
  join__t4410t(__t4434t__unsafe_ptr);
  __t4431t__label:__t4431t=__t4431t==0;
  }
  }
  joined=1;
  joined=joined;
  free__t806t(&threads__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10506t=cpu__cores;
  *__t10507t=threads__buf__unsafe_ptr;
  *__t10508t=threads__buf__unsafe_size;
  *__t10509t=threads__buf__unsafe_offset;
  *__t10510t=threads__buf__unsafe_align;
  *__t10511t=threads__pos;
  *__t10512t=joined;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pipe____t_buffer____buffer__t10345t(char** __t10513t, uint64_t* __t10514t, uint32_t* __t10515t, uint32_t* __t10516t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10513t=unsafe_ptr;
  *__t10514t=unsafe_size;
  *__t10515t=unsafe_offset;
  *__t10516t=unsafe_align;
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1086t(char** __t10517t, uint64_t* __t10518t, uint32_t* __t10519t, uint32_t* __t10520t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t10517t=unsafe_ptr;
  *__t10518t=unsafe_size;
  *__t10519t=unsafe_offset;
  *__t10520t=unsafe_align;
}

int alloc__t1084t(uint64_t size, char** __t10521t, uint64_t* __t10522t, uint32_t* __t10523t, uint32_t* __t10524t) {
  char __t1085t=0;
  char* __t1088t__unsafe_ptr=0;
  uint64_t __t1088t__unsafe_size=0;
  uint32_t __t1088t__unsafe_offset=0;
  uint32_t __t1088t__unsafe_align=0;
  char* __t1089t__unsafe_ptr=0;
  uint64_t __t1089t__unsafe_size=0;
  uint32_t __t1089t__unsafe_offset=0;
  uint32_t __t1089t__unsafe_align=0;
  char* __t1091t__unsafe_ptr=0;
  uint64_t __t1091t__unsafe_size=0;
  uint32_t __t1091t__unsafe_offset=0;
  uint32_t __t1091t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint32_t ret__unsafe_offset=0;
  uint32_t ret__unsafe_align=0;
  char __t1092t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1086t(&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align);
  __t_complain=alloc__t929t(&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align,size,&__t1089t__unsafe_ptr,&__t1089t__unsafe_size,&__t1089t__unsafe_offset,&__t1089t__unsafe_align);
  __t1085t=__t_complain;
  if(__t_complain){
  goto __t1085t__label;
  }
  __t1091t__unsafe_ptr=__t1089t__unsafe_ptr;
  __t1091t__unsafe_size=__t1089t__unsafe_size;
  __t1091t__unsafe_offset=__t1089t__unsafe_offset;
  __t1091t__unsafe_align=__t1089t__unsafe_align;
  ret__unsafe_ptr=__t1091t__unsafe_ptr;
  ret__unsafe_size=__t1091t__unsafe_size;
  ret__unsafe_offset=__t1091t__unsafe_offset;
  ret__unsafe_align=__t1091t__unsafe_align;
  __t1085t__label:__t1085t=__t1085t==0;
  not__t42t(__t1085t,&__t1092t__);
  if(__t1092t__){
  printf("%s","\033[31mfail\033[0m allocation failed\n\033[31mat\033[0m std/core/array.s line 57 column 52\n");
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&ret__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10521t=ret__unsafe_ptr;
  *__t10522t=ret__unsafe_size;
  *__t10523t=ret__unsafe_offset;
  *__t10524t=ret__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int arena__t4373t(uint64_t size, char** __t10525t, uint64_t* __t10526t, uint32_t* __t10527t, uint32_t* __t10528t, uint64_t* __t10529t) {
  char* __t4374t__unsafe_ptr=0;
  uint64_t __t4374t__unsafe_size=0;
  uint32_t __t4374t__unsafe_offset=0;
  uint32_t __t4374t__unsafe_align=0;
  char* __t4376t__buf__unsafe_ptr=0;
  uint64_t __t4376t__buf__unsafe_size=0;
  uint32_t __t4376t__buf__unsafe_offset=0;
  uint32_t __t4376t__buf__unsafe_align=0;
  uint64_t __t4376t__pos=0;
  char* __t4377t__buf__unsafe_ptr=0;
  uint64_t __t4377t__buf__unsafe_size=0;
  uint32_t __t4377t__buf__unsafe_offset=0;
  uint32_t __t4377t__buf__unsafe_align=0;
  uint64_t __t4377t__pos=0;
  char* unsafe_arena__buf__unsafe_ptr=0;
  uint64_t unsafe_arena__buf__unsafe_size=0;
  uint32_t unsafe_arena__buf__unsafe_offset=0;
  uint32_t unsafe_arena__buf__unsafe_align=0;
  uint64_t unsafe_arena__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1084t(size,&__t4374t__unsafe_ptr,&__t4374t__unsafe_size,&__t4374t__unsafe_offset,&__t4374t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 22 column 30\n   unhandled error from alloc(nat) -> (mut char[])\n");
  goto __t_failure;
  }
  arena__t1206t(&__t4374t__unsafe_ptr,&__t4374t__unsafe_size,&__t4374t__unsafe_offset,&__t4374t__unsafe_align,&__t4376t__buf__unsafe_ptr,&__t4376t__buf__unsafe_size,&__t4376t__buf__unsafe_offset,&__t4376t__buf__unsafe_align,&__t4376t__pos);
  __t4377t__buf__unsafe_ptr=__t4376t__buf__unsafe_ptr;
  __t4377t__buf__unsafe_size=__t4376t__buf__unsafe_size;
  __t4377t__buf__unsafe_offset=__t4376t__buf__unsafe_offset;
  __t4377t__buf__unsafe_align=__t4376t__buf__unsafe_align;
  __t4377t__pos=__t4376t__pos;
  unsafe_arena__buf__unsafe_ptr=__t4377t__buf__unsafe_ptr;
  unsafe_arena__buf__unsafe_size=__t4377t__buf__unsafe_size;
  unsafe_arena__buf__unsafe_offset=__t4377t__buf__unsafe_offset;
  unsafe_arena__buf__unsafe_align=__t4377t__buf__unsafe_align;
  unsafe_arena__pos=__t4377t__pos;
  goto __t_return;
  
  __t_failure:free__t806t(&unsafe_arena__buf__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t10525t=unsafe_arena__buf__unsafe_ptr;
  *__t10526t=unsafe_arena__buf__unsafe_size;
  *__t10527t=unsafe_arena__buf__unsafe_offset;
  *__t10528t=unsafe_arena__buf__unsafe_align;
  *__t10529t=unsafe_arena__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void vec__t4555t(char* unsafe_ptr, uint64_t pos, uint64_t length, char** __t10530t, uint64_t* __t10531t, uint64_t* __t10532t) {
  char* __t4557t__unsafe_ptr=0;
  uint64_t __t4557t__pos=0;
  uint64_t __t4557t__length=0;
  __t4557t__unsafe_ptr=unsafe_ptr;
  __t4557t__pos=pos;
  __t4557t__length=length;
  goto __t_return;
  __t_return:
  *__t10530t=__t4557t__unsafe_ptr;
  *__t10531t=__t4557t__pos;
  *__t10532t=__t4557t__length;
}

static inline __attribute__((always_inline)) int row__t7854t(char* m__unsafe_ptr, uint64_t m__pos, uint64_t m__rows, uint64_t m__cols, uint64_t m__stride, uint64_t i, char** __t10533t, uint64_t* __t10534t, uint64_t* __t10535t) {
  char __t7855t__=0;
  uint64_t __t7856t__=0;
  uint64_t __t7857t__=0;
  char* __t7858t__unsafe_ptr=0;
  uint64_t __t7858t__pos=0;
  uint64_t __t7858t__length=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,m__rows,&__t7855t__);
  if(__t7855t__){
  printf("%s","\033[31mfail\033[0m row out of bounds\n\033[31mat\033[0m std/sci/mat.s line 96 column 24\n");
  __t_errcode=59;
  goto __t_failure;
  }
  mul__t212t(i,m__stride,&__t7856t__);
  add__t188t(m__pos,__t7856t__,&__t7857t__);
  vec__t4555t(m__unsafe_ptr,__t7857t__,m__cols,&__t7858t__unsafe_ptr,&__t7858t__pos,&__t7858t__length);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10533t=__t7858t__unsafe_ptr;
  *__t10534t=__t7858t__pos;
  *__t10535t=__t7858t__length;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void sum_data__t10283t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, char** __t10536t, uint64_t* __t10537t, uint64_t* __t10538t, double* __t10539t) {
  double __t10284t=0;
  double __t10285t=0;
  double result=0;
  __t10284t=0.0;
  __t10285t=__t10284t;
  result=__t10285t;
  goto __t_return;
  __t_return:
  *__t10536t=v__unsafe_ptr;
  *__t10537t=v__pos;
  *__t10538t=v__length;
  *__t10539t=result;
}

static inline __attribute__((always_inline)) void mutex_size__t4387t(uint64_t* __t10540t) {
  uint64_t mutex_size=0;
  mutex_size=sizeof(mutex_t);
  goto __t_return;
  __t_return:
  *__t10540t=mutex_size;
}

static inline __attribute__((always_inline)) int alloc__t1293t(char** __t10541t, uint64_t* __t10542t, uint32_t* __t10543t, uint32_t* __t10544t, uint64_t* __t10545t, char** __t10546t, uint64_t* __t10547t, uint32_t* __t10548t, uint32_t* __t10549t, uint64_t* __t10550t) {
  char* allocator__buf__unsafe_ptr=*__t10541t;
  uint64_t allocator__buf__unsafe_size=*__t10542t;
  uint32_t allocator__buf__unsafe_offset=*__t10543t;
  uint32_t allocator__buf__unsafe_align=*__t10544t;
  uint64_t allocator__pos=*__t10545t;
  int __t1294t=0;
  uint64_t __t1295t=0;
  uint64_t length=0;
  uint64_t __t1296t__=0;
  uint64_t next_pos=0;
  uint64_t __t1297t__=0;
  char __t1298t__=0;
  uint64_t __t1299t=0;
  uint64_t __t1300t__=0;
  uint64_t pos=0;
  char* __t1301t__buf__unsafe_ptr=0;
  uint64_t __t1301t__buf__unsafe_size=0;
  uint32_t __t1301t__buf__unsafe_offset=0;
  uint32_t __t1301t__buf__unsafe_align=0;
  uint64_t __t1301t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1295t=1;
  length=__t1295t;
  add__t188t(allocator__pos,length,&__t1296t__);
  next_pos=__t1296t__;
  len__t1160t(allocator__buf__unsafe_ptr,allocator__buf__unsafe_size,allocator__buf__unsafe_offset,allocator__buf__unsafe_align,&__t1297t__);
  gt__t325t(next_pos,__t1297t__,&__t1298t__);
  if(__t1298t__){
  printf("%s","\033[31mfail\033[0m arena is out of space\n\033[31mat\033[0m std/core/allocators.s line 155 column 41\n");
  __t_errcode=23;
  goto __t_failure;
  }
  __t1299t=0;
  add__t188t(allocator__pos,__t1299t,&__t1300t__);
  pos=__t1300t__;
  allocator__pos=next_pos;
  allocated__t1210t(&allocator__buf__unsafe_ptr,&allocator__buf__unsafe_size,&allocator__buf__unsafe_offset,&allocator__buf__unsafe_align,pos,&__t1301t__buf__unsafe_ptr,&__t1301t__buf__unsafe_size,&__t1301t__buf__unsafe_offset,&__t1301t__buf__unsafe_align,&__t1301t__pos);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10541t=allocator__buf__unsafe_ptr;
  *__t10542t=allocator__buf__unsafe_size;
  *__t10543t=allocator__buf__unsafe_offset;
  *__t10544t=allocator__buf__unsafe_align;
  *__t10545t=allocator__pos;
  *__t10546t=__t1301t__buf__unsafe_ptr;
  *__t10547t=__t1301t__buf__unsafe_size;
  *__t10548t=__t1301t__buf__unsafe_offset;
  *__t10549t=__t1301t__buf__unsafe_align;
  *__t10550t=__t1301t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t4380t(char** __t10551t, uint64_t* __t10552t, uint32_t* __t10553t, uint32_t* __t10554t, uint64_t* __t10555t, uint64_t bytes, char** __t10556t, uint64_t* __t10557t, uint32_t* __t10558t, uint32_t* __t10559t, uint64_t* __t10560t) {
  char* arn__unsafe_arena__buf__unsafe_ptr=*__t10551t;
  uint64_t arn__unsafe_arena__buf__unsafe_size=*__t10552t;
  uint32_t arn__unsafe_arena__buf__unsafe_offset=*__t10553t;
  uint32_t arn__unsafe_arena__buf__unsafe_align=*__t10554t;
  uint64_t arn__unsafe_arena__pos=*__t10555t;
  char* __t4381t__buf__unsafe_ptr=0;
  uint64_t __t4381t__buf__unsafe_size=0;
  uint32_t __t4381t__buf__unsafe_offset=0;
  uint32_t __t4381t__buf__unsafe_align=0;
  uint64_t __t4381t__pos=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t1293t(&arn__unsafe_arena__buf__unsafe_ptr,&arn__unsafe_arena__buf__unsafe_size,&arn__unsafe_arena__buf__unsafe_offset,&arn__unsafe_arena__buf__unsafe_align,&arn__unsafe_arena__pos,&__t4381t__buf__unsafe_ptr,&__t4381t__buf__unsafe_size,&__t4381t__buf__unsafe_offset,&__t4381t__buf__unsafe_align,&__t4381t__pos);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 26 column 12\n   unhandled error from alloc(edit arena {tag, edit any[], mut nat pos}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10551t=arn__unsafe_arena__buf__unsafe_ptr;
  *__t10552t=arn__unsafe_arena__buf__unsafe_size;
  *__t10553t=arn__unsafe_arena__buf__unsafe_offset;
  *__t10554t=arn__unsafe_arena__buf__unsafe_align;
  *__t10555t=arn__unsafe_arena__pos;
  *__t10556t=__t4381t__buf__unsafe_ptr;
  *__t10557t=__t4381t__buf__unsafe_size;
  *__t10558t=__t4381t__buf__unsafe_offset;
  *__t10559t=__t4381t__buf__unsafe_align;
  *__t10560t=__t4381t__pos;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int pipe_data_alloc__t4468t(char** __t10561t, uint64_t* __t10562t, uint32_t* __t10563t, uint32_t* __t10564t, uint64_t* __t10565t, uint64_t size, char** __t10566t) {
  char* arena__unsafe_arena__buf__unsafe_ptr=*__t10561t;
  uint64_t arena__unsafe_arena__buf__unsafe_size=*__t10562t;
  uint32_t arena__unsafe_arena__buf__unsafe_offset=*__t10563t;
  uint32_t arena__unsafe_arena__buf__unsafe_align=*__t10564t;
  uint64_t arena__unsafe_arena__pos=*__t10565t;
  char* __t4469t__buf__unsafe_ptr=0;
  uint64_t __t4469t__buf__unsafe_size=0;
  uint32_t __t4469t__buf__unsafe_offset=0;
  uint32_t __t4469t__buf__unsafe_align=0;
  uint64_t __t4469t__pos=0;
  char* __t4470t__buf__unsafe_ptr=0;
  uint64_t __t4470t__buf__unsafe_size=0;
  uint32_t __t4470t__buf__unsafe_offset=0;
  uint32_t __t4470t__buf__unsafe_align=0;
  uint64_t __t4470t__pos=0;
  char* allocated__buf__unsafe_ptr=0;
  uint64_t allocated__buf__unsafe_size=0;
  uint32_t allocated__buf__unsafe_offset=0;
  uint32_t allocated__buf__unsafe_align=0;
  uint64_t allocated__pos=0;
  char* __t4472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=alloc__t4380t(&arena__unsafe_arena__buf__unsafe_ptr,&arena__unsafe_arena__buf__unsafe_size,&arena__unsafe_arena__buf__unsafe_offset,&arena__unsafe_arena__buf__unsafe_align,&arena__unsafe_arena__pos,size,&__t4469t__buf__unsafe_ptr,&__t4469t__buf__unsafe_size,&__t4469t__buf__unsafe_offset,&__t4469t__buf__unsafe_align,&__t4469t__pos);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 110 column 27\n   unhandled error from alloc(edit arena, nat bytes) -> (edit allocated {tag, edit char[], nat pos})\n");
  goto __t_failure;
  }
  __t4470t__buf__unsafe_ptr=__t4469t__buf__unsafe_ptr;
  __t4470t__buf__unsafe_size=__t4469t__buf__unsafe_size;
  __t4470t__buf__unsafe_offset=__t4469t__buf__unsafe_offset;
  __t4470t__buf__unsafe_align=__t4469t__buf__unsafe_align;
  __t4470t__pos=__t4469t__pos;
  allocated__buf__unsafe_ptr=__t4470t__buf__unsafe_ptr;
  allocated__buf__unsafe_size=__t4470t__buf__unsafe_size;
  allocated__buf__unsafe_offset=__t4470t__buf__unsafe_offset;
  allocated__buf__unsafe_align=__t4470t__buf__unsafe_align;
  allocated__pos=__t4470t__pos;
  __t_errcode=mutget__t1137t(&allocated__buf__unsafe_ptr,&allocated__buf__unsafe_size,&allocated__buf__unsafe_offset,&allocated__buf__unsafe_align,allocated__pos,&__t4472t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 111 column 25\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10561t=arena__unsafe_arena__buf__unsafe_ptr;
  *__t10562t=arena__unsafe_arena__buf__unsafe_size;
  *__t10563t=arena__unsafe_arena__buf__unsafe_offset;
  *__t10564t=arena__unsafe_arena__buf__unsafe_align;
  *__t10565t=arena__unsafe_arena__pos;
  *__t10566t=__t4472t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void pipe_data__t4382t(const char* value, const char** __t10567t) {
  goto __t_return;
  __t_return:
  *__t10567t=value;
}

static inline __attribute__((always_inline)) void pipe_data____t_buffer____buffer__t10378t(char** __t10568t, uint64_t* __t10569t, uint32_t* __t10570t, uint32_t* __t10571t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=8;
  *__t10568t=unsafe_ptr;
  *__t10569t=unsafe_size;
  *__t10570t=unsafe_offset;
  *__t10571t=unsafe_align;
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_mutex_init__t4462t(char** __t10572t, char** __t10573t) {
  char* obj=*__t10572t;
  uint64_t __t4463t=0;
  char* __t4464t__=0;
  char* mutex_ptr_construct=0;
  uint64_t __t4465t=0;
  char* __t4466t__=0;
  char* mutex_ptr=0;
  __t4463t=8;
  add__t808t(obj,__t4463t,&__t4464t__);
  mutex_ptr_construct=__t4464t__;
  mutex_init((mutex_t*)mutex_ptr_construct);
  goto __t_return;
  __t_return:
  *__t10572t=obj;
  *__t10573t=obj;
}

static inline __attribute__((always_inline)) void pipe__t4385t(char* data, char** __t10574t) {
  goto __t_return;
  __t_return:
  *__t10574t=data;
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_lock__t4389t(char* obj) {
  uint64_t __t4390t=0;
  char* __t4391t__=0;
  char* mutex_ptr=0;
  __t4390t=8;
  add__t808t(obj,__t4390t,&__t4391t__);
  mutex_ptr=__t4391t__;
  mutex_lock((mutex_t*)mutex_ptr);
}

static inline __attribute__((always_inline)) void unsafe_pipe_data_unlock__t4393t(char* obj) {
  uint64_t __t4394t=0;
  char* __t4395t__=0;
  char* mutex_ptr=0;
  __t4394t=8;
  add__t808t(obj,__t4394t,&__t4395t__);
  mutex_ptr=__t4395t__;
  mutex_unlock((mutex_t*)mutex_ptr);
}

static inline __attribute__((always_inline)) void with__t4396t(char* obj__data, char** __t10575t) {
  unsafe_pipe_data_lock__t4389t(obj__data);
  goto __t_return;
  __t_return:
  *__t10575t=obj__data;
}

static inline __attribute__((always_inline)) void sum_data____t_buffer____buffer__t10299t(char** __t10576t, uint64_t* __t10577t, uint32_t* __t10578t, uint32_t* __t10579t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=32;
  *__t10576t=unsafe_ptr;
  *__t10577t=unsafe_size;
  *__t10578t=unsafe_offset;
  *__t10579t=unsafe_align;
}

static inline __attribute__((always_inline)) void eq__t1816t(const char* x, const char* y, char* __t10580t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t10580t=z;
}

static inline __attribute__((always_inline)) void neq__t1845t(const char* x, const char* y, char* __t10581t) {
  char __t1846t__=0;
  char __t1847t__=0;
  eq__t1816t(x,y,&__t1846t__);
  not__t42t(__t1846t__,&__t1847t__);
  goto __t_return;
  __t_return:
  *__t10581t=__t1847t__;
}

static inline __attribute__((always_inline)) int unsafe_pipe_data_match__t4448t(char* obj__obj__data, const char* name, char* type, char** __t10582t) {
  char* __t4450t__value=0;
  const char* __t4451t__value=0;
  const char* found=0;
  char __t4452t__=0;
  uint64_t __t4453t=0;
  uint64_t __t4454t__=0;
  uint64_t __t4455t__=0;
  char* __t4456t__=0;
  char* __t4457t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  if(!obj__obj__data){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/pipe.s line 92 column 41\n");
  __t_errcode=2;
  goto __t_failure;
  }
  __t4450t__value=obj__obj__data+0;
  if(!__t4450t__value){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/pipe.s line 92 column 13\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4451t__value,__t4450t__value,8);
  found=__t4451t__value;
  neq__t1845t(found,name,&__t4452t__);
  if(__t4452t__){
  printf("%s","\033[31mfail\033[0m does not match\n\033[31mat\033[0m std/pipe.s line 93 column 26\n");
  __t_errcode=44;
  goto __t_failure;
  }
  __t4453t=8;
  mutex_size__t4387t(&__t4454t__);
  add__t188t(__t4453t,__t4454t__,&__t4455t__);
  add__t808t(obj__obj__data,__t4455t__,&__t4456t__);
  unsafe_attach_type__t28t(__t4456t__,type,&__t4457t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10582t=__t4457t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_singletons__t18t() {
}

static inline __attribute__((always_inline)) void unsafe_console__t422t() {
  console__t419t();
  unsafe_singletons__t18t();
  goto __t_return;
  __t_return:
;}

static inline __attribute__((always_inline)) void nn__t430t(const char* value, const char** __t10583t, const char** __t10584t) {
  const char* __t432t=0;
  __t432t=__t431t;
  goto __t_return;
  __t_return:
  *__t10583t=value;
  *__t10584t=__t432t;
}

static inline __attribute__((always_inline)) void print__t439t(const char* value, const char* endl) {
  int __t440t=0;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void get__t4793t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, uint64_t i, char** __t10585t) {
  int __t4794t=0;
  uint64_t __t4795t=0;
  uint64_t __t4796t__=0;
  uint64_t __t4797t__=0;
  char* __t4798t__=0;
  __t4795t=8;
  add__t188t(i,v__pos,&__t4796t__);
  mul__t212t(__t4795t,__t4796t__,&__t4797t__);
  add__t808t(v__unsafe_ptr,__t4797t__,&__t4798t__);
  goto __t_return;
  __t_return:
  *__t10585t=__t4798t__;
}

static inline __attribute__((always_inline)) void nn__t433t(double value, double* __t10586t, const char** __t10587t) {
  const char* __t434t=0;
  __t434t=__t431t;
  goto __t_return;
  __t_return:
  *__t10586t=value;
  *__t10587t=__t434t;
}

static inline __attribute__((always_inline)) void print__t444t(double value, const char* endl) {
  int __t445t=0;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void lt__t301t(uint64_t x, uint64_t y, char* __t10588t) {
  int __t302t__=0;
  char z=0;
  is_different__t109t(x,y,&__t302t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t10588t=z;
}

static inline __attribute__((always_inline)) int print__t7556t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length) {
  int __t7557t=0;
  const char* endl=0;
  const char* __t7558t__value=0;
  const char* __t7558t____t432t=0;
  uint64_t __t7560t=0;
  uint64_t __t7561t__from=0;
  uint64_t __t7561t__to=0;
  uint64_t __t7562t__from=0;
  uint64_t __t7562t__to=0;
  char __t7563t=0;
  uint64_t __t7564t__=0;
  uint64_t i=0;
  char* __t7567t__=0;
  double __t7568t__value=0;
  double __t7569t__value=0;
  const char* __t7569t____t434t=0;
  uint64_t __t7571t=0;
  uint64_t __t7572t__=0;
  char __t7573t__=0;
  const char* __t7574t__value=0;
  const char* __t7574t____t432t=0;
  int __t_errcode=0;
  int __t_complain=0;
  endl=__t443t;
  nn__t430t(__t7534t,&__t7558t__value,&__t7558t____t432t);
  print__t439t(__t7558t__value,__t7558t____t432t);
  of__t741t(v__length,&__t7561t__from,&__t7561t__to);
  range__t758t(__t7561t__from,__t7561t__to,&__t7562t__from,&__t7562t__to);
  __t7560t=0-1;
  while(1){
  __t7560t=__t7560t+1;
  __t_complain=mutget__t763t(&__t7562t__from,__t7562t__to,__t7560t,&__t7564t__);
  __t7563t=__t_complain;
  if(__t_complain){
  goto __t7563t__label;
  }
  i=__t7564t__;
  __t7563t__label:__t7563t=__t7563t==0;
  if(!__t7563t){
  break;
  }
  get__t4793t(v__unsafe_ptr,v__pos,v__length,i,&__t7567t__);
  if(!__t7567t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/sci/vec.s line 291 column 19\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t7568t__value,__t7567t__,8);
  nn__t433t(__t7568t__value,&__t7569t__value,&__t7569t____t434t);
  print__t444t(__t7569t__value,__t7569t____t434t);
  __t7571t=1;
  add__t188t(i,__t7571t,&__t7572t__);
  lt__t301t(__t7572t__,v__length,&__t7573t__);
  if(__t7573t__){
  nn__t430t(__t7551t,&__t7574t__value,&__t7574t____t432t);
  print__t439t(__t7574t__value,__t7574t____t432t);
  }
  }
  print__t439t(__t7554t,endl);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void iter__t4806t(char* vec__unsafe_ptr, uint64_t vec__pos, uint64_t vec__length, char** __t10589t, uint64_t* __t10590t, uint64_t* __t10591t) {
  goto __t_return;
  __t_return:
  *__t10589t=vec__unsafe_ptr;
  *__t10590t=vec__pos;
  *__t10591t=vec__length;
}

static inline __attribute__((always_inline)) int get__t4808t(char* v__vec__unsafe_ptr, uint64_t v__vec__pos, uint64_t v__vec__length, uint64_t i, double* __t10592t) {
  char __t4809t__=0;
  char* __t4812t__=0;
  double __t4813t__value=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,v__vec__length,&__t4809t__);
  if(__t4809t__){
  __t_errcode=22;
  goto __t_failure;
  }
  get__t4793t(v__vec__unsafe_ptr,v__vec__pos,v__vec__length,i,&__t4812t__);
  if(!__t4812t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/sci/vec.s line 102 column 17\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t4813t__value,__t4812t__,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10592t=__t4813t__value;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void is_different__t85t(double x, double y, int* __t10593t) {
  int __t86t=0;
  int __t87t__=0;
  not__t51t(__t86t,&__t87t__);
  goto __t_return;
  __t_return:
  *__t10593t=__t87t__;
}

static inline __attribute__((always_inline)) void add__t166t(double x, double y, double* __t10594t) {
  int __t167t__=0;
  double z=0;
  is_different__t85t(x,y,&__t167t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t10594t=z;
}

static inline __attribute__((always_inline)) void reduce__t5493t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10595t) {
  char __t5494t=0;
  char __t5495t=0;
  double __t5497t=0;
  double __t5498t=0;
  double ret=0;
  int __t5499t=0;
  int __t5500t=0;
  int __t5501t=0;
  int __t5502t__=0;
  uint64_t __t5503t=0;
  char* __t5504t__vec__unsafe_ptr=0;
  uint64_t __t5504t__vec__pos=0;
  uint64_t __t5504t__vec__length=0;
  char __t5505t=0;
  double __t5506t__=0;
  double _value=0;
  double __t5507t=0;
  double value=0;
  int __t5508t=0;
  int __t5509t=0;
  int __t5510t=0;
  int __t5511t=0;
  int __t5512t=0;
  char __t5513t=0;
  char __t5514t=0;
  double __t5515t__=0;
  int __t5516t=0;
  int __t5517t=0;
  int __t_complain=0;
  __t5495t=1;
  if(__t5496t!=__t5496t){
  __t5495t=0;
  }
  if(__t5495t){
  __t5494t=1;
  }
  if(__t5494t){
  __t5497t=0.0;
  __t5498t=__t5497t;
  ret=__t5498t;
  }
  not__t51t(__t5501t,&__t5502t__);
  iter__t4806t(v__unsafe_ptr,v__pos,v__length,&__t5504t__vec__unsafe_ptr,&__t5504t__vec__pos,&__t5504t__vec__length);
  __t5503t=0-1;
  while(1){
  __t5503t=__t5503t+1;
  __t_complain=get__t4808t(__t5504t__vec__unsafe_ptr,__t5504t__vec__pos,__t5504t__vec__length,__t5503t,&__t5506t__);
  __t5505t=__t_complain;
  if(__t_complain){
  goto __t5505t__label;
  }
  _value=__t5506t__;
  __t5505t__label:__t5505t=__t5505t==0;
  if(!__t5505t){
  break;
  }
  __t5507t=_value;
  value=__t5507t;
  __t5514t=1;
  if(__t5496t!=__t5496t){
  __t5514t=0;
  }
  if(__t5514t){
  __t5513t=1;
  }
  if(__t5513t){
  add__t166t(ret,value,&__t5515t__);
  ret=__t5515t__;
  }
  }
  goto __t_return;
  __t_return:
  *__t10595t=ret;
}

static inline __attribute__((always_inline)) void sum__t7478t(char* v__unsafe_ptr, uint64_t v__pos, uint64_t v__length, double* __t10596t) {
  double __t7480t__=0;
  reduce__t5493t(v__unsafe_ptr,v__pos,v__length,&__t7480t__);
  goto __t_return;
  __t_return:
  *__t10596t=__t7480t__;
}

static inline __attribute__((always_inline)) void print__t446t(double value) {
  int __t447t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) int parallel_sum__t10287t(char* obj__data) {
  char* __t10288t__obj__data=0;
  char* __t10301t__unsafe_ptr=0;
  uint64_t __t10301t__unsafe_size=0;
  uint32_t __t10301t__unsafe_offset=0;
  uint32_t __t10301t__unsafe_align=0;
  char* __t10302t__=0;
  char* __t10303t=0;
  char* p=0;
  char* __t10305t=0;
  char* __t10306t__unsafe_ptr=0;
  uint64_t __t10306t__pos=0;
  uint64_t __t10306t__length=0;
  char* v__unsafe_ptr=0;
  uint64_t v__pos=0;
  uint64_t v__length=0;
  char* __t10310t__result=0;
  char* __t10312t=0;
  char* __t10313t__unsafe_ptr=0;
  uint64_t __t10313t__pos=0;
  uint64_t __t10313t__length=0;
  double __t10314t__=0;
  char* __t10317t__result=0;
  double __t10318t__result=0;
  int __t_errcode=0;
  int __t_complain=0;
  with__t4396t(obj__data,&__t10288t__obj__data);
  sum_data____t_buffer____buffer__t10299t(&__t10301t__unsafe_ptr,&__t10301t__unsafe_size,&__t10301t__unsafe_offset,&__t10301t__unsafe_align);
  __t_errcode=unsafe_pipe_data_match__t4448t(__t10288t__obj__data,__t10298t,__t10301t__unsafe_ptr,&__t10302t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m macro line 1 column 1\n   unhandled error from unsafe_pipe_data_match(with, cstr name, any ptr type) -> (mut any ptr {follows any ptr type})\n");
  goto __t_failure;
  }
  __t10303t=__t10302t__;
  p=__t10303t;
  if(!p){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 13 column 26\n");
  __t_errcode=2;
  goto __t_failure;
  }
  __t10305t=p+0;
  if(!__t10305t){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 13 column 9\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10306t__unsafe_ptr,__t10305t,8);
  memcpy(&__t10306t__pos,__t10305t+8,8);
  memcpy(&__t10306t__length,__t10305t+16,8);
  v__unsafe_ptr=__t10306t__unsafe_ptr;
  v__pos=__t10306t__pos;
  v__length=__t10306t__length;
  unsafe_console__t422t();
  __t_errcode=print__t7556t(v__unsafe_ptr,v__pos,v__length);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 14 column 22\n   unhandled error from print(console CLI, vec) -> () with effects CLI\n");
  goto __t_failure;
  }
  if(!p){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 15 column 6\n");
  __t_errcode=2;
  goto __t_failure;
  }
  __t10310t__result=p+24;
  if(!p){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 15 column 37\n");
  __t_errcode=2;
  goto __t_failure;
  }
  __t10312t=p+0;
  if(!__t10312t){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 15 column 20\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10313t__unsafe_ptr,__t10312t,8);
  memcpy(&__t10313t__pos,__t10312t+8,8);
  memcpy(&__t10313t__length,__t10312t+16,8);
  sum__t7478t(__t10313t__unsafe_ptr,__t10313t__pos,__t10313t__length,&__t10314t__);
  if(!__t10310t__result){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 15 column 14\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10310t__result,&__t10314t__,8);
  unsafe_console__t422t();
  if(!p){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 16 column 45\n");
  __t_errcode=2;
  goto __t_failure;
  }
  __t10317t__result=p+24;
  if(!__t10317t__result){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 16 column 28\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10318t__result,__t10317t__result,8);
  print__t446t(__t10318t__result);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:unsafe_pipe_data_unlock__t4393t(__t10288t__obj__data);
  
  return __t_errcode;
}

int parallel_sum__t10385t(char* obj__data) {
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=parallel_sum__t10287t(obj__data);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 32 column 21\n   unhandled error from parallel_sum(pipe {tag, pipe_data ptr data}) -> ()\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void unsafe_system_thread__t4401t(char* unsafe_ptr, char** __t10597t) {
  goto __t_return;
  __t_return:
  *__t10597t=unsafe_ptr;
}

static inline __attribute__((always_inline)) void unsafe_spawn__t4408t(__smoll_func_ptr_type func, char* input__data, char** __t10598t) {
  char* _unsafe_ptr=0;
  char* unsafe_ptr=0;
  char* __t4409t__unsafe_ptr=0;
  _unsafe_ptr=thread_create((thread_func_t)func,(void*)input__data);
  unsafe_ptr=_unsafe_ptr;
  unsafe_system_thread__t4401t(unsafe_ptr,&__t4409t__unsafe_ptr);
  goto __t_return;
  __t_return:
  *__t10598t=__t4409t__unsafe_ptr;
}

static inline __attribute__((always_inline)) int at__t1569t(char** __t10599t, uint64_t* __t10600t, uint32_t* __t10601t, uint32_t* __t10602t, uint64_t surface__pos, char** __t10603t) {
  char* surface__buf__unsafe_ptr=*__t10599t;
  uint64_t surface__buf__unsafe_size=*__t10600t;
  uint32_t surface__buf__unsafe_offset=*__t10601t;
  uint32_t surface__buf__unsafe_align=*__t10602t;
  char* __t1571t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=mutget__t1137t(&surface__buf__unsafe_ptr,&surface__buf__unsafe_size,&surface__buf__unsafe_offset,&surface__buf__unsafe_align,surface__pos,&__t1571t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/core/allocators.s line 233 column 23\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10599t=surface__buf__unsafe_ptr;
  *__t10600t=surface__buf__unsafe_size;
  *__t10601t=surface__buf__unsafe_offset;
  *__t10602t=surface__buf__unsafe_align;
  *__t10603t=__t1571t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int thread__t4442t(uint64_t THREADS__cpu__cores, char** __t10604t, uint64_t* __t10605t, uint32_t* __t10606t, uint32_t* __t10607t, uint64_t* __t10608t, char* __t10609t, __smoll_func_ptr_type func, char* input__data, char** __t10610t) {
  char* THREADS__threads__buf__unsafe_ptr=*__t10604t;
  uint64_t THREADS__threads__buf__unsafe_size=*__t10605t;
  uint32_t THREADS__threads__buf__unsafe_offset=*__t10606t;
  uint32_t THREADS__threads__buf__unsafe_align=*__t10607t;
  uint64_t THREADS__threads__pos=*__t10608t;
  char THREADS__joined=*__t10609t;
  char* __t4443t__unsafe_ptr=0;
  char* __t4444t__unsafe_ptr=0;
  char* spawned__unsafe_ptr=0;
  char* __t4445t__buf__unsafe_ptr=0;
  uint64_t __t4445t__buf__unsafe_size=0;
  uint32_t __t4445t__buf__unsafe_offset=0;
  uint32_t __t4445t__buf__unsafe_align=0;
  uint64_t __t4445t__pos=0;
  char* __t4446t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  unsafe_spawn__t4408t(func,input__data,&__t4443t__unsafe_ptr);
  __t4444t__unsafe_ptr=__t4443t__unsafe_ptr;
  spawned__unsafe_ptr=__t4444t__unsafe_ptr;
  __t_errcode=alloc__t1293t(&THREADS__threads__buf__unsafe_ptr,&THREADS__threads__buf__unsafe_size,&THREADS__threads__buf__unsafe_offset,&THREADS__threads__buf__unsafe_align,&THREADS__threads__pos,&__t4445t__buf__unsafe_ptr,&__t4445t__buf__unsafe_size,&__t4445t__buf__unsafe_offset,&__t4445t__buf__unsafe_align,&__t4445t__pos);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 85 column 9\n   unhandled error from alloc(edit arena {tag, edit any[], mut nat pos}) -> (edit allocated {tag, edit any[] {follows any ptr allocator.buf.unsafe_ptr}, nat pos})\n");
  goto __t_failure;
  }
  __t_errcode=at__t1569t(&__t4445t__buf__unsafe_ptr,&__t4445t__buf__unsafe_size,&__t4445t__buf__unsafe_offset,&__t4445t__buf__unsafe_align,__t4445t__pos,&__t4446t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m std/pipe.s line 85 column 6\n   unhandled error from at(edit allocated {tag, edit any[], nat pos}) -> (mut any ptr {follows any ptr surface.buf.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t4446t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m std/pipe.s line 85 column 32\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t4446t__,&spawned__unsafe_ptr,8);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t10604t=THREADS__threads__buf__unsafe_ptr;
  *__t10605t=THREADS__threads__buf__unsafe_size;
  *__t10606t=THREADS__threads__buf__unsafe_offset;
  *__t10607t=THREADS__threads__buf__unsafe_align;
  *__t10608t=THREADS__threads__pos;
  *__t10609t=THREADS__joined;
  *__t10610t=spawned__unsafe_ptr;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int main__t10320t() {
  double __t10323t=0;
  double __t10326t=0;
  double __t10327t=0;
  double __t10328t=0;
  double __t10329t=0;
  double __t10330t=0;
  double __t10331t=0;
  double __t10332t=0;
  double __t10333t=0;
  char* __t10334t__unsafe_ptr=0;
  uint64_t __t10334t__unsafe_size=0;
  uint32_t __t10334t__unsafe_offset=0;
  uint32_t __t10334t__unsafe_align=0;
  uint64_t __t10335t=0;
  char* __t10336t__unsafe_ptr=0;
  uint64_t __t10336t__unsafe_size=0;
  uint32_t __t10336t__unsafe_offset=0;
  uint32_t __t10336t__unsafe_align=0;
  uint64_t __t10338t=0;
  char* __t10339t__unsafe_ptr=0;
  uint64_t __t10339t__pos=0;
  uint64_t __t10339t__rows=0;
  uint64_t __t10339t__cols=0;
  uint64_t __t10339t__stride=0;
  char* mat__unsafe_ptr=0;
  uint64_t mat__pos=0;
  uint64_t mat__rows=0;
  uint64_t mat__cols=0;
  uint64_t mat__stride=0;
  uint64_t __t10340t=0;
  uint64_t __t10341t__cores=0;
  uint64_t __t10342t__cpu__cores=0;
  char* __t10342t__threads__buf__unsafe_ptr=0;
  uint64_t __t10342t__threads__buf__unsafe_size=0;
  uint32_t __t10342t__threads__buf__unsafe_offset=0;
  uint32_t __t10342t__threads__buf__unsafe_align=0;
  uint64_t __t10342t__threads__pos=0;
  char __t10342t__joined=0;
  char __t10343t____t4424t__=0;
  uint64_t __t10343t____t4427t__from=0;
  uint64_t __t10343t____t4428t__from=0;
  uint64_t __t10343t____t4425t=0;
  uint64_t __t10343t____t4430t__=0;
  char __t10343t____t4429t=0;
  uint64_t __t10343t__i=0;
  char* __t10343t____t4433t__=0;
  char __t10343t____t4431t=0;
  char* __t10343t____t4434t__unsafe_ptr=0;
  uint64_t __t10344t__cpu__cores=0;
  char* __t10344t__threads__buf__unsafe_ptr=0;
  uint64_t __t10344t__threads__buf__unsafe_size=0;
  uint32_t __t10344t__threads__buf__unsafe_offset=0;
  uint32_t __t10344t__threads__buf__unsafe_align=0;
  uint64_t __t10344t__threads__pos=0;
  char __t10344t__joined=0;
  uint64_t THREADS__cpu__cores=0;
  char* THREADS__threads__buf__unsafe_ptr=0;
  uint64_t THREADS__threads__buf__unsafe_size=0;
  uint32_t THREADS__threads__buf__unsafe_offset=0;
  uint32_t THREADS__threads__buf__unsafe_align=0;
  uint64_t THREADS__threads__pos=0;
  char THREADS__joined=0;
  char* __t10347t__unsafe_ptr=0;
  uint64_t __t10347t__unsafe_size=0;
  uint32_t __t10347t__unsafe_offset=0;
  uint32_t __t10347t__unsafe_align=0;
  char* __t10348t__unsafe_ptr=0;
  uint64_t __t10348t__unsafe_size=0;
  uint32_t __t10348t__unsafe_offset=0;
  uint32_t __t10348t__unsafe_align=0;
  char* __t10350t__unsafe_ptr=0;
  uint64_t __t10350t__unsafe_size=0;
  uint32_t __t10350t__unsafe_offset=0;
  uint32_t __t10350t__unsafe_align=0;
  char* pending__unsafe_ptr=0;
  uint64_t pending__unsafe_size=0;
  uint32_t pending__unsafe_offset=0;
  uint32_t pending__unsafe_align=0;
  uint64_t __t10351t=0;
  char* __t10353t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10353t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10353t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10353t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10353t__unsafe_arena__pos=0;
  char* __t10355t__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t __t10355t__unsafe_arena__buf__unsafe_size=0;
  uint32_t __t10355t__unsafe_arena__buf__unsafe_offset=0;
  uint32_t __t10355t__unsafe_arena__buf__unsafe_align=0;
  uint64_t __t10355t__unsafe_arena__pos=0;
  char* surface__unsafe_arena__buf__unsafe_ptr=0;
  uint64_t surface__unsafe_arena__buf__unsafe_size=0;
  uint32_t surface__unsafe_arena__buf__unsafe_offset=0;
  uint32_t surface__unsafe_arena__buf__unsafe_align=0;
  uint64_t surface__unsafe_arena__pos=0;
  uint64_t __t10356t=0;
  uint64_t __t10357t__from=0;
  uint64_t __t10357t__to=0;
  uint64_t __t10358t__from=0;
  uint64_t __t10358t__to=0;
  char __t10359t=0;
  uint64_t __t10360t__=0;
  uint64_t i=0;
  char* __t10362t__=0;
  char* __t10364t__unsafe_ptr=0;
  uint64_t __t10364t__pos=0;
  uint64_t __t10364t__length=0;
  char* __t10365t__v__unsafe_ptr=0;
  uint64_t __t10365t__v__pos=0;
  uint64_t __t10365t__v__length=0;
  double __t10365t__result=0;
  uint64_t __t10367t=0;
  uint64_t __t10368t__=0;
  uint64_t __t10369t__=0;
  uint64_t __t10372t=0;
  uint64_t __t10373t__=0;
  char* __t10374t__=0;
  const char* __t10377t__value=0;
  char* __t10380t__unsafe_ptr=0;
  uint64_t __t10380t__unsafe_size=0;
  uint32_t __t10380t__unsafe_offset=0;
  uint32_t __t10380t__unsafe_align=0;
  char* __t10381t__=0;
  char* __t10382t__=0;
  uint64_t __t10383t____t4465t=0;
  char* __t10383t____t4466t__=0;
  char* __t10383t__mutex_ptr=0;
  char* __t10384t__data=0;
  __smoll_func_ptr_type __t10393t=0;
  char* __t10395t__=0;
  char* __t10396t__data=0;
  char* __t10397t__unsafe_ptr=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t10323t=1.0;
  __t10326t=2.0;
  __t10327t=3.0;
  __t10328t=3.0;
  __t10329t=4.0;
  __t10330t=5.0;
  __t10331t=6.0;
  __t10332t=7.0;
  __t10333t=8.0;
  float____buffer__t10324t(&__t10334t__unsafe_ptr,&__t10334t__unsafe_size,&__t10334t__unsafe_offset,&__t10334t__unsafe_align);
  __t10335t=9;
  __t_errcode=alloc__t929t(&__t10334t__unsafe_ptr,&__t10334t__unsafe_size,&__t10334t__unsafe_offset,&__t10334t__unsafe_align,__t10335t,&__t10336t__unsafe_ptr,&__t10336t__unsafe_size,&__t10336t__unsafe_offset,&__t10336t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 20 column 15\n   unhandled error from alloc(edit any[], nat size) -> (edit any[])\n");
  goto __t_failure;
  }
  memcpy(__t10334t__unsafe_ptr,&__t10323t,8);
  memcpy(__t10334t__unsafe_ptr+8,&__t10326t,8);
  memcpy(__t10334t__unsafe_ptr+16,&__t10327t,8);
  memcpy(__t10334t__unsafe_ptr+24,&__t10328t,8);
  memcpy(__t10334t__unsafe_ptr+32,&__t10329t,8);
  memcpy(__t10334t__unsafe_ptr+40,&__t10330t,8);
  memcpy(__t10334t__unsafe_ptr+48,&__t10331t,8);
  memcpy(__t10334t__unsafe_ptr+56,&__t10332t,8);
  memcpy(__t10334t__unsafe_ptr+64,&__t10333t,8);
  __t10338t=3;
  __t_errcode=mat__t7791t(&__t10334t__unsafe_ptr,&__t10334t__unsafe_size,&__t10334t__unsafe_offset,&__t10334t__unsafe_align,__t10338t,&__t10339t__unsafe_ptr,&__t10339t__pos,&__t10339t__rows,&__t10339t__cols,&__t10339t__stride);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 20 column 11\n   unhandled error from mat(edit float[], nat rows) -> (mut mat {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat rows, mut nat cols, mut nat stride})\n");
  goto __t_failure;
  }
  mat__unsafe_ptr=__t10339t__unsafe_ptr;
  mat__pos=__t10339t__pos;
  mat__rows=__t10339t__rows;
  mat__cols=__t10339t__cols;
  mat__stride=__t10339t__stride;
  __t10340t=16;
  cpu__t4412t(__t10340t,&__t10341t__cores);
  __t_errcode=growing_thread_pool__t4414t(__t10341t__cores,&__t10342t__cpu__cores,&__t10342t__threads__buf__unsafe_ptr,&__t10342t__threads__buf__unsafe_size,&__t10342t__threads__buf__unsafe_offset,&__t10342t__threads__buf__unsafe_align,&__t10342t__threads__pos,&__t10342t__joined);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 25 column 20\n   unhandled error from growing_thread_pool(cpu {tag, nat cores}) -> (edit growing_thread_pool {tag, cpu, mut arena, mut bool joined})\n");
  goto __t_failure;
  }
  __t10344t__cpu__cores=__t10342t__cpu__cores;
  __t10344t__threads__buf__unsafe_ptr=__t10342t__threads__buf__unsafe_ptr;
  __t10344t__threads__buf__unsafe_size=__t10342t__threads__buf__unsafe_size;
  __t10344t__threads__buf__unsafe_offset=__t10342t__threads__buf__unsafe_offset;
  __t10344t__threads__buf__unsafe_align=__t10342t__threads__buf__unsafe_align;
  __t10344t__threads__pos=__t10342t__threads__pos;
  __t10344t__joined=__t10342t__joined;
  THREADS__cpu__cores=__t10344t__cpu__cores;
  THREADS__threads__buf__unsafe_ptr=__t10344t__threads__buf__unsafe_ptr;
  THREADS__threads__buf__unsafe_size=__t10344t__threads__buf__unsafe_size;
  THREADS__threads__buf__unsafe_offset=__t10344t__threads__buf__unsafe_offset;
  THREADS__threads__buf__unsafe_align=__t10344t__threads__buf__unsafe_align;
  THREADS__threads__pos=__t10344t__threads__pos;
  THREADS__joined=__t10344t__joined;
  pipe____t_buffer____buffer__t10345t(&__t10347t__unsafe_ptr,&__t10347t__unsafe_size,&__t10347t__unsafe_offset,&__t10347t__unsafe_align);
  __t_errcode=alloc__t929t(&__t10347t__unsafe_ptr,&__t10347t__unsafe_size,&__t10347t__unsafe_offset,&__t10347t__unsafe_align,mat__rows,&__t10348t__unsafe_ptr,&__t10348t__unsafe_size,&__t10348t__unsafe_offset,&__t10348t__unsafe_align);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 26 column 27\n   unhandled error from alloc(edit any[], nat size) -> (edit any[])\n");
  goto __t_failure;
  }
  __t10350t__unsafe_ptr=__t10348t__unsafe_ptr;
  __t10350t__unsafe_size=__t10348t__unsafe_size;
  __t10350t__unsafe_offset=__t10348t__unsafe_offset;
  __t10350t__unsafe_align=__t10348t__unsafe_align;
  pending__unsafe_ptr=__t10350t__unsafe_ptr;
  pending__unsafe_size=__t10350t__unsafe_size;
  pending__unsafe_offset=__t10350t__unsafe_offset;
  pending__unsafe_align=__t10350t__unsafe_align;
  __t10351t=1024;
  __t_errcode=arena__t4373t(__t10351t,&__t10353t__unsafe_arena__buf__unsafe_ptr,&__t10353t__unsafe_arena__buf__unsafe_size,&__t10353t__unsafe_arena__buf__unsafe_offset,&__t10353t__unsafe_arena__buf__unsafe_align,&__t10353t__unsafe_arena__pos);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 27 column 20\n   unhandled error from arena(nat size, \"incorruptible\") -> (edit arena {tag, mut arena})\n");
  goto __t_failure;
  }
  __t10355t__unsafe_arena__buf__unsafe_ptr=__t10353t__unsafe_arena__buf__unsafe_ptr;
  __t10355t__unsafe_arena__buf__unsafe_size=__t10353t__unsafe_arena__buf__unsafe_size;
  __t10355t__unsafe_arena__buf__unsafe_offset=__t10353t__unsafe_arena__buf__unsafe_offset;
  __t10355t__unsafe_arena__buf__unsafe_align=__t10353t__unsafe_arena__buf__unsafe_align;
  __t10355t__unsafe_arena__pos=__t10353t__unsafe_arena__pos;
  surface__unsafe_arena__buf__unsafe_ptr=__t10355t__unsafe_arena__buf__unsafe_ptr;
  surface__unsafe_arena__buf__unsafe_size=__t10355t__unsafe_arena__buf__unsafe_size;
  surface__unsafe_arena__buf__unsafe_offset=__t10355t__unsafe_arena__buf__unsafe_offset;
  surface__unsafe_arena__buf__unsafe_align=__t10355t__unsafe_arena__buf__unsafe_align;
  surface__unsafe_arena__pos=__t10355t__unsafe_arena__pos;
  of__t741t(mat__rows,&__t10357t__from,&__t10357t__to);
  range__t758t(__t10357t__from,__t10357t__to,&__t10358t__from,&__t10358t__to);
  __t10356t=0-1;
  while(1){
  __t10356t=__t10356t+1;
  __t_complain=mutget__t763t(&__t10358t__from,__t10358t__to,__t10356t,&__t10360t__);
  __t10359t=__t_complain;
  if(__t_complain){
  goto __t10359t__label;
  }
  i=__t10360t__;
  __t10359t__label:__t10359t=__t10359t==0;
  if(!__t10359t){
  break;
  }
  __t_errcode=mutget__t1137t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10362t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 31 column 16\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  __t_errcode=row__t7854t(mat__unsafe_ptr,mat__pos,mat__rows,mat__cols,mat__stride,i,&__t10364t__unsafe_ptr,&__t10364t__pos,&__t10364t__length);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 31 column 57\n   unhandled error from row(mat, nat i) -> (mut vec {tag, mut float ptr unsafe_ptr, mut nat pos, mut nat length})\n");
  goto __t_failure;
  }
  sum_data__t10283t(__t10364t__unsafe_ptr,__t10364t__pos,__t10364t__length,&__t10365t__v__unsafe_ptr,&__t10365t__v__pos,&__t10365t__v__length,&__t10365t__result);
  __t10367t=8;
  mutex_size__t4387t(&__t10368t__);
  add__t188t(__t10367t,__t10368t__,&__t10369t__);
  __t10372t=32;
  add__t188t(__t10369t__,__t10372t,&__t10373t__);
  __t_errcode=pipe_data_alloc__t4468t(&surface__unsafe_arena__buf__unsafe_ptr,&surface__unsafe_arena__buf__unsafe_size,&surface__unsafe_arena__buf__unsafe_offset,&surface__unsafe_arena__buf__unsafe_align,&surface__unsafe_arena__pos,__t10373t__,&__t10374t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m macro line 1 column 53\n   unhandled error from pipe_data_alloc(edit arena, nat size) -> (mut char ptr)\n");
  goto __t_failure;
  }
  pipe_data__t4382t(__t10298t,&__t10377t__value);
  if(!__t10374t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m macro line 1 column 139\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10374t__,&__t10377t__value,8);
  memcpy(__t10374t__+8,&__t10365t__v__unsafe_ptr,8);
  memcpy(__t10374t__+16,&__t10365t__v__pos,8);
  memcpy(__t10374t__+24,&__t10365t__v__length,8);
  memcpy(__t10374t__+32,&__t10365t__result,8);
  pipe_data____t_buffer____buffer__t10378t(&__t10380t__unsafe_ptr,&__t10380t__unsafe_size,&__t10380t__unsafe_offset,&__t10380t__unsafe_align);
  unsafe_attach_type__t28t(__t10374t__,__t10380t__unsafe_ptr,&__t10381t__);
  unsafe_pipe_data_mutex_init__t4462t(&__t10381t__,&__t10382t__);
  pipe__t4385t(__t10382t__,&__t10384t__data);
  if(!__t10362t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 31 column 20\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(__t10362t__,&__t10384t__data,8);
  __t10393t=(__smoll_func_ptr_type)parallel_sum__t10385t;
  __t_errcode=mutget__t1137t(&pending__unsafe_ptr,&pending__unsafe_size,&pending__unsafe_offset,&pending__unsafe_align,i,&__t10395t__);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 32 column 47\n   unhandled error from mutget(edit any[], nat i) -> (mut any ptr {follows any ptr buffer.unsafe_ptr})\n");
  goto __t_failure;
  }
  if(!__t10395t__){
  printf("%s","\033[31mmemory error\033[0m null pointer\n\033[31mat\033[0m tests/test.s line 32 column 47\n");
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t10396t__data,__t10395t__,8);
  __t_errcode=thread__t4442t(THREADS__cpu__cores,&THREADS__threads__buf__unsafe_ptr,&THREADS__threads__buf__unsafe_size,&THREADS__threads__buf__unsafe_offset,&THREADS__threads__buf__unsafe_align,&THREADS__threads__pos,&THREADS__joined,__t10393t,__t10396t__data,&__t10397t__unsafe_ptr);
  if(__t_errcode){
  printf("%s","\033[31mat\033[0m tests/test.s line 32 column 14\n   unhandled error from thread(edit growing_thread_pool, (pipe {tag, pipe_data ptr}) -> () func, pipe) -> (mut unsafe_system_thread {tag, mut any ptr unsafe_ptr {follows any ptr ..unsafe_ptr}}) with effects THREADS\n");
  goto __t_failure;
  }
  join__t4410t(__t10397t__unsafe_ptr);
  free__t806t(&__t10353t__unsafe_arena__buf__unsafe_ptr);
  __t10383t____t4465t=8;
  add__t808t(__t10382t__,__t10383t____t4465t,&__t10383t____t4466t__);
  __t10383t__mutex_ptr=__t10383t____t4466t__;
  mutex_destroy((mutex_t*)__t10383t__mutex_ptr);
  }
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t806t(&__t10348t__unsafe_ptr);
  not__t42t(__t10342t__joined,&__t10343t____t4424t__);
  if(__t10343t____t4424t__){
  len__t1160t(__t10342t__threads__buf__unsafe_ptr,__t10342t__threads__buf__unsafe_size,__t10342t__threads__buf__unsafe_offset,__t10342t__threads__buf__unsafe_align,&__t10342t__threads__buf__unsafe_size);
  of__t741t(__t10342t__threads__buf__unsafe_size,&__t10343t____t4427t__from,&__t10342t__threads__buf__unsafe_size);
  range__t758t(__t10343t____t4427t__from,__t10342t__threads__buf__unsafe_size,&__t10343t____t4428t__from,&__t10342t__threads__buf__unsafe_size);
  __t10343t____t4425t=0-1;
  while(1){
  __t10343t____t4425t=__t10343t____t4425t+1;
  __t_complain=mutget__t763t(&__t10343t____t4428t__from,__t10342t__threads__buf__unsafe_size,__t10343t____t4425t,&__t10343t____t4430t__);
  __t10343t____t4429t=__t_complain;
  if(__t_complain){
  goto __t4429t__label;
  }
  __t10343t__i=__t10343t____t4430t__;
  __t4429t__label:__t10343t____t4429t=__t10343t____t4429t==0;
  if(!__t10343t____t4429t){
  break;
  }
  __t_complain=mutget__t1137t(&__t10342t__threads__buf__unsafe_ptr,&__t10342t__threads__buf__unsafe_size,&__t10342t__threads__buf__unsafe_offset,&__t10342t__threads__buf__unsafe_align,__t10343t__i,&__t10343t____t4433t__);
  __t10343t____t4431t=__t_complain;
  if(__t_complain){
  goto __t4431t__label;
  }
  if(!__t10343t____t4433t__){
  __t_complain=2;
  goto __t4431t__label;
  }
  else{
  memcpy(&__t10343t____t4434t__unsafe_ptr,__t10343t____t4433t__,8);
  }
  join__t4410t(__t10343t____t4434t__unsafe_ptr);
  __t4431t__label:__t10343t____t4431t=__t10343t____t4431t==0;
  }
  }
  __t10342t__joined=1;
  __t10342t__joined=__t10342t__joined;
  free__t806t(&__t10342t__threads__buf__unsafe_ptr);
  free__t806t(&__t10336t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t10320t();
                }