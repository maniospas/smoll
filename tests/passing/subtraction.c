#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t484t="hello world";
const char* const __t382t="\n";
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

static inline __attribute__((always_inline)) void print__t380t(const char* value) {
  int __t381t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t497t) {
  int value=0;
  *__t497t=value;
}

static inline __attribute__((always_inline)) void not__t37t(int __t_anon0, int* __t498t) {
  int __t38t__=0;
  false__t10t(&__t38t__);
  goto __t_return;
  __t_return:
  *__t498t=__t38t__;
}

static inline __attribute__((always_inline)) void is_different__t95t(uint64_t x, uint64_t y, int* __t499t) {
  int __t96t=0;
  int __t97t__=0;
  not__t37t(__t96t,&__t97t__);
  goto __t_return;
  __t_return:
  *__t499t=__t97t__;
}

static inline __attribute__((always_inline)) void mul__t199t(uint64_t x, uint64_t y, uint64_t* __t500t) {
  int __t200t__=0;
  uint64_t z=0;
  is_different__t95t(x,y,&__t200t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t500t=z;
}

static inline __attribute__((always_inline)) void lt__t252t(uint64_t x, uint64_t y, char* __t501t) {
  int __t253t__=0;
  char z=0;
  is_different__t95t(x,y,&__t253t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t501t=z;
}

static inline __attribute__((always_inline)) int sub__t352t(uint64_t x, uint64_t y, uint64_t* __t502t) {
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
  
  __t_failure:
  goto __t_skip_returns;__t_return:
  *__t502t=z;
  
  __t_skip_returns:
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t393t(uint64_t value) {
  int __t394t=0;
  const char* endl=0;
  endl=__t382t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t481t(int64_t value, const char** __t503t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t503t=ret;
}

static inline __attribute__((always_inline)) void main__t482t() {
  char __t486t=0;
  uint64_t __t487t=0;
  uint64_t __t488t=0;
  uint64_t __t489t__=0;
  uint64_t __t490t=0;
  uint64_t __t491t__=0;
  char __t493t=0;
  int64_t __t494t=0;
  const char* __t495t__=0;
  int __t_complain=0;
  console__t366t();
  print__t380t(__t484t);
  __t487t=2;
  __t488t=3;
  mul__t199t(__t487t,__t488t,&__t489t__);
  __t490t=20;
  __t_complain=sub__t352t(__t489t__,__t490t,&__t491t__);
  __t486t=__t_complain;
  print__t393t(__t491t__);
  __t486t=__t486t==0;
  __t494t=__t_complain;
  __t493t=(__t_complain==0);
  __t_complain=0;
  cstr__t481t(__t494t,&__t495t__);
  print__t380t(__t495t__);
  __t493t=__t493t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t482t();return 0;}