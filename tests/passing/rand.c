#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[0] = {

};
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void splitmix64__temp1202v(unsigned long long* __temp1239v) {
  void* ts=0;
  unsigned long long seed=0;
  ts=(struct timespec*)alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1239v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1201v(unsigned long long* __temp1240v, unsigned long long* __temp1241v) {
  unsigned long long x=*__temp1240v;
  unsigned long long z=0;
  z=(x+=0x9E3779B97F4A7C15ULL);
  z=(z ^(z>>30))*0xBF58476D1CE4E5B9ULL;
  z=(z ^(z>>27))*0x94D049BB133111EBULL;
  z=z ^(z>>31);
  *__temp1240v=x;
  *__temp1241v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1215v(unsigned long long* __temp1242v, unsigned long long* __temp1243v, unsigned long long* __temp1244v, unsigned long long* __temp1245v) {
  unsigned long long __temp1217v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1218v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1219v__=0;
  unsigned long long __temp1220v=0;
  unsigned long long s0=0;
  unsigned long long __temp1221v__=0;
  unsigned long long __temp1222v=0;
  unsigned long long s1=0;
  unsigned long long __temp1223v__=0;
  unsigned long long __temp1224v=0;
  unsigned long long s2=0;
  unsigned long long __temp1225v__=0;
  unsigned long long __temp1226v=0;
  unsigned long long s3=0;
  splitmix64__temp1202v(&__temp1217v__);
  seed=__temp1217v__;
  __temp1218v=seed;
  modifying_seed=__temp1218v;
  splitmix64__temp1201v(&modifying_seed,&__temp1219v__);
  __temp1220v=__temp1219v__;
  s0=__temp1220v;
  splitmix64__temp1201v(&modifying_seed,&__temp1221v__);
  __temp1222v=__temp1221v__;
  s1=__temp1222v;
  splitmix64__temp1201v(&modifying_seed,&__temp1223v__);
  __temp1224v=__temp1223v__;
  s2=__temp1224v;
  splitmix64__temp1201v(&modifying_seed,&__temp1225v__);
  __temp1226v=__temp1225v__;
  s3=__temp1226v;
  *__temp1242v=s0;
  *__temp1243v=s1;
  *__temp1244v=s2;
  *__temp1245v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1200v(unsigned long long x, unsigned long long k, unsigned long long* __temp1246v) {
  unsigned long long z=0;
  z=(x<<k)|(x>>(64-k));
  *__temp1246v=z;
}

static inline __attribute__((always_inline)) void next__temp1231v(unsigned long long* __temp1247v, unsigned long long* __temp1248v, unsigned long long* __temp1249v, unsigned long long* __temp1250v, double* __temp1251v) {
  unsigned long long self__s0=*__temp1247v;
  unsigned long long self__s1=*__temp1248v;
  unsigned long long self__s2=*__temp1249v;
  unsigned long long self__s3=*__temp1250v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1232v=0;
  unsigned long long __temp1233v__=0;
  double value=0;
  result=self__s0+self__s3;
  t=self__s1<<17;
  self__s2 ^=self__s0;
  self__s3 ^=self__s1;
  self__s1 ^=self__s2;
  self__s0 ^=self__s3;
  self__s2 ^=t;
  __temp1232v=45;
  rotl__temp1200v(self__s3,__temp1232v,&__temp1233v__);
  self__s3=__temp1233v__;
  value=((double)(result>>11))/((double)((unsigned long long)(1)<<53));
  *__temp1247v=self__s0;
  *__temp1248v=self__s1;
  *__temp1249v=self__s2;
  *__temp1250v=self__s3;
  *__temp1251v=value;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1234v() {
  unsigned long long __temp1235v__s0=0;
  unsigned long long __temp1235v__s1=0;
  unsigned long long __temp1235v__s2=0;
  unsigned long long __temp1235v__s3=0;
  unsigned long long __temp1236v__s0=0;
  unsigned long long __temp1236v__s1=0;
  unsigned long long __temp1236v__s2=0;
  unsigned long long __temp1236v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1237v__=0;
  Rand__temp1215v(&__temp1235v__s0,&__temp1235v__s1,&__temp1235v__s2,&__temp1235v__s3);
  __temp1236v__s0=__temp1235v__s0;
  __temp1236v__s1=__temp1235v__s1;
  __temp1236v__s2=__temp1235v__s2;
  __temp1236v__s3=__temp1235v__s3;
  rand__s0=__temp1236v__s0;
  rand__s1=__temp1236v__s1;
  rand__s2=__temp1236v__s2;
  rand__s3=__temp1236v__s3;
  next__temp1231v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1237v__);
  print__temp351v(__temp1237v__);
}

int main() {main__temp1234v();return 0;}