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

static inline __attribute__((always_inline)) void range__t436t(uint64_t to, uint64_t* __t1276t, uint64_t* __t1277t) {
  int __t437t=0;
  uint64_t __t438t=0;
  uint64_t _from=0;
  uint64_t __t439t=0;
  uint64_t from=0;
  __t438t=0;
  _from=__t438t;
  __t439t=_from;
  from=__t439t;
  goto __t_return;
  __t_return:
  *__t1276t=from;
  *__t1277t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1278t) {
  int value=0;
  *__t1278t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1279t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1279t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1280t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1280t=__t95t__;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1281t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1281t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1282t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1282t=z;
}

static inline __attribute__((always_inline)) int next__t440t(uint64_t* __t1283t, uint64_t r__to, uint64_t* __t1284t) {
  uint64_t r__from=*__t1283t;
  char __t441t__=0;
  uint64_t ret=0;
  uint64_t __t442t=0;
  uint64_t __t443t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t441t__);
  if(__t441t__){
  __t_errcode=7;
  goto __t_failure;
  }
  ret=r__from;
  __t442t=1;
  add__t170t(ret,__t442t,&__t443t__);
  r__from=__t443t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1283t=r__from;
  *__t1284t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1266t() {
  uint64_t __t1267t=0;
  uint64_t __t1268t__from=0;
  uint64_t __t1268t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1269t=0;
  uint64_t __t1270t__=0;
  uint64_t __t1271t=0;
  uint64_t value=0;
  uint64_t __t1273t=0;
  uint64_t __t1274t__=0;
  int __t_complain=0;
  __t1267t=10;
  range__t436t(__t1267t,&__t1268t__from,&__t1268t__to);
  r__from=__t1268t__from;
  r__to=__t1268t__to;
  while(1){
  __t_complain=next__t440t(&r__from,r__to,&__t1270t__);
  __t1269t=__t_complain;
  __t1271t=__t1270t__;
  value=__t1271t;
  __t1269t=__t1269t==0;
  if(!__t1269t){
  break;
  }
  print__t376t(value);
  }
  __t1273t=1;
  add__t170t(value,__t1273t,&__t1274t__);
  value=__t1274t__;
  print__t376t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1266t();return 0;}