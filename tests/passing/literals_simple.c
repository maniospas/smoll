#include "std/extern/linux.h"
#include "std/extern/win.h"
#include "std/extern/mac.h"
#include "std/extern/extern.h"
int __temp_argc;
char** __temp_argv;
const char* const __temp364v="\n";
static const char* __temp_all_errcodes[29] = {"noerr",
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

static inline __attribute__((always_inline)) void false__temp10v(int* __temp1249v) {
  int value=0;
  *__temp1249v=value;
}

static inline __attribute__((always_inline)) void not__temp34v(int __temp_anon0, int* __temp1250v) {
  int __temp35v__=0;
  false__temp10v(&__temp35v__);
  goto __temp_return;
  __temp_return:
  *__temp1250v=__temp35v__;
}

static inline __attribute__((always_inline)) void is_different__temp92v(uint64_t x, uint64_t y, int* __temp1251v) {
  int __temp93v=0;
  int __temp94v__=0;
  not__temp34v(__temp93v,&__temp94v__);
  goto __temp_return;
  __temp_return:
  *__temp1251v=__temp94v__;
}

static inline __attribute__((always_inline)) void add__temp169v(uint64_t x, uint64_t y, uint64_t* __temp1252v) {
  int __temp170v__=0;
  uint64_t z=0;
  is_different__temp92v(x,y,&__temp170v__);
  z=x+y;
  goto __temp_return;
  __temp_return:
  *__temp1252v=z;
}

static inline __attribute__((always_inline)) void inc__temp1235v(uint64_t x, uint64_t* __temp1253v) {
  int __temp1236v=0;
  uint64_t __temp1239v=0;
  uint64_t __temp1240v__=0;
  __temp1239v=1;
  add__temp169v(x,__temp1239v,&__temp1240v__);
  goto __temp_return;
  __temp_return:
  *__temp1253v=__temp1240v__;
}

static inline __attribute__((always_inline)) void print__temp375v(uint64_t value) {
  int __temp376v=0;
  const char* endl=0;
  endl=__temp364v;
  printf("%llu%s",value,endl);
}

static inline __attribute__((always_inline)) void inc__temp1225v(uint64_t x, uint64_t* __temp1254v) {
  int __temp1226v=0;
  uint64_t __temp1228v=0;
  uint64_t __temp1229v__=0;
  __temp1228v=2;
  add__temp169v(x,__temp1228v,&__temp1229v__);
  goto __temp_return;
  __temp_return:
  *__temp1254v=__temp1229v__;
}

static inline __attribute__((always_inline)) void main__temp1241v() {
  uint64_t __temp1242v=0;
  uint64_t __temp1243v__=0;
  uint64_t __temp1245v=0;
  uint64_t __temp1247v__=0;
  __temp1242v=0;
  inc__temp1235v(__temp1242v,&__temp1243v__);
  print__temp375v(__temp1243v__);
  __temp1245v=0;
  inc__temp1225v(__temp1245v,&__temp1247v__);
  print__temp375v(__temp1247v__);
}

int main(int argc, char** argv) {__temp_argc = argc;__temp_argv = argv;main__temp1241v();return 0;}