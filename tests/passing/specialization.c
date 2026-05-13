#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp359v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
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

static inline __attribute__((always_inline)) void float__temp388v(uint64_t x, double* __temp1290v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1290v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1291v) {
  int value=0;
  *__temp1291v=value;
}

static inline __attribute__((always_inline)) void not__temp31v(int __temp_anon0, int* __temp1292v) {
  int __temp32v__=0;
  false__temp10v(&__temp32v__);
  goto __temp_return;
  __temp_return:
  *__temp1292v=__temp32v__;
}

static inline __attribute__((always_inline)) void is_different__temp65v(double x, double y, int* __temp1293v) {
  int __temp66v=0;
  int __temp67v__=0;
  not__temp31v(__temp66v,&__temp67v__);
  goto __temp_return;
  __temp_return:
  *__temp1293v=__temp67v__;
}

static inline __attribute__((always_inline)) void add__temp144v(double x, double y, double* __temp1294v) {
  int __temp145v__=0;
  double z=0;
  is_different__temp65v(x,y,&__temp145v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void inc__temp1231v(double x, double* __temp1295v) {
  int __temp1232v=0;
  uint64_t __temp1233v=0;
  double __temp1234v__=0;
  double value=0;
  int __temp1235v=0;
  int __temp1236v__=0;
  double __temp1237v__=0;
  __temp1233v=1;
  float__temp388v(__temp1233v,&__temp1234v__);
  value=__temp1234v__;
  not__temp31v(__temp1235v,&__temp1236v__);
  add__temp144v(x,value,&__temp1237v__);
  goto __temp_return;
  __temp_return:
  *__temp1295v=__temp1237v__;
}

static inline __attribute__((always_inline)) void print__temp362v(double value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp89v(uint64_t x, uint64_t y, int* __temp1296v) {
  int __temp90v=0;
  int __temp91v__=0;
  not__temp31v(__temp90v,&__temp91v__);
  goto __temp_return;
  __temp_return:
  *__temp1296v=__temp91v__;
}

static inline __attribute__((always_inline)) void add__temp166v(uint64_t x, uint64_t y, uint64_t* __temp1297v) {
  int __temp167v__=0;
  uint64_t z=0;
  is_different__temp89v(x,y,&__temp167v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) void inc__temp1243v(uint64_t x, uint64_t value, uint64_t* __temp1298v) {
  int __temp1244v=0;
  int __temp1245v=0;
  int __temp1246v__=0;
  uint64_t __temp1247v__=0;
  not__temp31v(__temp1245v,&__temp1246v__);
  add__temp166v(x,value,&__temp1247v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp1247v__;
}

static inline __attribute__((always_inline)) void print__temp370v(uint64_t value) {
  int __temp371v=0;
  const char* endl=0;
  endl=__temp359v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1282v() {
  double __temp1283v=0;
  double __temp1284v__=0;
  uint64_t __temp1286v=0;
  uint64_t __temp1287v=0;
  uint64_t __temp1288v__=0;
  __temp1283v=2.0;
  inc__temp1231v(__temp1283v,&__temp1284v__);
  print__temp362v(__temp1284v__);
  __temp1286v=2;
  __temp1287v=2;
  inc__temp1243v(__temp1286v,__temp1287v,&__temp1288v__);
  print__temp370v(__temp1288v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1282v();return 0;}