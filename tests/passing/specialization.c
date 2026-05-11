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

static inline __attribute__((always_inline)) void float__temp379v(uint64_t x, double* __temp1256v) {
  double z=0;
  z=x;
  goto __temp_return;
  __temp_return:
  *__temp1256v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1257v) {
  int value=0;
  *__temp1257v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1258v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1258v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1259v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  goto __temp_return;
  __temp_return:
  *__temp1259v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1260v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void inc__temp1192v(double x, double* __temp1261v) {
  int __temp1193v=0;
  uint64_t __temp1194v=0;
  double __temp1195v__=0;
  double value=0;
  int __temp1196v=0;
  int __temp1197v__=0;
  double __temp1198v__=0;
  __temp1194v=1;
  float__temp379v(__temp1194v,&__temp1195v__);
  value=__temp1195v__;
  not__temp27v(__temp1196v,&__temp1197v__);
  add__temp88v(x,value,&__temp1198v__);
  goto __temp_return;
  __temp_return:
  *__temp1261v=__temp1198v__;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1262v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1262v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1263v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1263v=z;
}

static inline __attribute__((always_inline)) void inc__temp1209v(uint64_t x, uint64_t value, uint64_t* __temp1264v) {
  int __temp1210v=0;
  int __temp1211v=0;
  int __temp1212v__=0;
  uint64_t __temp1213v__=0;
  not__temp27v(__temp1211v,&__temp1212v__);
  add__temp110v(x,value,&__temp1213v__);
  goto __temp_return;
  __temp_return:
  *__temp1264v=__temp1213v__;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1248v() {
  double __temp1249v=0;
  double __temp1250v__=0;
  uint64_t __temp1252v=0;
  uint64_t __temp1253v=0;
  uint64_t __temp1254v__=0;
  __temp1249v=2.0;
  inc__temp1192v(__temp1249v,&__temp1250v__);
  print__temp353v(__temp1250v__);
  __temp1252v=2;
  __temp1253v=2;
  inc__temp1209v(__temp1252v,__temp1253v,&__temp1254v__);
  print__temp361v(__temp1254v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1248v();return 0;}