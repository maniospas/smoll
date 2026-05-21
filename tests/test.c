#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t370t="\n";
static const char* __t_all_errcodes[35] = {"noerr",
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

static inline __attribute__((always_inline)) void splitmix64__t1286t(uint64_t* __t1325t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1325t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1284t(uint64_t* __t1326t, uint64_t* __t1327t) {
  uint64_t x=*__t1326t;
  uint64_t z=0;
  uint64_t rot=0;
  uint64_t __t1285t=0;
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
  __t1285t=z;
  goto __t_return;
  __t_return:
  *__t1326t=x;
  *__t1327t=__t1285t;
}

static inline __attribute__((always_inline)) void Rand__t1299t(uint64_t* __t1328t, uint64_t* __t1329t, uint64_t* __t1330t, uint64_t* __t1331t) {
  int __t1300t=0;
  uint64_t __t1301t__=0;
  uint64_t seed=0;
  uint64_t __t1302t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1303t__=0;
  uint64_t __t1304t=0;
  uint64_t s0=0;
  uint64_t __t1305t__=0;
  uint64_t __t1306t=0;
  uint64_t s1=0;
  uint64_t __t1307t__=0;
  uint64_t __t1308t=0;
  uint64_t s2=0;
  uint64_t __t1309t__=0;
  uint64_t __t1310t=0;
  uint64_t s3=0;
  splitmix64__t1286t(&__t1301t__);
  seed=__t1301t__;
  __t1302t=seed;
  modifying_seed=__t1302t;
  splitmix64__t1284t(&modifying_seed,&__t1303t__);
  __t1304t=__t1303t__;
  s0=__t1304t;
  splitmix64__t1284t(&modifying_seed,&__t1305t__);
  __t1306t=__t1305t__;
  s1=__t1306t;
  splitmix64__t1284t(&modifying_seed,&__t1307t__);
  __t1308t=__t1307t__;
  s2=__t1308t;
  splitmix64__t1284t(&modifying_seed,&__t1309t__);
  __t1310t=__t1309t__;
  s3=__t1310t;
  goto __t_return;
  __t_return:
  *__t1328t=s0;
  *__t1329t=s1;
  *__t1330t=s2;
  *__t1331t=s3;
}

static inline __attribute__((always_inline)) void rotl__t1283t(uint64_t x, uint64_t k, uint64_t* __t1332t) {
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
  *__t1332t=z;
}

static inline __attribute__((always_inline)) void next__t1315t(uint64_t* __t1333t, uint64_t* __t1334t, uint64_t* __t1335t, uint64_t* __t1336t, double* __t1337t) {
  uint64_t self__s0=*__t1333t;
  uint64_t self__s1=*__t1334t;
  uint64_t self__s2=*__t1335t;
  uint64_t self__s3=*__t1336t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1316t=0;
  uint64_t __t1317t__=0;
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
  __t1316t=45;
  rotl__t1283t(self__s3,__t1316t,&__t1317t__);
  self__s3=__t1317t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1333t=self__s0;
  *__t1334t=self__s1;
  *__t1335t=self__s2;
  *__t1336t=self__s3;
  *__t1337t=value;
}

static inline __attribute__((always_inline)) void print__t373t(double value) {
  int __t374t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1318t() {
  uint64_t __t1319t__s0=0;
  uint64_t __t1319t__s1=0;
  uint64_t __t1319t__s2=0;
  uint64_t __t1319t__s3=0;
  uint64_t __t1320t__s0=0;
  uint64_t __t1320t__s1=0;
  uint64_t __t1320t__s2=0;
  uint64_t __t1320t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1321t__=0;
  double __t1323t__=0;
  Rand__t1299t(&__t1319t__s0,&__t1319t__s1,&__t1319t__s2,&__t1319t__s3);
  __t1320t__s0=__t1319t__s0;
  __t1320t__s1=__t1319t__s1;
  __t1320t__s2=__t1319t__s2;
  __t1320t__s3=__t1319t__s3;
  rand__s0=__t1320t__s0;
  rand__s1=__t1320t__s1;
  rand__s2=__t1320t__s2;
  rand__s3=__t1320t__s3;
  next__t1315t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1321t__);
  print__t373t(__t1321t__);
  next__t1315t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1323t__);
  print__t373t(__t1323t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1318t();return 0;}