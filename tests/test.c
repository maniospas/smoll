#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t2604t="ended";
const char* const __t2600t="--hello";
const char* const __t382t="\n";
const char* const __t2602t="hello world!";
static const char* __t_all_errcodes[53] = {"noerr",
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
"failed to move to end of closed file",
"not open file",
"failed to write to closed file",
"failed to write to file",
"failed to create directory",
"failed to remove file",
"not open dir",
"end of dir"
};

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void os_name__t2019t(const char** __t2606t) {
  const char* ret=0;
  ret=__temp_osname;
  goto __t_return;
  __t_return:
  *__t2606t=ret;
}

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr____t_buffer____buffer__t2021t(char** __t2607t, uint64_t* __t2608t, uint16_t* __t2609t, uint16_t* __t2610t) {
  char* unsafe_ptr=0;
  uint64_t unsafe_size=0;
  uint16_t unsafe_offset=0;
  uint16_t unsafe_align=0;
  unsafe_align=8;
  *__t2607t=unsafe_ptr;
  *__t2608t=unsafe_size;
  *__t2609t=unsafe_offset;
  *__t2610t=unsafe_align;
}

static inline __attribute__((always_inline)) void args__t2020t(char** __t2611t, uint64_t* __t2612t, uint16_t* __t2613t, uint16_t* __t2614t) {
  char* __t2023t__unsafe_ptr=0;
  uint64_t __t2023t__unsafe_size=0;
  uint16_t __t2023t__unsafe_offset=0;
  uint16_t __t2023t__unsafe_align=0;
  char* ret__unsafe_ptr=0;
  uint64_t ret__unsafe_size=0;
  uint16_t ret__unsafe_offset=0;
  uint16_t ret__unsafe_align=0;
  cstr____t_buffer____buffer__t2021t(&__t2023t__unsafe_ptr,&__t2023t__unsafe_size,&__t2023t__unsafe_offset,&__t2023t__unsafe_align);
  ret__unsafe_ptr=__t2023t__unsafe_ptr;
  ret__unsafe_size=__t2023t__unsafe_size;
  ret__unsafe_offset=__t2023t__unsafe_offset;
  ret__unsafe_align=__t2023t__unsafe_align;
  ret__unsafe_ptr=(char*)__t_argv;
  ret__unsafe_size=__t_argc;
  goto __t_return;
  __t_return:
  *__t2611t=ret__unsafe_ptr;
  *__t2612t=ret__unsafe_size;
  *__t2613t=ret__unsafe_offset;
  *__t2614t=ret__unsafe_align;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t2615t) {
  int value=0;
  *__t2615t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t2616t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t2616t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t2617t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t2617t=__t97t__;
}

static inline __attribute__((always_inline)) void ge__t324t(uint64_t x, uint64_t y, char* __t2618t) {
  int __t325t__=0;
  char z=0;
  is_different__t95t(x,y,&__t325t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t2618t=z;
}

static inline __attribute__((always_inline)) void nat__t665t(uint16_t x, uint64_t* __t2619t) {
  uint64_t value=0;
  value=x;
  goto __t_return;
  __t_return:
  *__t2619t=value;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t2620t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t2620t=z;
}

static inline __attribute__((always_inline)) void add__t175t(uint64_t x, uint64_t y, uint64_t* __t2621t) {
  int __t176t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t176t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2621t=z;
}

static inline __attribute__((always_inline)) void attach_type__t22t(char* to, char* from, char** __t2622t) {
  *__t2622t=to;
}

static inline __attribute__((always_inline)) void add__t663t(char* allocated, uint64_t offset, char** __t2623t) {
  char* element=0;
  char* __t664t__=0;
  element=allocated+offset;
  attach_type__t22t(element,allocated,&__t664t__);
  goto __t_return;
  __t_return:
  *__t2623t=__t664t__;
}

static inline __attribute__((always_inline)) int get__t798t(char* buffer__unsafe_ptr, uint64_t buffer__unsafe_size, uint16_t buffer__unsafe_offset, uint16_t buffer__unsafe_align, uint64_t i, char** __t2624t) {
  char __t799t__=0;
  uint64_t __t800t__=0;
  uint64_t __t801t__=0;
  uint64_t __t802t__=0;
  uint64_t __t803t__=0;
  char* __t804t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t324t(i,buffer__unsafe_size,&__t799t__);
  if(__t799t__){
  __t_errcode=15;
  goto __t_failure;
  }
  nat__t665t(buffer__unsafe_align,&__t800t__);
  mul__t199t(i,__t800t__,&__t801t__);
  nat__t665t(buffer__unsafe_offset,&__t802t__);
  add__t175t(__t801t__,__t802t__,&__t803t__);
  add__t663t(buffer__unsafe_ptr,__t803t__,&__t804t__);
  goto __t_return;
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t2624t=__t804t__;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void eq__t1083t(const char* x, const char* y, char* __t2625t) {
  char z=0;
  z=(x==y);
  goto __t_return;
  __t_return:
  *__t2625t=z;
}

static inline __attribute__((always_inline)) void main__t2591t() {
  const char* __t2593t__=0;
  uint64_t __t2595t=0;
  char* __t2596t__unsafe_ptr=0;
  uint64_t __t2596t__unsafe_size=0;
  uint16_t __t2596t__unsafe_offset=0;
  uint16_t __t2596t__unsafe_align=0;
  char __t2597t=0;
  char* __t2598t__=0;
  const char* __t2599t__value=0;
  const char* arg=0;
  char __t2601t__=0;
  int __t_complain=0;
  console__t366t();
  os_name__t2019t(&__t2593t__);
  print__t380t(__t2593t__);
  args__t2020t(&__t2596t__unsafe_ptr,&__t2596t__unsafe_size,&__t2596t__unsafe_offset,&__t2596t__unsafe_align);
  __t2595t=0;
  while(1){
  __t_complain=get__t798t(__t2596t__unsafe_ptr,__t2596t__unsafe_size,__t2596t__unsafe_offset,__t2596t__unsafe_align,__t2595t,&__t2598t__);
  __t2597t=__t_complain;
  if(!__t2598t__){
  __t_complain=2;
  }
  else{
  memcpy(&__t2599t__value,__t2598t__,8);
  }
  arg=__t2599t__value;
  __t2597t=__t2597t==0;
  __t2595t=__t2595t+1;
  if(!__t2597t){
  break;
  }
  eq__t1083t(arg,__t2600t,&__t2601t__);
  if(__t2601t__){
  print__t380t(__t2602t);
  }
  }
  print__t380t(__t2604t);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2591t();return 0;}