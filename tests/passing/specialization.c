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

static inline __attribute__((always_inline)) void float__temp379v(unsigned long long x, double* __temp1279v) {
  double z=0;
  z=x;
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1280v) {
  int value=0;
  *__temp1280v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1281v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1281v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1282v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1282v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1283v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1283v=z;
}

static inline __attribute__((always_inline)) void inc__temp1210v(double x, double* __temp1284v) {
  unsigned long long __temp1212v=0;
  double __temp1213v__=0;
  double value=0;
  int __temp1214v=0;
  int __temp1215v__=0;
  double __temp1216v__=0;
  __temp1212v=1;
  float__temp379v(__temp1212v,&__temp1213v__);
  value=__temp1213v__;
  not__temp27v(__temp1214v,&__temp1215v__);
  add__temp88v(x,value,&__temp1216v__);
  *__temp1284v=__temp1216v__;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1285v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1285v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1286v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1286v=z;
}

static inline __attribute__((always_inline)) void inc__temp1239v(unsigned long long x, unsigned long long value, unsigned long long* __temp1287v) {
  int __temp1241v=0;
  int __temp1242v__=0;
  unsigned long long __temp1243v__=0;
  not__temp27v(__temp1241v,&__temp1242v__);
  add__temp110v(x,value,&__temp1243v__);
  *__temp1287v=__temp1243v__;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1271v() {
  double __temp1272v=0;
  double __temp1273v__=0;
  unsigned long long __temp1275v=0;
  unsigned long long __temp1276v=0;
  unsigned long long __temp1277v__=0;
  __temp1272v=2.0;
  inc__temp1210v(__temp1272v,&__temp1273v__);
  print__temp353v(__temp1273v__);
  __temp1275v=2;
  __temp1276v=2;
  inc__temp1239v(__temp1275v,__temp1276v,&__temp1277v__);
  print__temp361v(__temp1277v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1271v();return 0;}