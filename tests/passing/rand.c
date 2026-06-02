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

static inline __attribute__((always_inline)) void splitmix64__t1470t(uint64_t* __t1495t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1495t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1468t(uint64_t* __t1496t, uint64_t* __t1497t) {
  uint64_t x=*__t1496t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1469t=0;
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
  __t1469t=z;
  goto __t_return;
  __t_return:
  *__t1496t=x;
  *__t1497t=__t1469t;
}

static inline __attribute__((always_inline)) void Rand__t1471t(uint64_t seed, uint64_t* __t1498t, uint64_t* __t1499t, uint64_t* __t1500t, uint64_t* __t1501t) {
  int __t1472t=0;
  uint64_t __t1473t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1474t__=0;
  uint64_t __t1475t=0;
  uint64_t s0=0;
  uint64_t __t1476t__=0;
  uint64_t __t1477t=0;
  uint64_t s1=0;
  uint64_t __t1478t__=0;
  uint64_t __t1479t=0;
  uint64_t s2=0;
  uint64_t __t1480t__=0;
  uint64_t __t1481t=0;
  uint64_t s3=0;
  __t1473t=seed;
  modifying_seed=__t1473t;
  splitmix64__t1468t(&modifying_seed,&__t1474t__);
  __t1475t=__t1474t__;
  s0=__t1475t;
  splitmix64__t1468t(&modifying_seed,&__t1476t__);
  __t1477t=__t1476t__;
  s1=__t1477t;
  splitmix64__t1468t(&modifying_seed,&__t1478t__);
  __t1479t=__t1478t__;
  s2=__t1479t;
  splitmix64__t1468t(&modifying_seed,&__t1480t__);
  __t1481t=__t1480t__;
  s3=__t1481t;
  goto __t_return;
  __t_return:
  *__t1498t=s0;
  *__t1499t=s1;
  *__t1500t=s2;
  *__t1501t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1483t(uint64_t* __t1502t, uint64_t* __t1503t, uint64_t* __t1504t, uint64_t* __t1505t) {
  uint64_t __t1484t__=0;
  uint64_t __t1485t__s0=0;
  uint64_t __t1485t__s1=0;
  uint64_t __t1485t__s2=0;
  uint64_t __t1485t__s3=0;
  splitmix64__t1470t(&__t1484t__);
  Rand__t1471t(__t1484t__,&__t1485t__s0,&__t1485t__s1,&__t1485t__s2,&__t1485t__s3);
  goto __t_return;
  __t_return:
  *__t1502t=__t1485t__s0;
  *__t1503t=__t1485t__s1;
  *__t1504t=__t1485t__s2;
  *__t1505t=__t1485t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1467t(uint64_t x, uint64_t k, uint64_t* __t1506t) {
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
  *__t1506t=z;
}

static inline __attribute__((always_inline)) void next__t1486t(uint64_t* __t1507t, uint64_t* __t1508t, uint64_t* __t1509t, uint64_t* __t1510t, double* __t1511t) {
  uint64_t self__s0=*__t1507t;
  uint64_t self__s1=*__t1508t;
  uint64_t self__s2=*__t1509t;
  uint64_t self__s3=*__t1510t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1487t=0;
  uint64_t __t1488t__=0;
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
  __t1487t=45;
  rotl__t1467t(self__s3,__t1487t,&__t1488t__);
  self__s3=__t1488t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1507t=self__s0;
  *__t1508t=self__s1;
  *__t1509t=self__s2;
  *__t1510t=self__s3;
  *__t1511t=value;
}

static inline __attribute__((always_inline)) void print__t380t(double value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1489t() {
  uint64_t __t1491t__s0=0;
  uint64_t __t1491t__s1=0;
  uint64_t __t1491t__s2=0;
  uint64_t __t1491t__s3=0;
  uint64_t __t1492t__s0=0;
  uint64_t __t1492t__s1=0;
  uint64_t __t1492t__s2=0;
  uint64_t __t1492t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1493t__=0;
  console__t365t();
  Rand__t1483t(&__t1491t__s0,&__t1491t__s1,&__t1491t__s2,&__t1491t__s3);
  __t1492t__s0=__t1491t__s0;
  __t1492t__s1=__t1491t__s1;
  __t1492t__s2=__t1491t__s2;
  __t1492t__s3=__t1491t__s3;
  rand__s0=__t1492t__s0;
  rand__s1=__t1492t__s1;
  rand__s2=__t1492t__s2;
  rand__s3=__t1492t__s3;
  next__t1486t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1493t__);
  print__t380t(__t1493t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1489t();return 0;}