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
"cannot resize an unallocated or freed buffer",
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

static inline __attribute__((always_inline)) void splitmix64__temp1184v(uint64_t* __temp1221v) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __temp_return;
  __temp_return:
  *__temp1221v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1183v(uint64_t* __temp1222v, uint64_t* __temp1223v) {
  uint64_t x=*__temp1222v;
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
  *__temp1222v=x;
  *__temp1223v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1197v(uint64_t* __temp1224v, uint64_t* __temp1225v, uint64_t* __temp1226v, uint64_t* __temp1227v) {
  int __temp1198v=0;
  uint64_t __temp1199v__=0;
  uint64_t seed=0;
  uint64_t __temp1200v=0;
  uint64_t modifying_seed=0;
  uint64_t __temp1201v__=0;
  uint64_t __temp1202v=0;
  uint64_t s0=0;
  uint64_t __temp1203v__=0;
  uint64_t __temp1204v=0;
  uint64_t s1=0;
  uint64_t __temp1205v__=0;
  uint64_t __temp1206v=0;
  uint64_t s2=0;
  uint64_t __temp1207v__=0;
  uint64_t __temp1208v=0;
  uint64_t s3=0;
  splitmix64__temp1184v(&__temp1199v__);
  seed=__temp1199v__;
  __temp1200v=seed;
  modifying_seed=__temp1200v;
  splitmix64__temp1183v(&modifying_seed,&__temp1201v__);
  __temp1202v=__temp1201v__;
  s0=__temp1202v;
  splitmix64__temp1183v(&modifying_seed,&__temp1203v__);
  __temp1204v=__temp1203v__;
  s1=__temp1204v;
  splitmix64__temp1183v(&modifying_seed,&__temp1205v__);
  __temp1206v=__temp1205v__;
  s2=__temp1206v;
  splitmix64__temp1183v(&modifying_seed,&__temp1207v__);
  __temp1208v=__temp1207v__;
  s3=__temp1208v;
  goto __temp_return;
  __temp_return:
  *__temp1224v=s0;
  *__temp1225v=s1;
  *__temp1226v=s2;
  *__temp1227v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1182v(uint64_t x, uint64_t k, uint64_t* __temp1228v) {
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
  *__temp1228v=z;
}

static inline __attribute__((always_inline)) void next__temp1213v(uint64_t* __temp1229v, uint64_t* __temp1230v, uint64_t* __temp1231v, uint64_t* __temp1232v, double* __temp1233v) {
  uint64_t self__s0=*__temp1229v;
  uint64_t self__s1=*__temp1230v;
  uint64_t self__s2=*__temp1231v;
  uint64_t self__s3=*__temp1232v;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __temp1214v=0;
  uint64_t __temp1215v__=0;
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
  __temp1214v=45;
  rotl__temp1182v(self__s3,__temp1214v,&__temp1215v__);
  self__s3=__temp1215v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __temp_return;
  __temp_return:
  *__temp1229v=self__s0;
  *__temp1230v=self__s1;
  *__temp1231v=self__s2;
  *__temp1232v=self__s3;
  *__temp1233v=value;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  int __temp354v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1216v() {
  uint64_t __temp1217v__s0=0;
  uint64_t __temp1217v__s1=0;
  uint64_t __temp1217v__s2=0;
  uint64_t __temp1217v__s3=0;
  uint64_t __temp1218v__s0=0;
  uint64_t __temp1218v__s1=0;
  uint64_t __temp1218v__s2=0;
  uint64_t __temp1218v__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __temp1219v__=0;
  Rand__temp1197v(&__temp1217v__s0,&__temp1217v__s1,&__temp1217v__s2,&__temp1217v__s3);
  __temp1218v__s0=__temp1217v__s0;
  __temp1218v__s1=__temp1217v__s1;
  __temp1218v__s2=__temp1217v__s2;
  __temp1218v__s3=__temp1217v__s3;
  rand__s0=__temp1218v__s0;
  rand__s1=__temp1218v__s1;
  rand__s2=__temp1218v__s2;
  rand__s3=__temp1218v__s3;
  next__temp1213v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1219v__);
  print__temp353v(__temp1219v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1216v();return 0;}