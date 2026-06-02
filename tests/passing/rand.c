#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void splitmix64__t1512t(uint64_t* __t1537t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1537t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1510t(uint64_t* __t1538t, uint64_t* __t1539t) {
  uint64_t x=*__t1538t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1511t=0;
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
  __t1511t=z;
  goto __t_return;
  __t_return:
  *__t1538t=x;
  *__t1539t=__t1511t;
}

static inline __attribute__((always_inline)) void Rand__t1513t(uint64_t seed, uint64_t* __t1540t, uint64_t* __t1541t, uint64_t* __t1542t, uint64_t* __t1543t) {
  int __t1514t=0;
  uint64_t __t1515t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1516t__=0;
  uint64_t __t1517t=0;
  uint64_t s0=0;
  uint64_t __t1518t__=0;
  uint64_t __t1519t=0;
  uint64_t s1=0;
  uint64_t __t1520t__=0;
  uint64_t __t1521t=0;
  uint64_t s2=0;
  uint64_t __t1522t__=0;
  uint64_t __t1523t=0;
  uint64_t s3=0;
  __t1515t=seed;
  modifying_seed=__t1515t;
  splitmix64__t1510t(&modifying_seed,&__t1516t__);
  __t1517t=__t1516t__;
  s0=__t1517t;
  splitmix64__t1510t(&modifying_seed,&__t1518t__);
  __t1519t=__t1518t__;
  s1=__t1519t;
  splitmix64__t1510t(&modifying_seed,&__t1520t__);
  __t1521t=__t1520t__;
  s2=__t1521t;
  splitmix64__t1510t(&modifying_seed,&__t1522t__);
  __t1523t=__t1522t__;
  s3=__t1523t;
  goto __t_return;
  __t_return:
  *__t1540t=s0;
  *__t1541t=s1;
  *__t1542t=s2;
  *__t1543t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1525t(uint64_t* __t1544t, uint64_t* __t1545t, uint64_t* __t1546t, uint64_t* __t1547t) {
  uint64_t __t1526t__=0;
  uint64_t __t1527t__s0=0;
  uint64_t __t1527t__s1=0;
  uint64_t __t1527t__s2=0;
  uint64_t __t1527t__s3=0;
  splitmix64__t1512t(&__t1526t__);
  Rand__t1513t(__t1526t__,&__t1527t__s0,&__t1527t__s1,&__t1527t__s2,&__t1527t__s3);
  goto __t_return;
  __t_return:
  *__t1544t=__t1527t__s0;
  *__t1545t=__t1527t__s1;
  *__t1546t=__t1527t__s2;
  *__t1547t=__t1527t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1509t(uint64_t x, uint64_t k, uint64_t* __t1548t) {
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
  *__t1548t=z;
}

static inline __attribute__((always_inline)) void next__t1528t(uint64_t* __t1549t, uint64_t* __t1550t, uint64_t* __t1551t, uint64_t* __t1552t, double* __t1553t) {
  uint64_t self__s0=*__t1549t;
  uint64_t self__s1=*__t1550t;
  uint64_t self__s2=*__t1551t;
  uint64_t self__s3=*__t1552t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1529t=0;
  uint64_t __t1530t__=0;
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
  __t1529t=45;
  rotl__t1509t(self__s3,__t1529t,&__t1530t__);
  self__s3=__t1530t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1549t=self__s0;
  *__t1550t=self__s1;
  *__t1551t=self__s2;
  *__t1552t=self__s3;
  *__t1553t=value;
}

static inline __attribute__((always_inline)) void print__t381t(double value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1531t() {
  uint64_t __t1533t__s0=0;
  uint64_t __t1533t__s1=0;
  uint64_t __t1533t__s2=0;
  uint64_t __t1533t__s3=0;
  uint64_t __t1534t__s0=0;
  uint64_t __t1534t__s1=0;
  uint64_t __t1534t__s2=0;
  uint64_t __t1534t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1535t__=0;
  console__t366t();
  Rand__t1525t(&__t1533t__s0,&__t1533t__s1,&__t1533t__s2,&__t1533t__s3);
  __t1534t__s0=__t1533t__s0;
  __t1534t__s1=__t1533t__s1;
  __t1534t__s2=__t1533t__s2;
  __t1534t__s3=__t1533t__s3;
  rand__s0=__t1534t__s0;
  rand__s1=__t1534t__s1;
  rand__s2=__t1534t__s2;
  rand__s3=__t1534t__s3;
  next__t1528t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1535t__);
  print__t381t(__t1535t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1531t();return 0;}