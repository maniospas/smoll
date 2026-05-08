#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void float__temp377v(unsigned long long x, double* __temp1274v) {
  double z=0;
  z=x;
  *__temp1274v=z;
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp1275v) {
  int value=0;
  *__temp1275v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp1276v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp1276v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp61v(double x, double y, int* __temp1277v) {
  int __temp62v=0;
  int __temp63v__=0;
  not__temp27v(__temp62v,&__temp63v__);
  *__temp1277v=__temp63v__;
}

static inline __attribute__((always_inline)) void add__temp88v(double x, double y, double* __temp1278v) {
  int __temp89v__=0;
  double z=0;
  is_different__temp61v(x,y,&__temp89v__);
  z=x+y;
  *__temp1278v=z;
}

static inline __attribute__((always_inline)) void inc__temp1210v(double x, double* __temp1279v) {
  unsigned long long __temp1212v=0;
  double __temp1213v__=0;
  double value=0;
  int __temp1214v=0;
  int __temp1215v__=0;
  double __temp1216v__=0;
  __temp1212v=1;
  float__temp377v(__temp1212v,&__temp1213v__);
  value=__temp1213v__;
  not__temp27v(__temp1214v,&__temp1215v__);
  add__temp88v(x,value,&__temp1216v__);
  *__temp1279v=__temp1216v__;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp1280v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp1280v=__temp87v__;
}

static inline __attribute__((always_inline)) void add__temp110v(unsigned long long x, unsigned long long y, unsigned long long* __temp1281v) {
  int __temp111v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp111v__);
  z=x+y;
  *__temp1281v=z;
}

static inline __attribute__((always_inline)) void inc__temp1261v(unsigned long long x, unsigned long long value, unsigned long long* __temp1282v) {
  int __temp1263v=0;
  int __temp1264v__=0;
  unsigned long long __temp1265v__=0;
  not__temp27v(__temp1263v,&__temp1264v__);
  add__temp110v(x,value,&__temp1265v__);
  *__temp1282v=__temp1265v__;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1266v() {
  double __temp1267v=0;
  double __temp1268v__=0;
  unsigned long long __temp1270v=0;
  unsigned long long __temp1271v=0;
  unsigned long long __temp1272v__=0;
  __temp1267v=2.0;
  inc__temp1210v(__temp1267v,&__temp1268v__);
  print__temp351v(__temp1268v__);
  __temp1270v=2;
  __temp1271v=2;
  inc__temp1261v(__temp1270v,__temp1271v,&__temp1272v__);
  print__temp359v(__temp1272v__);
}

int main() {main__temp1266v();return 0;}