#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated buffer",
"out of bounds",
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
"string buffer out of memory",
"string out of bounds",
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

static inline __attribute__((always_inline)) void float__temp379v(unsigned long long x, double* __temp1299v) {
  double z=0;
  z=x;
  *__temp1299v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1300v) {
  int value=0;
  *__temp1300v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1301v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1301v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1302v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1302v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1303v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1303v=z;
}

static inline __attribute__((always_inline)) void inc__temp1230v(double x, double* __temp1304v) {
  unsigned long long __temp1232v=0;
  double __temp1233v__=0;
  double value=0;
  int __temp1234v=0;
  int __temp1235v__=0;
  double __temp1236v__=0;
  __temp1232v=1;
  float__temp379v(__temp1232v,&__temp1233v__);
  value=__temp1233v__;
  not__temp27v(__temp1234v,&__temp1235v__);
  add__temp88v(x,value,&__temp1236v__);
  *__temp1304v=__temp1236v__;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1305v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1305v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1306v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1306v=z;
}

static inline __attribute__((always_inline)) void inc__temp1286v(unsigned long long x, unsigned long long value, unsigned long long* __temp1307v) {
  int __temp1288v=0;
  int __temp1289v__=0;
  unsigned long long __temp1290v__=0;
  not__temp27v(__temp1288v,&__temp1289v__);
  add__temp110v(x,value,&__temp1290v__);
  *__temp1307v=__temp1290v__;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1291v() {
  double __temp1292v=0;
  double __temp1293v__=0;
  unsigned long long __temp1295v=0;
  unsigned long long __temp1296v=0;
  unsigned long long __temp1297v__=0;
  __temp1292v=2.0;
  inc__temp1230v(__temp1292v,&__temp1293v__);
  print__temp353v(__temp1293v__);
  __temp1295v=2;
  __temp1296v=2;
  inc__temp1286v(__temp1295v,__temp1296v,&__temp1297v__);
  print__temp361v(__temp1297v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1291v();return 0;}