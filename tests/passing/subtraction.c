#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t482t="hello world";
const char* const __t371t="\n";
static const char* __t_all_errcodes[10] = {"noerr",
"error",
"null pointer",
"division by zero ",
"modulo by zero ",
"nat subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"iterator range"
};

static inline __attribute__((always_inline)) void print__t369t(const char* value) {
  int __t370t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t495t) {
  int value=0;
  *__t495t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t496t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t496t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t497t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t497t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t195t(uint64_t x, uint64_t y, uint64_t* __t498t) {
  int __t196t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t196t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t498t=z;
}

static inline __attribute__((always_inline)) void lt__t248t(uint64_t x, uint64_t y, char* __t499t) {
  int __t249t__=0;
  char z=0;
  is_different__t94t(x,y,&__t249t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t499t=z;
}

static inline __attribute__((always_inline)) int sub__t348t(uint64_t x, uint64_t y, uint64_t* __t500t) {
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
  *__t500t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t382t(uint64_t value) {
  int __t383t=0;
  const char* endl=0;
  endl=__t371t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t480t(int64_t value, const char** __t501t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t501t=ret;
}

static inline __attribute__((always_inline)) void main__t481t() {
  char __t484t=0;
  uint64_t __t485t=0;
  uint64_t __t486t=0;
  uint64_t __t487t__=0;
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  char __t491t=0;
  int64_t __t492t=0;
  const char* __t493t__=0;
  int __t_complain=0;
  print__t369t(__t482t);
  __t485t=2;
  __t486t=3;
  mul__t195t(__t485t,__t486t,&__t487t__);
  __t488t=20;
  __t_complain=sub__t348t(__t487t__,__t488t,&__t489t__);
  __t484t=__t_complain;
  print__t382t(__t489t__);
  __t484t=__t484t==0;
  __t492t=__t_complain;
  __t491t=(__t_complain==0);
  __t_complain=0;
  cstr__t480t(__t492t,&__t493t__);
  print__t369t(__t493t__);
  __t491t=__t491t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t481t();return 0;}