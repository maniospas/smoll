#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t371t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
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
"user input was not an int",
"user input was not a nat",
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

static inline __attribute__((always_inline)) void splitmix64__t1324t(uint64_t* __t1361t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1361t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1322t(uint64_t* __t1362t, uint64_t* __t1363t) {
  uint64_t x=*__t1362t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1323t=0;
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
  __t1323t=z;
  goto __t_return;
  __t_return:
  *__t1362t=x;
  *__t1363t=__t1323t;
}

static inline __attribute__((always_inline)) void Rand__t1337t(uint64_t* __t1364t, uint64_t* __t1365t, uint64_t* __t1366t, uint64_t* __t1367t) {
  int __t1338t=0;
  uint64_t __t1339t__=0;
  uint64_t seed=0;
  uint64_t __t1340t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1341t__=0;
  uint64_t __t1342t=0;
  uint64_t s0=0;
  uint64_t __t1343t__=0;
  uint64_t __t1344t=0;
  uint64_t s1=0;
  uint64_t __t1345t__=0;
  uint64_t __t1346t=0;
  uint64_t s2=0;
  uint64_t __t1347t__=0;
  uint64_t __t1348t=0;
  uint64_t s3=0;
  splitmix64__t1324t(&__t1339t__);
  seed=__t1339t__;
  __t1340t=seed;
  modifying_seed=__t1340t;
  splitmix64__t1322t(&modifying_seed,&__t1341t__);
  __t1342t=__t1341t__;
  s0=__t1342t;
  splitmix64__t1322t(&modifying_seed,&__t1343t__);
  __t1344t=__t1343t__;
  s1=__t1344t;
  splitmix64__t1322t(&modifying_seed,&__t1345t__);
  __t1346t=__t1345t__;
  s2=__t1346t;
  splitmix64__t1322t(&modifying_seed,&__t1347t__);
  __t1348t=__t1347t__;
  s3=__t1348t;
  goto __t_return;
  __t_return:
  *__t1364t=s0;
  *__t1365t=s1;
  *__t1366t=s2;
  *__t1367t=s3;
}

static inline __attribute__((always_inline)) void rotl__t1321t(uint64_t x, uint64_t k, uint64_t* __t1368t) {
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
  *__t1368t=z;
}

static inline __attribute__((always_inline)) void next__t1353t(uint64_t* __t1369t, uint64_t* __t1370t, uint64_t* __t1371t, uint64_t* __t1372t, double* __t1373t) {
  uint64_t self__s0=*__t1369t;
  uint64_t self__s1=*__t1370t;
  uint64_t self__s2=*__t1371t;
  uint64_t self__s3=*__t1372t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1354t=0;
  uint64_t __t1355t__=0;
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
  __t1354t=45;
  rotl__t1321t(self__s3,__t1354t,&__t1355t__);
  self__s3=__t1355t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1369t=self__s0;
  *__t1370t=self__s1;
  *__t1371t=self__s2;
  *__t1372t=self__s3;
  *__t1373t=value;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1356t() {
  uint64_t __t1357t__s0=0;
  uint64_t __t1357t__s1=0;
  uint64_t __t1357t__s2=0;
  uint64_t __t1357t__s3=0;
  uint64_t __t1358t__s0=0;
  uint64_t __t1358t__s1=0;
  uint64_t __t1358t__s2=0;
  uint64_t __t1358t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1359t__=0;
  Rand__t1337t(&__t1357t__s0,&__t1357t__s1,&__t1357t__s2,&__t1357t__s3);
  __t1358t__s0=__t1357t__s0;
  __t1358t__s1=__t1357t__s1;
  __t1358t__s2=__t1357t__s2;
  __t1358t__s3=__t1357t__s3;
  rand__s0=__t1358t__s0;
  rand__s1=__t1358t__s1;
  rand__s2=__t1358t__s2;
  rand__s3=__t1358t__s3;
  next__t1353t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1359t__);
  print__t374t(__t1359t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1356t();return 0;}