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

static inline __attribute__((always_inline)) void float__temp382v(uint64_t x, double* __temp1260v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1261v) {
  int value=0;
  *__temp1261v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1262v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1262v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp64v(double x, double y, int* __temp1263v) {
  int __temp65v=0;
  int __temp66v__=0;
  not__temp30v(__temp65v,&__temp66v__);
  goto __temp_return;
  __temp_return:
  *__temp1263v=__temp66v__;
}

static inline __attribute__((always_inline)) void add__temp91v(double x, double y, double* __temp1264v) {
  int __temp92v__=0;
  double z=0;
  is_different__temp64v(x,y,&__temp92v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1264v=z;
}

static inline __attribute__((always_inline)) void inc__temp1201v(double x, double* __temp1265v) {
  int __temp1202v=0;
  uint64_t __temp1203v=0;
  double __temp1204v__=0;
  double value=0;
  int __temp1205v=0;
  int __temp1206v__=0;
  double __temp1207v__=0;
  __temp1203v=1;
  float__temp382v(__temp1203v,&__temp1204v__);
  value=__temp1204v__;
  not__temp30v(__temp1205v,&__temp1206v__);
  add__temp91v(x,value,&__temp1207v__);
  goto __temp_return;
  __temp_return:
  *__temp1265v=__temp1207v__;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1266v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1266v=__temp90v__;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1267v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1267v=z;
}

static inline __attribute__((always_inline)) void inc__temp1240v(uint64_t x, uint64_t value, uint64_t* __temp1268v) {
  int __temp1241v=0;
  int __temp1242v=0;
  int __temp1243v__=0;
  uint64_t __temp1244v__=0;
  not__temp30v(__temp1242v,&__temp1243v__);
  add__temp113v(x,value,&__temp1244v__);
  goto __temp_return;
  __temp_return:
  *__temp1268v=__temp1244v__;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1252v() {
  double __temp1253v=0;
  double __temp1254v__=0;
  uint64_t __temp1256v=0;
  uint64_t __temp1257v=0;
  uint64_t __temp1258v__=0;
  __temp1253v=2.0;
  inc__temp1201v(__temp1253v,&__temp1254v__);
  print__temp356v(__temp1254v__);
  __temp1256v=2;
  __temp1257v=2;
  inc__temp1240v(__temp1256v,__temp1257v,&__temp1258v__);
  print__temp364v(__temp1258v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1252v();return 0;}