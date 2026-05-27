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
int fib__t1325t(uint64_t n, uint64_t* __t1354t) ;
static inline __attribute__((always_inline)) void false__t10t(int* __t1346t) {
  int value=0;
  *__t1346t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t1347t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t1347t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t1348t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t1348t=__t96t__;
}

static inline __attribute__((always_inline)) void le__t296t(uint64_t x, uint64_t y, char* __t1349t) {
  int __t297t__=0;
  char z=0;
  is_different__t94t(x,y,&__t297t__);
  z=x<=y;
  goto __t_return;
  __t_return:
  *__t1349t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t1350t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t1350t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t1351t) {
  int __t349t__=0;
  int __t350t=0;
  int __t351t=0;
  char __t352t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t349t__);
  lt__t248t(x,y,&__t352t__);
  if(__t352t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1351t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) int call_fib__t1329t(uint64_t n, uint64_t* __t1352t) {
  uint64_t __t1330t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t_errcode=fib__t1325t(n,&__t1330t__);
  if(__t_errcode){
  goto __t_failure;
  }
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1352t=__t1330t__;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void add__t171t(uint64_t x, uint64_t y, uint64_t* __t1353t) {
  int __t172t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t172t__);
  z=x+y;
  goto __t_return;
  __t_return:
  *__t1353t=z;
}

int fib__t1325t(uint64_t n, uint64_t* __t1354t) {
  uint64_t __t1336t=0;
  char __t1337t__=0;
  uint64_t __t1338t=0;
  uint64_t __t1339t=0;
  uint64_t __t1340t__=0;
  uint64_t __t1341t__=0;
  uint64_t __t1342t=0;
  uint64_t __t1343t__=0;
  uint64_t __t1344t__=0;
  uint64_t __t1345t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1336t=1;
  le__t296t(n,__t1336t,&__t1337t__);
  if(__t1337t__){
  __t1338t=1;
  goto __t_return;
  }
  __t1339t=1;
  __t_errcode=sub__t348t(n,__t1339t,&__t1340t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1329t(__t1340t__,&__t1341t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t1342t=2;
  __t_errcode=sub__t348t(n,__t1342t,&__t1343t__);
  if(__t_errcode){
  goto __t_failure;
  }
  __t_errcode=call_fib__t1329t(__t1343t__,&__t1344t__);
  if(__t_errcode){
  goto __t_failure;
  }
  add__t171t(__t1341t__,__t1344t__,&__t1345t__);
  __t1338t=__t1345t__;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t1354t=__t1338t;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) int main__t1331t() {
  uint64_t __t1332t=0;
  uint64_t __t1333t__=0;
  int __t_errcode=0;
  int __t_complain=0;
  __t1332t=42;
  __t_errcode=fib__t1325t(__t1332t,&__t1333t__);
  if(__t_errcode){
  goto __t_failure;
  }
  print__t382t(__t1333t__);
  
  __t_failure:
  return __t_errcode;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t1331t();return 0;}