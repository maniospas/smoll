#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void false__t10t(int* __t1339t) {
  int value=0;
  *__t1339t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1340t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1340t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1341t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1341t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1342t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1342t=z;
}

static inline __attribute__((always_inline)) void inc__t1315t(uint64_t x, uint64_t* __t1343t) {
  int __t1316t=0;
  uint64_t __t1319t=0;
  uint64_t __t1320t__=0;
  __t1319t=1;
  add__t170t(x,__t1319t,&__t1320t__);
  goto __t_return;
  __t_return:
  *__t1343t=__t1320t__;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1326t(uint64_t x, uint64_t* __t1344t) {
  int __t1327t=0;
  uint64_t __t1329t=0;
  uint64_t __t1330t__=0;
  __t1329t=2;
  add__t170t(x,__t1329t,&__t1330t__);
  goto __t_return;
  __t_return:
  *__t1344t=__t1330t__;
}

static inline __attribute__((always_inline)) void main__t1331t() {
  uint64_t __t1332t=0;
  uint64_t __t1333t__=0;
  uint64_t __t1335t=0;
  uint64_t __t1337t__=0;
  __t1332t=0;
  inc__t1315t(__t1332t,&__t1333t__);
  print__t381t(__t1333t__);
  __t1335t=0;
  inc__t1326t(__t1335t,&__t1337t__);
  print__t381t(__t1337t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1331t();return 0;}