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

static inline __attribute__((always_inline)) void float__temp377v(unsigned long long x, double* __temp1211v) {
  double z=0;
  z=x;
  *__temp1211v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1212v) {
  int value=0;
  *__temp1212v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1213v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1213v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1214v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1214v=__temp63v__;
}

static inline __attribute__((always_inline)) void mul__temp112v(double x, double y, double* __temp1215v) {
  int __temp113v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp113v__);
  z=x*y;
  *__temp1215v=z;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1216v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1216v=z;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1200v() {
  double __temp1201v=0;
  double x=0;
  unsigned long long __temp1202v=0;
  double __temp1203v__=0;
  unsigned long long __temp1204v=0;
  double __temp1205v__=0;
  double __temp1206v=0;
  double __temp1207v__=0;
  double __temp1208v__=0;
  double __temp1209v__=0;
  __temp1201v=1.0;
  x=__temp1201v;
  __temp1202v=1;
  float__temp377v(__temp1202v,&__temp1203v__);
  __temp1204v=2;
  float__temp377v(__temp1204v,&__temp1205v__);
  __temp1206v=2.0;
  mul__temp112v(__temp1205v__,__temp1206v,&__temp1207v__);
  add__temp88v(__temp1203v__,__temp1207v__,&__temp1208v__);
  add__temp88v(x,__temp1208v__,&__temp1209v__);
  print__temp351v(__temp1209v__);
}

int main() {main__temp1200v();return 0;}