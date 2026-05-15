#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp365v="\n";
static const char* __temp_all_errcodes[30] = {"noerr",
"error",
"division by zero ",
"modulo by zero ",
"id subtraction would yield a negative",
"cannot convert negative float to id",
"cannot convert negative int to id",
"iteration end",
"allocation failed",
"reallocation failed",
"cannot resize buffers with alloc; it promises no data reallocation",
"cannot resize an unallocated or freed buffer",
"out of bounds",
"can only define strings on contiguous buffers",
"string does not fit on buffer",
"character copy does not fit on buffer",
"string buffer out of memory",
"slice out of string bounds",
"user input was not an int",
"user input was not a nat",
"user input was not a float",
"invalid int conversion from empty string",
"invalid int conversion from string with only a sign",
"invalid integer int from non-number string",
"invalid nat conversion from empty string",
"invalid nat conversion from non-number string",
"invalid float conversion from empty string",
"invalid float conversion from string with only a sign",
"invalid float conversion from non-number string",
"invalid float conversion from string without a value after the dot"
};
int wooo__temp1222v(uint64_t* __temp1252v, uint64_t recursion_safety__to, uint64_t i) ;
static inline __attribute__((always_inline)) void range__temp435v(uint64_t to, uint64_t* __temp1243v, uint64_t* __temp1244v) {
  int __temp436v=0;
  uint64_t __temp437v=0;
  uint64_t _from=0;
  uint64_t __temp438v=0;
  uint64_t from=0;
  __temp437v=0;
  _from=__temp437v;
  __temp438v=_from;
  from=__temp438v;
  goto __temp_return;
  __temp_return:
  *__temp1243v=from;
  *__temp1244v=to;
}

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1245v) {
  int value=0;
  *__temp1245v=value;
}

static inline __attribute__((always_inline)) void not__temp35v(int __temp_anon0, int* __temp1246v) {
  int __temp36v__=0;
  false__temp10v(&__temp36v__);
  goto __temp_return;
  __temp_return:
  *__temp1246v=__temp36v__;
}

static inline __attribute__((always_inline)) void is_different__temp93v(uint64_t x, uint64_t y, int* __temp1247v) {
  int __temp94v=0;
  int __temp95v__=0;
  not__temp35v(__temp94v,&__temp95v__);
  goto __temp_return;
  __temp_return:
  *__temp1247v=__temp95v__;
}

static inline __attribute__((always_inline)) void ge__temp319v(uint64_t x, uint64_t y, char* __temp1248v) {
  int __temp320v__=0;
  char z=0;
  is_different__temp93v(x,y,&__temp320v__);
  z=x>=y;
  goto __temp_return;
  __temp_return:
  *__temp1248v=z;
}

static inline __attribute__((always_inline)) void add__temp170v(uint64_t x, uint64_t y, uint64_t* __temp1249v) {
  int __temp171v__=0;
  uint64_t z=0;
  is_different__temp93v(x,y,&__temp171v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1249v=z;
}

static inline __attribute__((always_inline)) int next__temp439v(uint64_t* __temp1250v, uint64_t r__to, uint64_t* __temp1251v) {
  uint64_t r__from=*__temp1250v;
  char __temp440v__=0;
  uint64_t ret=0;
  uint64_t __temp441v=0;
  uint64_t __temp442v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  ge__temp319v(r__from,r__to,&__temp440v__);
  if(__temp440v__){
  __temp_errcode=7;
  goto __temp_failure;
  }
  ret=r__from;
  __temp441v=1;
  add__temp170v(ret,__temp441v,&__temp442v__);
  r__from=__temp442v__;
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1250v=r__from;
  *__temp1251v=ret;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void void__temp23v() {
}

int wooo__temp1222v(uint64_t* __temp1252v, uint64_t recursion_safety__to, uint64_t i) {
  uint64_t recursion_safety__from=*__temp1252v;
  uint64_t __temp1237v__=0;
  char __temp1238v=0;
  uint64_t __temp1240v=0;
  uint64_t __temp1241v__=0;
  int __temp_errcode=0;
  int __temp_complain=0;
  __temp_errcode=next__temp439v(&recursion_safety__from,recursion_safety__to,&__temp1237v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  __temp1238v=0;
  if(__temp1238v){
  void__temp23v();
  goto __temp_return;
  }
  __temp1240v=1;
  add__temp170v(i,__temp1240v,&__temp1241v__);
  __temp_errcode=wooo__temp1222v(&recursion_safety__from,recursion_safety__to,__temp1241v__);
  if(__temp_errcode){
  goto __temp_failure;
  }
  goto __temp_return;
  
  __temp_failure:__temp_return:
  *__temp1252v=recursion_safety__from;
  
  return __temp_errcode;
}

static inline __attribute__((always_inline)) void cstr__temp1219v(int64_t value, const char** __temp1253v) {
  int __temp1220v=0;
  const char* endl=0;
  const char* ret=0;
  endl=__temp365v;
  ret=__temp_all_errcodes[value];
  goto __temp_return;
  __temp_return:
  *__temp1253v=ret;
}

static inline __attribute__((always_inline)) void print__temp363v(const char* value) {
  int __temp364v=0;
  const char* endl=0;
  endl=__temp365v;
  printf("%s%s",value,endl);
}

static inline __attribute__((always_inline)) void main__temp1226v() {
  uint64_t __temp1227v=0;
  uint64_t __temp1228v__from=0;
  uint64_t __temp1228v__to=0;
  uint64_t recursion_safety__from=0;
  uint64_t recursion_safety__to=0;
  char __temp1229v=0;
  uint64_t __temp1230v=0;
  char __temp1232v=0;
  int64_t __temp1233v=0;
  int64_t error=0;
  const char* __temp1234v__=0;
  int __temp_complain=0;
  __temp1227v=1000;
  range__temp435v(__temp1227v,&__temp1228v__from,&__temp1228v__to);
  recursion_safety__from=__temp1228v__from;
  recursion_safety__to=__temp1228v__to;
  __temp1230v=0;
  __temp_complain=wooo__temp1222v(&recursion_safety__from,recursion_safety__to,__temp1230v);
  __temp1229v=__temp_complain;
  __temp1229v=__temp1229v==0;
  __temp1233v=__temp_complain;
  __temp1232v=(__temp_complain==0);
  __temp_complain=0;
  error=__temp1233v;
  __temp1232v=__temp1232v==0;
  if(__temp1232v){
  cstr__temp1219v(error,&__temp1234v__);
  print__temp363v(__temp1234v__);
  }
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1226v();return 0;}