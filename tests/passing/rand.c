#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[27] = {
"noerr",
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
"cannot extend the string's left side outside the its right range",
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
const char* const __temp348v="\n";

static inline __attribute__((always_inline)) void splitmix64__temp1130v(unsigned long long* __temp1167v) {
  void* ts=0;
  unsigned long long seed=0;
  ts=(struct timespec*)alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  *__temp1167v=seed;
}

static inline __attribute__((always_inline)) void splitmix64__temp1129v(unsigned long long* __temp1168v, unsigned long long* __temp1169v) {
  unsigned long long x=*__temp1168v;
  unsigned long long z=0;
  z=(x+=0x9E3779B97F4A7C15ULL);
  z=(z ^(z>>30))*0xBF58476D1CE4E5B9ULL;
  z=(z ^(z>>27))*0x94D049BB133111EBULL;
  z=z ^(z>>31);
  *__temp1168v=x;
  *__temp1169v=z;
}

static inline __attribute__((always_inline)) void Rand__temp1143v(unsigned long long* __temp1170v, unsigned long long* __temp1171v, unsigned long long* __temp1172v, unsigned long long* __temp1173v) {
  unsigned long long __temp1145v__=0;
  unsigned long long seed=0;
  unsigned long long __temp1146v=0;
  unsigned long long modifying_seed=0;
  unsigned long long __temp1147v__=0;
  unsigned long long __temp1148v=0;
  unsigned long long s0=0;
  unsigned long long __temp1149v__=0;
  unsigned long long __temp1150v=0;
  unsigned long long s1=0;
  unsigned long long __temp1151v__=0;
  unsigned long long __temp1152v=0;
  unsigned long long s2=0;
  unsigned long long __temp1153v__=0;
  unsigned long long __temp1154v=0;
  unsigned long long s3=0;
  splitmix64__temp1130v(&__temp1145v__);
  seed=__temp1145v__;
  __temp1146v=seed;
  modifying_seed=__temp1146v;
  splitmix64__temp1129v(&modifying_seed,&__temp1147v__);
  __temp1148v=__temp1147v__;
  s0=__temp1148v;
  splitmix64__temp1129v(&modifying_seed,&__temp1149v__);
  __temp1150v=__temp1149v__;
  s1=__temp1150v;
  splitmix64__temp1129v(&modifying_seed,&__temp1151v__);
  __temp1152v=__temp1151v__;
  s2=__temp1152v;
  splitmix64__temp1129v(&modifying_seed,&__temp1153v__);
  __temp1154v=__temp1153v__;
  s3=__temp1154v;
  *__temp1170v=s0;
  *__temp1171v=s1;
  *__temp1172v=s2;
  *__temp1173v=s3;
}

static inline __attribute__((always_inline)) void rotl__temp1128v(unsigned long long x, unsigned long long k, unsigned long long* __temp1174v) {
  unsigned long long z=0;
  z=(x<<k)|(x>>(64-k));
  *__temp1174v=z;
}

static inline __attribute__((always_inline)) void next__temp1159v(unsigned long long* __temp1175v, unsigned long long* __temp1176v, unsigned long long* __temp1177v, unsigned long long* __temp1178v, double* __temp1179v) {
  unsigned long long self__s0=*__temp1175v;
  unsigned long long self__s1=*__temp1176v;
  unsigned long long self__s2=*__temp1177v;
  unsigned long long self__s3=*__temp1178v;
  unsigned long long result=0;
  unsigned long long t=0;
  unsigned long long __temp1160v=0;
  unsigned long long __temp1161v__=0;
  double value=0;
  result=self__s0+self__s3;
  t=self__s1<<17;
  self__s2 ^=self__s0;
  self__s3 ^=self__s1;
  self__s1 ^=self__s2;
  self__s0 ^=self__s3;
  self__s2 ^=t;
  __temp1160v=45;
  rotl__temp1128v(self__s3,__temp1160v,&__temp1161v__);
  self__s3=__temp1161v__;
  value=((double)(result>>11))/((double)((unsigned long long)(1)<<53));
  *__temp1175v=self__s0;
  *__temp1176v=self__s1;
  *__temp1177v=self__s2;
  *__temp1178v=self__s3;
  *__temp1179v=value;
}

static inline __attribute__((always_inline)) void print__temp351v(double value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1162v() {
  unsigned long long __temp1163v__s0=0;
  unsigned long long __temp1163v__s1=0;
  unsigned long long __temp1163v__s2=0;
  unsigned long long __temp1163v__s3=0;
  unsigned long long __temp1164v__s0=0;
  unsigned long long __temp1164v__s1=0;
  unsigned long long __temp1164v__s2=0;
  unsigned long long __temp1164v__s3=0;
  unsigned long long rand__s0=0;
  unsigned long long rand__s1=0;
  unsigned long long rand__s2=0;
  unsigned long long rand__s3=0;
  double __temp1165v__=0;
  Rand__temp1143v(&__temp1163v__s0,&__temp1163v__s1,&__temp1163v__s2,&__temp1163v__s3);
  __temp1164v__s0=__temp1163v__s0;
  __temp1164v__s1=__temp1163v__s1;
  __temp1164v__s2=__temp1163v__s2;
  __temp1164v__s3=__temp1163v__s3;
  rand__s0=__temp1164v__s0;
  rand__s1=__temp1164v__s1;
  rand__s2=__temp1164v__s2;
  rand__s3=__temp1164v__s3;
  next__temp1159v(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__temp1165v__);
  print__temp351v(__temp1165v__);
}

int main() {main__temp1162v();return 0;}