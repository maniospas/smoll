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

static inline __attribute__((always_inline)) void range__temp405v(uint64_t to, uint64_t* __temp1196v, uint64_t* __temp1197v) {
  int __temp406v=0;
  uint64_t __temp407v=0;
  uint64_t _from=0;
  uint64_t __temp408v=0;
  uint64_t from=0;
  __temp407v=0;
  _from=__temp407v;
  __temp408v=_from;
  from=__temp408v;
  goto __temp_return;
  __temp_return:
  *__temp1196v=from;
  *__temp1197v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1198v) {
  int value=0;
  *__temp1198v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp1199v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp1199v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp1200v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp1200v=__temp90v__;
}

static inline __attribute__((always_inline)) void ge__temp257v(uint64_t x, uint64_t y, char* __temp1201v) {
  int __temp258v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp258v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1201v=z;
}

static inline __attribute__((always_inline)) void add__temp113v(uint64_t x, uint64_t y, uint64_t* __temp1202v) {
  int __temp114v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp114v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1202v=z;
}

static inline __attribute__((always_inline)) int next__temp409v(uint64_t* __temp1203v, uint64_t r__to, uint64_t* __temp1204v) {
  uint64_t r__from=*__temp1203v;
  char __temp410v__=0;
  uint64_t ret=0;
  uint64_t __temp411v=0;
  uint64_t __temp412v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp257v(r__from,r__to,&__temp410v__);
  if(__temp410v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp411v=1;
  add__temp113v(ret,__temp411v,&__temp412v__);
  r__from=__temp412v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1203v=r__from;
  *__temp1204v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1186v() {
  uint64_t __temp1187v=0;
  uint64_t __temp1188v__from=0;
  uint64_t __temp1188v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __temp1189v=0;
  uint64_t __temp1190v__=0;
  uint64_t __temp1191v=0;
  uint64_t value=0;
  uint64_t __temp1193v=0;
  uint64_t __temp1194v__=0;
  int __temp_complain=0;
  __temp1187v=10;
  range__temp405v(__temp1187v,&__temp1188v__from,&__temp1188v__to);
  r__from=__temp1188v__from;
  r__to=__temp1188v__to;
  while(1){
  __temp_complain=next__temp409v(&r__from,r__to,&__temp1190v__);
  __temp1189v=__temp_complain;
  __temp1191v=__temp1190v__;
  value=__temp1191v;
  __temp1189v=__temp1189v==0;
  if(!__temp1189v){
  break;
  }
  print__temp364v(value);
  }
  __temp1193v=1;
  add__temp113v(value,__temp1193v,&__temp1194v__);
  value=__temp1194v__;
  print__temp364v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1186v();return 0;}