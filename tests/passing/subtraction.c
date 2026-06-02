#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t489t="hello world";
const char* const __t377t="\n";
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

static inline __attribute__((always_inline)) void console__t365t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t375t(const char* value) {
  int __t376t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t502t) {
  int value=0;
  *__t502t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t503t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t503t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t504t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t504t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t505t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t505t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t506t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t506t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t507t) {
  int __t352t__=0;
  int __t353t=0;
  int __t354t=0;
  char __t355t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t94t(x,y,&__t352t__);
  lt__t251t(x,y,&__t355t__);
  if(__t355t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t507t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t388t(uint64_t value) {
  int __t389t=0;
  const char* endl=0;
  endl=__t377t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t486t(int64_t value, const char** __t508t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t508t=ret;
}

static inline __attribute__((always_inline)) void main__t487t() {
  char __t491t=0;
  uint64_t __t492t=0;
  uint64_t __t493t=0;
  uint64_t __t494t__=0;
  uint64_t __t495t=0;
  uint64_t __t496t__=0;
  char __t498t=0;
  int64_t __t499t=0;
  const char* __t500t__=0;
  int __t_complain=0;
  console__t365t();
  print__t375t(__t489t);
  __t492t=2;
  __t493t=3;
  mul__t198t(__t492t,__t493t,&__t494t__);
  __t495t=20;
  __t_complain=sub__t351t(__t494t__,__t495t,&__t496t__);
  __t491t=__t_complain;
  print__t388t(__t496t__);
  __t491t=__t491t==0;
  __t499t=__t_complain;
  __t498t=(__t_complain==0);
  __t_complain=0;
  cstr__t486t(__t499t,&__t500t__);
  print__t375t(__t500t__);
  __t498t=__t498t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t487t();return 0;}