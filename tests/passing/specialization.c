#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp348v="\n";
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

static inline __attribute__((always_inline)) void float__temp377v(unsigned long long x, double* __temp1273v) {
  double z=0;
  z=x;
  *__temp1273v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1274v) {
  int value=0;
  *__temp1274v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1275v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1275v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1276v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1276v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1277v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1277v=z;
}

static inline __attribute__((always_inline)) void inc__temp1209v(double x, double* __temp1278v) {
  unsigned long long __temp1211v=0;
  double __temp1212v__=0;
  double value=0;
  int __temp1213v=0;
  int __temp1214v__=0;
  double __temp1215v__=0;
  __temp1211v=1;
  float__temp377v(__temp1211v,&__temp1212v__);
  value=__temp1212v__;
  not__temp27v(__temp1213v,&__temp1214v__);
  add__temp88v(x,value,&__temp1215v__);
  *__temp1278v=__temp1215v__;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1279v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1279v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1280v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1280v=z;
}

static inline __attribute__((always_inline)) void inc__temp1260v(unsigned long long x, unsigned long long value, unsigned long long* __temp1281v) {
  int __temp1262v=0;
  int __temp1263v__=0;
  unsigned long long __temp1264v__=0;
  not__temp27v(__temp1262v,&__temp1263v__);
  add__temp110v(x,value,&__temp1264v__);
  *__temp1281v=__temp1264v__;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1265v() {
  double __temp1266v=0;
  double __temp1267v__=0;
  unsigned long long __temp1269v=0;
  unsigned long long __temp1270v=0;
  unsigned long long __temp1271v__=0;
  __temp1266v=2.0;
  inc__temp1209v(__temp1266v,&__temp1267v__);
  print__temp351v(__temp1267v__);
  __temp1269v=2;
  __temp1270v=2;
  inc__temp1260v(__temp1269v,__temp1270v,&__temp1271v__);
  print__temp359v(__temp1271v__);
}

int main() {main__temp1265v();return 0;}