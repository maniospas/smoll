#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp446v="hello world";
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[8] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};

static inline __attribute__((always_inline)) void print__temp362v(const char* value) {
  int __temp363v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp459v) {
  int value=0;
  *__temp459v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp460v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp460v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp461v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp461v=__temp94v__;
}

static inline __attribute__((always_inline)) void mul__temp193v(uint64_t x, uint64_t y, uint64_t* __temp462v) {
  int __temp194v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp194v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp462v=z;
}

static inline __attribute__((always_inline)) void lt__temp246v(uint64_t x, uint64_t y, char* __temp463v) {
  int __temp247v__=0;
  char z=0;
  is_different__temp92v(x,y,&__temp247v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp463v=z;
}

static inline __attribute__((always_inline)) int sub__temp346v(uint64_t x, uint64_t y, uint64_t* __temp464v) {
  int __temp347v__=0;
  int __temp348v=0;
  int __temp349v=0;
  char __temp350v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp92v(x,y,&__temp347v__);
  lt__temp246v(x,y,&__temp350v__);
  if(__temp350v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp464v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__temp442v(int64_t value, const char** __temp465v) {
  int __temp443v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp364v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp465v=ret;
}

static inline __attribute__((always_inline)) void main__temp445v() {
  char __temp448v=0;
  uint64_t __temp449v=0;
  uint64_t __temp450v=0;
  uint64_t __temp451v__=0;
  uint64_t __temp452v=0;
  uint64_t __temp453v__=0;
  char __temp455v=0;
  int64_t __temp456v=0;
  const char* __temp457v__=0;
  int __temp_complain=0;
  print__temp362v(__temp446v);
  __temp449v=2;
  __temp450v=3;
  mul__temp193v(__temp449v,__temp450v,&__temp451v__);
  __temp452v=20;
  __temp_complain=sub__temp346v(__temp451v__,__temp452v,&__temp453v__);
  __temp448v=__temp_complain;
  print__temp375v(__temp453v__);
  __temp448v=__temp448v==0;
  __temp456v=__temp_complain;
  __temp455v=(__temp_complain==0);
  __temp_complain=0;
  cstr__temp442v(__temp456v,&__temp457v__);
  print__temp362v(__temp457v__);
  __temp455v=__temp455v==0;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp445v();return 0;}