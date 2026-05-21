#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t483t="hello world";
const char* const __t370t="\n";
static const char* __t_all_errcodes[10] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range"
};

static inline __attribute__((always_inline)) void print__t368t(const char* value) {
  int __t369t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t496t) {
  int value=0;
  *__t496t=value;
}

static inline __attribute__((always_inline)) void not__t35t(int __t_anon0, int* __t497t) {
  int __t36t__=0;
  false__t10t(&__t36t__);
  goto __t_return;
  __t_return:
  *__t497t=__t36t__;
}

static inline __attribute__((always_inline)) void is_different__t93t(uint64_t x, uint64_t y, int* __t498t) {
  int __t94t=0;
  int __t95t__=0;
  not__t35t(__t94t,&__t95t__);
  goto __t_return;
  __t_return:
  *__t498t=__t95t__;
}

static inline __attribute__((always_inline)) void mul__t194t(uint64_t x, uint64_t y, uint64_t* __t499t) {
  int __t195t__=0;
  uint64_t z=0;
  is_different__t93t(x,y,&__t195t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t499t=z;
}

static inline __attribute__((always_inline)) void lt__t247t(uint64_t x, uint64_t y, char* __t500t) {
  int __t248t__=0;
  char z=0;
  is_different__t93t(x,y,&__t248t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t500t=z;
}

static inline __attribute__((always_inline)) int sub__t347t(uint64_t x, uint64_t y, uint64_t* __t501t) {
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
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t501t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t381t(uint64_t value) {
  int __t382t=0;
  const char* endl=0;
  endl=__t370t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t479t(int64_t value, const char** __t502t) {
  int __t480t=0;
  const char* endl=0;
  const char* ret=0;
  endl=__t370t;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t502t=ret;
}

static inline __attribute__((always_inline)) void main__t482t() {
  char __t485t=0;
  uint64_t __t486t=0;
  uint64_t __t487t=0;
  uint64_t __t488t__=0;
  uint64_t __t489t=0;
  uint64_t __t490t__=0;
  char __t492t=0;
  int64_t __t493t=0;
  const char* __t494t__=0;
  int __t_complain=0;
  print__t368t(__t483t);
  __t486t=2;
  __t487t=3;
  mul__t194t(__t486t,__t487t,&__t488t__);
  __t489t=20;
  __t_complain=sub__t347t(__t488t__,__t489t,&__t490t__);
  __t485t=__t_complain;
  print__t381t(__t490t__);
  __t485t=__t485t==0;
  __t493t=__t_complain;
  __t492t=(__t_complain==0);
  __t_complain=0;
  cstr__t479t(__t493t,&__t494t__);
  print__t368t(__t494t__);
  __t492t=__t492t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t482t();return 0;}