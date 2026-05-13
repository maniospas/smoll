#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
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

static inline __attribute__((always_inline)) void splitmix64__temp1221v(uint64_t* __temp1258v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1258v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1220v(uint64_t* __temp1259v, uint64_t* __temp1260v) {
  uint64_t x=*__temp1259v;
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
  *__temp1259v=x;
  *__temp1260v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1234v(uint64_t* __temp1261v, uint64_t* __temp1262v, uint64_t* __temp1263v, uint64_t* __temp1264v) {
  int __temp1235v=0;
  uint64_t __temp1236v__=0;
  uint64_t seed=0;
  uint64_t __temp1237v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1238v__=0;
  uint64_t __temp1239v=0;
  uint64_t s0=0;
  uint64_t __temp1240v__=0;
  uint64_t __temp1241v=0;
  uint64_t s1=0;
  uint64_t __temp1242v__=0;
  uint64_t __temp1243v=0;
  uint64_t s2=0;
  uint64_t __temp1244v__=0;
  uint64_t __temp1245v=0;
  uint64_t s3=0;
  splitmix64__temp1221v(&__temp1236v__);
  seed=__temp1236v__;
  __temp1237v=seed;
  modifying_seed=__temp1237v;
  splitmix64__temp1220v(&modifying_seed,&__temp1238v__);
  __temp1239v=__temp1238v__;
  s0=__temp1239v;
  splitmix64__temp1220v(&modifying_seed,&__temp1240v__);
  __temp1241v=__temp1240v__;
  s1=__temp1241v;
  splitmix64__temp1220v(&modifying_seed,&__temp1242v__);
  __temp1243v=__temp1242v__;
  s2=__temp1243v;
  splitmix64__temp1220v(&modifying_seed,&__temp1244v__);
  __temp1245v=__temp1244v__;
  s3=__temp1245v;
  goto __temp_return;
  __temp_return:
  *__temp1261v=s0;
  *__temp1262v=s1;
  *__temp1263v=s2;
  *__temp1264v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1219v(uint64_t x, uint64_t k, uint64_t* __temp1265v) {
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
  *__temp1265v=z;
}

static inline __attribute__((always_inline)) void next__temp1250v(uint64_t* __temp1266v, uint64_t* __temp1267v, uint64_t* __temp1268v, uint64_t* __temp1269v, double* __temp1270v) {
  uint64_t self__s0=*__temp1266v;
  uint64_t self__s1=*__temp1267v;
  uint64_t self__s2=*__temp1268v;
  uint64_t self__s3=*__temp1269v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1251v=0;
  uint64_t __temp1252v__=0;
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
  __temp1251v=45;
  rotl__temp1219v(self__s3,__temp1251v,&__temp1252v__);
  self__s3=__temp1252v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1266v=self__s0;
  *__temp1267v=self__s1;
  *__temp1268v=self__s2;
  *__temp1269v=self__s3;
  *__temp1270v=value;
}

static inline __attribute__((always_inline)) void print__temp367v(double value) {
  int __temp368v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1253v() {
  uint64_t __temp1254v__s0=0;
  uint64_t __temp1254v__s1=0;
  uint64_t __temp1254v__s2=0;
  uint64_t __temp1254v__s3=0;
  uint64_t __temp1255v__s0=0;
  uint64_t __temp1255v__s1=0;
  uint64_t __temp1255v__s2=0;
  uint64_t __temp1255v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1256v__=0;
  Rand__temp1234v(&__temp1254v__s0,&__temp1254v__s1,&__temp1254v__s2,&__temp1254v__s3);
  __temp1255v__s0=__temp1254v__s0;
  __temp1255v__s1=__temp1254v__s1;
  __temp1255v__s2=__temp1254v__s2;
  __temp1255v__s3=__temp1254v__s3;
  rand__s0=__temp1255v__s0;
  rand__s1=__temp1255v__s1;
  rand__s2=__temp1255v__s2;
  rand__s3=__temp1255v__s3;
  next__temp1250v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1256v__);
  print__temp367v(__temp1256v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1253v();return 0;}