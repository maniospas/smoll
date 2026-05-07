#include <std/common.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static const char* __temp_all_errcodes[5] = {
"noerr",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end"
};
const char* const __temp348v="\n";
const char* const __temp413v="hello world";

static inline __attribute__((always_inline)) void print__temp346v(const char* value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void false__temp7v(int* __temp425v) {
  int value=0;
  *__temp425v=value;
}

static inline __attribute__((always_inline)) void not__temp27v(int __temp_anon0, int* __temp426v) {
  int __temp28v__=0;
  false__temp7v(&__temp28v__);
  *__temp426v=__temp28v__;
}

static inline __attribute__((always_inline)) void is_different__temp85v(unsigned long long x, unsigned long long y, int* __temp427v) {
  int __temp86v=0;
  int __temp87v__=0;
  not__temp27v(__temp86v,&__temp87v__);
  *__temp427v=__temp87v__;
}

static inline __attribute__((always_inline)) void mul__temp134v(unsigned long long x, unsigned long long y, unsigned long long* __temp428v) {
  int __temp135v__=0;
  unsigned long long z=0;
  is_different__temp85v(x,y,&__temp135v__);
  z=x*y;
  *__temp428v=z;
}

static inline __attribute__((always_inline)) void lt__temp182v(unsigned long long x, unsigned long long y, int* __temp429v) {
  int __temp183v__=0;
  int z=0;
  is_different__temp85v(x,y,&__temp183v__);
  z=x<y?1:0;
  *__temp429v=z;
}

static inline __attribute__((always_inline)) int sub__temp330v(unsigned long long x, unsigned long long y, unsigned long long* __temp430v) {
  int __temp331v__=0;
  int __temp334v__=0;
  unsigned long long z=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  is_different__temp85v(x,y,&__temp331v__);
  lt__temp182v(x,y,&__temp334v__);
  if(__temp334v__){
  __temp_errcode=1;
  goto __temp_failure;
  }
  z=x-y;
  *__temp430v=z;
  
  __temp_failure:
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void print__temp359v(unsigned long long value) {
  const char* endl=0;
  endl=__temp348v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void cstr__temp408v(long long int value, const char** __temp431v) {
  const char* endl=0;
  const char* ret=0;
  endl=__temp348v;
  ret=__temp_all_errcodes[value];
  *__temp431v=ret;
}

static inline __attribute__((always_inline)) void main__temp412v() {
  int __temp415v=0;
  unsigned long long __temp416v=0;
  unsigned long long __temp417v=0;
  unsigned long long __temp418v__=0;
  unsigned long long __temp419v=0;
  unsigned long long __temp420v__=0;
  long long int __temp422v=0;
  const char* __temp423v__=0;
  int __temp_complain=0;
  print__temp346v(__temp413v);
  __temp416v=2;
  __temp417v=3;
  mul__temp134v(__temp416v,__temp417v,&__temp418v__);
  __temp419v=20;
  __temp_complain=sub__temp330v(__temp418v__,__temp419v,&__temp420v__);
  __temp415v=__temp_complain;
  print__temp359v(__temp420v__);
  __temp415v=__temp415v==0;
  __temp422v=__temp_complain;
  cstr__temp408v(__temp422v,&__temp423v__);
  print__temp346v(__temp423v__);
}

int main() {main__temp412v();return 0;}