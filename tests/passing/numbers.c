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

static inline __attribute__((always_inline)) void float__temp379v(unsigned long long x, double* __temp1236v) {
  double z=0;
  z=x;
  *__temp1236v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1237v) {
  int value=0;
  *__temp1237v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1238v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1238v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1239v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1239v=__temp63v__;
}

static inline __attribute__((always_inline)) void mul__temp112v(double x, double y, double* __temp1240v) {
  int __temp113v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp113v__);
  z=x*y;
  *__temp1240v=z;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1241v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1225v() {
  double __temp1226v=0;
  double x=0;
  unsigned long long __temp1227v=0;
  double __temp1228v__=0;
  unsigned long long __temp1229v=0;
  double __temp1230v__=0;
  double __temp1231v=0;
  double __temp1232v__=0;
  double __temp1233v__=0;
  double __temp1234v__=0;
  __temp1226v=1.0;
  x=__temp1226v;
  __temp1227v=1;
  float__temp379v(__temp1227v,&__temp1228v__);
  __temp1229v=2;
  float__temp379v(__temp1229v,&__temp1230v__);
  __temp1231v=2.0;
  mul__temp112v(__temp1230v__,__temp1231v,&__temp1232v__);
  add__temp88v(__temp1228v__,__temp1232v__,&__temp1233v__);
  add__temp88v(x,__temp1233v__,&__temp1234v__);
  print__temp353v(__temp1234v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1225v();return 0;}