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

static inline __attribute__((always_inline)) void splitmix64__t1554t(uint64_t* __t1579t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1579t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1552t(uint64_t* __t1580t, uint64_t* __t1581t) {
  uint64_t x=*__t1580t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1553t=0;
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
  __t1553t=z;
  goto __t_return;
  __t_return:
  *__t1580t=x;
  *__t1581t=__t1553t;
}

static inline __attribute__((always_inline)) void Rand__t1555t(uint64_t seed, uint64_t* __t1582t, uint64_t* __t1583t, uint64_t* __t1584t, uint64_t* __t1585t) {
  int __t1556t=0;
  uint64_t __t1557t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1558t__=0;
  uint64_t __t1559t=0;
  uint64_t s0=0;
  uint64_t __t1560t__=0;
  uint64_t __t1561t=0;
  uint64_t s1=0;
  uint64_t __t1562t__=0;
  uint64_t __t1563t=0;
  uint64_t s2=0;
  uint64_t __t1564t__=0;
  uint64_t __t1565t=0;
  uint64_t s3=0;
  __t1557t=seed;
  modifying_seed=__t1557t;
  splitmix64__t1552t(&modifying_seed,&__t1558t__);
  __t1559t=__t1558t__;
  s0=__t1559t;
  splitmix64__t1552t(&modifying_seed,&__t1560t__);
  __t1561t=__t1560t__;
  s1=__t1561t;
  splitmix64__t1552t(&modifying_seed,&__t1562t__);
  __t1563t=__t1562t__;
  s2=__t1563t;
  splitmix64__t1552t(&modifying_seed,&__t1564t__);
  __t1565t=__t1564t__;
  s3=__t1565t;
  goto __t_return;
  __t_return:
  *__t1582t=s0;
  *__t1583t=s1;
  *__t1584t=s2;
  *__t1585t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1567t(uint64_t* __t1586t, uint64_t* __t1587t, uint64_t* __t1588t, uint64_t* __t1589t) {
  uint64_t __t1568t__=0;
  uint64_t __t1569t__s0=0;
  uint64_t __t1569t__s1=0;
  uint64_t __t1569t__s2=0;
  uint64_t __t1569t__s3=0;
  splitmix64__t1554t(&__t1568t__);
  Rand__t1555t(__t1568t__,&__t1569t__s0,&__t1569t__s1,&__t1569t__s2,&__t1569t__s3);
  goto __t_return;
  __t_return:
  *__t1586t=__t1569t__s0;
  *__t1587t=__t1569t__s1;
  *__t1588t=__t1569t__s2;
  *__t1589t=__t1569t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1551t(uint64_t x, uint64_t k, uint64_t* __t1590t) {
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
  *__t1590t=z;
}

static inline __attribute__((always_inline)) void next__t1570t(uint64_t* __t1591t, uint64_t* __t1592t, uint64_t* __t1593t, uint64_t* __t1594t, double* __t1595t) {
  uint64_t self__s0=*__t1591t;
  uint64_t self__s1=*__t1592t;
  uint64_t self__s2=*__t1593t;
  uint64_t self__s3=*__t1594t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1571t=0;
  uint64_t __t1572t__=0;
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
  __t1571t=45;
  rotl__t1551t(self__s3,__t1571t,&__t1572t__);
  self__s3=__t1572t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1591t=self__s0;
  *__t1592t=self__s1;
  *__t1593t=self__s2;
  *__t1594t=self__s3;
  *__t1595t=value;
}

static inline __attribute__((always_inline)) void print__t385t(double value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1573t() {
  uint64_t __t1575t__s0=0;
  uint64_t __t1575t__s1=0;
  uint64_t __t1575t__s2=0;
  uint64_t __t1575t__s3=0;
  uint64_t __t1576t__s0=0;
  uint64_t __t1576t__s1=0;
  uint64_t __t1576t__s2=0;
  uint64_t __t1576t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1577t__=0;
  console__t366t();
  Rand__t1567t(&__t1575t__s0,&__t1575t__s1,&__t1575t__s2,&__t1575t__s3);
  __t1576t__s0=__t1575t__s0;
  __t1576t__s1=__t1575t__s1;
  __t1576t__s2=__t1575t__s2;
  __t1576t__s3=__t1575t__s3;
  rand__s0=__t1576t__s0;
  rand__s1=__t1576t__s1;
  rand__s2=__t1576t__s2;
  rand__s3=__t1576t__s3;
  next__t1570t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1577t__);
  print__t385t(__t1577t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1573t();return 0;}