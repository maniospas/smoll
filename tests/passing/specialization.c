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
"cannot resize a buffer with offset",
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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1320v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1320v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1321v) {
  int value=0;
  *__temp1321v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1322v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1322v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1323v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1323v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1324v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1324v=z;
}

static inline __attribute__((always_inline)) void inc__temp1261v(double x, double* __temp1325v) {
  int __temp1262v=0;
  uint64_t __temp1263v=0;
  double __temp1264v__=0;
  double value=0;
  int __temp1265v=0;
  int __temp1266v__=0;
  double __temp1267v__=0;
  __temp1263v=1;
  float__temp392v(__temp1263v,&__temp1264v__);
  value=__temp1264v__;
  not__temp35v(__temp1265v,&__temp1266v__);
  add__temp148v(x,value,&__temp1267v__);
  goto __temp_return;
  __temp_return:
  *__temp1325v=__temp1267v__;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1326v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1326v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1327v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1327v=z;
}

static inline __attribute__((always_inline)) void inc__temp1300v(uint64_t x, uint64_t value, uint64_t* __temp1328v) {
  int __temp1301v=0;
  int __temp1302v=0;
  int __temp1303v__=0;
  uint64_t __temp1304v__=0;
  not__temp35v(__temp1302v,&__temp1303v__);
  add__temp170v(x,value,&__temp1304v__);
  goto __temp_return;
  __temp_return:
  *__temp1328v=__temp1304v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1312v() {
  double __temp1313v=0;
  double __temp1314v__=0;
  uint64_t __temp1316v=0;
  uint64_t __temp1317v=0;
  uint64_t __temp1318v__=0;
  __temp1313v=2.0;
  inc__temp1261v(__temp1313v,&__temp1314v__);
  print__temp368v(__temp1314v__);
  __temp1316v=2;
  __temp1317v=2;
  inc__temp1300v(__temp1316v,__temp1317v,&__temp1318v__);
  print__temp376v(__temp1318v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1312v();return 0;}