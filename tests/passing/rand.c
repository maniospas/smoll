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

static inline __attribute__((always_inline)) void splitmix64__temp1227v(unsigned long long* __temp1264v) {
  char* ts=0;
  unsigned long long seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1264v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1226v(unsigned long long* __temp1265v, unsigned long long* __temp1266v) {
  unsigned long long x=*__temp1265v;
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
  *__temp1265v=x;
  *__temp1266v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1240v(unsigned long long* __temp1267v, unsigned long long* __temp1268v, unsigned long long* __temp1269v, unsigned long long* __temp1270v) {
  unsigned long long __temp1242v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1243v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1244v__=0;
  unsigned long long __temp1245v=0;
  unsigned long long s0=0;
  unsigned long long __temp1246v__=0;
  unsigned long long __temp1247v=0;
  unsigned long long s1=0;
  unsigned long long __temp1248v__=0;
  unsigned long long __temp1249v=0;
  unsigned long long s2=0;
  unsigned long long __temp1250v__=0;
  unsigned long long __temp1251v=0;
  unsigned long long s3=0;
  splitmix64__temp1227v(&__temp1242v__);
  seed=__temp1242v__;
  __temp1243v=seed;
  modifying_seed=__temp1243v;
  splitmix64__temp1226v(&modifying_seed,&__temp1244v__);
  __temp1245v=__temp1244v__;
  s0=__temp1245v;
  splitmix64__temp1226v(&modifying_seed,&__temp1246v__);
  __temp1247v=__temp1246v__;
  s1=__temp1247v;
  splitmix64__temp1226v(&modifying_seed,&__temp1248v__);
  __temp1249v=__temp1248v__;
  s2=__temp1249v;
  splitmix64__temp1226v(&modifying_seed,&__temp1250v__);
  __temp1251v=__temp1250v__;
  s3=__temp1251v;
  *__temp1267v=s0;
  *__temp1268v=s1;
  *__temp1269v=s2;
  *__temp1270v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1225v(unsigned long long x, unsigned long long k, unsigned long long* __temp1271v) {
  unsigned long long left=0;
  unsigned long long compk=0;
  unsigned long long right=0;
  unsigned long long z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  *__temp1271v=z;
}

static inline __attribute__((always_inline)) void next__temp1256v(unsigned long long* __temp1272v, unsigned long long* __temp1273v, unsigned long long* __temp1274v, unsigned long long* __temp1275v, double* __temp1276v) {
  unsigned long long self__s0=*__temp1272v;
  unsigned long long self__s1=*__temp1273v;
  unsigned long long self__s2=*__temp1274v;
  unsigned long long self__s3=*__temp1275v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1257v=0;
  unsigned long long __temp1258v__=0;
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
  __temp1257v=45;
  rotl__temp1225v(self__s3,__temp1257v,&__temp1258v__);
  self__s3=__temp1258v__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  *__temp1272v=self__s0;
  *__temp1273v=self__s1;
  *__temp1274v=self__s2;
  *__temp1275v=self__s3;
  *__temp1276v=value;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1259v() {
  unsigned long long __temp1260v__s0=0;
  unsigned long long __temp1260v__s1=0;
  unsigned long long __temp1260v__s2=0;
  unsigned long long __temp1260v__s3=0;
  unsigned long long __temp1261v__s0=0;
  unsigned long long __temp1261v__s1=0;
  unsigned long long __temp1261v__s2=0;
  unsigned long long __temp1261v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1262v__=0;
  Rand__temp1240v(&__temp1260v__s0,&__temp1260v__s1,&__temp1260v__s2,&__temp1260v__s3);
  __temp1261v__s0=__temp1260v__s0;
  __temp1261v__s1=__temp1260v__s1;
  __temp1261v__s2=__temp1260v__s2;
  __temp1261v__s3=__temp1260v__s3;
  rand__s0=__temp1261v__s0;
  rand__s1=__temp1261v__s1;
  rand__s2=__temp1261v__s2;
  rand__s3=__temp1261v__s3;
  next__temp1256v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1262v__);
  print__temp353v(__temp1262v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1259v();return 0;}