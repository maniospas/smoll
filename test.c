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
const char* const __temp350v="\n";

static inline __attribute__((always_inline)) void float__temp377v(unsigned long long x, double* __temp1202v) {
  double z=0;
  z=x;
  *__temp1202v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1203v) {
  int value=0;
  *__temp1203v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1204v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1204v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1205v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1205v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1206v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1206v=z;
}

static inline __attribute__((always_inline)) void inc__temp1143v(double x, double* __temp1207v) {
  unsigned long long __temp1145v=0;
  double __temp1146v__=0;
  double value=0;
  int __temp1147v=0;
  int __temp1148v__=0;
  double __temp1149v__=0;
  __temp1145v=1;
  float__temp377v(__temp1145v,&__temp1146v__);
  value=__temp1146v__;
  not__temp27v(__temp1147v,&__temp1148v__);
  add__temp88v(x,value,&__temp1149v__);
  *__temp1207v=__temp1149v__;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1208v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1208v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1209v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1209v=z;
}

static inline __attribute__((always_inline)) void inc__temp1182v(unsigned long long x, unsigned long long value, unsigned long long* __temp1210v) {
  int __temp1184v=0;
  int __temp1185v__=0;
  unsigned long long __temp1186v__=0;
  not__temp27v(__temp1184v,&__temp1185v__);
  add__temp110v(x,value,&__temp1186v__);
  *__temp1210v=__temp1186v__;
}

static inline __attribute__((always_inline)) void print__temp361v(unsigned long long value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1194v() {
  double __temp1195v=0;
  double __temp1196v__=0;
  unsigned long long __temp1198v=0;
  unsigned long long __temp1199v=0;
  unsigned long long __temp1200v__=0;
  __temp1195v=2.0;
  inc__temp1143v(__temp1195v,&__temp1196v__);
  print__temp353v(__temp1196v__);
  __temp1198v=2;
  __temp1199v=2;
  inc__temp1182v(__temp1198v,__temp1199v,&__temp1200v__);
  print__temp361v(__temp1200v__);
}

int main() {main__temp1194v();return 0;}