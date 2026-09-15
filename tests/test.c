#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;

static const char* __t_all_errcodes[63] = {"noerr",
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
"end of dir",
"assert failed"
};

static inline __attribute__((always_inline)) void console__t419t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void char____t_buffer____buffer__t1085t(char** __t5283t, uint64_t* __t5284t, uint32_t* __t5285t, uint32_t* __t5286t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint32_t unsafe_offset=0;
  uint32_t unsafe_align=0;
  unsafe_align=1;
  *__t5283t=unsafe_ptr;
  *__t5284t=unsafe_size;
  *__t5285t=unsafe_offset;
  *__t5286t=unsafe_align;
}

static inline __attribute__((always_inline)) void free__t806t(char** __t5287t) {
  char* allocated=*__t5287t;
  if(allocated){
  free(allocated);
  allocated=0;
  }
  *__t5287t=allocated;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t5288t) {
  int value=0;
  *__t5288t=value;
}

static inline __attribute__((always_inline)) void not__t51t(int __t_anon0, int* __t5289t) {
  int __t52t__=0;
  false__t14t(&__t52t__);
  goto __t_return;
  __t_return:
  *__t5289t=__t52t__;
}

static inline __attribute__((always_inline)) void is_different__t109t(uint64_t x, uint64_t y, int* __t5290t) {
  int __t110t=0;
  int __t111t__=0;
  not__t51t(__t110t,&__t111t__);
  goto __t_return;
  __t_return:
  *__t5290t=__t111t__;
}

