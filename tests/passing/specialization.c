#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1296v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1297v) {
  int value=0;
  *__temp1297v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1298v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1298v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1299v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1299v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1300v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1300v=z;
}

static inline __attribute__((always_inline)) void inc__temp1237v(double x, double* __temp1301v) {
  int __temp1238v=0;
  uint64_t __temp1239v=0;
  double __temp1240v__=0;
  double value=0;
  int __temp1241v=0;
  int __temp1242v__=0;
  double __temp1243v__=0;
  __temp1239v=1;
  float__temp392v(__temp1239v,&__temp1240v__);
  value=__temp1240v__;
  not__temp35v(__temp1241v,&__temp1242v__);
  add__temp148v(x,value,&__temp1243v__);
  goto __temp_return;
  __temp_return:
  *__temp1301v=__temp1243v__;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1302v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1302v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1303v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) void inc__temp1276v(uint64_t x, uint64_t value, uint64_t* __temp1304v) {
  int __temp1277v=0;
  int __temp1278v=0;
  int __temp1279v__=0;
  uint64_t __temp1280v__=0;
  not__temp35v(__temp1278v,&__temp1279v__);
  add__temp170v(x,value,&__temp1280v__);
  goto __temp_return;
  __temp_return:
  *__temp1304v=__temp1280v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1288v() {
  double __temp1289v=0;
  double __temp1290v__=0;
  uint64_t __temp1292v=0;
  uint64_t __temp1293v=0;
  uint64_t __temp1294v__=0;
  __temp1289v=2.0;
  inc__temp1237v(__temp1289v,&__temp1290v__);
  print__temp368v(__temp1290v__);
  __temp1292v=2;
  __temp1293v=2;
  inc__temp1276v(__temp1292v,__temp1293v,&__temp1294v__);
  print__temp376v(__temp1294v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1288v();return 0;}