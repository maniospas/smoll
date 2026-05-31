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

static inline __attribute__((always_inline)) void splitmix64__t1324t(uint64_t* __t1348t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1348t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1322t(uint64_t* __t1349t, uint64_t* __t1350t) {
  uint64_t x=*__t1349t;
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
  *__t1349t=x;
  *__t1350t=__t1323t;
}

static inline __attribute__((always_inline)) void Rand__t1325t(uint64_t seed, uint64_t* __t1351t, uint64_t* __t1352t, uint64_t* __t1353t, uint64_t* __t1354t) {
  int __t1326t=0;
  uint64_t __t1327t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1328t__=0;
  uint64_t __t1329t=0;
  uint64_t s0=0;
  uint64_t __t1330t__=0;
  uint64_t __t1331t=0;
  uint64_t s1=0;
  uint64_t __t1332t__=0;
  uint64_t __t1333t=0;
  uint64_t s2=0;
  uint64_t __t1334t__=0;
  uint64_t __t1335t=0;
  uint64_t s3=0;
  __t1327t=seed;
  modifying_seed=__t1327t;
  splitmix64__t1322t(&modifying_seed,&__t1328t__);
  __t1329t=__t1328t__;
  s0=__t1329t;
  splitmix64__t1322t(&modifying_seed,&__t1330t__);
  __t1331t=__t1330t__;
  s1=__t1331t;
  splitmix64__t1322t(&modifying_seed,&__t1332t__);
  __t1333t=__t1332t__;
  s2=__t1333t;
  splitmix64__t1322t(&modifying_seed,&__t1334t__);
  __t1335t=__t1334t__;
  s3=__t1335t;
  goto __t_return;
  __t_return:
  *__t1351t=s0;
  *__t1352t=s1;
  *__t1353t=s2;
  *__t1354t=s3;
}

static inline __attribute__((always_inline)) void Rand__t1337t(uint64_t* __t1355t, uint64_t* __t1356t, uint64_t* __t1357t, uint64_t* __t1358t) {
  uint64_t __t1338t__=0;
  uint64_t __t1339t__s0=0;
  uint64_t __t1339t__s1=0;
  uint64_t __t1339t__s2=0;
  uint64_t __t1339t__s3=0;
  splitmix64__t1324t(&__t1338t__);
  Rand__t1325t(__t1338t__,&__t1339t__s0,&__t1339t__s1,&__t1339t__s2,&__t1339t__s3);
  goto __t_return;
  __t_return:
  *__t1355t=__t1339t__s0;
  *__t1356t=__t1339t__s1;
  *__t1357t=__t1339t__s2;
  *__t1358t=__t1339t__s3;
}

static inline __attribute__((always_inline)) void rotl__t1321t(uint64_t x, uint64_t k, uint64_t* __t1359t) {
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
  *__t1359t=z;
}

static inline __attribute__((always_inline)) void next__t1340t(uint64_t* __t1360t, uint64_t* __t1361t, uint64_t* __t1362t, uint64_t* __t1363t, double* __t1364t) {
  uint64_t self__s0=*__t1360t;
  uint64_t self__s1=*__t1361t;
  uint64_t self__s2=*__t1362t;
  uint64_t self__s3=*__t1363t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1341t=0;
  uint64_t __t1342t__=0;
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
  __t1341t=45;
  rotl__t1321t(self__s3,__t1341t,&__t1342t__);
  self__s3=__t1342t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1360t=self__s0;
  *__t1361t=self__s1;
  *__t1362t=self__s2;
  *__t1363t=self__s3;
  *__t1364t=value;
}

static inline __attribute__((always_inline)) void print__t374t(double value) {
  int __t375t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1343t() {
  uint64_t __t1344t__s0=0;
  uint64_t __t1344t__s1=0;
  uint64_t __t1344t__s2=0;
  uint64_t __t1344t__s3=0;
  uint64_t __t1345t__s0=0;
  uint64_t __t1345t__s1=0;
  uint64_t __t1345t__s2=0;
  uint64_t __t1345t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1346t__=0;
  Rand__t1337t(&__t1344t__s0,&__t1344t__s1,&__t1344t__s2,&__t1344t__s3);
  __t1345t__s0=__t1344t__s0;
  __t1345t__s1=__t1344t__s1;
  __t1345t__s2=__t1344t__s2;
  __t1345t__s3=__t1344t__s3;
  rand__s0=__t1345t__s0;
  rand__s1=__t1345t__s1;
  rand__s2=__t1345t__s2;
  rand__s3=__t1345t__s3;
  next__t1340t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1346t__);
  print__t374t(__t1346t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1343t();return 0;}