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

static inline __attribute__((always_inline)) void float__temp377v(unsigned long long x, double* __temp1139v) {
  double z=0;
  z=x;
  *__temp1139v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1140v) {
  int value=0;
  *__temp1140v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1141v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1141v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1142v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1142v=__temp63v__;
}

static inline __attribute__((always_inline)) void mul__temp112v(double x, double y, double* __temp1143v) {
  int __temp113v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp113v__);
  z=x*y;
  *__temp1143v=z;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1144v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1144v=z;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1128v() {
  double __temp1129v=0;
  double x=0;
  unsigned long long __temp1130v=0;
  double __temp1131v__=0;
  unsigned long long __temp1132v=0;
  double __temp1133v__=0;
  double __temp1134v=0;
  double __temp1135v__=0;
  double __temp1136v__=0;
  double __temp1137v__=0;
  __temp1129v=1.0;
  x=__temp1129v;
  __temp1130v=1;
  float__temp377v(__temp1130v,&__temp1131v__);
  __temp1132v=2;
  float__temp377v(__temp1132v,&__temp1133v__);
  __temp1134v=2.0;
  mul__temp112v(__temp1133v__,__temp1134v,&__temp1135v__);
  add__temp88v(__temp1131v__,__temp1135v__,&__temp1136v__);
  add__temp88v(x,__temp1136v__,&__temp1137v__);
  print__temp351v(__temp1137v__);
}

int main() {main__temp1128v();return 0;}