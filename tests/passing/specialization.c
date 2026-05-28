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

static inline __attribute__((always_inline)) void true__t11t(int* __t1395t) {
  int value=0;
  *__t1395t=value;
}

static inline __attribute__((always_inline)) void not__t38t(int __t_anon0, int* __t1396t) {
  int __t39t__=0;
  true__t11t(&__t39t__);
  goto __t_return;
  __t_return:
  *__t1396t=__t39t__;
}

static inline __attribute__((always_inline)) void float__t404t(uint64_t x, double* __t1397t) {
  int __t405t=0;
  int __t406t__=0;
  int __t407t=0;
  double z=0;
  not__t38t(__t405t,&__t406t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1397t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1398t) {
  int value=0;
  *__t1398t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1399t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1399t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t70t(double x, double y, int* __t1400t) {
  int __t71t=0;
  int __t72t__=0;
  not__t36t(__t71t,&__t72t__);
  goto __t_return;
  __t_return:
  *__t1400t=__t72t__;
}

static inline __attribute__((always_inline)) void add__t149t(double x, double y, double* __t1401t) {
  int __t150t__=0;
  double z=0;
  is_different__t70t(x,y,&__t150t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1401t=z;
}

static inline __attribute__((always_inline)) void inc__t1336t(double x, double* __t1402t) {
  int __t1337t=0;
  uint64_t __t1338t=0;
  double __t1339t__=0;
  double value=0;
  int __t1340t=0;
  int __t1341t__=0;
  double __t1342t__=0;
  __t1338t=1;
  float__t404t(__t1338t,&__t1339t__);
  value=__t1339t__;
  not__t36t(__t1340t,&__t1341t__);
  add__t149t(x,value,&__t1342t__);
  goto __t_return;
  __t_return:
  *__t1402t=__t1342t__;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1403t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1403t=__t96t__;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1404t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1404t=z;
}

static inline __attribute__((always_inline)) void inc__t1375t(uint64_t x, uint64_t value, uint64_t* __t1405t) {
  int __t1376t=0;
  int __t1377t=0;
  int __t1378t__=0;
  uint64_t __t1379t__=0;
  not__t36t(__t1377t,&__t1378t__);
  add__t171t(x,value,&__t1379t__);
  goto __t_return;
  __t_return:
  *__t1405t=__t1379t__;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1387t() {
  double __t1388t=0;
  double __t1389t__=0;
  uint64_t __t1391t=0;
  uint64_t __t1392t=0;
  uint64_t __t1393t__=0;
  __t1388t=2.0;
  inc__t1336t(__t1388t,&__t1389t__);
  print__t374t(__t1389t__);
  __t1391t=2;
  __t1392t=2;
  inc__t1375t(__t1391t,__t1392t,&__t1393t__);
  print__t382t(__t1393t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1387t();return 0;}