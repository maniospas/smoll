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

static inline __attribute__((always_inline)) void splitmix64__temp1200v(unsigned long long* __temp1237v) {
  char* ts=0;
  unsigned long long seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1237v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1199v(unsigned long long* __temp1238v, unsigned long long* __temp1239v) {
  unsigned long long x=*__temp1238v;
  unsigned long long z=0;
  z=(x+=0x9E3779B97F4A7C15ULL);
  z=(z ^(z>>30))*0xBF58476D1CE4E5B9ULL;
  z=(z ^(z>>27))*0x94D049BB133111EBULL;
  z=z ^(z>>31);
  *__temp1238v=x;
  *__temp1239v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1213v(unsigned long long* __temp1240v, unsigned long long* __temp1241v, unsigned long long* __temp1242v, unsigned long long* __temp1243v) {
  unsigned long long __temp1215v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1216v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1217v__=0;
  unsigned long long __temp1218v=0;
  unsigned long long s0=0;
  unsigned long long __temp1219v__=0;
  unsigned long long __temp1220v=0;
  unsigned long long s1=0;
  unsigned long long __temp1221v__=0;
  unsigned long long __temp1222v=0;
  unsigned long long s2=0;
  unsigned long long __temp1223v__=0;
  unsigned long long __temp1224v=0;
  unsigned long long s3=0;
  splitmix64__temp1200v(&__temp1215v__);
  seed=__temp1215v__;
  __temp1216v=seed;
  modifying_seed=__temp1216v;
  splitmix64__temp1199v(&modifying_seed,&__temp1217v__);
  __temp1218v=__temp1217v__;
  s0=__temp1218v;
  splitmix64__temp1199v(&modifying_seed,&__temp1219v__);
  __temp1220v=__temp1219v__;
  s1=__temp1220v;
  splitmix64__temp1199v(&modifying_seed,&__temp1221v__);
  __temp1222v=__temp1221v__;
  s2=__temp1222v;
  splitmix64__temp1199v(&modifying_seed,&__temp1223v__);
  __temp1224v=__temp1223v__;
  s3=__temp1224v;
  *__temp1240v=s0;
  *__temp1241v=s1;
  *__temp1242v=s2;
  *__temp1243v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1198v(unsigned long long x, unsigned long long k, unsigned long long* __temp1244v) {
  unsigned long long z=0;
  z=(x<<k)|(x>>(64-k));
  *__temp1244v=z;
}

static inline __attribute__((always_inline)) void next__temp1229v(unsigned long long* __temp1245v, unsigned long long* __temp1246v, unsigned long long* __temp1247v, unsigned long long* __temp1248v, double* __temp1249v) {
  unsigned long long self__s0=*__temp1245v;
  unsigned long long self__s1=*__temp1246v;
  unsigned long long self__s2=*__temp1247v;
  unsigned long long self__s3=*__temp1248v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1230v=0;
  unsigned long long __temp1231v__=0;
  double value=0;
  result=self__s0+self__s3;
  t=self__s1<<17;
  self__s2 ^=self__s0;
  self__s3 ^=self__s1;
  self__s1 ^=self__s2;
  self__s0 ^=self__s3;
  self__s2 ^=t;
  __temp1230v=45;
  rotl__temp1198v(self__s3,__temp1230v,&__temp1231v__);
  self__s3=__temp1231v__;
  value=((double)(result>>11))/((double)((unsigned long long)(1)<<53));
  *__temp1245v=self__s0;
  *__temp1246v=self__s1;
  *__temp1247v=self__s2;
  *__temp1248v=self__s3;
  *__temp1249v=value;
}

static inline __attribute__((always_inline)) void print__temp353v(double value) {
  const char* endl=0;
  endl=__temp350v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1232v() {
  unsigned long long __temp1233v__s0=0;
  unsigned long long __temp1233v__s1=0;
  unsigned long long __temp1233v__s2=0;
  unsigned long long __temp1233v__s3=0;
  unsigned long long __temp1234v__s0=0;
  unsigned long long __temp1234v__s1=0;
  unsigned long long __temp1234v__s2=0;
  unsigned long long __temp1234v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1235v__=0;
  Rand__temp1213v(&__temp1233v__s0,&__temp1233v__s1,&__temp1233v__s2,&__temp1233v__s3);
  __temp1234v__s0=__temp1233v__s0;
  __temp1234v__s1=__temp1233v__s1;
  __temp1234v__s2=__temp1233v__s2;
  __temp1234v__s3=__temp1233v__s3;
  rand__s0=__temp1234v__s0;
  rand__s1=__temp1234v__s1;
  rand__s2=__temp1234v__s2;
  rand__s3=__temp1234v__s3;
  next__temp1229v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1235v__);
  print__temp353v(__temp1235v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1232v();return 0;}