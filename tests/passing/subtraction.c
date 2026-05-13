#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp353v="\n";
const char* const __temp417v="hello world";
static const char* __temp_all_errcodes[6] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};

static inline __attribute__((always_inline)) void print__temp351v(const char* value) {
  int __temp352v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp430v) {
  int value=0;
  *__temp430v=value;
}

static inline __attribute__((always_inline)) void not__temp30v(int __temp_anon0, int* __temp431v) {
  int __temp31v__=0;
  false__temp10v(&__temp31v__);
  goto __temp_return;
  __temp_return:
  *__temp431v=__temp31v__;
}

static inline __attribute__((always_inline)) void is_different__temp88v(uint64_t x, uint64_t y, int* __temp432v) {
  int __temp89v=0;
  int __temp90v__=0;
  not__temp30v(__temp89v,&__temp90v__);
  goto __temp_return;
  __temp_return:
  *__temp432v=__temp90v__;
}

static inline __attribute__((always_inline)) void mul__temp137v(uint64_t x, uint64_t y, uint64_t* __temp433v) {
  int __temp138v__=0;
  uint64_t z=0;
  is_different__temp88v(x,y,&__temp138v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp433v=z;
}

static inline __attribute__((always_inline)) void lt__temp185v(uint64_t x, uint64_t y, char* __temp434v) {
  int __temp186v__=0;
  char z=0;
  is_different__temp88v(x,y,&__temp186v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp434v=z;
}

static inline __attribute__((always_inline)) int sub__temp333v(uint64_t x, uint64_t y, uint64_t* __temp435v) {
  int __temp334v__=0;
  int __temp335v=0;
  int __temp336v=0;
  char __temp337v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp88v(x,y,&__temp334v__);
  lt__temp185v(x,y,&__temp337v__);
  if(__temp337v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp435v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp364v(uint64_t value) {
  int __temp365v=0;
  const char* endl=0;
  endl=__temp353v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__temp413v(int64_t value, const char** __temp436v) {
  int __temp414v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp353v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp436v=ret;
}

static inline __attribute__((always_inline)) void main__temp416v() {
  char __temp419v=0;
  uint64_t __temp420v=0;
  uint64_t __temp421v=0;
  uint64_t __temp422v__=0;
  uint64_t __temp423v=0;
  uint64_t __temp424v__=0;
  char __temp426v=0;
  int64_t __temp427v=0;
  const char* __temp428v__=0;
  int __temp_complain=0;
  print__temp351v(__temp417v);
  __temp420v=2;
  __temp421v=3;
  mul__temp137v(__temp420v,__temp421v,&__temp422v__);
  __temp423v=20;
  __temp_complain=sub__temp333v(__temp422v__,__temp423v,&__temp424v__);
  __temp419v=__temp_complain;
  print__temp364v(__temp424v__);
  __temp419v=__temp419v==0;
  __temp427v=__temp_complain;
  __temp426v=(__temp_complain==0);
  __temp_complain=0;
  cstr__temp413v(__temp427v,&__temp428v__);
  print__temp351v(__temp428v__);
  __temp426v=__temp426v==0;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp416v();return 0;}