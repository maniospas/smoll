#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
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

static inline __attribute__((always_inline)) void float__temp392v(uint64_t x, double* __temp1294v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1294v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1295v) {
  int value=0;
  *__temp1295v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1296v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1296v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp69v(double x, double y, int* __temp1297v) {
  int __temp70v=0;
  int __temp71v__=0;
  not__temp35v(__temp70v,&__temp71v__);
  goto __temp_return;
  __temp_return:
  *__temp1297v=__temp71v__;
}

static inline __attribute__((always_inline)) void add__temp148v(double x, double y, double* __temp1298v) {
  int __temp149v__=0;
  double z=0;
  is_different__temp69v(x,y,&__temp149v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1298v=z;
}

static inline __attribute__((always_inline)) void inc__temp1235v(double x, double* __temp1299v) {
  int __temp1236v=0;
  uint64_t __temp1237v=0;
  double __temp1238v__=0;
  double value=0;
  int __temp1239v=0;
  int __temp1240v__=0;
  double __temp1241v__=0;
  __temp1237v=1;
  float__temp392v(__temp1237v,&__temp1238v__);
  value=__temp1238v__;
  not__temp35v(__temp1239v,&__temp1240v__);
  add__temp148v(x,value,&__temp1241v__);
  goto __temp_return;
  __temp_return:
  *__temp1299v=__temp1241v__;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1300v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1300v=__temp95v__;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1301v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1301v=z;
}

static inline __attribute__((always_inline)) void inc__temp1247v(uint64_t x, uint64_t value, uint64_t* __temp1302v) {
  int __temp1248v=0;
  int __temp1249v=0;
  int __temp1250v__=0;
  uint64_t __temp1251v__=0;
  not__temp35v(__temp1249v,&__temp1250v__);
  add__temp170v(x,value,&__temp1251v__);
  goto __temp_return;
  __temp_return:
  *__temp1302v=__temp1251v__;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1286v() {
  double __temp1287v=0;
  double __temp1288v__=0;
  uint64_t __temp1290v=0;
  uint64_t __temp1291v=0;
  uint64_t __temp1292v__=0;
  __temp1287v=2.0;
  inc__temp1235v(__temp1287v,&__temp1288v__);
  print__temp366v(__temp1288v__);
  __temp1290v=2;
  __temp1291v=2;
  inc__temp1247v(__temp1290v,__temp1291v,&__temp1292v__);
  print__temp374v(__temp1292v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1286v();return 0;}