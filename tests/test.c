#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t442t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"assertion error",
"division by zero",
"modulo by zero",
"nat subtraction would yield a negative",
"cannot convert negative float to nat",
"cannot convert negative int to nat",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t418t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void point__t3623t(uint64_t* __t3634t, uint64_t* __t3635t) {
  uint64_t __t3624t=0;
  uint64_t __t3625t=0;
  uint64_t x=0;
  uint64_t __t3626t=0;
  uint64_t __t3627t=0;
  uint64_t y=0;
  __t3624t=0;
  __t3625t=__t3624t;
  x=__t3625t;
  __t3626t=0;
  __t3627t=__t3626t;
  y=__t3627t;
  goto __t_return;
  __t_return:
  *__t3634t=x;
  *__t3635t=y;
}

static inline __attribute__((always_inline)) void print__t453t(uint64_t value) {
  int __t454t=0;
  const char* endl=0;
  endl=__t442t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t3629t() {
  uint64_t __t3632t__x=0;
  uint64_t __t3632t__y=0;
  uint64_t p__x=0;
  uint64_t p__y=0;
  console__t418t();
  point__t3623t(&__t3632t__x,&__t3632t__y);
  p__x=__t3632t__x;
  p__y=__t3632t__y;
  print__t453t(p__x);
}

int main(int argc, char** argv) {
                    __t_argc = argc;
                    __t_argv = argv;
                    DECLARE_HANDLERS;
                    main__t3629t();
                    return 0;
                }