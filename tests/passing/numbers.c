#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void float__temp382v(uint64_t x, double* __temp1197v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1197v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1198v) {
  int value=0;
  *__temp1198v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1199v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1199v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp64v(double x, double y, int* __temp1200v) {
  int __temp65v=0;
  int __temp66v__=0;
  not__temp30v(__temp65v,&__temp66v__);
  goto __temp_return;
  __temp_return:
  *__temp1200v=__temp66v__;
}

static inline __attribute__((always_inline)) void mul__temp115v(double x, double y, double* __temp1201v) {
  int __temp116v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp116v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1201v=z;
}

static inline __attribute__((always_inline)) void add__temp91v(double x, double y, double* __temp1202v) {
  int __temp92v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp92v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1202v=z;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1186v() {
  double __temp1187v=0;
  double x=0;
  uint64_t __temp1188v=0;
  double __temp1189v__=0;
  uint64_t __temp1190v=0;
  double __temp1191v__=0;
  double __temp1192v=0;
  double __temp1193v__=0;
  double __temp1194v__=0;
  double __temp1195v__=0;
  __temp1187v=1.0;
  x=__temp1187v;
  __temp1188v=1;
  float__temp382v(__temp1188v,&__temp1189v__);
  __temp1190v=2;
  float__temp382v(__temp1190v,&__temp1191v__);
  __temp1192v=2.0;
  mul__temp115v(__temp1191v__,__temp1192v,&__temp1193v__);
  add__temp91v(__temp1189v__,__temp1193v__,&__temp1194v__);
  add__temp91v(x,__temp1194v__,&__temp1195v__);
  print__temp356v(__temp1195v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1186v();return 0;}