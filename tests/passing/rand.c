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

static inline __attribute__((always_inline)) void splitmix64__temp1252v(uint64_t* __temp1289v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1289v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1251v(uint64_t* __temp1290v, uint64_t* __temp1291v) {
  uint64_t x=*__temp1290v;
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
  *__temp1290v=x;
  *__temp1291v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1265v(uint64_t* __temp1292v, uint64_t* __temp1293v, uint64_t* __temp1294v, uint64_t* __temp1295v) {
  int __temp1266v=0;
  uint64_t __temp1267v__=0;
  uint64_t seed=0;
  uint64_t __temp1268v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1269v__=0;
  uint64_t __temp1270v=0;
  uint64_t s0=0;
  uint64_t __temp1271v__=0;
  uint64_t __temp1272v=0;
  uint64_t s1=0;
  uint64_t __temp1273v__=0;
  uint64_t __temp1274v=0;
  uint64_t s2=0;
  uint64_t __temp1275v__=0;
  uint64_t __temp1276v=0;
  uint64_t s3=0;
  splitmix64__temp1252v(&__temp1267v__);
  seed=__temp1267v__;
  __temp1268v=seed;
  modifying_seed=__temp1268v;
  splitmix64__temp1251v(&modifying_seed,&__temp1269v__);
  __temp1270v=__temp1269v__;
  s0=__temp1270v;
  splitmix64__temp1251v(&modifying_seed,&__temp1271v__);
  __temp1272v=__temp1271v__;
  s1=__temp1272v;
  splitmix64__temp1251v(&modifying_seed,&__temp1273v__);
  __temp1274v=__temp1273v__;
  s2=__temp1274v;
  splitmix64__temp1251v(&modifying_seed,&__temp1275v__);
  __temp1276v=__temp1275v__;
  s3=__temp1276v;
  goto __temp_return;
  __temp_return:
  *__temp1292v=s0;
  *__temp1293v=s1;
  *__temp1294v=s2;
  *__temp1295v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1250v(uint64_t x, uint64_t k, uint64_t* __temp1296v) {
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
  *__temp1296v=z;
}

static inline __attribute__((always_inline)) void next__temp1281v(uint64_t* __temp1297v, uint64_t* __temp1298v, uint64_t* __temp1299v, uint64_t* __temp1300v, double* __temp1301v) {
  uint64_t self__s0=*__temp1297v;
  uint64_t self__s1=*__temp1298v;
  uint64_t self__s2=*__temp1299v;
  uint64_t self__s3=*__temp1300v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1282v=0;
  uint64_t __temp1283v__=0;
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
  __temp1282v=45;
  rotl__temp1250v(self__s3,__temp1282v,&__temp1283v__);
  self__s3=__temp1283v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1297v=self__s0;
  *__temp1298v=self__s1;
  *__temp1299v=self__s2;
  *__temp1300v=self__s3;
  *__temp1301v=value;
}

static inline __attribute__((always_inline)) void print__temp368v(double value) {
  int __temp369v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1284v() {
  uint64_t __temp1285v__s0=0;
  uint64_t __temp1285v__s1=0;
  uint64_t __temp1285v__s2=0;
  uint64_t __temp1285v__s3=0;
  uint64_t __temp1286v__s0=0;
  uint64_t __temp1286v__s1=0;
  uint64_t __temp1286v__s2=0;
  uint64_t __temp1286v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1287v__=0;
  Rand__temp1265v(&__temp1285v__s0,&__temp1285v__s1,&__temp1285v__s2,&__temp1285v__s3);
  __temp1286v__s0=__temp1285v__s0;
  __temp1286v__s1=__temp1285v__s1;
  __temp1286v__s2=__temp1285v__s2;
  __temp1286v__s3=__temp1285v__s3;
  rand__s0=__temp1286v__s0;
  rand__s1=__temp1286v__s1;
  rand__s2=__temp1286v__s2;
  rand__s3=__temp1286v__s3;
  next__temp1281v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1287v__);
  print__temp368v(__temp1287v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1284v();return 0;}