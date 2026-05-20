#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t365t="\n";
const char* const __t448t="hello world";
static const char* __t_all_errcodes[9] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};

static inline __attribute__((always_inline)) void print__t363t(const char* value) {
  int __t364t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t461t) {
  int value=0;
  *__t461t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t462t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t462t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t463t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t463t=__t95t__;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t464t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t464t=z;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t465t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t465t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t466t) {
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
  *__t466t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t376t(uint64_t value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t365t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t444t(int64_t value, const char** __t467t) {
  int __t445t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t365t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t467t=ret;
}

static inline __attribute__((always_inline)) void main__t447t() {
  char __t450t=0;
  uint64_t __t451t=0;
  uint64_t __t452t=0;
  uint64_t __t453t__=0;
  uint64_t __t454t=0;
  uint64_t __t455t__=0;
  char __t457t=0;
  int64_t __t458t=0;
  const char* __t459t__=0;
  int __t_complain=0;
  print__t363t(__t448t);
  __t451t=2;
  __t452t=3;
  mul__t194t(__t451t,__t452t,&__t453t__);
  __t454t=20;
  __t_complain=sub__t347t(__t453t__,__t454t,&__t455t__);
  __t450t=__t_complain;
  print__t376t(__t455t__);
  __t450t=__t450t==0;
  __t458t=__t_complain;
  __t457t=(__t_complain==0);
  __t_complain=0;
  cstr__t444t(__t458t,&__t459t__);
  print__t363t(__t459t__);
  __t457t=__t457t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t447t();return 0;}