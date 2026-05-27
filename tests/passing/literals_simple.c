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

static inline __attribute__((always_inline)) void false__t10t(int* __t1355t) {
  int value=0;
  *__t1355t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1356t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1356t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1357t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1357t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1358t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1358t=z;
}

static inline __attribute__((always_inline)) void inc__t1331t(uint64_t x, uint64_t* __t1359t) {
  int __t1332t=0;
  uint64_t __t1335t=0;
  uint64_t __t1336t__=0;
  __t1335t=1;
  add__t171t(x,__t1335t,&__t1336t__);
  goto __t_return;
  __t_return:
  *__t1359t=__t1336t__;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__t1342t(uint64_t x, uint64_t* __t1360t) {
  int __t1343t=0;
  uint64_t __t1345t=0;
  uint64_t __t1346t__=0;
  __t1345t=2;
  add__t171t(x,__t1345t,&__t1346t__);
  goto __t_return;
  __t_return:
  *__t1360t=__t1346t__;
}

static inline __attribute__((always_inline)) void main__t1347t() {
  uint64_t __t1348t=0;
  uint64_t __t1349t__=0;
  uint64_t __t1351t=0;
  uint64_t __t1353t__=0;
  __t1348t=0;
  inc__t1331t(__t1348t,&__t1349t__);
  print__t382t(__t1349t__);
  __t1351t=0;
  inc__t1342t(__t1351t,&__t1353t__);
  print__t382t(__t1353t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1347t();return 0;}