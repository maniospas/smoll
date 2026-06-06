#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t382t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot allocate a buffer of unsized type",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"arena is out of space",
"does not fit in circular arena",
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"unexpected end of console read",
"user input was not a float",
"read string does not fit on buffer",
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void splitmix64__t2014t(uint64_t* __t2039t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t2039t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t2012t(uint64_t* __t2040t, uint64_t* __t2041t) {
  uint64_t x=*__t2040t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t2013t=0;
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
  __t2013t=z;
  goto __t_return;
  __t_return:
  *__t2040t=x;
  *__t2041t=__t2013t;
}

static inline __attribute__((always_inline)) void Rand__t2015t(uint64_t seed, uint64_t* __t2042t, uint64_t* __t2043t, uint64_t* __t2044t, uint64_t* __t2045t) {
  int __t2016t=0;
  uint64_t __t2017t=0;
  uint64_t modifying_seed=0;
  uint64_t __t2018t__=0;
  uint64_t __t2019t=0;
  uint64_t s0=0;
  uint64_t __t2020t__=0;
  uint64_t __t2021t=0;
  uint64_t s1=0;
  uint64_t __t2022t__=0;
  uint64_t __t2023t=0;
  uint64_t s2=0;
  uint64_t __t2024t__=0;
  uint64_t __t2025t=0;
  uint64_t s3=0;
  __t2017t=seed;
  modifying_seed=__t2017t;
  splitmix64__t2012t(&modifying_seed,&__t2018t__);
  __t2019t=__t2018t__;
  s0=__t2019t;
  splitmix64__t2012t(&modifying_seed,&__t2020t__);
  __t2021t=__t2020t__;
  s1=__t2021t;
  splitmix64__t2012t(&modifying_seed,&__t2022t__);
  __t2023t=__t2022t__;
  s2=__t2023t;
  splitmix64__t2012t(&modifying_seed,&__t2024t__);
  __t2025t=__t2024t__;
  s3=__t2025t;
  goto __t_return;
  __t_return:
  *__t2042t=s0;
  *__t2043t=s1;
  *__t2044t=s2;
  *__t2045t=s3;
}

static inline __attribute__((always_inline)) void Rand__t2027t(uint64_t* __t2046t, uint64_t* __t2047t, uint64_t* __t2048t, uint64_t* __t2049t) {
  uint64_t __t2028t__=0;
  uint64_t __t2029t__s0=0;
  uint64_t __t2029t__s1=0;
  uint64_t __t2029t__s2=0;
  uint64_t __t2029t__s3=0;
  splitmix64__t2014t(&__t2028t__);
  Rand__t2015t(__t2028t__,&__t2029t__s0,&__t2029t__s1,&__t2029t__s2,&__t2029t__s3);
  goto __t_return;
  __t_return:
  *__t2046t=__t2029t__s0;
  *__t2047t=__t2029t__s1;
  *__t2048t=__t2029t__s2;
  *__t2049t=__t2029t__s3;
}

static inline __attribute__((always_inline)) void rotl__t2011t(uint64_t x, uint64_t k, uint64_t* __t2050t) {
  uint64_t left=0;
  uint64_t compk=0;
  uint64_t right=0;
  uint64_t z=0;
  left=x<<k;
  compk=64-k;
  right=x>>compk;
  z=left|right;
  goto __t_return;
  __t_return:
  *__t2050t=z;
}

static inline __attribute__((always_inline)) void next__t2030t(uint64_t* __t2051t, uint64_t* __t2052t, uint64_t* __t2053t, uint64_t* __t2054t, double* __t2055t) {
  uint64_t self__s0=*__t2051t;
  uint64_t self__s1=*__t2052t;
  uint64_t self__s2=*__t2053t;
  uint64_t self__s3=*__t2054t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t2031t=0;
  uint64_t __t2032t__=0;
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
  __t2031t=45;
  rotl__t2011t(self__s3,__t2031t,&__t2032t__);
  self__s3=__t2032t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t2051t=self__s0;
  *__t2052t=self__s1;
  *__t2053t=self__s2;
  *__t2054t=self__s3;
  *__t2055t=value;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t2033t() {
  uint64_t __t2035t__s0=0;
  uint64_t __t2035t__s1=0;
  uint64_t __t2035t__s2=0;
  uint64_t __t2035t__s3=0;
  uint64_t __t2036t__s0=0;
  uint64_t __t2036t__s1=0;
  uint64_t __t2036t__s2=0;
  uint64_t __t2036t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t2037t__=0;
  console__t366t();
  Rand__t2027t(&__t2035t__s0,&__t2035t__s1,&__t2035t__s2,&__t2035t__s3);
  __t2036t__s0=__t2035t__s0;
  __t2036t__s1=__t2035t__s1;
  __t2036t__s2=__t2035t__s2;
  __t2036t__s3=__t2035t__s3;
  rand__s0=__t2036t__s0;
  rand__s1=__t2036t__s1;
  rand__s2=__t2036t__s2;
  rand__s3=__t2036t__s3;
  next__t2030t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t2037t__);
  print__t385t(__t2037t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t2033t();return 0;}