static inline __attribute__((always_inline)) void eq__t134t(uint64_t x, uint64_t y, char* __t5291t) {
  int __t135t__=0;
  char z=0;
  is_different__t109t(x,y,&__t135t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t5291t=z;
}

static inline __attribute__((always_inline)) void neq__t158t(uint64_t x, uint64_t y, char* __t5292t) {
  int __t159t__=0;
  char z=0;
  is_different__t109t(x,y,&__t159t__);
  z=x!=y;
  goto __t_return;
  __t_return:
  *__t5292t=z;
}

static inline __attribute__((always_inline)) void nat__t686t(uint32_t x, uint64_t* __t5293t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t5293t=value;
}

static inline __attribute__((always_inline)) void mul__t212t(uint64_t x, uint64_t y, uint64_t* __t5294t) {
  int __t213t__=0;
  uint64_t z=0;
  is_different__t109t(x,y,&__t213t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t5294t=z;
}

static inline __attribute__((always_inline)) void zero__t807t(char* allocated, uint64_t from, uint64_t to) {
  ptr_memzero(allocated,from,to);
}

static inline __attribute__((always_inline)) void exists__t645t(char* x, char* __t5295t) {
  char z=0;
  z=x!=0;
  goto __t_return;
  __t_return:
  *__t5295t=z;
}

static inline __attribute__((always_inline)) void not__t42t(char value, char* __t5296t) {
  char z=0;
  if(!value){
  z=1;
  }
  goto __t_return;
  __t_return:
  *__t5296t=z;
}

static inline __attribute__((always_inline)) int alloc__t790t(uint64_t bytes, char** __t5297t) {
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
  *__t5297t=allocated;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t929t(char** __t5298t, uint64_t* __t5299t, uint32_t* __t5300t, uint32_t* __t5301t, uint64_t size, char** __t5302t, uint64_t* __t5303t, uint32_t* __t5304t, uint32_t* __t5305t) {
  char* buffer__unsafe_ptr=*__t5298t;
  uint64_t buffer__unsafe_size=*__t5299t;
  uint32_t buffer__unsafe_offset=*__t5300t;
  uint32_t buffer__unsafe_align=*__t5301t;
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
  *__t5298t=buffer__unsafe_ptr;
  *__t5299t=buffer__unsafe_size;
  *__t5300t=buffer__unsafe_offset;
  *__t5301t=buffer__unsafe_align;
  *__t5302t=buffer__unsafe_ptr;
  *__t5303t=buffer__unsafe_size;
  *__t5304t=buffer__unsafe_offset;
  *__t5305t=buffer__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) int alloc__t1084t(uint64_t size, char** __t5306t, uint64_t* __t5307t, uint32_t* __t5308t, uint32_t* __t5309t) {
  char* __t1087t__unsafe_ptr=0;
  uint64_t __t1087t__unsafe_size=0;
  uint32_t __t1087t__unsafe_offset=0;
  uint32_t __t1087t__unsafe_align=0;
  char* __t1088t__unsafe_ptr=0;
  uint64_t __t1088t__unsafe_size=0;
  uint32_t __t1088t__unsafe_offset=0;
  uint32_t __t1088t__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  char____t_buffer____buffer__t1085t(&__t1087t__unsafe_ptr,&__t1087t__unsafe_size,&__t1087t__unsafe_offset,&__t1087t__unsafe_align);
  __t_errcode=alloc__t929t(&__t1087t__unsafe_ptr,&__t1087t__unsafe_size,&__t1087t__unsafe_offset,&__t1087t__unsafe_align,size,&__t1088t__unsafe_ptr,&__t1088t__unsafe_size,&__t1088t__unsafe_offset,&__t1088t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:free__t806t(&__t1088t__unsafe_ptr);
  
  goto __t_skip_returns;__t_return:
  *__t5306t=__t1088t__unsafe_ptr;
  *__t5307t=__t1088t__unsafe_size;
  *__t5308t=__t1088t__unsafe_offset;
  *__t5309t=__t1088t__unsafe_align;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void arena__t1200t(char** __t5310t, uint64_t* __t5311t, uint32_t* __t5312t, uint32_t* __t5313t, uint64_t _pos, char** __t5314t, uint64_t* __t5315t, uint32_t* __t5316t, uint32_t* __t5317t, uint64_t* __t5318t) {
  char* buf__unsafe_ptr=*__t5310t;
  uint64_t buf__unsafe_size=*__t5311t;
  uint32_t buf__unsafe_offset=*__t5312t;
  uint32_t buf__unsafe_align=*__t5313t;
  uint64_t __t1201t=0;
  uint64_t pos=0;
  __t1201t=_pos;
  pos=__t1201t;
  goto __t_return;
  __t_return:
  *__t5310t=buf__unsafe_ptr;
  *__t5311t=buf__unsafe_size;
  *__t5312t=buf__unsafe_offset;
  *__t5313t=buf__unsafe_align;
  *__t5314t=buf__unsafe_ptr;
  *__t5315t=buf__unsafe_size;
  *__t5316t=buf__unsafe_offset;
  *__t5317t=buf__unsafe_align;
  *__t5318t=pos;
}

static inline __attribute__((always_inline)) void arena__t1203t(char** __t5319t, uint64_t* __t5320t, uint32_t* __t5321t, uint32_t* __t5322t, char** __t5323t, uint64_t* __t5324t, uint32_t* __t5325t, uint32_t* __t5326t, uint64_t* __t5327t) {
  char* buf__unsafe_ptr=*__t5319t;
  uint64_t buf__unsafe_size=*__t5320t;
  uint32_t buf__unsafe_offset=*__t5321t;
  uint32_t buf__unsafe_align=*__t5322t;
  uint64_t __t1204t=0;
  char* __t1205t__buf__unsafe_ptr=0;
  uint64_t __t1205t__buf__unsafe_size=0;
  uint32_t __t1205t__buf__unsafe_offset=0;
  uint32_t __t1205t__buf__unsafe_align=0;
  uint64_t __t1205t__pos=0;
  __t1204t=0;
  arena__t1200t(&buf__unsafe_ptr,&buf__unsafe_size,&buf__unsafe_offset,&buf__unsafe_align,__t1204t,&__t1205t__buf__unsafe_ptr,&__t1205t__buf__unsafe_size,&__t1205t__buf__unsafe_offset,&__t1205t__buf__unsafe_align,&__t1205t__pos);
  goto __t_return;
  __t_return:
  *__t5319t=buf__unsafe_ptr;
  *__t5320t=buf__unsafe_size;
  *__t5321t=buf__unsafe_offset;
  *__t5322t=buf__unsafe_align;
  *__t5323t=__t1205t__buf__unsafe_ptr;
  *__t5324t=__t1205t__buf__unsafe_size;
  *__t5325t=__t1205t__buf__unsafe_offset;
  *__t5326t=__t1205t__buf__unsafe_align;
  *__t5327t=__t1205t__pos;
}

static inline __attribute__((always_inline)) int main__t5275t() {
  uint64_t __t5278t=0;
  char* __t5279t__unsafe_ptr=0;
  uint64_t __t5279t__unsafe_size=0;
  uint32_t __t5279t__unsafe_offset=0;
  uint32_t __t5279t__unsafe_align=0;
  char* __t5281t__buf__unsafe_ptr=0;
  uint64_t __t5281t__buf__unsafe_size=0;
  uint32_t __t5281t__buf__unsafe_offset=0;
  uint32_t __t5281t__buf__unsafe_align=0;
  uint64_t __t5281t__pos=0;
  char* __t5282t__buf__unsafe_ptr=0;
  uint64_t __t5282t__buf__unsafe_size=0;
  uint32_t __t5282t__buf__unsafe_offset=0;
  uint32_t __t5282t__buf__unsafe_align=0;
  uint64_t __t5282t__pos=0;
  char* CHARS__buf__unsafe_ptr=0;
  uint64_t CHARS__buf__unsafe_size=0;
  uint32_t CHARS__buf__unsafe_offset=0;
  uint32_t CHARS__buf__unsafe_align=0;
  uint64_t CHARS__pos=0;
  char* x__unsafe_ptr=0;
  uint64_t x__unsafe_size=0;
  uint32_t x__unsafe_offset=0;
  uint32_t x__unsafe_align=0;
  int __t_errcode=0;
  int __t_complain=0;
  console__t419t();
  __t5278t=120;
  __t_errcode=alloc__t1084t(__t5278t,&__t5279t__unsafe_ptr,&__t5279t__unsafe_size,&__t5279t__unsafe_offset,&__t5279t__unsafe_align);
  if(__t_errcode){
  goto __t_failure;
  }
  arena__t1203t(&__t5279t__unsafe_ptr,&__t5279t__unsafe_size,&__t5279t__unsafe_offset,&__t5279t__unsafe_align,&__t5281t__buf__unsafe_ptr,&__t5281t__buf__unsafe_size,&__t5281t__buf__unsafe_offset,&__t5281t__buf__unsafe_align,&__t5281t__pos);
  __t5282t__buf__unsafe_ptr=__t5281t__buf__unsafe_ptr;
  __t5282t__buf__unsafe_size=__t5281t__buf__unsafe_size;
  __t5282t__buf__unsafe_offset=__t5281t__buf__unsafe_offset;
  __t5282t__buf__unsafe_align=__t5281t__buf__unsafe_align;
  __t5282t__pos=__t5281t__pos;
  CHARS__buf__unsafe_ptr=__t5282t__buf__unsafe_ptr;
  CHARS__buf__unsafe_size=__t5282t__buf__unsafe_size;
  CHARS__buf__unsafe_offset=__t5282t__buf__unsafe_offset;
  CHARS__buf__unsafe_align=__t5282t__buf__unsafe_align;
  CHARS__pos=__t5282t__pos;
  x__unsafe_ptr=CHARS__buf__unsafe_ptr;
  x__unsafe_size=CHARS__buf__unsafe_size;
  x__unsafe_offset=CHARS__buf__unsafe_offset;
  x__unsafe_align=CHARS__buf__unsafe_align;
  
  __t_failure:
  goto __t_skip_returns;
  __t_skip_returns:free__t806t(&__t5279t__unsafe_ptr);
  
  return __t_errcode;
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    return main__t5275t();
                }