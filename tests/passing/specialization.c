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

static inline __attribute__((always_inline)) void float__t392t(uint64_t x, double* __t1340t) {
  double z=0;
  z=x;
  goto __t_return;
  __t_return:
  *__t1340t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1341t) {
  int value=0;
  *__t1341t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1342t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1342t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1343t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1343t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1344t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1344t=z;
}

static inline __attribute__((always_inline)) void inc__t1281t(double x, double* __t1345t) {
  int __t1282t=0;
  uint64_t __t1283t=0;
  double __t1284t__=0;
  double value=0;
  int __t1285t=0;
  int __t1286t__=0;
  double __t1287t__=0;
  __t1283t=1;
  float__t392t(__t1283t,&__t1284t__);
  value=__t1284t__;
  not__t35t(__t1285t,&__t1286t__);
  add__t148t(x,value,&__t1287t__);
  goto __t_return;
  __t_return:
  *__t1345t=__t1287t__;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1346t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1346t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1347t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1347t=z;
}

static inline __attribute__((always_inline)) void inc__t1320t(uint64_t x, uint64_t value, uint64_t* __t1348t) {
  int __t1321t=0;
  int __t1322t=0;
  int __t1323t__=0;
  uint64_t __t1324t__=0;
  not__t35t(__t1322t,&__t1323t__);
  add__t170t(x,value,&__t1324t__);
  goto __t_return;
  __t_return:
  *__t1348t=__t1324t__;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1332t() {
  double __t1333t=0;
  double __t1334t__=0;
  uint64_t __t1336t=0;
  uint64_t __t1337t=0;
  uint64_t __t1338t__=0;
  __t1333t=2.0;
  inc__t1281t(__t1333t,&__t1334t__);
  print__t368t(__t1334t__);
  __t1336t=2;
  __t1337t=2;
  inc__t1320t(__t1336t,__t1337t,&__t1338t__);
  print__t376t(__t1338t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1332t();return 0;}