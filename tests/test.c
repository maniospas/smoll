#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/web.h"
#include "std/extern/extern.h"
typedef void (*__smoll_func_ptr_type)(void);
int __t_argc;
char** __t_argv;
const char* const __t400t="\n";
const char* const __t2204t="123";
static const char* __t_all_errcodes[35] = {"noerr",
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
"invalid float conversion from string without a value after the dot"
};

static inline __attribute__((always_inline)) void console__t379t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void pair__t2191t(uint64_t a, uint64_t b, uint64_t* __t2206t, uint64_t* __t2207t) {
  goto __t_return;
  __t_return:
  *__t2206t=a;
  *__t2207t=b;
}

static inline __attribute__((always_inline)) void false__t14t(int* __t2208t) {
  int value=0;
  *__t2208t=value;
}

static inline __attribute__((always_inline)) void not__t50t(int __t_anon0, int* __t2209t) {
  int __t51t__=0;
  false__t14t(&__t51t__);
  goto __t_return;
  __t_return:
  *__t2209t=__t51t__;
}

static inline __attribute__((always_inline)) void is_different__t108t(uint64_t x, uint64_t y, int* __t2210t) {
  int __t109t=0;
  int __t110t__=0;
  not__t50t(__t109t,&__t110t__);
  goto __t_return;
  __t_return:
  *__t2210t=__t110t__;
}

static inline __attribute__((always_inline)) void add__t188t(uint64_t x, uint64_t y, uint64_t* __t2211t) {
  int __t189t__=0;
  uint64_t z=0;
  is_different__t108t(x,y,&__t189t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t2211t=z;
}

static inline __attribute__((always_inline)) void print__t411t(uint64_t value) {
  int __t412t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void print__t398t(const char* value) {
  int __t399t=0;
  const char* endl=0;
  endl=__t400t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2192t() {
  uint64_t __t2195t=0;
  uint64_t __t2196t=0;
  uint64_t __t2197t__a=0;
  uint64_t __t2197t__b=0;
  uint64_t p__a=0;
  uint64_t p__b=0;
  uint64_t __t2198t=0;
  uint64_t __t2199t=0;
  uint64_t x=0;
  uint64_t __t2200t=0;
  uint64_t __t2201t__=0;
  console__t379t();
  __t2195t=0;
  __t2196t=1;
  pair__t2191t(__t2195t,__t2196t,&__t2197t__a,&__t2197t__b);
  p__a=__t2197t__a;
  p__b=__t2197t__b;
  __t2198t=0;
  __t2199t=__t2198t;
  x=__t2199t;
  __t2200t=1;
  add__t188t(x,__t2200t,&__t2201t__);
  x=__t2201t__;
  print__t411t(x);
  print__t411t(p__a);
  print__t398t(__t2204t);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;DECLARE_HANDLERS;main__t2192t();return 0;}