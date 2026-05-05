#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* const __temp345v="\n";

static inline __attribute__((always_inline)) void splitmix64__temp1092v(unsigned long long* __temp1129v) {
  void* ts=0;
  unsigned long long seed=0;
  ts=(struct timespec*)alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1129v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1091v(unsigned long long* __temp1130v, unsigned long long* __temp1131v) {
  unsigned long long x=*__temp1130v;
  unsigned long long z=0;
  z=(x+=0x9E3779B97F4A7C15ULL);
  z=(z ^(z>>30))*0xBF58476D1CE4E5B9ULL;
  z=(z ^(z>>27))*0x94D049BB133111EBULL;
  z=z ^(z>>31);
  *__temp1130v=x;
  *__temp1131v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1105v(unsigned long long* __temp1132v, unsigned long long* __temp1133v, unsigned long long* __temp1134v, unsigned long long* __temp1135v) {
  unsigned long long __temp1107v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1108v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1109v__=0;
  unsigned long long __temp1110v=0;
  unsigned long long s0=0;
  unsigned long long __temp1111v__=0;
  unsigned long long __temp1112v=0;
  unsigned long long s1=0;
  unsigned long long __temp1113v__=0;
  unsigned long long __temp1114v=0;
  unsigned long long s2=0;
  unsigned long long __temp1115v__=0;
  unsigned long long __temp1116v=0;
  unsigned long long s3=0;
  splitmix64__temp1092v(&__temp1107v__);
  seed=__temp1107v__;
  __temp1108v=seed;
  modifying_seed=__temp1108v;
  splitmix64__temp1091v(&modifying_seed,&__temp1109v__);
  __temp1110v=__temp1109v__;
  s0=__temp1110v;
  splitmix64__temp1091v(&modifying_seed,&__temp1111v__);
  __temp1112v=__temp1111v__;
  s1=__temp1112v;
  splitmix64__temp1091v(&modifying_seed,&__temp1113v__);
  __temp1114v=__temp1113v__;
  s2=__temp1114v;
  splitmix64__temp1091v(&modifying_seed,&__temp1115v__);
  __temp1116v=__temp1115v__;
  s3=__temp1116v;
  *__temp1132v=s0;
  *__temp1133v=s1;
  *__temp1134v=s2;
  *__temp1135v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1090v(unsigned long long x, unsigned long long k, unsigned long long* __temp1136v) {
  unsigned long long z=0;
  z=(x<<k)|(x>>(64-k));
  *__temp1136v=z;
}

static inline __attribute__((always_inline)) void next__temp1121v(unsigned long long* __temp1137v, unsigned long long* __temp1138v, unsigned long long* __temp1139v, unsigned long long* __temp1140v, double* __temp1141v) {
  unsigned long long self__s0=*__temp1137v;
  unsigned long long self__s1=*__temp1138v;
  unsigned long long self__s2=*__temp1139v;
  unsigned long long self__s3=*__temp1140v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1122v=0;
  unsigned long long __temp1123v__=0;
  double value=0;
  result=self__s0+self__s3;
  t=self__s1<<17;
  self__s2 ^=self__s0;
  self__s3 ^=self__s1;
  self__s1 ^=self__s2;
  self__s0 ^=self__s3;
  self__s2 ^=t;
  __temp1122v=45;
  rotl__temp1090v(self__s3,__temp1122v,&__temp1123v__);
  self__s3=__temp1123v__;
  value=((double)(result>>11))/((double)((unsigned long long)(1)<<53));
  *__temp1137v=self__s0;
  *__temp1138v=self__s1;
  *__temp1139v=self__s2;
  *__temp1140v=self__s3;
  *__temp1141v=value;
}

static inline __attribute__((always_inline)) void print__temp348v(double value) {
  const char* endl=0;
  endl=__temp345v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1124v() {
  unsigned long long __temp1125v__s0=0;
  unsigned long long __temp1125v__s1=0;
  unsigned long long __temp1125v__s2=0;
  unsigned long long __temp1125v__s3=0;
  unsigned long long __temp1126v__s0=0;
  unsigned long long __temp1126v__s1=0;
  unsigned long long __temp1126v__s2=0;
  unsigned long long __temp1126v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1127v__=0;
  Rand__temp1105v(&__temp1125v__s0,&__temp1125v__s1,&__temp1125v__s2,&__temp1125v__s3);
  __temp1126v__s0=__temp1125v__s0;
  __temp1126v__s1=__temp1125v__s1;
  __temp1126v__s2=__temp1125v__s2;
  __temp1126v__s3=__temp1125v__s3;
  rand__s0=__temp1126v__s0;
  rand__s1=__temp1126v__s1;
  rand__s2=__temp1126v__s2;
  rand__s3=__temp1126v__s3;
  next__temp1121v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1127v__);
  print__temp348v(__temp1127v__);
}

int main() {main__temp1124v();return 0;}