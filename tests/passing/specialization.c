#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
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

static inline __attribute__((always_inline)) void float__temp379v(unsigned long long x, double* __temp1272v) {
  double z=0;
  z=x;
  *__temp1272v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1273v) {
  int value=0;
  *__temp1273v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1274v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1274v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1275v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1275v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1276v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1276v=z;
}

static inline __attribute__((always_inline)) void inc__temp1208v(double x, double* __temp1277v) {
  unsigned long long __temp1210v=0;
  double __temp1211v__=0;
  double value=0;
  int __temp1212v=0;
  int __temp1213v__=0;
  double __temp1214v__=0;
  __temp1210v=1;
  float__temp379v(__temp1210v,&__temp1211v__);
  value=__temp1211v__;
  not__temp27v(__temp1212v,&__temp1213v__);
  add__temp88v(x,value,&__temp1214v__);
  *__temp1277v=__temp1214v__;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1278v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1278v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1279v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1279v=z;
}

static inline __attribute__((always_inline)) void inc__temp1225v(unsigned long long x, unsigned long long value, unsigned long long* __temp1280v) {
  int __temp1227v=0;
  int __temp1228v__=0;
  unsigned long long __temp1229v__=0;
  not__temp27v(__temp1227v,&__temp1228v__);
  add__temp110v(x,value,&__temp1229v__);
  *__temp1280v=__temp1229v__;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1264v() {
  double __temp1265v=0;
  double __temp1266v__=0;
  unsigned long long __temp1268v=0;
  unsigned long long __temp1269v=0;
  unsigned long long __temp1270v__=0;
  __temp1265v=2.0;
  inc__temp1208v(__temp1265v,&__temp1266v__);
  print__temp353v(__temp1266v__);
  __temp1268v=2;
  __temp1269v=2;
  inc__temp1225v(__temp1268v,__temp1269v,&__temp1270v__);
  print__temp361v(__temp1270v__);
}

int main() {main__temp1264v();return 0;}