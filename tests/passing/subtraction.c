#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t490t="hello world";
const char* const __t378t="\n";
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

static inline __attribute__((always_inline)) void console__t366t() {
  goto __t_return;
  __t_return:
}

static inline __attribute__((always_inline)) void print__t376t(const char* value) {
  int __t377t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t503t) {
  int value=0;
  *__t503t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t504t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t504t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t505t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t505t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t506t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t506t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t507t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t507t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t508t) {
  int __t353t__=0;
  int __t354t=0;
  int __t355t=0;
  char __t356t__=0;
  uint64_t z=0;
  int __t_errcode=0;
  int __t_complain=0;
  is_different__t95t(x,y,&__t353t__);
  lt__t252t(x,y,&__t356t__);
  if(__t356t__){
  __t_errcode=5;
  goto __t_failure;
  }
  z=x-y;
  goto __t_return;
  
  __t_failure:__t_return:
  *__t508t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t389t(uint64_t value) {
  int __t390t=0;
  const char* endl=0;
  endl=__t378t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t487t(int64_t value, const char** __t509t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t509t=ret;
}

static inline __attribute__((always_inline)) void main__t488t() {
  char __t492t=0;
  uint64_t __t493t=0;
  uint64_t __t494t=0;
  uint64_t __t495t__=0;
  uint64_t __t496t=0;
  uint64_t __t497t__=0;
  char __t499t=0;
  int64_t __t500t=0;
  const char* __t501t__=0;
  int __t_complain=0;
  console__t366t();
  print__t376t(__t490t);
  __t493t=2;
  __t494t=3;
  mul__t199t(__t493t,__t494t,&__t495t__);
  __t496t=20;
  __t_complain=sub__t352t(__t495t__,__t496t,&__t497t__);
  __t492t=__t_complain;
  print__t389t(__t497t__);
  __t492t=__t492t==0;
  __t500t=__t_complain;
  __t499t=(__t_complain==0);
  __t_complain=0;
  cstr__t487t(__t500t,&__t501t__);
  print__t376t(__t501t__);
  __t499t=__t499t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t488t();return 0;}