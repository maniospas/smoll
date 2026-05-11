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

static inline __attribute__((always_inline)) void range__temp402v(uint64_t to, uint64_t* __temp1192v, uint64_t* __temp1193v) {
  int __temp403v=0;
  uint64_t __temp404v=0;
  uint64_t _from=0;
  uint64_t __temp405v=0;
  uint64_t from=0;
  __temp404v=0;
  _from=__temp404v;
  __temp405v=_from;
  from=__temp405v;
  goto __temp_return;
  __temp_return:
  *__temp1192v=from;
  *__temp1193v=to;
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

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1196v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1196v=__temp87v__;
}

static inline __attribute__((always_inline)) void ge__temp254v(uint64_t x, uint64_t y, uint8_t* __temp1197v) {
  int __temp255v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp255v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1197v=z;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1198v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1198v=z;
}

static inline __attribute__((always_inline)) int next__temp406v(uint64_t* __temp1199v, uint64_t r__to, uint64_t* __temp1200v) {
  uint64_t r__from=*__temp1199v;
  uint8_t __temp407v__=0;
  uint64_t ret=0;
  uint64_t __temp408v=0;
  uint64_t __temp409v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp254v(r__from,r__to,&__temp407v__);
  if(__temp407v__){
  __temp_errcode=5;
  goto __temp_failure;
  }
  ret=r__from;
  __temp408v=1;
  add__temp110v(ret,__temp408v,&__temp409v__);
  r__from=__temp409v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1199v=r__from;
  *__temp1200v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1182v() {
  uint64_t __temp1183v=0;
  uint64_t __temp1184v__from=0;
  uint64_t __temp1184v__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  uint8_t __temp1185v=0;
  uint64_t __temp1186v__=0;
  uint64_t __temp1187v=0;
  uint64_t value=0;
  uint64_t __temp1189v=0;
  uint64_t __temp1190v__=0;
  int __temp_complain=0;
  __temp1183v=10;
  range__temp402v(__temp1183v,&__temp1184v__from,&__temp1184v__to);
  r__from=__temp1184v__from;
  r__to=__temp1184v__to;
  while(1){
  __temp_complain=next__temp406v(&r__from,r__to,&__temp1186v__);
  __temp1185v=__temp_complain;
  __temp1187v=__temp1186v__;
  value=__temp1187v;
  __temp1185v=__temp1185v==0;
  if(!__temp1185v){
  break;
  }
  print__temp361v(value);
  }
  __temp1189v=1;
  add__temp110v(value,__temp1189v,&__temp1190v__);
  value=__temp1190v__;
  print__temp361v(value);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1182v();return 0;}