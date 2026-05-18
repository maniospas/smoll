#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[34] = {"noerr",
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
"cannot resize a buffer offset",
"cannot resize a buffer with spacing",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1258v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1258v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1259v) {
  int value=0;
  *__temp1259v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1260v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1260v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1261v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1261v=__temp71v__;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1262v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1262v=z;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1263v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1247v() {
  double __temp1248v=0;
  double x=0;
  uint64_t __temp1249v=0;
  double __temp1250v__=0;
  uint64_t __temp1251v=0;
  double __temp1252v__=0;
  double __temp1253v=0;
  double __temp1254v__=0;
  double __temp1255v__=0;
  double __temp1256v__=0;
  __temp1248v=1.0;
  x=__temp1248v;
  __temp1249v=1;
  float__temp392v(__temp1249v,&__temp1250v__);
  __temp1251v=2;
  float__temp392v(__temp1251v,&__temp1252v__);
  __temp1253v=2.0;
  mul__temp172v(__temp1252v__,__temp1253v,&__temp1254v__);
  add__temp148v(__temp1250v__,__temp1254v__,&__temp1255v__);
  add__temp148v(x,__temp1255v__,&__temp1256v__);
  print__temp368v(__temp1256v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1247v();return 0;}