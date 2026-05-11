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
"cannot resize an unallocated buffer",
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
int fib__temp1187v(unsigned long long n, unsigned long long* __temp1213v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1206v) {
  int value=0;
  *__temp1206v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1207v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1207v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1208v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1208v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1209v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1209v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1210v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1210v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1211v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  char __temp334v__=0;
  unsigned long long z=0;
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
  *__temp1211v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1212v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

int fib__temp1187v(unsigned long long n, unsigned long long* __temp1213v) {
  unsigned long long __temp1196v=0;
  char __temp1197v__=0;
  unsigned long long __temp1198v=0;
  unsigned long long __temp1199v=0;
  unsigned long long __temp1200v__=0;
  unsigned long long __temp1201v__=0;
  unsigned long long __temp1202v=0;
  unsigned long long __temp1203v__=0;
  unsigned long long __temp1204v__=0;
  unsigned long long __temp1205v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1196v=1;
  le__temp230v(n,__temp1196v,&__temp1197v__);
  if(__temp1197v__){
  __temp1198v=1;
  goto __temp_return;
  }
  __temp1199v=1;
  __temp_errcode=sub__temp330v(n,__temp1199v,&__temp1200v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1187v(__temp1200v__,&__temp1201v__);
  __temp1202v=2;
  __temp_errcode=sub__temp330v(n,__temp1202v,&__temp1203v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1187v(__temp1203v__,&__temp1204v__);
  add__temp110v(__temp1201v__,__temp1204v__,&__temp1205v__);
  __temp1198v=__temp1205v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1213v=__temp1198v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1191v() {
  unsigned long long __temp1192v=0;
  unsigned long long __temp1193v__=0;
  __temp1192v=10;
  fib__temp1187v(__temp1192v,&__temp1193v__);
  print__temp361v(__temp1193v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1191v();return 0;}