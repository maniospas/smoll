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

static inline __attribute__((always_inline)) void splitmix64__t1847t(uint64_t* __t1872t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1872t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1845t(uint64_t* __t1873t, uint64_t* __t1874t) {
  uint64_t x=*__t1873t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1846t=0;
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
  __t1846t=z;
  goto __t_return;
  __t_return:
  *__t1873t=x;
  *__t1874t=__t1846t;
}

static inline __attribute__((always_inline)) void Rand__t1848t(uint64_t seed, uint64_t* __t1875t, uint64_t* __t1876t, uint64_t* __t1877t, uint64_t* __t1878t) {
  int __t1849t=0;
  uint64_t __t1850t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1851t__=0;
  uint64_t __t1852t=0;
  uint64_t s0=0;
  uint64_t __t1853t__=0;
  uint64_t __t1854t=0;
  uint64_t s1=0;
  uint64_t __t1855t__=0;
  uint64_t __t1856t=0;
  uint64_t s2=0;
  uint64_t __t1857t__=0;
  uint64_t __t1858t=0;
  uint64_t s3=0;
  __t1850t=seed;
  modifying_seed=__t1850t;
  splitmix64__t1845t(&modifying_seed,&__t1851t__);
  __t1852t=__t1851t__;
  s0=__t1852t;
  splitmix64__t1845t(&modifying_seed,&__t1853t__);
  __t1854t=__t1853t__;
  s1=__t1854t;
  splitmix64__t1845t(&modifying_seed,&__t1855t__);
  __t1856t=__t1855t__;
  s2=__t1856t;
  splitmix64__t1845t(&modifying_seed,&__t1857t__);
  __t1858t=__t1857t__;
  s3=__t1858t;
  goto __t_return;
  __t_return:
  *__t1875t=s0;
  *__t1876t=s1;
  *__t1877t=s2;
  *__t1878t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1860t(uint64_t* __t1879t, uint64_t* __t1880t, uint64_t* __t1881t, uint64_t* __t1882t) {
  uint64_t __t1861t__=0;
  uint64_t __t1862t__s0=0;
  uint64_t __t1862t__s1=0;
  uint64_t __t1862t__s2=0;
  uint64_t __t1862t__s3=0;
  splitmix64__t1847t(&__t1861t__);
  Rand__t1848t(__t1861t__,&__t1862t__s0,&__t1862t__s1,&__t1862t__s2,&__t1862t__s3);
  goto __t_return;
  __t_return:
  *__t1879t=__t1862t__s0;
  *__t1880t=__t1862t__s1;
  *__t1881t=__t1862t__s2;
  *__t1882t=__t1862t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1844t(uint64_t x, uint64_t k, uint64_t* __t1883t) {
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
  *__t1883t=z;
}

static inline __attribute__((always_inline)) void next__t1863t(uint64_t* __t1884t, uint64_t* __t1885t, uint64_t* __t1886t, uint64_t* __t1887t, double* __t1888t) {
  uint64_t self__s0=*__t1884t;
  uint64_t self__s1=*__t1885t;
  uint64_t self__s2=*__t1886t;
  uint64_t self__s3=*__t1887t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1864t=0;
  uint64_t __t1865t__=0;
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
  __t1864t=45;
  rotl__t1844t(self__s3,__t1864t,&__t1865t__);
  self__s3=__t1865t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1884t=self__s0;
  *__t1885t=self__s1;
  *__t1886t=self__s2;
  *__t1887t=self__s3;
  *__t1888t=value;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1866t() {
  uint64_t __t1868t__s0=0;
  uint64_t __t1868t__s1=0;
  uint64_t __t1868t__s2=0;
  uint64_t __t1868t__s3=0;
  uint64_t __t1869t__s0=0;
  uint64_t __t1869t__s1=0;
  uint64_t __t1869t__s2=0;
  uint64_t __t1869t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1870t__=0;
  console__t366t();
  Rand__t1860t(&__t1868t__s0,&__t1868t__s1,&__t1868t__s2,&__t1868t__s3);
  __t1869t__s0=__t1868t__s0;
  __t1869t__s1=__t1868t__s1;
  __t1869t__s2=__t1868t__s2;
  __t1869t__s3=__t1868t__s3;
  rand__s0=__t1869t__s0;
  rand__s1=__t1869t__s1;
  rand__s2=__t1869t__s2;
  rand__s3=__t1869t__s3;
  next__t1863t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1870t__);
  print__t385t(__t1870t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1866t();return 0;}