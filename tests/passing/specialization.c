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

static inline __attribute__((always_inline)) void true__t11t(int* __t1383t) {
  int value=0;
  *__t1383t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t1384t) {
  int __t38t__=0;
  true__t11t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t1384t=__t38t__;
}

static inline __attribute__((always_inline)) void float__t403t(uint64_t x, double* __t1385t) {
  int __t404t=0;
  int __t405t__=0;
  int __t406t=0;
  double z=0;
  not__t37t(__t404t,&__t405t__);
  z=x;
  goto __t_return;
  __t_return:
  *__t1385t=z;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1386t) {
  int value=0;
  *__t1386t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1387t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1387t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t69t(double x, double y, int* __t1388t) {
  int __t70t=0;
  int __t71t__=0;
  not__t35t(__t70t,&__t71t__);
  goto __t_return;
  __t_return:
  *__t1388t=__t71t__;
}

static inline __attribute__((always_inline)) void add__t148t(double x, double y, double* __t1389t) {
  int __t149t__=0;
  double z=0;
  is_different__t69t(x,y,&__t149t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1389t=z;
}

static inline __attribute__((always_inline)) void inc__t1324t(double x, double* __t1390t) {
  int __t1325t=0;
  uint64_t __t1326t=0;
  double __t1327t__=0;
  double value=0;
  int __t1328t=0;
  int __t1329t__=0;
  double __t1330t__=0;
  __t1326t=1;
  float__t403t(__t1326t,&__t1327t__);
  value=__t1327t__;
  not__t35t(__t1328t,&__t1329t__);
  add__t148t(x,value,&__t1330t__);
  goto __t_return;
  __t_return:
  *__t1390t=__t1330t__;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1391t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1391t=__t95t__;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1392t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1392t=z;
}

static inline __attribute__((always_inline)) void inc__t1363t(uint64_t x, uint64_t value, uint64_t* __t1393t) {
  int __t1364t=0;
  int __t1365t=0;
  int __t1366t__=0;
  uint64_t __t1367t__=0;
  not__t35t(__t1365t,&__t1366t__);
  add__t170t(x,value,&__t1367t__);
  goto __t_return;
  __t_return:
  *__t1393t=__t1367t__;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1375t() {
  double __t1376t=0;
  double __t1377t__=0;
  uint64_t __t1379t=0;
  uint64_t __t1380t=0;
  uint64_t __t1381t__=0;
  __t1376t=2.0;
  inc__t1324t(__t1376t,&__t1377t__);
  print__t373t(__t1377t__);
  __t1379t=2;
  __t1380t=2;
  inc__t1363t(__t1379t,__t1380t,&__t1381t__);
  print__t381t(__t1381t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1375t();return 0;}