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

static inline __attribute__((always_inline)) void float__temp391v(uint64_t x, double* __temp1230v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1230v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1231v) {
  int value=0;
  *__temp1231v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1232v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1232v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp68v(double x, double y, int* __temp1233v) {
  int __temp69v=0;
  int __temp70v__=0;
  not__temp34v(__temp69v,&__temp70v__);
  goto __temp_return;
  __temp_return:
  *__temp1233v=__temp70v__;
}

static inline __attribute__((always_inline)) void mul__temp171v(double x, double y, double* __temp1234v) {
  int __temp172v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp172v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1234v=z;
}

static inline __attribute__((always_inline)) void add__temp147v(double x, double y, double* __temp1235v) {
  int __temp148v__=0;
  double z=0;
  is_different__temp68v(x,y,&__temp148v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1235v=z;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1219v() {
  double __temp1220v=0;
  double x=0;
  uint64_t __temp1221v=0;
  double __temp1222v__=0;
  uint64_t __temp1223v=0;
  double __temp1224v__=0;
  double __temp1225v=0;
  double __temp1226v__=0;
  double __temp1227v__=0;
  double __temp1228v__=0;
  __temp1220v=1.0;
  x=__temp1220v;
  __temp1221v=1;
  float__temp391v(__temp1221v,&__temp1222v__);
  __temp1223v=2;
  float__temp391v(__temp1223v,&__temp1224v__);
  __temp1225v=2.0;
  mul__temp171v(__temp1224v__,__temp1225v,&__temp1226v__);
  add__temp147v(__temp1222v__,__temp1226v__,&__temp1227v__);
  add__temp147v(x,__temp1227v__,&__temp1228v__);
  print__temp367v(__temp1228v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1219v();return 0;}