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

static inline __attribute__((always_inline)) void range__t461t(uint64_t to, uint64_t* __t1331t, uint64_t* __t1332t) {
  int __t462t=0;
  uint64_t __t463t=0;
  uint64_t _from=0;
  uint64_t __t464t=0;
  uint64_t from=0;
  __t463t=0;
  _from=__t463t;
  __t464t=_from;
  from=__t464t;
  goto __t_return;
  __t_return:
  *__t1331t=from;
  *__t1332t=to;
}

static inline __attribute__((always_inline)) void false__t10t(int* __t1333t) {
  int value=0;
  *__t1333t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1334t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1334t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1335t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1335t=__t96t__;
}

static inline __attribute__((always_inline)) void ge__t320t(uint64_t x, uint64_t y, char* __t1336t) {
  int __t321t__=0;
  char z=0;
  is_different__t94t(x,y,&__t321t__);
  z=x>=y;
  goto __t_return;
  __t_return:
  *__t1336t=z;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1337t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1337t=z;
}

static inline __attribute__((always_inline)) int next__t470t(uint64_t* __t1338t, uint64_t r__to, uint64_t* __t1339t) {
  uint64_t r__from=*__t1338t;
  char __t471t__=0;
  uint64_t ret=0;
  uint64_t __t472t=0;
  uint64_t __t473t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  ge__t320t(r__from,r__to,&__t471t__);
  if(__t471t__){
  __t_errcode=8;
  goto __t_failure;
  }
  ret=r__from;
  __t472t=1;
  add__t171t(ret,__t472t,&__t473t__);
  r__from=__t473t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1338t=r__from;
  *__t1339t=ret;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void main__t1321t() {
  uint64_t __t1322t=0;
  uint64_t __t1323t__from=0;
  uint64_t __t1323t__to=0;
  uint64_t r__from=0;
  uint64_t r__to=0;
  char __t1324t=0;
  uint64_t __t1325t__=0;
  uint64_t __t1326t=0;
  uint64_t value=0;
  uint64_t __t1328t=0;
  uint64_t __t1329t__=0;
  int __t_complain=0;
  __t1322t=10;
  range__t461t(__t1322t,&__t1323t__from,&__t1323t__to);
  r__from=__t1323t__from;
  r__to=__t1323t__to;
  while(1){
  __t_complain=next__t470t(&r__from,r__to,&__t1325t__);
  __t1324t=__t_complain;
  __t1326t=__t1325t__;
  value=__t1326t;
  __t1324t=__t1324t==0;
  if(!__t1324t){
  break;
  }
  print__t382t(value);
  }
  __t1328t=1;
  add__t171t(value,__t1328t,&__t1329t__);
  value=__t1329t__;
  print__t382t(value);
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1321t();return 0;}