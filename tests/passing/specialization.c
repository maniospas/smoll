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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1324v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1324v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1325v) {
  int value=0;
  *__temp1325v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1326v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1326v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1327v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1327v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1328v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1328v=z;
}

static inline __attribute__((always_inline)) void inc__temp1265v(double x, double* __temp1329v) {
  int __temp1266v=0;
  uint64_t __temp1267v=0;
  double __temp1268v__=0;
  double value=0;
  int __temp1269v=0;
  int __temp1270v__=0;
  double __temp1271v__=0;
  __temp1267v=1;
  float__temp392v(__temp1267v,&__temp1268v__);
  value=__temp1268v__;
  not__temp35v(__temp1269v,&__temp1270v__);
  add__temp148v(x,value,&__temp1271v__);
  goto __temp_return;
  __temp_return:
  *__temp1329v=__temp1271v__;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1330v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1330v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1331v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1331v=z;
}

static inline __attribute__((always_inline)) void inc__temp1304v(uint64_t x, uint64_t value, uint64_t* __temp1332v) {
  int __temp1305v=0;
  int __temp1306v=0;
  int __temp1307v__=0;
  uint64_t __temp1308v__=0;
  not__temp35v(__temp1306v,&__temp1307v__);
  add__temp170v(x,value,&__temp1308v__);
  goto __temp_return;
  __temp_return:
  *__temp1332v=__temp1308v__;
}

static inline __attribute__((always_inline)) void print__temp376v(uint64_t value) {
  int __temp377v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1316v() {
  double __temp1317v=0;
  double __temp1318v__=0;
  uint64_t __temp1320v=0;
  uint64_t __temp1321v=0;
  uint64_t __temp1322v__=0;
  __temp1317v=2.0;
  inc__temp1265v(__temp1317v,&__temp1318v__);
  print__temp368v(__temp1318v__);
  __temp1320v=2;
  __temp1321v=2;
  inc__temp1304v(__temp1320v,__temp1321v,&__temp1322v__);
  print__temp376v(__temp1322v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1316v();return 0;}