#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
static const char* __t_all_errcodes[34] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
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

static inline __attribute__((always_inline)) void false__t10t(int* __t1296t) {
  int value=0;
  *__t1296t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1297t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1297t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1298t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1298t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1299t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1299t=z;
}

static inline __attribute__((always_inline)) void inc__t1272t(uint64_t x, uint64_t* __t1300t) {
  int __t1273t=0;
  uint64_t __t1276t=0;
  uint64_t __t1277t__=0;
  __t1276t=1;
  add__t170t(x,__t1276t,&__t1277t__);
  goto __t_return;
  __t_return:
  *__t1300t=__t1277t__;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1283t(uint64_t x, uint64_t* __t1301t) {
  int __t1284t=0;
  uint64_t __t1286t=0;
  uint64_t __t1287t__=0;
  __t1286t=2;
  add__t170t(x,__t1286t,&__t1287t__);
  goto __t_return;
  __t_return:
  *__t1301t=__t1287t__;
}

static inline __attribute__((always_inline)) void main__t1288t() {
  uint64_t __t1289t=0;
  uint64_t __t1290t__=0;
  uint64_t __t1292t=0;
  uint64_t __t1294t__=0;
  __t1289t=0;
  inc__t1272t(__t1289t,&__t1290t__);
  print__t376t(__t1290t__);
  __t1292t=0;
  inc__t1283t(__t1292t,&__t1294t__);
  print__t376t(__t1294t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1288t();return 0;}