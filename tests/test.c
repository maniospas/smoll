#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t443t="\n";
static const char* __t_all_errcodes[62] = {"noerr",
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
"interrupted by user",
"failed to start process",
"process terminated with unhandled non-zero exit code",
"end of file",
"unsanitized command: shell metacharacter detected",
"system call failed",
"failed to open file",
"failed to create file",
"cannot open a new terminal in the current environment",
"failed to open new terminal",
"failed to move to start of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to flush file contents",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void pair__t5108t(uint64_t x, uint64_t y, uint64_t* __t5131t, uint64_t* __t5132t) {
  goto __t_return;
  __t_return:
  *__t5131t=x;
  *__t5132t=y;
}

static inline __attribute__((always_inline)) void nat__nat____buffer__t5117t(char** __t5133t, uint64_t* __t5134t, uint32_t* __t5135t, uint32_t* __t5136t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=16;
  *__t5133t=unsafe_ptr;
  *__t5134t=unsafe_size;
  *__t5135t=unsafe_offset;
  *__t5136t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t5137t) {
  char* allocated=*__t5137t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5137t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5138t) {
  int value=0;
  *__t5138t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5139t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5139t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5140t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5140t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5141t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5141t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5142t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5142t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t5143t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5143t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5144t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5144t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5145t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5145t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5146t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5146t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t5147t) {
  char* allocated=0;
  char __t791t__=0;
  char __t792t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  allocated=malloc(bytes);
  exists__t645t(allocated,&__t791t__);
  not__t42t(__t791t__,&__t792t__);
  if(__t792t__){
  __t_errcode=17;
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5147t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t5148t, uint64_t* __t5149t, uint32_t* __t5150t, uint32_t* __t5151t, uint64_t size, char** __t5152t, uint64_t* __t5153t, uint32_t* __t5154t, uint32_t* __t5155t) {
  char* buffer__unsafe_ptr=*__t5148t;
  uint64_t buffer__unsafe_size=*__t5149t;
  uint32_t buffer__unsafe_offset=*__t5150t;
  uint32_t buffer__unsafe_align=*__t5151t;
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
  __t_errcode=20;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t944t__);
  mul__t212t(__t944t__,size,&__t945t__);
  bytes=__t945t__;
  __t947t=0;
  eq__t134t(bytes,__t947t,&__t948t__);
  if(__t948t__){
  __t_errcode=19;
  goto __t_failure;
  }
  buffer__unsafe_size=size;
  __t_errcode=alloc__t790t(bytes,&__t949t__);
  if(__t_errcode){
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
  *__t5148t=buffer__unsafe_ptr;
  *__t5149t=buffer__unsafe_size;
  *__t5150t=buffer__unsafe_offset;
  *__t5151t=buffer__unsafe_align;
  *__t5152t=buffer__unsafe_ptr;
  *__t5153t=buffer__unsafe_size;
  *__t5154t=buffer__unsafe_offset;
  *__t5155t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void ge__t373t(uint64_t x, uint64_t y, char* __t5156t) {
  int __t374t__=0;
  char z=0;
  is_different__t109t(x,y,&__t374t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t5156t=z;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t5157t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t5157t=z;
}

static inline __attribute__((always_inline)) void unsafe_attach_type__t28t(char* to, char* from, char** __t5158t) {
  *__t5158t=to;
}

static inline __attribute__((always_inline)) void add__t808t(char* allocated, uint64_t offset, char** __t5159t) {
  char* element=0;
  char* __t809t__=0;
  element=allocated+offset;
  unsafe_attach_type__t28t(element,allocated,&__t809t__);
  goto __t_return;
  __t_return:
  *__t5159t=__t809t__;
}

static inline __attribute__((always_inline)) int get__t1149t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint32_t buffer__unsafe_offset, uint32_t buffer__unsafe_align, uint64_t i, char** __t5160t) {
  int __t1150t=0;
  char __t1151t__=0;
  uint64_t __t1152t__=0;
  uint64_t __t1153t__=0;
  uint64_t __t1154t__=0;
  uint64_t __t1155t__=0;
  char* __t1156t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t373t(i,buffer__unsafe_size,&__t1151t__);
  if(__t1151t__){
  __t_errcode=22;
  goto __t_failure;
  }
  nat__t686t(buffer__unsafe_align,&__t1152t__);
  mul__t212t(i,__t1152t__,&__t1153t__);
  nat__t686t(buffer__unsafe_offset,&__t1154t__);
  add__t188t(__t1153t__,__t1154t__,&__t1155t__);
  add__t808t(buffer__unsafe_ptr,__t1155t__,&__t1156t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t5160t=__t1156t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t454t(uint64_t value) {
  int __t455t=0;
  const char* endl=0;
  endl=__t443t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t5109t() {
  uint64_t __t5112t=0;
  uint64_t __t5113t=0;
  uint64_t __t5114t__x=0;
  uint64_t __t5114t__y=0;
  uint64_t __t5119t=0;
  uint64_t __t5120t=0;
  uint64_t __t5121t__x=0;
  uint64_t __t5121t__y=0;
  char* __t5122t__unsafe_ptr=0;
  uint64_t __t5122t__unsafe_size=0;
  uint32_t __t5122t__unsafe_offset=0;
  uint32_t __t5122t__unsafe_align=0;
  uint64_t __t5123t=0;
  char* __t5124t__unsafe_ptr=0;
  uint64_t __t5124t__unsafe_size=0;
  uint32_t __t5124t__unsafe_offset=0;
  uint32_t __t5124t__unsafe_align=0;
  char* p__unsafe_ptr=0;
  uint64_t p__unsafe_size=0;
  uint32_t p__unsafe_offset=0;
  uint32_t p__unsafe_align=0;
  uint64_t __t5126t=0;
  char* __t5128t__=0;
  uint64_t __t5129t____t5114t__x=0;
  uint64_t __t5129t____t5114t__y=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t5112t=1;
  __t5113t=2;
  pair__t5108t(__t5112t,__t5113t,&__t5114t__x,&__t5114t__y);
  __t5119t=3;
  __t5120t=4;
  pair__t5108t(__t5119t,__t5120t,&__t5121t__x,&__t5121t__y);
  nat__nat____buffer__t5117t(&__t5122t__unsafe_ptr,&__t5122t__unsafe_size,&__t5122t__unsafe_offset,&__t5122t__unsafe_align);
  __t5123t=2;
  __t_errcode=alloc__t929t(&__t5122t__unsafe_ptr,&__t5122t__unsafe_size,&__t5122t__unsafe_offset,&__t5122t__unsafe_align,__t5123t,&__t5124t__unsafe_ptr,&__t5124t__unsafe_size,&__t5124t__unsafe_offset,&__t5124t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  memcpy(__t5122t__unsafe_ptr,&__t5114t__x,8);
  memcpy(__t5122t__unsafe_ptr+8,&__t5114t__y,8);
  memcpy(__t5122t__unsafe_ptr+16,&__t5121t__x,8);
  memcpy(__t5122t__unsafe_ptr+24,&__t5121t__y,8);
  p__unsafe_ptr=__t5122t__unsafe_ptr;
  p__unsafe_size=__t5122t__unsafe_size;
  p__unsafe_offset=__t5122t__unsafe_offset;
  p__unsafe_align=__t5122t__unsafe_align;
  __t5126t=0;
  __t_errcode=get__t1149t(p__unsafe_ptr,p__unsafe_size,p__unsafe_offset,p__unsafe_align,__t5126t,&__t5128t__);
  if(__t_errcode){
  goto __t_failure;
  }
  if(!__t5128t__){
  __t_errcode=2;
  goto __t_failure;
  }
  memcpy(&__t5129t____t5114t__x,__t5128t__,8);
  memcpy(&__t5129t____t5114t__y,__t5128t__+8,8);
  print__t454t(__t5129t____t5114t__x);
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t806t(&__t5124t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5109t();
                }