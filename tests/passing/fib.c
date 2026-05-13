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
int fib__temp1186v(uint64_t n, uint64_t* __temp1212v) ;
static inline __attribute__((always_inline)) void false__temp10v(int* __temp1205v) {
  int value=0;
  *__temp1205v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1206v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1206v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1207v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1207v=__temp90v__;
}

static inline __attribute__((always_inline)) void le__temp233v(uint64_t x, uint64_t y, char* __temp1208v) {
  int __temp234v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp234v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1208v=z;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp1209v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1209v=z;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp1210v) {
  int __temp334v__=0;
  int __temp335v=0;
  int __temp336v=0;
  char __temp337v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp88v(x,y,&__temp334v__);
  lt__temp185v(x,y,&__temp337v__);
  if(__temp337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1210v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1211v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

int fib__temp1186v(uint64_t n, uint64_t* __temp1212v) {
  uint64_t __temp1195v=0;
  char __temp1196v__=0;
  uint64_t __temp1197v=0;
  uint64_t __temp1198v=0;
  uint64_t __temp1199v__=0;
  uint64_t __temp1200v__=0;
  uint64_t __temp1201v=0;
  uint64_t __temp1202v__=0;
  uint64_t __temp1203v__=0;
  uint64_t __temp1204v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1195v=1;
  le__temp233v(n,__temp1195v,&__temp1196v__);
  if(__temp1196v__){
  __temp1197v=1;
  goto __temp_return;
  }
  __temp1198v=1;
  __temp_errcode=sub__temp333v(n,__temp1198v,&__temp1199v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1186v(__temp1199v__,&__temp1200v__);
  __temp1201v=2;
  __temp_errcode=sub__temp333v(n,__temp1201v,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1186v(__temp1202v__,&__temp1203v__);
  add__temp113v(__temp1200v__,__temp1203v__,&__temp1204v__);
  __temp1197v=__temp1204v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1212v=__temp1197v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1190v() {
  uint64_t __temp1191v=0;
  uint64_t __temp1192v__=0;
  __temp1191v=10;
  fib__temp1186v(__temp1191v,&__temp1192v__);
  print__temp364v(__temp1192v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1190v();return 0;}