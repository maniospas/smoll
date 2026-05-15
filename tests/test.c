#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative int to id",
"cannot convert negative float to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1245v) {
  int value=0;
  *__temp1245v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1246v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(double x, double y, int* __temp1247v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1247v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(double x, double y, double* __temp1248v) {
  int __temp171v__=0;
  double z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void inc__temp1226v(double x, double* __temp1249v) {
  double __temp1227v=0;
  double __temp1228v__=0;
  __temp1227v=1.0;
  add__temp170v(__temp1227v,x,&__temp1228v__);
  goto __temp_return;
  __temp_return:
  *__temp1249v=__temp1228v__;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void float__temp392v(double x, double* __temp1250v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1250v=z;
}

static inline __attribute__((always_inline)) void inc__temp1230v(double a__x, double a__y, double* __temp1251v, double* __temp1252v) {
  double __temp1231v=0;
  double __temp1232v__=0;
  double __temp1233v__=0;
  double x=0;
  double __temp1234v=0;
  double __temp1235v__=0;
  double __temp1236v__=0;
  double y=0;
  __temp1231v=1.0;
  float__temp392v(a__x,&__temp1232v__);
  add__temp170v(__temp1231v,__temp1232v__,&__temp1233v__);
  x=__temp1233v__;
  __temp1234v=1.0;
  float__temp392v(a__y,&__temp1235v__);
  add__temp170v(__temp1234v,__temp1235v__,&__temp1236v__);
  y=__temp1236v__;
  goto __temp_return;
  __temp_return:
  *__temp1251v=x;
  *__temp1252v=y;
}

static inline __attribute__((always_inline)) void main__temp1237v() {
  double __temp1238v=0;
  double __temp1239v__=0;
  double __temp1241v=0;
  double __temp1242v=0;
  double __temp1243v__x=0;
  double __temp1243v__y=0;
  __temp1238v=1.0;
  inc__temp1226v(__temp1238v,&__temp1239v__);
  print__temp366v(__temp1239v__);
  __temp1241v=4.0;
  __temp1242v=4.0;
  inc__temp1230v(__temp1241v,__temp1242v,&__temp1243v__x,&__temp1243v__y);
  print__temp366v(__temp1243v__x);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1237v();return 0;}