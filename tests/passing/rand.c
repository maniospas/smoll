#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
static const char* __t_all_errcodes[34] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
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

static inline __attribute__((always_inline)) void splitmix64__t1268t(uint64_t* __t1305t) {
  char* ts=0;
  uint64_t seed=0;
  ts=alloca(sizeof(struct timespec));
  clock_gettime(CLOCK_REALTIME,(struct timespec*)ts);
  seed=(unsigned long long)((struct timespec*)ts)->tv_sec*(unsigned long long)1000000000+((struct timespec*)ts)->tv_nsec;
  goto __t_return;
  __t_return:
  *__t1305t=seed;
}

static inline __attribute__((always_inline)) void splitmix64__t1267t(uint64_t* __t1306t, uint64_t* __t1307t) {
  uint64_t x=*__t1306t;
  uint64_t z=0;
  uint64_t rot=0;
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
  goto __t_return;
  __t_return:
  *__t1306t=x;
  *__t1307t=z;
}

static inline __attribute__((always_inline)) void Rand__t1281t(uint64_t* __t1308t, uint64_t* __t1309t, uint64_t* __t1310t, uint64_t* __t1311t) {
  int __t1282t=0;
  uint64_t __t1283t__=0;
  uint64_t seed=0;
  uint64_t __t1284t=0;
  uint64_t modifying_seed=0;
  uint64_t __t1285t__=0;
  uint64_t __t1286t=0;
  uint64_t s0=0;
  uint64_t __t1287t__=0;
  uint64_t __t1288t=0;
  uint64_t s1=0;
  uint64_t __t1289t__=0;
  uint64_t __t1290t=0;
  uint64_t s2=0;
  uint64_t __t1291t__=0;
  uint64_t __t1292t=0;
  uint64_t s3=0;
  splitmix64__t1268t(&__t1283t__);
  seed=__t1283t__;
  __t1284t=seed;
  modifying_seed=__t1284t;
  splitmix64__t1267t(&modifying_seed,&__t1285t__);
  __t1286t=__t1285t__;
  s0=__t1286t;
  splitmix64__t1267t(&modifying_seed,&__t1287t__);
  __t1288t=__t1287t__;
  s1=__t1288t;
  splitmix64__t1267t(&modifying_seed,&__t1289t__);
  __t1290t=__t1289t__;
  s2=__t1290t;
  splitmix64__t1267t(&modifying_seed,&__t1291t__);
  __t1292t=__t1291t__;
  s3=__t1292t;
  goto __t_return;
  __t_return:
  *__t1308t=s0;
  *__t1309t=s1;
  *__t1310t=s2;
  *__t1311t=s3;
}

static inline __attribute__((always_inline)) void rotl__t1266t(uint64_t x, uint64_t k, uint64_t* __t1312t) {
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
  *__t1312t=z;
}

static inline __attribute__((always_inline)) void next__t1297t(uint64_t* __t1313t, uint64_t* __t1314t, uint64_t* __t1315t, uint64_t* __t1316t, double* __t1317t) {
  uint64_t self__s0=*__t1313t;
  uint64_t self__s1=*__t1314t;
  uint64_t self__s2=*__t1315t;
  uint64_t self__s3=*__t1316t;
  uint64_t result=0;
  uint64_t t=0;
  uint64_t __t1298t=0;
  uint64_t __t1299t__=0;
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
  __t1298t=45;
  rotl__t1266t(self__s3,__t1298t,&__t1299t__);
  self__s3=__t1299t__;
  denom=0x0020000000000000ULL;
  nom=result>>11;
  value=nom/denom;
  goto __t_return;
  __t_return:
  *__t1313t=self__s0;
  *__t1314t=self__s1;
  *__t1315t=self__s2;
  *__t1316t=self__s3;
  *__t1317t=value;
}

static inline __attribute__((always_inline)) void print__t368t(double value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%.6f%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1300t() {
  uint64_t __t1301t__s0=0;
  uint64_t __t1301t__s1=0;
  uint64_t __t1301t__s2=0;
  uint64_t __t1301t__s3=0;
  uint64_t __t1302t__s0=0;
  uint64_t __t1302t__s1=0;
  uint64_t __t1302t__s2=0;
  uint64_t __t1302t__s3=0;
  uint64_t rand__s0=0;
  uint64_t rand__s1=0;
  uint64_t rand__s2=0;
  uint64_t rand__s3=0;
  double __t1303t__=0;
  Rand__t1281t(&__t1301t__s0,&__t1301t__s1,&__t1301t__s2,&__t1301t__s3);
  __t1302t__s0=__t1301t__s0;
  __t1302t__s1=__t1301t__s1;
  __t1302t__s2=__t1301t__s2;
  __t1302t__s3=__t1301t__s3;
  rand__s0=__t1302t__s0;
  rand__s1=__t1302t__s1;
  rand__s2=__t1302t__s2;
  rand__s3=__t1302t__s3;
  next__t1297t(&rand__s0,&rand__s1,&rand__s2,&rand__s3,&__t1303t__);
  print__t368t(__t1303t__);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1300t();return 0;}