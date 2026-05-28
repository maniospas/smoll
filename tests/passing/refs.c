#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void false__t10t(int* __t1327t) {
  int value=0;
  *__t1327t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1328t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1328t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1329t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1329t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1330t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1330t=z;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1321t() {
  uint64_t __t1322t=0;
  uint64_t __t1323t=0;
  uint64_t x=0;
  uint64_t y=0;
  uint64_t z=0;
  uint64_t __t1324t=0;
  uint64_t __t1325t__=0;
  __t1322t=1;
  __t1323t=__t1322t;
  x=__t1323t;
  __t1324t=2;
  x=__t1324t;
  add__t171t(x,x,&__t1325t__);
  print__t382t(__t1325t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}