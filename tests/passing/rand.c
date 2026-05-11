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

static inline __attribute__((always_inline)) void splitmix64__temp1189v(unsigned long long* __temp1226v) {
  char* ts=0;
  unsigned long long seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1226v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1188v(unsigned long long* __temp1227v, unsigned long long* __temp1228v) {
  unsigned long long x=*__temp1227v;
  unsigned long long z=0;
  unsigned long long rot=0;
  x=x+0x9E3779B97F4A7C15ULL;
  z=x;
  rot=z>>30;
  z=z^rot;
  z=z*0xBF58476D1CE4E5B9ULL;
  rot=z>>27;
  z=z^rot;
  z=z*0x94D049BB133111EBULL;
  rot=z>>31;
  z=z^rot;
  goto __temp_return;
  __temp_return:
  *__temp1227v=x;
  *__temp1228v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1202v(unsigned long long* __temp1229v, unsigned long long* __temp1230v, unsigned long long* __temp1231v, unsigned long long* __temp1232v) {
  int __temp1203v=0;
  unsigned long long __temp1204v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1205v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1206v__=0;
  unsigned long long __temp1207v=0;
  unsigned long long s0=0;
  unsigned long long __temp1208v__=0;
  unsigned long long __temp1209v=0;
  unsigned long long s1=0;
  unsigned long long __temp1210v__=0;
  unsigned long long __temp1211v=0;
  unsigned long long s2=0;
  unsigned long long __temp1212v__=0;
  unsigned long long __temp1213v=0;
  unsigned long long s3=0;
  splitmix64__temp1189v(&__temp1204v__);
  seed=__temp1204v__;
  __temp1205v=seed;
  modifying_seed=__temp1205v;
  splitmix64__temp1188v(&modifying_seed,&__temp1206v__);
  __temp1207v=__temp1206v__;
  s0=__temp1207v;
  splitmix64__temp1188v(&modifying_seed,&__temp1208v__);
  __temp1209v=__temp1208v__;
  s1=__temp1209v;
  splitmix64__temp1188v(&modifying_seed,&__temp1210v__);
  __temp1211v=__temp1210v__;
  s2=__temp1211v;
  splitmix64__temp1188v(&modifying_seed,&__temp1212v__);
  __temp1213v=__temp1212v__;
  s3=__temp1213v;
  goto __temp_return;
  __temp_return:
  *__temp1229v=s0;
  *__temp1230v=s1;
  *__temp1231v=s2;
  *__temp1232v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1187v(unsigned long long x, unsigned long long k, unsigned long long* __temp1233v) {
  unsigned long long left=0;
  unsigned long long compk=0;
  unsigned long long right=0;
  unsigned long long z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  goto __temp_return;
  __temp_return:
  *__temp1233v=z;
}

static inline __attribute__((always_inline)) void next__temp1218v(unsigned long long* __temp1234v, unsigned long long* __temp1235v, unsigned long long* __temp1236v, unsigned long long* __temp1237v, double* __temp1238v) {
  unsigned long long self__s0=*__temp1234v;
  unsigned long long self__s1=*__temp1235v;
  unsigned long long self__s2=*__temp1236v;
  unsigned long long self__s3=*__temp1237v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1219v=0;
  unsigned long long __temp1220v__=0;
  double denom=0;
  double nom=0;
  double value=0;
  result=self__s0+self__s3;
  t=self__s1<<17;
  self__s2=self__s2^self__s0;
  self__s3=self__s3^self__s1;
  self__s1=self__s1^self__s2;
  self__s0=self__s0^self__s3;
  self__s2=self__s2^t;
  __temp1219v=45;
  rotl__temp1187v(self__s3,__temp1219v,&__temp1220v__);
  self__s3=__temp1220v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1234v=self__s0;
  *__temp1235v=self__s1;
  *__temp1236v=self__s2;
  *__temp1237v=self__s3;
  *__temp1238v=value;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1221v() {
  unsigned long long __temp1222v__s0=0;
  unsigned long long __temp1222v__s1=0;
  unsigned long long __temp1222v__s2=0;
  unsigned long long __temp1222v__s3=0;
  unsigned long long __temp1223v__s0=0;
  unsigned long long __temp1223v__s1=0;
  unsigned long long __temp1223v__s2=0;
  unsigned long long __temp1223v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1224v__=0;
  Rand__temp1202v(&__temp1222v__s0,&__temp1222v__s1,&__temp1222v__s2,&__temp1222v__s3);
  __temp1223v__s0=__temp1222v__s0;
  __temp1223v__s1=__temp1222v__s1;
  __temp1223v__s2=__temp1222v__s2;
  __temp1223v__s3=__temp1222v__s3;
  rand__s0=__temp1223v__s0;
  rand__s1=__temp1223v__s1;
  rand__s2=__temp1223v__s2;
  rand__s3=__temp1223v__s3;
  next__temp1218v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1224v__);
  print__temp353v(__temp1224v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1221v();return 0;}