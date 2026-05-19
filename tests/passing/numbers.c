#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1259v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1259v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1260v) {
  int value=0;
  *__temp1260v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1261v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1261v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1262v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1262v=__temp71v__;
}

static inline __attribute__((always_inline)) void mul__temp172v(double x, double y, double* __temp1263v) {
  int __temp173v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp173v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1264v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1248v() {
  double __temp1249v=0;
  double x=0;
  uint64_t __temp1250v=0;
  double __temp1251v__=0;
  uint64_t __temp1252v=0;
  double __temp1253v__=0;
  double __temp1254v=0;
  double __temp1255v__=0;
  double __temp1256v__=0;
  double __temp1257v__=0;
  __temp1249v=1.0;
  x=__temp1249v;
  __temp1250v=1;
  float__temp392v(__temp1250v,&__temp1251v__);
  __temp1252v=2;
  float__temp392v(__temp1252v,&__temp1253v__);
  __temp1254v=2.0;
  mul__temp172v(__temp1253v__,__temp1254v,&__temp1255v__);
  add__temp148v(__temp1251v__,__temp1255v__,&__temp1256v__);
  add__temp148v(x,__temp1256v__,&__temp1257v__);
  print__temp368v(__temp1257v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}