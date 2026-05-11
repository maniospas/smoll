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
int fib__temp1225v(unsigned long long n, unsigned long long* __temp1251v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1244v) {
  int value=0;
  *__temp1244v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1245v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1245v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1246v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1246v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, char* __temp1247v) {
  int __temp231v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y;
  *__temp1247v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, char* __temp1248v) {
  int __temp183v__=0;
  char z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1249v) {
  int __temp331v__=0;
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
  *__temp1249v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1250v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1250v=z;
}

int fib__temp1225v(unsigned long long n, unsigned long long* __temp1251v) {
  unsigned long long __temp1234v=0;
  char __temp1235v__=0;
  unsigned long long __temp1236v=0;
  unsigned long long __temp1237v=0;
  unsigned long long __temp1238v__=0;
  unsigned long long __temp1239v__=0;
  unsigned long long __temp1240v=0;
  unsigned long long __temp1241v__=0;
  unsigned long long __temp1242v__=0;
  unsigned long long __temp1243v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp1234v=1;
  le__temp230v(n,__temp1234v,&__temp1235v__);
  if(__temp1235v__){
  __temp1236v=1;
  goto __temp_return;
  }
  __temp1237v=1;
  __temp_errcode=sub__temp330v(n,__temp1237v,&__temp1238v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1225v(__temp1238v__,&__temp1239v__);
  __temp1240v=2;
  __temp_errcode=sub__temp330v(n,__temp1240v,&__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  fib__temp1225v(__temp1241v__,&__temp1242v__);
  add__temp110v(__temp1239v__,__temp1242v__,&__temp1243v__);
  __temp1236v=__temp1243v__;
  *__temp1251v=__temp1236v;
  
  __temp_failure:__temp_return:
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1229v() {
  unsigned long long __temp1230v=0;
  unsigned long long __temp1231v__=0;
  __temp1230v=10;
  fib__temp1225v(__temp1230v,&__temp1231v__);
  print__temp361v(__temp1231v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1229v();return 0;}