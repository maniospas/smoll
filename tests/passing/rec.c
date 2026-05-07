#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[27] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp348v="\n";
int fib__temp1128v(unsigned long long n, unsigned long long* __temp1157v) ;
static inline __attribute__((always_inline)) void false__temp7v(int* __temp1149v) {
  int value=0;
  *__temp1149v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1150v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1150v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1151v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1151v=__temp87v__;
}

static inline __attribute__((always_inline)) void le__temp230v(unsigned long long x, unsigned long long y, int* __temp1152v) {
  int __temp231v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp231v__);
  z=x<=y?1:0;
  *__temp1152v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp1153v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp1153v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp1154v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp1154v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void call_fib__temp1132v(unsigned long long n, unsigned long long* __temp1155v) {
  unsigned long long __temp1133v__=0;
  fib__temp1128v(n,&__temp1133v__);
  *__temp1155v=__temp1133v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1156v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1156v=z;
}

int fib__temp1128v(unsigned long long n, unsigned long long* __temp1157v) {
  unsigned long long __temp1139v=0;
  int __temp1140v__=0;
  unsigned long long __temp1141v=0;
  unsigned long long __temp1142v=0;
  unsigned long long __temp1143v__=0;
  unsigned long long __temp1144v__=0;
  unsigned long long __temp1145v=0;
  unsigned long long __temp1146v__=0;
  unsigned long long __temp1147v__=0;
  unsigned long long __temp1148v__=0;
  int __temp_errcode=0;
  __temp1139v=1;
  le__temp230v(n,__temp1139v,&__temp1140v__);
  if(__temp1140v__){
  __temp1141v=1;
  goto __temp_return;
  }
  __temp1142v=1;
  __temp_errcode=sub__temp330v(n,__temp1142v,&__temp1143v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1132v(__temp1143v__,&__temp1144v__);
  __temp1145v=2;
  __temp_errcode=sub__temp330v(n,__temp1145v,&__temp1146v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  call_fib__temp1132v(__temp1146v__,&__temp1147v__);
  add__temp110v(__temp1144v__,__temp1147v__,&__temp1148v__);
  __temp1141v=__temp1148v__;
  __temp_return:
  *__temp1157v=__temp1141v;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1134v() {
  unsigned long long __temp1135v=0;
  unsigned long long __temp1136v__=0;
  __temp1135v=42;
  fib__temp1128v(__temp1135v,&__temp1136v__);
  print__temp359v(__temp1136v__);
}

int main() {main__temp1134v();return 0;}