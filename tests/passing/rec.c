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
int fib__temp1182v(uint64_t n, uint64_t* __temp1211v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1203v) {
  int value=0;
  *__temp1203v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1204v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1204v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp1205v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1205v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(uint64_t x, uint64_t y, uint8_t* __temp1206v) {
  int __temp231v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1206v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp1207v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1207v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(uint64_t x, uint64_t y, uint64_t* __temp1208v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  uint8_t __temp334v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1208v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1186v(uint64_t n, uint64_t* __temp1209v) {
  uint64_t __temp1187v__=0;
  fib__temp1182v(n,&__temp1187v__);
  goto __temp_return;
  __temp_return:
  *__temp1209v=__temp1187v__;
}

static inline __attribute__((always_inline)) void add__temp110v(uint64_t x, uint64_t y, uint64_t* __temp1210v) {
  int __temp111v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1210v=z;
}

int fib__temp1182v(uint64_t n, uint64_t* __temp1211v) {
  uint64_t __temp1193v=0;
  uint8_t __temp1194v__=0;
  uint64_t __temp1195v=0;
  uint64_t __temp1196v=0;
  uint64_t __temp1197v__=0;
  uint64_t __temp1198v__=0;
  uint64_t __temp1199v=0;
  uint64_t __temp1200v__=0;
  uint64_t __temp1201v__=0;
  uint64_t __temp1202v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1193v=1;
  le__temp230v(n,__temp1193v,&__temp1194v__);
  if(__temp1194v__){
  __temp1195v=1;
  goto __temp_return;
  }
  __temp1196v=1;
  __temp_errcode=sub__temp330v(n,__temp1196v,&__temp1197v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1186v(__temp1197v__,&__temp1198v__);
  __temp1199v=2;
  __temp_errcode=sub__temp330v(n,__temp1199v,&__temp1200v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1186v(__temp1200v__,&__temp1201v__);
  add__temp110v(__temp1198v__,__temp1201v__,&__temp1202v__);
  __temp1195v=__temp1202v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1211v=__temp1195v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1188v() {
  uint64_t __temp1189v=0;
  uint64_t __temp1190v__=0;
  __temp1189v=42;
  fib__temp1182v(__temp1189v,&__temp1190v__);
  print__temp361v(__temp1190v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1188v();return 0;}