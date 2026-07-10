#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t395t="\n";
const char* const __t2253t="xy";
static const char* __t_all_errcodes[39] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
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
"does not match",
"empty input name",
"cannot tag a structural type",
"tag surface cannot be structural type"
};

static inline __attribute__((always_inline)) void console__t374t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2255t) {
  int value=0;
  *__t2255t=value;
}

static inline __attribute__((always_inline)) void not__t45t(int __t_anon0, int* __t2256t) {
  int __t46t__=0;
  false__t14t(&__t46t__);
  goto __t_return;
  __t_return:
  *__t2256t=__t46t__;
}

static inline __attribute__((always_inline)) void is_different__t103t(uint64_t x, uint64_t y, int* __t2257t) {
  int __t104t=0;
  int __t105t__=0;
  not__t45t(__t104t,&__t105t__);
  goto __t_return;
  __t_return:
  *__t2257t=__t105t__;
}

static inline __attribute__((always_inline)) void eq__t128t(uint64_t x, uint64_t y, char* __t2258t) {
  int __t129t__=0;
  char z=0;
  is_different__t103t(x,y,&__t129t__);
  z=x==y;
  goto __t_return;
  __t_return:
  *__t2258t=z;
}

static inline __attribute__((always_inline)) void print__t393t(const char* value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t395t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2243t() {
  uint64_t __t2246t=0;
  uint64_t x=0;
  uint64_t __t2247t=0;
  uint64_t y=0;
  uint64_t __t2248t=0;
  char __t2249t__=0;
  uint64_t __t2250t=0;
  char __t2251t__=0;
  char __t2252t=0;
  console__t374t();
  __t2246t=1;
  x=__t2246t;
  __t2247t=2;
  y=__t2247t;
  __t2248t=1;
  eq__t128t(x,__t2248t,&__t2249t__);
  if(__t2249t__){
  __t2250t=2;
  eq__t128t(y,__t2250t,&__t2251t__);
  __t2252t=__t2251t__;
  }
  if(__t2252t){
  print__t393t(__t2253t);
  }
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2243t();return 0;}