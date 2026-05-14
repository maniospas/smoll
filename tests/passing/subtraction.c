#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp447v="hello world";
const char* const __temp363v="\n";
static const char* __temp_all_errcodes[8] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};

static inline __attribute__((always_inline)) void print__temp361v(const char* value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp460v) {
  int value=0;
  *__temp460v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp461v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp461v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp462v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp462v=__temp95v__;
}

static inline __attribute__((always_inline)) void mul__temp194v(uint64_t x, uint64_t y, uint64_t* __temp463v) {
  int __temp195v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp195v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp463v=z;
}

static inline __attribute__((always_inline)) void lt__temp247v(uint64_t x, uint64_t y, char* __temp464v) {
  int __temp248v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp248v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp464v=z;
}

static inline __attribute__((always_inline)) int sub__temp347v(uint64_t x, uint64_t y, uint64_t* __temp465v) {
  int __temp348v__=0;
  int __temp349v=0;
  int __temp350v=0;
  char __temp351v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp93v(x,y,&__temp348v__);
  lt__temp247v(x,y,&__temp351v__);
  if(__temp351v__){
  __temp_errcode=4;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp465v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp374v(uint64_t value) {
  int __temp375v=0;
  const char* endl=0;
  endl=__temp363v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__temp443v(int64_t value, const char** __temp466v) {
  int __temp444v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp363v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp466v=ret;
}

static inline __attribute__((always_inline)) void main__temp446v() {
  char __temp449v=0;
  uint64_t __temp450v=0;
  uint64_t __temp451v=0;
  uint64_t __temp452v__=0;
  uint64_t __temp453v=0;
  uint64_t __temp454v__=0;
  char __temp456v=0;
  int64_t __temp457v=0;
  const char* __temp458v__=0;
  int __temp_complain=0;
  print__temp361v(__temp447v);
  __temp450v=2;
  __temp451v=3;
  mul__temp194v(__temp450v,__temp451v,&__temp452v__);
  __temp453v=20;
  __temp_complain=sub__temp347v(__temp452v__,__temp453v,&__temp454v__);
  __temp449v=__temp_complain;
  print__temp374v(__temp454v__);
  __temp449v=__temp449v==0;
  __temp457v=__temp_complain;
  __temp456v=(__temp_complain==0);
  __temp_complain=0;
  cstr__temp443v(__temp457v,&__temp458v__);
  print__temp361v(__temp458v__);
  __temp456v=__temp456v==0;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp446v();return 0;}