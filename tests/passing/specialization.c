#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void float__temp391v(uint64_t x, double* __temp1293v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1293v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1294v) {
  int value=0;
  *__temp1294v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1295v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1295v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp68v(double x, double y, int* __temp1296v) {
  int __temp69v=0;
  int __temp70v__=0;
  not__temp34v(__temp69v,&__temp70v__);
  goto __temp_return;
  __temp_return:
  *__temp1296v=__temp70v__;
}

static inline __attribute__((always_inline)) void add__temp147v(double x, double y, double* __temp1297v) {
  int __temp148v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp148v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1297v=z;
}

static inline __attribute__((always_inline)) void inc__temp1234v(double x, double* __temp1298v) {
  int __temp1235v=0;
  uint64_t __temp1236v=0;
  double __temp1237v__=0;
  double value=0;
  int __temp1238v=0;
  int __temp1239v__=0;
  double __temp1240v__=0;
  __temp1236v=1;
  float__temp391v(__temp1236v,&__temp1237v__);
  value=__temp1237v__;
  not__temp34v(__temp1238v,&__temp1239v__);
  add__temp147v(x,value,&__temp1240v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp1240v__;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1299v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1299v=__temp94v__;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1300v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) void inc__temp1273v(uint64_t x, uint64_t value, uint64_t* __temp1301v) {
  int __temp1274v=0;
  int __temp1275v=0;
  int __temp1276v__=0;
  uint64_t __temp1277v__=0;
  not__temp34v(__temp1275v,&__temp1276v__);
  add__temp169v(x,value,&__temp1277v__);
  goto __temp_return;
  __temp_return:
  *__temp1301v=__temp1277v__;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1285v() {
  double __temp1286v=0;
  double __temp1287v__=0;
  uint64_t __temp1289v=0;
  uint64_t __temp1290v=0;
  uint64_t __temp1291v__=0;
  __temp1286v=2.0;
  inc__temp1234v(__temp1286v,&__temp1287v__);
  print__temp367v(__temp1287v__);
  __temp1289v=2;
  __temp1290v=2;
  inc__temp1273v(__temp1289v,__temp1290v,&__temp1291v__);
  print__temp375v(__temp1291v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1285v();return 0;}