#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t377t="\n";
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
"can only define strings on contiguous buffers",
"can only define strings on non-offset buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"cannot copy onto the same buffer",
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void splitmix64__t1483t(uint64_t* __t1508t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1508t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1481t(uint64_t* __t1509t, uint64_t* __t1510t) {
  uint64_t x=*__t1509t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1482t=0;
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
  __t1482t=z;
  goto __t_return;
  __t_return:
  *__t1509t=x;
  *__t1510t=__t1482t;
}

static inline __attribute__((always_inline)) void Rand__t1484t(uint64_t seed, uint64_t* __t1511t, uint64_t* __t1512t, uint64_t* __t1513t, uint64_t* __t1514t) {
  int __t1485t=0;
  uint64_t __t1486t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1487t__=0;
  uint64_t __t1488t=0;
  uint64_t s0=0;
  uint64_t __t1489t__=0;
  uint64_t __t1490t=0;
  uint64_t s1=0;
  uint64_t __t1491t__=0;
  uint64_t __t1492t=0;
  uint64_t s2=0;
  uint64_t __t1493t__=0;
  uint64_t __t1494t=0;
  uint64_t s3=0;
  __t1486t=seed;
  modifying_seed=__t1486t;
  splitmix64__t1481t(&modifying_seed,&__t1487t__);
  __t1488t=__t1487t__;
  s0=__t1488t;
  splitmix64__t1481t(&modifying_seed,&__t1489t__);
  __t1490t=__t1489t__;
  s1=__t1490t;
  splitmix64__t1481t(&modifying_seed,&__t1491t__);
  __t1492t=__t1491t__;
  s2=__t1492t;
  splitmix64__t1481t(&modifying_seed,&__t1493t__);
  __t1494t=__t1493t__;
  s3=__t1494t;
  goto __t_return;
  __t_return:
  *__t1511t=s0;
  *__t1512t=s1;
  *__t1513t=s2;
  *__t1514t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1496t(uint64_t* __t1515t, uint64_t* __t1516t, uint64_t* __t1517t, uint64_t* __t1518t) {
  uint64_t __t1497t__=0;
  uint64_t __t1498t__s0=0;
  uint64_t __t1498t__s1=0;
  uint64_t __t1498t__s2=0;
  uint64_t __t1498t__s3=0;
  splitmix64__t1483t(&__t1497t__);
  Rand__t1484t(__t1497t__,&__t1498t__s0,&__t1498t__s1,&__t1498t__s2,&__t1498t__s3);
  goto __t_return;
  __t_return:
  *__t1515t=__t1498t__s0;
  *__t1516t=__t1498t__s1;
  *__t1517t=__t1498t__s2;
  *__t1518t=__t1498t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1480t(uint64_t x, uint64_t k, uint64_t* __t1519t) {
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
  *__t1519t=z;
}

static inline __attribute__((always_inline)) void next__t1499t(uint64_t* __t1520t, uint64_t* __t1521t, uint64_t* __t1522t, uint64_t* __t1523t, double* __t1524t) {
  uint64_t self__s0=*__t1520t;
  uint64_t self__s1=*__t1521t;
  uint64_t self__s2=*__t1522t;
  uint64_t self__s3=*__t1523t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1500t=0;
  uint64_t __t1501t__=0;
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
  __t1500t=45;
  rotl__t1480t(self__s3,__t1500t,&__t1501t__);
  self__s3=__t1501t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1520t=self__s0;
  *__t1521t=self__s1;
  *__t1522t=self__s2;
  *__t1523t=self__s3;
  *__t1524t=value;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1502t() {
  uint64_t __t1504t__s0=0;
  uint64_t __t1504t__s1=0;
  uint64_t __t1504t__s2=0;
  uint64_t __t1504t__s3=0;
  uint64_t __t1505t__s0=0;
  uint64_t __t1505t__s1=0;
  uint64_t __t1505t__s2=0;
  uint64_t __t1505t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1506t__=0;
  console__t365t();
  Rand__t1496t(&__t1504t__s0,&__t1504t__s1,&__t1504t__s2,&__t1504t__s3);
  __t1505t__s0=__t1504t__s0;
  __t1505t__s1=__t1504t__s1;
  __t1505t__s2=__t1504t__s2;
  __t1505t__s3=__t1504t__s3;
  rand__s0=__t1505t__s0;
  rand__s1=__t1505t__s1;
  rand__s2=__t1505t__s2;
  rand__s3=__t1505t__s3;
  next__t1499t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1506t__);
  print__t380t(__t1506t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1502t();return 0;}