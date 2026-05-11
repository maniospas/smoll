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
int fib__temp1187v(unsigned long long n, unsigned long long* __temp1216v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1208v) {
  int value=0;
  *__temp1208v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1209v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp1209v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1210v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp1210v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1211v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  goto __temp_return;
  __temp_return:
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1212v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp1212v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1213v) {
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
  *__temp1213v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1191v(unsigned long long n, unsigned long long* __temp1214v) {
  unsigned long long __temp1192v__=0;
  fib__temp1187v(n,&__temp1192v__);
  goto __temp_return;
  __temp_return:
  *__temp1214v=__temp1192v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1215v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1215v=z;
}

int fib__temp1187v(unsigned long long n, unsigned long long* __temp1216v) {
  unsigned long long __temp1198v=0;
  char __temp1199v__=0;
  unsigned long long __temp1200v=0;
  unsigned long long __temp1201v=0;
  unsigned long long __temp1202v__=0;
  unsigned long long __temp1203v__=0;
  unsigned long long __temp1204v=0;
  unsigned long long __temp1205v__=0;
  unsigned long long __temp1206v__=0;
  unsigned long long __temp1207v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1198v=1;
  le__temp230v(n,__temp1198v,&__temp1199v__);
  if(__temp1199v__){
  __temp1200v=1;
  goto __temp_return;
  }
  __temp1201v=1;
  __temp_errcode=sub__temp330v(n,__temp1201v,&__temp1202v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1191v(__temp1202v__,&__temp1203v__);
  __temp1204v=2;
  __temp_errcode=sub__temp330v(n,__temp1204v,&__temp1205v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1191v(__temp1205v__,&__temp1206v__);
  add__temp110v(__temp1203v__,__temp1206v__,&__temp1207v__);
  __temp1200v=__temp1207v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1216v=__temp1200v;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1193v() {
  unsigned long long __temp1194v=0;
  unsigned long long __temp1195v__=0;
  __temp1194v=42;
  fib__temp1187v(__temp1194v,&__temp1195v__);
  print__temp361v(__temp1195v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1193v();return 0;}