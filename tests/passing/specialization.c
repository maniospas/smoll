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

static inline __attribute__((always_inline)) void true__t11t(int* __t1399t) {
  int value=0;
  *__t1399t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1400t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1400t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t1401t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1401t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1402t) {
  int value=0;
  *__t1402t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1403t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1403t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1404t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1404t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1405t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1405t=z;
}

static inline __attribute__((always_inline)) void inc__t1340t(double x, double* __t1406t) {
  int __t1341t=0;
  uint64_t __t1342t=0;
  double __t1343t__=0;
  double value=0;
  int __t1344t=0;
  int __t1345t__=0;
  double __t1346t__=0;
  __t1342t=1;
  float__t404t(__t1342t,&__t1343t__);
  value=__t1343t__;
  not__t36t(__t1344t,&__t1345t__);
  add__t149t(x,value,&__t1346t__);
  goto __t_return;
  __t_return:
  *__t1406t=__t1346t__;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1407t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1407t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1408t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1408t=z;
}

static inline __attribute__((always_inline)) void inc__t1379t(uint64_t x, uint64_t value, uint64_t* __t1409t) {
  int __t1380t=0;
  int __t1381t=0;
  int __t1382t__=0;
  uint64_t __t1383t__=0;
  not__t36t(__t1381t,&__t1382t__);
  add__t171t(x,value,&__t1383t__);
  goto __t_return;
  __t_return:
  *__t1409t=__t1383t__;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1391t() {
  double __t1392t=0;
  double __t1393t__=0;
  uint64_t __t1395t=0;
  uint64_t __t1396t=0;
  uint64_t __t1397t__=0;
  __t1392t=2.0;
  inc__t1340t(__t1392t,&__t1393t__);
  print__t374t(__t1393t__);
  __t1395t=2;
  __t1396t=2;
  inc__t1379t(__t1395t,__t1396t,&__t1397t__);
  print__t382t(__t1397t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1391t();return 0;}