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

static inline __attribute__((always_inline)) void splitmix64__t1615t(uint64_t* __t1640t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1640t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1613t(uint64_t* __t1641t, uint64_t* __t1642t) {
  uint64_t x=*__t1641t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1614t=0;
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
  __t1614t=z;
  goto __t_return;
  __t_return:
  *__t1641t=x;
  *__t1642t=__t1614t;
}

static inline __attribute__((always_inline)) void Rand__t1616t(uint64_t seed, uint64_t* __t1643t, uint64_t* __t1644t, uint64_t* __t1645t, uint64_t* __t1646t) {
  int __t1617t=0;
  uint64_t __t1618t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1619t__=0;
  uint64_t __t1620t=0;
  uint64_t s0=0;
  uint64_t __t1621t__=0;
  uint64_t __t1622t=0;
  uint64_t s1=0;
  uint64_t __t1623t__=0;
  uint64_t __t1624t=0;
  uint64_t s2=0;
  uint64_t __t1625t__=0;
  uint64_t __t1626t=0;
  uint64_t s3=0;
  __t1618t=seed;
  modifying_seed=__t1618t;
  splitmix64__t1613t(&modifying_seed,&__t1619t__);
  __t1620t=__t1619t__;
  s0=__t1620t;
  splitmix64__t1613t(&modifying_seed,&__t1621t__);
  __t1622t=__t1621t__;
  s1=__t1622t;
  splitmix64__t1613t(&modifying_seed,&__t1623t__);
  __t1624t=__t1623t__;
  s2=__t1624t;
  splitmix64__t1613t(&modifying_seed,&__t1625t__);
  __t1626t=__t1625t__;
  s3=__t1626t;
  goto __t_return;
  __t_return:
  *__t1643t=s0;
  *__t1644t=s1;
  *__t1645t=s2;
  *__t1646t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1628t(uint64_t* __t1647t, uint64_t* __t1648t, uint64_t* __t1649t, uint64_t* __t1650t) {
  uint64_t __t1629t__=0;
  uint64_t __t1630t__s0=0;
  uint64_t __t1630t__s1=0;
  uint64_t __t1630t__s2=0;
  uint64_t __t1630t__s3=0;
  splitmix64__t1615t(&__t1629t__);
  Rand__t1616t(__t1629t__,&__t1630t__s0,&__t1630t__s1,&__t1630t__s2,&__t1630t__s3);
  goto __t_return;
  __t_return:
  *__t1647t=__t1630t__s0;
  *__t1648t=__t1630t__s1;
  *__t1649t=__t1630t__s2;
  *__t1650t=__t1630t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1612t(uint64_t x, uint64_t k, uint64_t* __t1651t) {
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
  *__t1651t=z;
}

static inline __attribute__((always_inline)) void next__t1631t(uint64_t* __t1652t, uint64_t* __t1653t, uint64_t* __t1654t, uint64_t* __t1655t, double* __t1656t) {
  uint64_t self__s0=*__t1652t;
  uint64_t self__s1=*__t1653t;
  uint64_t self__s2=*__t1654t;
  uint64_t self__s3=*__t1655t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1632t=0;
  uint64_t __t1633t__=0;
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
  __t1632t=45;
  rotl__t1612t(self__s3,__t1632t,&__t1633t__);
  self__s3=__t1633t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1652t=self__s0;
  *__t1653t=self__s1;
  *__t1654t=self__s2;
  *__t1655t=self__s3;
  *__t1656t=value;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1634t() {
  uint64_t __t1636t__s0=0;
  uint64_t __t1636t__s1=0;
  uint64_t __t1636t__s2=0;
  uint64_t __t1636t__s3=0;
  uint64_t __t1637t__s0=0;
  uint64_t __t1637t__s1=0;
  uint64_t __t1637t__s2=0;
  uint64_t __t1637t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1638t__=0;
  console__t366t();
  Rand__t1628t(&__t1636t__s0,&__t1636t__s1,&__t1636t__s2,&__t1636t__s3);
  __t1637t__s0=__t1636t__s0;
  __t1637t__s1=__t1636t__s1;
  __t1637t__s2=__t1636t__s2;
  __t1637t__s3=__t1636t__s3;
  rand__s0=__t1637t__s0;
  rand__s1=__t1637t__s1;
  rand__s2=__t1637t__s2;
  rand__s3=__t1637t__s3;
  next__t1631t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1638t__);
  print__t385t(__t1638t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1634t();return 0;}