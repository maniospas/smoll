#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
"error",
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
"string does not fit on buffer",
"character copy does not fit on buffer",
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

static inline __attribute__((always_inline)) void splitmix64__temp1222v(uint64_t* __temp1259v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1259v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1221v(uint64_t* __temp1260v, uint64_t* __temp1261v) {
  uint64_t x=*__temp1260v;
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
  *__temp1260v=x;
  *__temp1261v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1235v(uint64_t* __temp1262v, uint64_t* __temp1263v, uint64_t* __temp1264v, uint64_t* __temp1265v) {
  int __temp1236v=0;
  uint64_t __temp1237v__=0;
  uint64_t seed=0;
  uint64_t __temp1238v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1239v__=0;
  uint64_t __temp1240v=0;
  uint64_t s0=0;
  uint64_t __temp1241v__=0;
  uint64_t __temp1242v=0;
  uint64_t s1=0;
  uint64_t __temp1243v__=0;
  uint64_t __temp1244v=0;
  uint64_t s2=0;
  uint64_t __temp1245v__=0;
  uint64_t __temp1246v=0;
  uint64_t s3=0;
  splitmix64__temp1222v(&__temp1237v__);
  seed=__temp1237v__;
  __temp1238v=seed;
  modifying_seed=__temp1238v;
  splitmix64__temp1221v(&modifying_seed,&__temp1239v__);
  __temp1240v=__temp1239v__;
  s0=__temp1240v;
  splitmix64__temp1221v(&modifying_seed,&__temp1241v__);
  __temp1242v=__temp1241v__;
  s1=__temp1242v;
  splitmix64__temp1221v(&modifying_seed,&__temp1243v__);
  __temp1244v=__temp1243v__;
  s2=__temp1244v;
  splitmix64__temp1221v(&modifying_seed,&__temp1245v__);
  __temp1246v=__temp1245v__;
  s3=__temp1246v;
  goto __temp_return;
  __temp_return:
  *__temp1262v=s0;
  *__temp1263v=s1;
  *__temp1264v=s2;
  *__temp1265v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1220v(uint64_t x, uint64_t k, uint64_t* __temp1266v) {
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
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void next__temp1251v(uint64_t* __temp1267v, uint64_t* __temp1268v, uint64_t* __temp1269v, uint64_t* __temp1270v, double* __temp1271v) {
  uint64_t self__s0=*__temp1267v;
  uint64_t self__s1=*__temp1268v;
  uint64_t self__s2=*__temp1269v;
  uint64_t self__s3=*__temp1270v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1252v=0;
  uint64_t __temp1253v__=0;
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
  __temp1252v=45;
  rotl__temp1220v(self__s3,__temp1252v,&__temp1253v__);
  self__s3=__temp1253v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1267v=self__s0;
  *__temp1268v=self__s1;
  *__temp1269v=self__s2;
  *__temp1270v=self__s3;
  *__temp1271v=value;
}

static inline __attribute__((always_inline)) void print__temp366v(double value) {
  int __temp367v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1254v() {
  uint64_t __temp1255v__s0=0;
  uint64_t __temp1255v__s1=0;
  uint64_t __temp1255v__s2=0;
  uint64_t __temp1255v__s3=0;
  uint64_t __temp1256v__s0=0;
  uint64_t __temp1256v__s1=0;
  uint64_t __temp1256v__s2=0;
  uint64_t __temp1256v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1257v__=0;
  Rand__temp1235v(&__temp1255v__s0,&__temp1255v__s1,&__temp1255v__s2,&__temp1255v__s3);
  __temp1256v__s0=__temp1255v__s0;
  __temp1256v__s1=__temp1255v__s1;
  __temp1256v__s2=__temp1255v__s2;
  __temp1256v__s3=__temp1255v__s3;
  rand__s0=__temp1256v__s0;
  rand__s1=__temp1256v__s1;
  rand__s2=__temp1256v__s2;
  rand__s3=__temp1256v__s3;
  next__temp1251v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1257v__);
  print__temp366v(__temp1257v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1254v();return 0;}