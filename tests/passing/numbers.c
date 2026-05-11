#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
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
"character copy does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void float__temp379v(uint64_t x, double* __temp1193v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1193v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1194v) {
  int value=0;
  *__temp1194v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1195v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1195v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1196v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1196v=__temp63v__;
}

static inline __attribute__((always_inline)) void mul__temp112v(double x, double y, double* __temp1197v) {
  int __temp113v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp113v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp1197v=z;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1198v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1198v=z;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1182v() {
  double __temp1183v=0;
  double x=0;
  uint64_t __temp1184v=0;
  double __temp1185v__=0;
  uint64_t __temp1186v=0;
  double __temp1187v__=0;
  double __temp1188v=0;
  double __temp1189v__=0;
  double __temp1190v__=0;
  double __temp1191v__=0;
  __temp1183v=1.0;
  x=__temp1183v;
  __temp1184v=1;
  float__temp379v(__temp1184v,&__temp1185v__);
  __temp1186v=2;
  float__temp379v(__temp1186v,&__temp1187v__);
  __temp1188v=2.0;
  mul__temp112v(__temp1187v__,__temp1188v,&__temp1189v__);
  add__temp88v(__temp1185v__,__temp1189v__,&__temp1190v__);
  add__temp88v(x,__temp1190v__,&__temp1191v__);
  print__temp353v(__temp1191v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1182v();return 0;}