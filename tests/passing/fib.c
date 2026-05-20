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
int fib__t1266t(uint64_t n, uint64_t* __t1292t) ;
static inline __attribute__((always_inline)) void false__t10t(int* __t1285t) {
  int value=0;
  *__t1285t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1286t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1286t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1287t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1287t=__t95t__;
}

static inline __attribute__((always_inline)) void le__t295t(uint64_t x, uint64_t y, char* __t1288t) {
  int __t296t__=0;
  char z=0;
  is_different__t93t(x,y,&__t296t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1288t=z;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t1289t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1289t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t1290t) {
  int __t348t__=0;
  int __t349t=0;
  int __t350t=0;
  char __t351t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t93t(x,y,&__t348t__);
  lt__t247t(x,y,&__t351t__);
  if(__t351t__){
  __t_errcode=4;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1290t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1291t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1291t=z;
}

int fib__t1266t(uint64_t n, uint64_t* __t1292t) {
  uint64_t __t1275t=0;
  char __t1276t__=0;
  uint64_t __t1277t=0;
  uint64_t __t1278t=0;
  uint64_t __t1279t__=0;
  uint64_t __t1280t__=0;
  uint64_t __t1281t=0;
  uint64_t __t1282t__=0;
  uint64_t __t1283t__=0;
  uint64_t __t1284t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1275t=1;
  le__t295t(n,__t1275t,&__t1276t__);
  if(__t1276t__){
  __t1277t=1;
  goto __t_return;
  }
  __t1278t=1;
  __t_errcode=sub__t347t(n,__t1278t,&__t1279t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1266t(__t1279t__,&__t1280t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1281t=2;
  __t_errcode=sub__t347t(n,__t1281t,&__t1282t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=fib__t1266t(__t1282t__,&__t1283t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t170t(__t1280t__,__t1283t__,&__t1284t__);
  __t1277t=__t1284t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1292t=__t1277t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1270t() {
  uint64_t __t1271t=0;
  uint64_t __t1272t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1271t=10;
  __t_errcode=fib__t1266t(__t1271t,&__t1272t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t376t(__t1272t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1270t();return 0;}