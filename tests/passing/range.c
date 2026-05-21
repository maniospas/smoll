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

static inline __attribute__((always_inline)) void range__t460t(uint64_t to, uint64_t* __t1319t, uint64_t* __t1320t) {
  int __t461t=0;
  uint64_t __t462t=0;
  uint64_t _from=0;
  uint64_t __t463t=0;
  uint64_t from=0;
  __t462t=0;
  _from=__t462t;
  __t463t=_from;
  from=__t463t;
  goto __t_return;
  __t_return:
  *__t1319t=from;
  *__t1320t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1321t) {
  int value=0;
  *__t1321t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t1322t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t1322t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t1323t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t1323t=__t95t__;
}

static inline __attribute__((always_inline)) void ge__t319t(uint64_t x, uint64_t y, char* __t1324t) {
  int __t320t__=0;
  char z=0;
  is_different__t93t(x,y,&__t320t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1324t=z;
}

static inline __attribute__((always_inline)) void add__t170t(uint64_t x, uint64_t y, uint64_t* __t1325t) {
  int __t171t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t171t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1325t=z;
}

static inline __attribute__((always_inline)) int next__t469t(uint64_t* __t1326t, uint64_t r__to, uint64_t* __t1327t) {
  uint64_t r__from=*__t1326t;
  char __t470t__=0;
  uint64_t ret=0;
  uint64_t __t471t=0;
  uint64_t __t472t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t319t(r__from,r__to,&__t470t__);
  if(__t470t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t471t=1;
  add__t170t(ret,__t471t,&__t472t__);
  r__from=__t472t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1326t=r__from;
  *__t1327t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1309t() {
  uint64_t __t1310t=0;
  uint64_t __t1311t__from=0;
  uint64_t __t1311t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1312t=0;
  uint64_t __t1313t__=0;
  uint64_t __t1314t=0;
  uint64_t value=0;
  uint64_t __t1316t=0;
  uint64_t __t1317t__=0;
  int __t_complain=0;
  __t1310t=10;
  range__t460t(__t1310t,&__t1311t__from,&__t1311t__to);
  r__from=__t1311t__from;
  r__to=__t1311t__to;
  while(1){
  __t_complain=next__t469t(&r__from,r__to,&__t1313t__);
  __t1312t=__t_complain;
  __t1314t=__t1313t__;
  value=__t1314t;
  __t1312t=__t1312t==0;
  if(!__t1312t){
  break;
  }
  print__t381t(value);
  }
  __t1316t=1;
  add__t170t(value,__t1316t,&__t1317t__);
  value=__t1317t__;
  print__t381t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1309t();return 0;}