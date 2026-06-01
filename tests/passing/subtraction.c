#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __t_argc;
char** __t_argv;
const char* const __t485t="hello world";
const char* const __t374t="\n";
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

static inline __attribute__((always_inline)) void print__t372t(const char* value) {
  int __t373t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__t10t(int* __t498t) {
  int value=0;
  *__t498t=value;
}

static inline __attribute__((always_inline)) void not__t36t(int __t_anon0, int* __t499t) {
  int __t37t__=0;
  false__t10t(&__t37t__);
  goto __t_return;
  __t_return:
  *__t499t=__t37t__;
}

static inline __attribute__((always_inline)) void is_different__t94t(uint64_t x, uint64_t y, int* __t500t) {
  int __t95t=0;
  int __t96t__=0;
  not__t36t(__t95t,&__t96t__);
  goto __t_return;
  __t_return:
  *__t500t=__t96t__;
}

static inline __attribute__((always_inline)) void mul__t198t(uint64_t x, uint64_t y, uint64_t* __t501t) {
  int __t199t__=0;
  uint64_t z=0;
  is_different__t94t(x,y,&__t199t__);
  z=x*y;
  goto __t_return;
  __t_return:
  *__t501t=z;
}

static inline __attribute__((always_inline)) void lt__t251t(uint64_t x, uint64_t y, char* __t502t) {
  int __t252t__=0;
  char z=0;
  is_different__t94t(x,y,&__t252t__);
  z=x<y;
  goto __t_return;
  __t_return:
  *__t502t=z;
}

static inline __attribute__((always_inline)) int sub__t351t(uint64_t x, uint64_t y, uint64_t* __t503t) {
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
  *__t503t=z;
  
  return __t_errcode;
}

static inline __attribute__((always_inline)) void print__t385t(uint64_t value) {
  int __t386t=0;
  const char* endl=0;
  endl=__t374t;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__t483t(int64_t value, const char** __t504t) {
  const char* ret=0;
  ret=__t_all_errcodes[value];
  goto __t_return;
  __t_return:
  *__t504t=ret;
}

static inline __attribute__((always_inline)) void main__t484t() {
  char __t487t=0;
  uint64_t __t488t=0;
  uint64_t __t489t=0;
  uint64_t __t490t__=0;
  uint64_t __t491t=0;
  uint64_t __t492t__=0;
  char __t494t=0;
  int64_t __t495t=0;
  const char* __t496t__=0;
  int __t_complain=0;
  print__t372t(__t485t);
  __t488t=2;
  __t489t=3;
  mul__t198t(__t488t,__t489t,&__t490t__);
  __t491t=20;
  __t_complain=sub__t351t(__t490t__,__t491t,&__t492t__);
  __t487t=__t_complain;
  print__t385t(__t492t__);
  __t487t=__t487t==0;
  __t495t=__t_complain;
  __t494t=(__t_complain==0);
  __t_complain=0;
  cstr__t483t(__t495t,&__t496t__);
  print__t372t(__t496t__);
  __t494t=__t494t==0;
}

int main(int argc, char** argv) {__t_argc = argc;__t_argv = argv;main__t484t();return 0;}