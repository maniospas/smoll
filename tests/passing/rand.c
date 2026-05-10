#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
static const char* __temp_all_errcodes[28] = {"noerr",
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
"string does not fit on buffer",
"cannot extend the string's left side outside its right range",
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

static inline __attribute__((always_inline)) void splitmix64__temp1207v(unsigned long long* __temp1244v) {
  char* ts=0;
  unsigned long long seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1244v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1206v(unsigned long long* __temp1245v, unsigned long long* __temp1246v) {
  unsigned long long x=*__temp1245v;
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
  *__temp1245v=x;
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1220v(unsigned long long* __temp1247v, unsigned long long* __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v) {
  unsigned long long __temp1222v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1223v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1224v__=0;
  unsigned long long __temp1225v=0;
  unsigned long long s0=0;
  unsigned long long __temp1226v__=0;
  unsigned long long __temp1227v=0;
  unsigned long long s1=0;
  unsigned long long __temp1228v__=0;
  unsigned long long __temp1229v=0;
  unsigned long long s2=0;
  unsigned long long __temp1230v__=0;
  unsigned long long __temp1231v=0;
  unsigned long long s3=0;
  splitmix64__temp1207v(&__temp1222v__);
  seed=__temp1222v__;
  __temp1223v=seed;
  modifying_seed=__temp1223v;
  splitmix64__temp1206v(&modifying_seed,&__temp1224v__);
  __temp1225v=__temp1224v__;
  s0=__temp1225v;
  splitmix64__temp1206v(&modifying_seed,&__temp1226v__);
  __temp1227v=__temp1226v__;
  s1=__temp1227v;
  splitmix64__temp1206v(&modifying_seed,&__temp1228v__);
  __temp1229v=__temp1228v__;
  s2=__temp1229v;
  splitmix64__temp1206v(&modifying_seed,&__temp1230v__);
  __temp1231v=__temp1230v__;
  s3=__temp1231v;
  *__temp1247v=s0;
  *__temp1248v=s1;
  *__temp1249v=s2;
  *__temp1250v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1205v(unsigned long long x, unsigned long long k, unsigned long long* __temp1251v) {
  unsigned long long left=0;
  unsigned long long compk=0;
  unsigned long long right=0;
  unsigned long long z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  *__temp1251v=z;
}

static inline __attribute__((always_inline)) void next__temp1236v(unsigned long long* __temp1252v, unsigned long long* __temp1253v, unsigned long long* __temp1254v, unsigned long long* __temp1255v, double* __temp1256v) {
  unsigned long long self__s0=*__temp1252v;
  unsigned long long self__s1=*__temp1253v;
  unsigned long long self__s2=*__temp1254v;
  unsigned long long self__s3=*__temp1255v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1237v=0;
  unsigned long long __temp1238v__=0;
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
  __temp1237v=45;
  rotl__temp1205v(self__s3,__temp1237v,&__temp1238v__);
  self__s3=__temp1238v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  *__temp1252v=self__s0;
  *__temp1253v=self__s1;
  *__temp1254v=self__s2;
  *__temp1255v=self__s3;
  *__temp1256v=value;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1239v() {
  unsigned long long __temp1240v__s0=0;
  unsigned long long __temp1240v__s1=0;
  unsigned long long __temp1240v__s2=0;
  unsigned long long __temp1240v__s3=0;
  unsigned long long __temp1241v__s0=0;
  unsigned long long __temp1241v__s1=0;
  unsigned long long __temp1241v__s2=0;
  unsigned long long __temp1241v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1242v__=0;
  Rand__temp1220v(&__temp1240v__s0,&__temp1240v__s1,&__temp1240v__s2,&__temp1240v__s3);
  __temp1241v__s0=__temp1240v__s0;
  __temp1241v__s1=__temp1240v__s1;
  __temp1241v__s2=__temp1240v__s2;
  __temp1241v__s3=__temp1240v__s3;
  rand__s0=__temp1241v__s0;
  rand__s1=__temp1241v__s1;
  rand__s2=__temp1241v__s2;
  rand__s3=__temp1241v__s3;
  next__temp1236v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1242v__);
  print__temp353v(__temp1242v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1239v();return 0;}