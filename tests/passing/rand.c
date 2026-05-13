#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
static const char* __temp_all_errcodes[27] = {"noerr",
"error",
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

static inline __attribute__((always_inline)) void splitmix64__temp1188v(uint64_t* __temp1225v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1225v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1187v(uint64_t* __temp1226v, uint64_t* __temp1227v) {
  uint64_t x=*__temp1226v;
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
  *__temp1226v=x;
  *__temp1227v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1201v(uint64_t* __temp1228v, uint64_t* __temp1229v, uint64_t* __temp1230v, uint64_t* __temp1231v) {
  int __temp1202v=0;
  uint64_t __temp1203v__=0;
  uint64_t seed=0;
  uint64_t __temp1204v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1205v__=0;
  uint64_t __temp1206v=0;
  uint64_t s0=0;
  uint64_t __temp1207v__=0;
  uint64_t __temp1208v=0;
  uint64_t s1=0;
  uint64_t __temp1209v__=0;
  uint64_t __temp1210v=0;
  uint64_t s2=0;
  uint64_t __temp1211v__=0;
  uint64_t __temp1212v=0;
  uint64_t s3=0;
  splitmix64__temp1188v(&__temp1203v__);
  seed=__temp1203v__;
  __temp1204v=seed;
  modifying_seed=__temp1204v;
  splitmix64__temp1187v(&modifying_seed,&__temp1205v__);
  __temp1206v=__temp1205v__;
  s0=__temp1206v;
  splitmix64__temp1187v(&modifying_seed,&__temp1207v__);
  __temp1208v=__temp1207v__;
  s1=__temp1208v;
  splitmix64__temp1187v(&modifying_seed,&__temp1209v__);
  __temp1210v=__temp1209v__;
  s2=__temp1210v;
  splitmix64__temp1187v(&modifying_seed,&__temp1211v__);
  __temp1212v=__temp1211v__;
  s3=__temp1212v;
  goto __temp_return;
  __temp_return:
  *__temp1228v=s0;
  *__temp1229v=s1;
  *__temp1230v=s2;
  *__temp1231v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1186v(uint64_t x, uint64_t k, uint64_t* __temp1232v) {
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
  *__temp1232v=z;
}

static inline __attribute__((always_inline)) void next__temp1217v(uint64_t* __temp1233v, uint64_t* __temp1234v, uint64_t* __temp1235v, uint64_t* __temp1236v, double* __temp1237v) {
  uint64_t self__s0=*__temp1233v;
  uint64_t self__s1=*__temp1234v;
  uint64_t self__s2=*__temp1235v;
  uint64_t self__s3=*__temp1236v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1218v=0;
  uint64_t __temp1219v__=0;
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
  __temp1218v=45;
  rotl__temp1186v(self__s3,__temp1218v,&__temp1219v__);
  self__s3=__temp1219v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1233v=self__s0;
  *__temp1234v=self__s1;
  *__temp1235v=self__s2;
  *__temp1236v=self__s3;
  *__temp1237v=value;
}

static inline __attribute__((always_inline)) void print__temp356v(double value) {
  int __temp357v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1220v() {
  uint64_t __temp1221v__s0=0;
  uint64_t __temp1221v__s1=0;
  uint64_t __temp1221v__s2=0;
  uint64_t __temp1221v__s3=0;
  uint64_t __temp1222v__s0=0;
  uint64_t __temp1222v__s1=0;
  uint64_t __temp1222v__s2=0;
  uint64_t __temp1222v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1223v__=0;
  Rand__temp1201v(&__temp1221v__s0,&__temp1221v__s1,&__temp1221v__s2,&__temp1221v__s3);
  __temp1222v__s0=__temp1221v__s0;
  __temp1222v__s1=__temp1221v__s1;
  __temp1222v__s2=__temp1221v__s2;
  __temp1222v__s3=__temp1221v__s3;
  rand__s0=__temp1222v__s0;
  rand__s1=__temp1222v__s1;
  rand__s2=__temp1222v__s2;
  rand__s3=__temp1222v__s3;
  next__temp1217v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1223v__);
  print__temp356v(__temp1223v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1220v();return 0;}