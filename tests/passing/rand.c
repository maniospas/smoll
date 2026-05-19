#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[33] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void splitmix64__temp1248v(uint64_t* __temp1285v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1285v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1247v(uint64_t* __temp1286v, uint64_t* __temp1287v) {
  uint64_t x=*__temp1286v;
  uint64_t z=0;
  uint64_t rot=0;
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
  *__temp1286v=x;
  *__temp1287v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1261v(uint64_t* __temp1288v, uint64_t* __temp1289v, uint64_t* __temp1290v, uint64_t* __temp1291v) {
  int __temp1262v=0;
  uint64_t __temp1263v__=0;
  uint64_t seed=0;
  uint64_t __temp1264v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1265v__=0;
  uint64_t __temp1266v=0;
  uint64_t s0=0;
  uint64_t __temp1267v__=0;
  uint64_t __temp1268v=0;
  uint64_t s1=0;
  uint64_t __temp1269v__=0;
  uint64_t __temp1270v=0;
  uint64_t s2=0;
  uint64_t __temp1271v__=0;
  uint64_t __temp1272v=0;
  uint64_t s3=0;
  splitmix64__temp1248v(&__temp1263v__);
  seed=__temp1263v__;
  __temp1264v=seed;
  modifying_seed=__temp1264v;
  splitmix64__temp1247v(&modifying_seed,&__temp1265v__);
  __temp1266v=__temp1265v__;
  s0=__temp1266v;
  splitmix64__temp1247v(&modifying_seed,&__temp1267v__);
  __temp1268v=__temp1267v__;
  s1=__temp1268v;
  splitmix64__temp1247v(&modifying_seed,&__temp1269v__);
  __temp1270v=__temp1269v__;
  s2=__temp1270v;
  splitmix64__temp1247v(&modifying_seed,&__temp1271v__);
  __temp1272v=__temp1271v__;
  s3=__temp1272v;
  goto __temp_return;
  __temp_return:
  *__temp1288v=s0;
  *__temp1289v=s1;
  *__temp1290v=s2;
  *__temp1291v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1246v(uint64_t x, uint64_t k, uint64_t* __temp1292v) {
  uint64_t left=0;
  uint64_t compk=0;
  uint64_t right=0;
  uint64_t z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  goto __temp_return;
  __temp_return:
  *__temp1292v=z;
}

static inline __attribute__((always_inline)) void next__temp1277v(uint64_t* __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v, uint64_t* __temp1296v, double* __temp1297v) {
  uint64_t self__s0=*__temp1293v;
  uint64_t self__s1=*__temp1294v;
  uint64_t self__s2=*__temp1295v;
  uint64_t self__s3=*__temp1296v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1278v=0;
  uint64_t __temp1279v__=0;
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
  __temp1278v=45;
  rotl__temp1246v(self__s3,__temp1278v,&__temp1279v__);
  self__s3=__temp1279v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1293v=self__s0;
  *__temp1294v=self__s1;
  *__temp1295v=self__s2;
  *__temp1296v=self__s3;
  *__temp1297v=value;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1280v() {
  uint64_t __temp1281v__s0=0;
  uint64_t __temp1281v__s1=0;
  uint64_t __temp1281v__s2=0;
  uint64_t __temp1281v__s3=0;
  uint64_t __temp1282v__s0=0;
  uint64_t __temp1282v__s1=0;
  uint64_t __temp1282v__s2=0;
  uint64_t __temp1282v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1283v__=0;
  Rand__temp1261v(&__temp1281v__s0,&__temp1281v__s1,&__temp1281v__s2,&__temp1281v__s3);
  __temp1282v__s0=__temp1281v__s0;
  __temp1282v__s1=__temp1281v__s1;
  __temp1282v__s2=__temp1281v__s2;
  __temp1282v__s3=__temp1281v__s3;
  rand__s0=__temp1282v__s0;
  rand__s1=__temp1282v__s1;
  rand__s2=__temp1282v__s2;
  rand__s3=__temp1282v__s3;
  next__temp1277v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1283v__);
  print__temp368v(__temp1283v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1280v();return 0;}