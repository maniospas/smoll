#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp350v="\n";
const char* const __temp414v="hello world";
static const char* __temp_all_errcodes[6] = {"noerr",
"error",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};

static inline __attribute__((always_inline)) void print__temp348v(const char* value) {
  int __temp349v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp427v) {
  int value=0;
  *__temp427v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp428v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  goto __temp_return;
  __temp_return:
  *__temp428v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(uint64_t x, uint64_t y, int* __temp429v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  goto __temp_return;
  __temp_return:
  *__temp429v=__temp87v__;
}

static inline __attribute__((always_inline)) void mul__temp134v(uint64_t x, uint64_t y, uint64_t* __temp430v) {
  int __temp135v__=0;
  uint64_t z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  goto __temp_return;
  __temp_return:
  *__temp430v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(uint64_t x, uint64_t y, uint8_t* __temp431v) {
  int __temp183v__=0;
  uint8_t z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y;
  goto __temp_return;
  __temp_return:
  *__temp431v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(uint64_t x, uint64_t y, uint64_t* __temp432v) {
  int __temp331v__=0;
  int __temp332v=0;
  int __temp333v=0;
  uint8_t __temp334v__=0;
  uint64_t z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=2;
  goto __temp_failure;
  }
  z=x-y;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp432v=z;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp361v(uint64_t value) {
  int __temp362v=0;
  const char* endl=0;
  endl=__temp350v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__temp410v(int64_t value, const char** __temp433v) {
  int __temp411v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp350v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp433v=ret;
}

static inline __attribute__((always_inline)) void main__temp413v() {
  uint8_t __temp416v=0;
  uint64_t __temp417v=0;
  uint64_t __temp418v=0;
  uint64_t __temp419v__=0;
  uint64_t __temp420v=0;
  uint64_t __temp421v__=0;
  uint8_t __temp423v=0;
  int64_t __temp424v=0;
  const char* __temp425v__=0;
  int __temp_complain=0;
  print__temp348v(__temp414v);
  __temp417v=2;
  __temp418v=3;
  mul__temp134v(__temp417v,__temp418v,&__temp419v__);
  __temp420v=20;
  __temp_complain=sub__temp330v(__temp419v__,__temp420v,&__temp421v__);
  __temp416v=__temp_complain;
  print__temp361v(__temp421v__);
  __temp416v=__temp416v==0;
  __temp424v=__temp_complain;
  __temp423v=(__temp_complain==0);
  __temp_complain=0;
  cstr__temp410v(__temp424v,&__temp425v__);
  print__temp348v(__temp425v__);
  __temp423v=__temp423v==0;
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp413v();return 0;}