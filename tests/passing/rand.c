#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[36] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
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

static inline __attribute__((always_inline)) void splitmix64__t1312t(uint64_t* __t1349t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1349t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1310t(uint64_t* __t1350t, uint64_t* __t1351t) {
  uint64_t x=*__t1350t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1311t=0;
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
  __t1311t=z;
  goto __t_return;
  __t_return:
  *__t1350t=x;
  *__t1351t=__t1311t;
}

static inline __attribute__((always_inline)) void Rand__t1325t(uint64_t* __t1352t, uint64_t* __t1353t, uint64_t* __t1354t, uint64_t* __t1355t) {
  int __t1326t=0;
  uint64_t __t1327t__=0;
  uint64_t seed=0;
  uint64_t __t1328t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1329t__=0;
  uint64_t __t1330t=0;
  uint64_t s0=0;
  uint64_t __t1331t__=0;
  uint64_t __t1332t=0;
  uint64_t s1=0;
  uint64_t __t1333t__=0;
  uint64_t __t1334t=0;
  uint64_t s2=0;
  uint64_t __t1335t__=0;
  uint64_t __t1336t=0;
  uint64_t s3=0;
  splitmix64__t1312t(&__t1327t__);
  seed=__t1327t__;
  __t1328t=seed;
  modifying_seed=__t1328t;
  splitmix64__t1310t(&modifying_seed,&__t1329t__);
  __t1330t=__t1329t__;
  s0=__t1330t;
  splitmix64__t1310t(&modifying_seed,&__t1331t__);
  __t1332t=__t1331t__;
  s1=__t1332t;
  splitmix64__t1310t(&modifying_seed,&__t1333t__);
  __t1334t=__t1333t__;
  s2=__t1334t;
  splitmix64__t1310t(&modifying_seed,&__t1335t__);
  __t1336t=__t1335t__;
  s3=__t1336t;
  goto __t_return;
  __t_return:
  *__t1352t=s0;
  *__t1353t=s1;
  *__t1354t=s2;
  *__t1355t=s3;
}

static inline __attribute__((always_inline)) void rotl__t1309t(uint64_t x, uint64_t k, uint64_t* __t1356t) {
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
  *__t1356t=z;
}

static inline __attribute__((always_inline)) void next__t1341t(uint64_t* __t1357t, uint64_t* __t1358t, uint64_t* __t1359t, uint64_t* __t1360t, double* __t1361t) {
  uint64_t self__s0=*__t1357t;
  uint64_t self__s1=*__t1358t;
  uint64_t self__s2=*__t1359t;
  uint64_t self__s3=*__t1360t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1342t=0;
  uint64_t __t1343t__=0;
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
  __t1342t=45;
  rotl__t1309t(self__s3,__t1342t,&__t1343t__);
  self__s3=__t1343t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1357t=self__s0;
  *__t1358t=self__s1;
  *__t1359t=self__s2;
  *__t1360t=self__s3;
  *__t1361t=value;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1344t() {
  uint64_t __t1345t__s0=0;
  uint64_t __t1345t__s1=0;
  uint64_t __t1345t__s2=0;
  uint64_t __t1345t__s3=0;
  uint64_t __t1346t__s0=0;
  uint64_t __t1346t__s1=0;
  uint64_t __t1346t__s2=0;
  uint64_t __t1346t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1347t__=0;
  Rand__t1325t(&__t1345t__s0,&__t1345t__s1,&__t1345t__s2,&__t1345t__s3);
  __t1346t__s0=__t1345t__s0;
  __t1346t__s1=__t1345t__s1;
  __t1346t__s2=__t1345t__s2;
  __t1346t__s3=__t1345t__s3;
  rand__s0=__t1346t__s0;
  rand__s1=__t1346t__s1;
  rand__s2=__t1346t__s2;
  rand__s3=__t1346t__s3;
  next__t1341t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1347t__);
  print__t373t(__t1347t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1344t();return 0;}